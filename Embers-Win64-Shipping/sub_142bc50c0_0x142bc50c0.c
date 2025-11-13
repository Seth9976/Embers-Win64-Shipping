// 函数: sub_142bc50c0
// 地址: 0x142bc50c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *arg3
int32_t arg_18 = 0
int64_t* rax = sub_142b99860(rsi, 0x20, &arg_18)
int32_t rax_1 = arg_18

if (rax_1 != 0)
    return rax_1

if (&arg1[4] u<= arg2)
    rax[1].b = *arg1
    *(rax + 0xa) = zx.w(arg1[1]) << 8 | zx.w(arg1[2])
    char rcx_3 = arg1[3]
    *(rax + 9) = rcx_3
    void* rax_5 = zx.q(arg3[1].d) - arg3[0x1b] + &arg1[4]
    *(rax + 0xc) = 3
    rax[2] = rax_5
    char rdx_1 = rcx_3 & 1
    int32_t rax_6 = *(rax + 0xc)
    
    if (rdx_1 != 0)
        rax_6 = 5
    
    *(rax + 0xc) = rax_6
    
    if ((rcx_3 & 2) != 0)
        *(rax + 0xc) += 1
    
    uint32_t r10_1 = zx.d(rax[1].b)
    int32_t r11_1 = *(rax + 0xc)
    
    if (&arg1[4 + zx.q(r10_1 * r11_1)] u<= arg2)
        if (r10_1.b == 0)
            sub_142b99980(rsi, rax)
            return arg_18
        
        uint32_t rax_7 = zx.d(arg1[5])
        
        if (rdx_1 == 0)
            uint64_t rax_12 = zx.q((r10_1 - 1) * r11_1)
            rax[3].d = zx.d(arg1[4]) << 0x10 | rax_7
            *(rax + 0x1c) = zx.d(arg1[4 + rax_12]) << 0x10 | zx.d(arg1[rax_12 + 5])
        else
            void* r8_3 = &arg1[4 + zx.q((r10_1 - 1) * r11_1)]
            rax[3].d = (zx.d(arg1[6]) | (zx.d(arg1[4]) << 8 | rax_7) << 8) << 8 | zx.d(arg1[7])
            *(rax + 0x1c) = (zx.d(*(r8_3 + 2)) | (zx.d(*r8_3) << 8 | zx.d(*(r8_3 + 1))) << 8) << 8
                | zx.d(*(r8_3 + 3))
        
        *rax = 0
        *arg3[0x19] = rax
        arg3[0x19] = rax
        arg3[0x17].d += zx.d(rax[1].b)
        return arg_18

sub_142b99980(rsi, rax)
return 8
