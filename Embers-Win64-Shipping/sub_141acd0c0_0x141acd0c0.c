// 函数: sub_141acd0c0
// 地址: 0x141acd0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg2 + 0xc)
int64_t* rbx = arg3
int64_t result = sub_140b5b8a0(*(arg2 + 8), 0xa)
arg3.b = rdi == 0
int64_t rcx_1

if ((arg3.b & result.b) != 0)
    rcx_1 = *(sub_142468460() + 0x18)

if ((arg3.b & result.b) == 0 || *(arg2 + 0x1c) != rcx_1)
    result.b = 0
else
    void** var_38
    sub_141e12130(&var_38)
    sub_140ca6840(sub_142468460(), rbx, &var_38, 0)
    int64_t var_30
    *(arg1 + 8) = var_30
    int64_t var_18
    *(arg1 + 0x20) = var_18
    int64_t var_10
    *(arg1 + 0x28) = var_10
    result.b = 1
    int128_t var_28
    *(arg1 + 0x10) = var_28

return result
