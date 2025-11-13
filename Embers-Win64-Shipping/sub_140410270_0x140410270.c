// 函数: sub_140410270
// 地址: 0x140410270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
uint64_t rax_2 = zx.q(sx.d(*(arg1 + 0x11cc)))
int32_t rdi_4 = ((rax_2.d * 0xe76e) s>> 0x10) - (rax_2 * 5).d + 0xc4a

if (*(arg1 + 0x11fc) == 2)
    rdi_4 += rdi_4 s>> 1

void var_88
sub_1403e8bf0(&var_88, arg3, *(arg1 + 0x1238))
char rax_6

if (*(arg1 + 0x1230) == 1)
    rax_6 = *(arg1 + 0x12cf)

void var_a8
int32_t r14

if (*(arg1 + 0x1230) != 1 || rax_6 s>= 4)
    r14 = 0
else
    r14 = 1
    sub_140410810(&var_a8, arg4, arg3, sx.w(rax_6), *(arg1 + 0x1238))
    void var_68
    sub_1403e8bf0(&var_68, &var_a8, *(arg1 + 0x1238))
    int32_t r8_3 = sx.d(*(arg1 + 0x12cf))
    int32_t i_2 = *(arg1 + 0x1238)
    int16_t r8_5 = ((r8_3 * r8_3) << 0xb).w
    
    if (i_2 s> 0)
        int64_t rdx_3 = 0
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            uint32_t rax_8 = zx.d(*(&var_68 + rdx_3))
            rdx_3 += 2
            uint32_t rcx_3 = rax_8
            rax_8.w s>>= 0xf
            rax_8.w *= r8_5
            void var_8a
            *(&var_8a + rdx_3) =
                ((rcx_3 * sx.d(r8_5)) s>> 0x10).w + rax_8.w + (*(&var_8a + rdx_3) s>> 1)
            i = i_1
            i_1 -= 1
        while (i != 1)

sub_140410e20(arg1 + 0x12b8, arg3, *(arg1 + 0x1280), &var_88, rdi_4, *(arg1 + 0x1254), 
    sx.d(*(arg1 + 0x12cd)))
sub_1403e7cd0(arg2 + 0x20, arg3, *(arg1 + 0x1238))
int64_t result

if (r14 == 0)
    result = memcpy(arg2, arg2 + 0x20, *(arg1 + 0x1238) * 2)
else
    sub_140410810(&var_a8, arg4, arg3, sx.w(*(arg1 + 0x12cf)), *(arg1 + 0x1238))
    result = sub_1403e7cd0(arg2, &var_a8, *(arg1 + 0x1238))

__security_check_cookie(rax_1 ^ &var_e8)
return result
