// 函数: sub_1403e83f0
// 地址: 0x1403e83f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t rcx = sx.d(*(arg3 + 2))
int32_t i = 0
char* r8_1 = sx.q(sx.d(*arg2) * rcx) + *(arg3 + 8)

if (rcx s> 0)
    void* rcx_1 = arg1
    
    do
        uint16_t rax_4 = zx.w(*r8_1)
        i += 1
        r8_1 = &r8_1[1]
        rcx_1 += 2
        *(rcx_1 - 2) = rax_4 << 7
    while (i s< sx.d(*(arg3 + 2)))

void var_a8
void var_58
sub_1403e6130(&var_58, &var_a8, arg3, sx.d(*arg2))
int32_t rsi = sx.d(*(arg3 + 2))
int32_t rdx_1 = sx.d(*(arg3 + 4))
int16_t rax_6 = 0
int64_t r8_3 = sx.q(rsi - 1)

if (rsi - 1 s>= 0)
    void* r9_2 = &arg2[1 + r8_3]
    int64_t temp4_1
    
    do
        int32_t rax_8 = sx.d(*r9_2) << 0xa
        int16_t rdx_4 = ((zx.d(*(&var_a8 - arg2 + r9_2 - 1)) * sx.d(rax_6)) s>> 8).w
        
        if (rax_8 s> 0)
            rax_8 -= 0x66
        else if (rax_8 s< 0)
            rax_8 += 0x66
        
        r9_2 -= 1
        rax_6 = (rax_8 s>> 0x10).w * rdx_1.w + ((zx.d(rax_8.w) * rdx_1) s>> 0x10).w + rdx_4
        temp4_1 = r8_3
        r8_3 -= 1
        int16_t var_76[0xf]
        var_76[r8_3] = rax_6
    while (temp4_1 - 1 s>= 0)

void var_98
sub_1403e8bf0(&var_98, arg1, rsi)
int32_t i_1 = 0

if (0 s< *(arg3 + 2))
    int16_t* r9_3 = nullptr
    
    do
        int32_t r8_6 = sx.d(*(&var_98 + r9_3)) << 0x10
        int32_t r8_7
        
        if (r8_6 s> 0)
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(r8_6)
            
            if (0x18 != 0x1f - temp0_1)
                if (0x18 - (0x1f - temp0_1) s>= 0)
                    r8_6 = ror.d(r8_6, (0x18 - (0x1f - temp0_1)).b)
                else
                    r8_6 = rol.d(r8_6, (neg.d(0x18 - (0x1f - temp0_1))).b)
            
            int32_t rdx_6 = 0xb486
            
            if (((0x1f - temp0_1).b & 1) != 0)
                rdx_6 = 0x8000
            
            int32_t rdx_7 = rdx_6 s>> ((0x1f - temp0_1) s>> 1).b
            int32_t rcx_13 = sx.d((r8_6.w & 0x7f) * 0xd5)
            r8_7 = (rdx_7 s>> 0x10) * rcx_13 + ((zx.d(rdx_7.w) * rcx_13) s>> 0x10) + rdx_7
        else
            r8_7 = 0
        
        void var_78
        int32_t rax_20 =
            divs.dp.d(sx.q(sx.d(*(&var_78 + r9_3)) << 0xe), r8_7) + sx.d(*(r9_3 + arg1))
        
        if (rax_20 s> 0x7fff)
            rax_20 = 0x7fff
        else if (rax_20 s< 0)
            rax_20 = 0
        
        *(r9_3 + arg1) = rax_20.w
        i_1 += 1
        r9_3 = &r9_3[1]
    while (i_1 s< sx.d(*(arg3 + 2)))

int64_t result = sub_1403e8940(arg1, *(arg3 + 0x38), sx.d(*(arg3 + 2)))
__security_check_cookie(rax_1 ^ &var_c8)
return result
