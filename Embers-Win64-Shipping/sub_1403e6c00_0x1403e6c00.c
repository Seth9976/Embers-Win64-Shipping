// 函数: sub_1403e6c00
// 地址: 0x1403e6c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
char* r9 = arg2
int32_t* r14 = arg1
int64_t i_1 = 2
int64_t i

do
    int32_t r11_1 = 0x7fffffff
    
    for (int32_t j = 0; j s< 0xf; j += 1)
        int64_t j_1 = sx.q(j)
        int32_t rdi_1 = sx.d(*(&data_1436fc880 + (j_1 << 1)))
        int32_t rcx_1 = sx.d(*((j_1 << 1) + 0x1436fc882)) - rdi_1
        
        for (int32_t k = 0; k s< 5; )
            int32_t r8_1 = *r14
            int32_t rcx_6 = sx.d(k.w * 2 + 1)
                * sx.d(((zx.d(rcx_1.w) * 0x199a) s>> 0x10).w + (rcx_1 s>> 0x10).w * 0x199a) + rdi_1
            int32_t rax_7 = r8_1 - rcx_6
            
            if (rax_7 s<= 0)
                rax_7 = rcx_6 - r8_1
            
            if (rax_7 s>= r11_1)
                goto label_1403e6cb3
            
            r9[1] = k.b
            k += 1
            r11_1 = rax_7
            rbx = rcx_6
            *r9 = j.b
    
label_1403e6cb3:
    int32_t r8_2 = sx.d(*r9)
    r14 = &r14[1]
    r9 = &r9[3]
    char rdx_1 = (r8_2 s/ 3).b
    r9[-1] = rdx_1
    r8_2.b -= rdx_1 * 3
    r9[-3] = r8_2.b
    r14[-1] = rbx
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t result = arg1[1]
*arg1 -= result
return result
