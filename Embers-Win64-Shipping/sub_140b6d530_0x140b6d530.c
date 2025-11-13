// 函数: sub_140b6d530
// 地址: 0x140b6d530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
uint64_t dwThreadAffinityMask = *(arg1 + 0x28)

if (dwThreadAffinityMask != -1)
    SetThreadAffinityMask(GetCurrentThread(), dwThreadAffinityMask)

int16_t* rcx_1

if (*(arg1 + 0x10) == 0)
    rcx_1 = &data_142d40450
else
    rcx_1 = *(arg1 + 8)

sub_140b72d00(rcx_1)
noreturn
