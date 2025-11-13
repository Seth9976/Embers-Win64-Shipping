// 函数: sub_1405b3ec0
// 地址: 0x1405b3ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xd] = arg3
sub_1405c5fa0(arg1, arg5)
int64_t result = sub_1405c9240(arg1, arg2)
int32_t var_44 = 0
void var_30

if (&var_30 != &arg1[7])
    uint128_t zmm0_1 = *(arg1 + 0x38)
    *(arg1 + 0x38) = zx.o(0)
    int64_t* rcx_1 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rcx_1 != 0)
        int32_t temp0_2 = *(rcx_1 + 0xc)
        *(rcx_1 + 0xc) -= 1
        
        if (temp0_2 == 1)
            (*(*rcx_1 + 8))(rcx_1, 1)

arg1[9] = 0xffffffff.q
arg1[0xa].d = 0
*(arg1 + 0x54) = 0x780
arg1[0xb].d = 0x438
*(arg1 + 0x5c) = 6
arg1[0xd] = 0
return result
