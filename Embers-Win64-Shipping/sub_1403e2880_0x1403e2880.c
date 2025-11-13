// 函数: sub_1403e2880
// 地址: 0x1403e2880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_48
int64_t rax_1 = __security_cookie ^ &var_48
int32_t r14 = arg4
int64_t var_40 = arg3
int16_t* rbx = arg2
int32_t* r13 = arg1
int64_t r10_1 = sx.q(((zx.q(arg1[0x43]) << 1) + 8).d) * 2
int64_t rax_4 = r10_1 + 0xf

if (rax_4 u<= r10_1)
    rax_4 = 0xffffffffffffff0

int64_t rax_5 = rax_4 & 0xfffffffffffffff0
__chkstk(rax_5)
void var_68
*(&var_68 - rax_5 + 0x20) = *(arg1 + 0x18)
*(&var_68 - rax_5 + 0x28) = *(arg1 + 0x20)
int32_t r12 = arg1[0x44]
int64_t rax_27
int64_t rcx_13

while (true)
    int32_t rdi_1 = r13[0x43]
    
    if (r14 s< rdi_1)
        rdi_1 = r14
    
    var_48 = rdi_1
    sub_1403e36a0(r13, &var_68 - rax_5 + 0x30, arg3, rdi_1)
    int32_t r11_1 = 0
    int32_t rsi_2 = rdi_1 << 0x11
    
    if (rsi_2 s> 0)
        do
            void* r10_2 = &var_68 - rax_5 + 0x20 + (sx.q(r11_1) s>> 0x10 << 1)
            int64_t rcx_4 = sx.q((zx.q(r11_1.w) * 3).d << 2 s>> 0x10)
            int64_t r9_1 = rcx_4 << 3
            int64_t r8 = (0xb - rcx_4) << 3
            int32_t rax_16 = sx.d(*(r8 + &data_1436fcb40)) * sx.d(*(r10_2 + 0xe))
                + sx.d(*(r8 + 0x1436fcb42)) * sx.d(*(r10_2 + 0xc))
                + sx.d(*(r8 + 0x1436fcb44)) * sx.d(*(r10_2 + 0xa))
            int32_t rax_19 = rax_16 + sx.d(*(r8 + 0x1436fcb46)) * sx.d(*(r10_2 + 8))
                + sx.d(*(r9_1 + 0x1436fcb46)) * sx.d(*(r10_2 + 6))
                + sx.d(*(r9_1 + 0x1436fcb44)) * sx.d(*(r10_2 + 4))
            int32_t rax_24 = (((rax_19 + sx.d(*(r9_1 + 0x1436fcb42)) * sx.d(*(r10_2 + 2))
                + sx.d(*(r9_1 + &data_1436fcb40)) * sx.d(*r10_2)) s>> 0xe) + 1) s>> 1
            
            if (rax_24 s> 0x7fff)
                rax_24 = 0x7fff
            else if (rax_24 s< 0xffff8000)
                rax_24 = -0x8000
            
            r11_1 += r12
            *rbx = rax_24.w
            rbx = &rbx[1]
        while (r11_1 s< rsi_2)
        
        rdi_1 = var_48
        r13 = arg1
    
    r14 -= rdi_1
    arg3 = var_40 + (sx.q(rdi_1) << 1)
    rcx_13 = sx.q(rdi_1 * 2)
    var_40 = arg3
    rax_27 = *(&var_68 - rax_5 + 0x20 + (rcx_13 << 1))
    
    if (r14 s<= 0)
        break
    
    *(&var_68 - rax_5 + 0x20) = rax_27
    *(&var_68 - rax_5 + 0x28) = *(&var_68 - rax_5 + 0x20 + (rcx_13 << 1) + 8)

*(r13 + 0x18) = rax_27
int64_t result = *(&var_68 - rax_5 + 0x20 + (rcx_13 << 1) + 8)
*(r13 + 0x20) = result
__security_check_cookie(rax_1 ^ &var_48)
return result
