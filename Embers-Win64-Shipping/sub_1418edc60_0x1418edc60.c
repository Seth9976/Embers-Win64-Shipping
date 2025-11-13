// 函数: sub_1418edc60
// 地址: 0x1418edc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi_1 = zx.q(arg2) * 0x58 + *(arg1 + 0x98)
*((zx.q(arg3) << 6) + *rdi_1 + 0x38) = arg4 + 0x20
int64_t* result = sub_1405d16e0(rdi_1[4] + (sx.q(arg3) << 3), arg4)
char rdx_4

if (data_1439c7a08 s> 1)
    rdx_4 = 1
else
    result = rdi_1[6]
    uint64_t rcx_1 = zx.q(arg3) * 3
    int32_t r8 = *(arg4 + 0x28)
    rdx_4 = 0
    
    if (*(result + (rcx_1 << 2)) != r8)
        *(result + (rcx_1 << 2)) = r8
        rdx_4 = 1
    
    rdi_1[0xa].b |= rdx_4

*(arg1 + 0x90) |= rdx_4
*(arg1 + 0xc0) |= rdx_4
return result
