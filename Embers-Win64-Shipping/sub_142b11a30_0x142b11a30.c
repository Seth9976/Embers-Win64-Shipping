// 函数: sub_142b11a30
// 地址: 0x142b11a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
uint64_t result
int16_t rcx_1
int32_t rdi_1

if (arg2 s< 0)
label_142b11a94:
    int16_t var_24_1 = arg2.w
    rcx_1 = 0x7fff
    uint16_t var_26_2 = (arg2 u>> 0x10).w
    rdi_1 = 3
label_142b11abc:
    int32_t rsi_1 = *(arg1 + 0x6c)
    int16_t var_28 = rcx_1 | sx.w(arg3) << 0xf
    int32_t rsi_2 = rsi_1 + rdi_1
    
    if (sub_142b11270(arg1, rsi_2) != 0)
        int32_t rax_8 = arg1[0xd].d - rsi_2
        *(arg1 + 0x6c) = rsi_2
        sub_142a8bca0(arg1[0xc] + (sx.q(rax_8) << 1), &var_28, rdi_1)
    
    result = zx.q(*(arg1 + 0x6c))
else
    if (arg2 s> 0x3fff)
        if (arg2 u> 0x3ffeffff)
            goto label_142b11a94
        
        int16_t var_26_1 = arg2.w
        rcx_1 = (arg2 s>> 0x10).w + 0x4000
        rdi_1 = 2
        goto label_142b11abc
    
    result = (*(*arg1 + 0x70))(arg1, zx.q(sx.d(arg3) << 0xf) | zx.q(arg2))
__security_check_cookie(rax_1 ^ &var_48)
return result
