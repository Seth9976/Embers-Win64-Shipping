// 函数: sub_142c4c220
// 地址: 0x142c4c220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = GetProcAddress(*arg1, "ADL2_Main_Control_Create")
HMODULE hModule = *arg1
arg1[2] = rax
int64_t rax_1 = GetProcAddress(hModule, "ADL2_Main_Control_Destroy")
HMODULE hModule_1 = *arg1
arg1[3] = rax_1
int64_t rax_2 = GetProcAddress(hModule_1, "ADL2_Adapter_NumberOfAdapters_Get")
HMODULE hModule_2 = *arg1
arg1[4] = rax_2
int64_t rax_3 = GetProcAddress(hModule_2, "ADL2_Adapter_AdapterInfoX2_Get")
HMODULE hModule_3 = *arg1
arg1[5] = rax_3
int64_t rax_4 = GetProcAddress(hModule_3, "ADL2_Adapter_MemoryInfo_Get")
HMODULE hModule_4 = *arg1
arg1[6] = rax_4
int64_t rax_5 = GetProcAddress(hModule_4, "ADL2_Adapter_Graphic_Core_Info_Get")
HMODULE hModule_5 = *arg1
arg1[7] = rax_5
int64_t rax_6 = GetProcAddress(hModule_5, "ADL2_GcnAsicInfo_Get")
HMODULE hModule_6 = *arg1
arg1[8] = rax_6
int64_t rax_7 = GetProcAddress(hModule_6, "ADL_Adapter_ObservedGameClockInfo_Get")
HMODULE hModule_7 = *arg1
arg1[9] = rax_7
int64_t rax_8 = GetProcAddress(hModule_7, "ADL2_Overdrive_Caps")
HMODULE hModule_8 = *arg1
arg1[0xa] = rax_8
int64_t rax_9 = GetProcAddress(hModule_8, "ADL2_Overdrive6_Capabilities_Get")
HMODULE hModule_9 = *arg1
arg1[0xb] = rax_9
int64_t rax_10 = GetProcAddress(hModule_9, "ADL2_Overdrive6_StateInfo_Get")
HMODULE hModule_10 = *arg1
arg1[0xc] = rax_10
int64_t rax_11 = GetProcAddress(hModule_10, "ADL2_OverdriveN_Capabilities_Get")
HMODULE hModule_11 = *arg1
arg1[0xd] = rax_11
int64_t rax_12 = GetProcAddress(hModule_11, "ADL2_OverdriveN_SystemClocks_Get")
HMODULE hModule_12 = *arg1
arg1[0xe] = rax_12
int64_t rax_13 = GetProcAddress(hModule_12, "ADL2_OverdriveN_MemoryClocks_Get")
HMODULE hModule_13 = *arg1
arg1[0xf] = rax_13
int64_t rax_14 = GetProcAddress(hModule_13, "ADL2_OverdriveN_PowerLimit_Get")
HMODULE hModule_14 = *arg1
arg1[0x10] = rax_14
int64_t rax_15 = GetProcAddress(hModule_14, "ADL2_OverdriveN_CapabilitiesX2_Get")
HMODULE hModule_15 = *arg1
arg1[0x11] = rax_15
int64_t rax_16 = GetProcAddress(hModule_15, "ADL2_OverdriveN_SystemClocksX2_Get")
HMODULE hModule_16 = *arg1
arg1[0x12] = rax_16
int64_t rax_17 = GetProcAddress(hModule_16, "ADL2_OverdriveN_MemoryClocksX2_Get")
HMODULE hModule_17 = *arg1
arg1[0x13] = rax_17
int64_t rax_18 = GetProcAddress(hModule_17, "ADL2_Overdrive8_Init_Setting_Get")
HMODULE hModule_18 = *arg1
arg1[0x14] = rax_18
arg1[0x15] = GetProcAddress(hModule_18, "ADL2_Graphics_Versions_Get")
int64_t rax_20 = GetProcAddress(*arg1, "ADL2_Graphics_VersionsX2_Get")
HMODULE hModule_19 = *arg1
arg1[0x16] = rax_20
int64_t rax_21 = GetProcAddress(hModule_19, "ADL2_Display_DisplayMapConfig_Get")
HMODULE hModule_20 = *arg1
arg1[0x17] = rax_21
int64_t rax_22 = GetProcAddress(hModule_20, "ADL2_Display_SLSMapIndex_Get")
HMODULE hModule_21 = *arg1
arg1[0x18] = rax_22
int64_t rax_23 = GetProcAddress(hModule_21, "ADL2_Display_SLSMapConfig_Get")
HMODULE hModule_22 = *arg1
arg1[0x19] = rax_23
int64_t rax_24 = GetProcAddress(hModule_22, "ADL2_Display_Modes_Get")
HMODULE hModule_23 = *arg1
arg1[0x1a] = rax_24
int64_t rax_25 = GetProcAddress(hModule_23, "ADL2_Display_SourceContentAttribute_Get")
HMODULE hModule_24 = *arg1
arg1[0x1b] = rax_25
int64_t rax_26 = GetProcAddress(hModule_24, "ADL2_Display_SourceContentAttribute_Set")
HMODULE hModule_25 = *arg1
arg1[0x1c] = rax_26
int64_t rax_27 = GetProcAddress(hModule_25, "ADL2_Display_DDCInfo2_Get")
HMODULE hModule_26 = *arg1
arg1[0x1d] = rax_27
int64_t rax_28 = GetProcAddress(hModule_26, "ADL2_Display_DisplayInfo_Get")
HMODULE hModule_27 = *arg1
arg1[0x1e] = rax_28
int64_t rax_29 = GetProcAddress(hModule_27, "ADL2_Display_FreeSync_Cap")
bool cond:0 = arg1[2] == 0
arg1[0x1f] = rax_29

if (not(cond:0) && arg1[3] != 0 && arg1[0x15] != 0 && arg1[4] != 0 && arg1[5] != 0 && arg1[6] != 0
        && arg1[0x17] != 0 && arg1[0x18] != 0 && arg1[0x1a] != 0)
    return 0

return 5
