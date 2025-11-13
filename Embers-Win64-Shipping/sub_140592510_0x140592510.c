// 函数: sub_140592510
// 地址: 0x140592510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t* r10 = arg6
*arg5 = arg3
*arg8 = r10
int16_t* rax = *arg5

if (rax != arg4)
    while (r10 != arg7)
        uint32_t r9 = zx.d(*rax)
        uint64_t rax_1
        uint8_t r11_1
        
        if (r9 u< 0x80)
            r11_1 = r9.b
            rax_1 = 0
        else if (r9 u>= 0x800)
            rax_1 = 2
            r11_1 = (r9 u>> 0xc).b | 0xe0
        else
            rax_1 = 1
            r11_1 = (r9 u>> 6).b | 0xc0
        
        if (*arg2 == 0)
            *arg2 = 1
            r10 = *arg8
        
        if (arg7 - r10 s< zx.q((rax_1 + 1).d))
            break
        
        *arg5 += 2
        **arg8 = r11_1
        *arg8 += 1
        r10 = *arg8
        
        if (rax_1.d != 0)
            int32_t r8_3 = (rax_1 * 3).d * 2
            
            do
                r8_3 -= 6
                rax_1 = zx.q(rax_1.d - 1)
                *r10 = ((r9 u>> r8_3.b).b & 0x3f) | 0x80
                r10 = *arg8 + 1
                *arg8 = r10
            while (rax_1.d s> 0)
        
        rax = *arg5
        
        if (rax == arg4)
            break

int32_t r14
r14.b = arg3 == *arg5
return zx.q(r14)
