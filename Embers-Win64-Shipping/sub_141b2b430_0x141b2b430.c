// 函数: sub_141b2b430
// 地址: 0x141b2b430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx = zx.d(*(arg1 + 0x5c))
void arg_8
void* rcx = &arg_8
int32_t rdx_1

if (rdx == 0)
    rdx_1 = 0
else
    if (rdx != 1)
        int64_t rcx_1 = *sub_141b222a0(rcx, 1)
        *(arg2 + 0x10) = 0xf9b
        *(arg2 + 0xe8) = rcx_1
        *(arg2 + 0x12) = 1
        return 0xf9b
    
    rdx_1 = 2

int64_t* result = sub_141b222a0(rcx, rdx_1)
*(arg2 + 0xe8) = *result
*(arg2 + 0x12) = 1
return result
