// 函数: sub_142a1c6d0
// 地址: 0x142a1c6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg9
int64_t rbp = arg1 - 3
int64_t rdi = sx.q(arg8)
int64_t r15 = arg4
int64_t rbx = arg3

if (result s> 0)
    uint64_t r14_1 = zx.q(result)
    result = 0
    uint64_t i
    
    do
        int32_t r11_1 = arg6
        char* r10_1 = nullptr
        
        if (rdi s> 0)
            do
                int64_t rcx = sx.q(r11_1)
                char* r9_2 = (rcx s>> 4) + rbp
                int16_t* rdx_1 = (zx.q(rcx.d) & 0xf) * 0x10 + arg5
                int32_t r8_6 = zx.d(r9_2[7]) * sx.d(rdx_1[7]) + zx.d(r9_2[6]) * sx.d(rdx_1[6])
                    + zx.d(r9_2[5]) * sx.d(rdx_1[5]) + zx.d(r9_2[4]) * sx.d(rdx_1[4])
                    + zx.d(r9_2[3]) * sx.d(rdx_1[3]) + zx.d(r9_2[2]) * sx.d(rdx_1[2])
                int32_t rax_10 = (sx.d(*rdx_1) * zx.d(*r9_2) + r8_6 + sx.d(rdx_1[1]) * zx.d(r9_2[1])
                    + 0x40) s>> 7
                
                if (rax_10 s> 0xff)
                    rax_10 = 0xff
                else if (rax_10 s< 0)
                    rax_10 = 0
                
                r10_1[rbx] = rax_10.b
                r11_1 += arg7
                r10_1 = &r10_1[1]
            while (r10_1 s< rdi)
            
            r15 = arg4
            result = 0
        
        rbp += arg2
        rbx += r15
        i = r14_1
        r14_1 -= 1
    while (i != 1)

return result
