// 函数: sub_14139b300
// 地址: 0x14139b300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result = (*(*arg1 + 0x38))(arg1, zx.q(arg3))

if (result != 0)
    *result = *(arg4 + 0x30)
    result[1].d = *(arg4 + 0x40)
    *(result + 0x14) = *(arg4 + 0x44)
    *(result + 0x18) = *(arg4 + 0x48)
    *(result + 0x1c) = *(arg4 + 0x4c)
    result[2].d = *(arg4 + 0x50)
    *(result + 0x24) = *(arg4 + 0x54)
    *(result + 0x25) = *(arg4 + 0x55)
    *(result + 0x26) = *(arg4 + 0x56)
    *(result + 0x28) = *(arg4 + 0x58)
    *(result + 0x2c) = *(arg4 + 0x5c)
    result[3].d = *(arg4 + 0x60)
    *(result + 0x34) = *(arg4 + 0x64)
    *(result + 0x38) = *(arg4 + 0x68)
    *(result + 0x39) = *(arg4 + 0x69)
    result[4].q = *(arg4 + 0x70)
    *(result + 0x48) = *(arg4 + 0x78)
    *(result + 0x49) = *(arg4 + 0x79)
    *(result + 0x4a) = *(arg4 + 0x7a)
    int64_t rdi_1 = sx.q(*(arg2 + 0x168))
    void* var_20_1 = &result[5]
    int32_t rax_18 = (rdi_1 + 1).d
    *(arg2 + 0x168) = rax_18
    
    if (rax_18 s> *(arg2 + 0x16c))
        sub_14119a720(arg2 + 0x160, rdi_1.d)
    
    result = *(arg2 + 0x160)
    int64_t rcx_3 = rdi_1 * 3
    *(result + (rcx_3 << 3)) = arg4.o
    *(result + (rcx_3 << 3) + 0x10) = 1.q

return result
