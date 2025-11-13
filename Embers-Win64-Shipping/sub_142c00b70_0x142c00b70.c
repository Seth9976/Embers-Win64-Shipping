// 函数: sub_142c00b70
// 地址: 0x142c00b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* rax_2 = *(arg1 + 0x40)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q((*(rax_2 + 0x148))(arg5, *(arg1 + 0x48), arg6, *(rax_2 + 0x38)))
*arg4 = (temp3 - temp2) s>> 1
int32_t* rax_7 = sub_142bff860(arg2 + 0x50)
int128_t* const r8 = &data_14369a5d0

if (rax_7[6] u>= 8)
    r8 = *(rax_7 + 0x10)

int32_t rax_21

if (((((zx.d(*r8) << 8) + zx.d(*(r8 + 1))) << 8) + zx.d(*(r8 + 2))) << 8 == neg.d(zx.d(*(r8 + 3))))
    int128_t var_78 = zx.o(0)
    
    if (sub_142bfe670(sub_142bffd60(arg2 + 0x38), arg3, &var_78) == 0)
        int64_t rdx_9 = *(arg1 + 0x48)
        int64_t var_68
        __builtin_memset(&var_68, 0, 0x30)
        void* rax_26 = *(arg1 + 0x40)
        
        if ((*(rax_26 + 0x120))(arg1, rdx_9, &var_68, *(rax_26 + 0x10)) != 0)
            rax_21 = var_68.d
        else
            rax_21 = int.d(_mm_cvtepi32_pd(zx.q(*(arg1 + 0x24))) f* 0.80000000000000004)
    else
        rax_21 = sub_142bfd700(arg1, sub_142bff540(sub_142c001a0(arg2 + 0x20), arg3) + var_78:4.w)
else
    int16_t rax_11 = sub_142c003c0(r8, arg3)
    void* rcx_9 = *(arg1 + 0x18)
    int64_t rsi_1 = sx.q(*(arg1 + 0x24))
    uint32_t r8_1 = *(rcx_9 + 0x2c)
    
    if (r8_1 == 0)
        r8_1 = sub_142bf7870(rcx_9)
    
    int64_t rcx_11 = rsi_1 * sx.q(rax_11)
    int32_t temp5_1
    int32_t temp6_1
    temp5_1:temp6_1 = sx.q(r8_1)
    int32_t rax_17 = (temp6_1 - temp5_1) s>> 1
    
    if (rcx_11 s< 0)
        rax_17 = neg.d(rax_17)
    
    rax_21 = (divs.dp.q(sx.o(sx.q(rax_17) + rcx_11), sx.q(r8_1))).d

*arg7 = rax_21
__security_check_cookie(rax_1 ^ &var_98)
return 1
