// 函数: sub_14040bde0
// 地址: 0x14040bde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1)
int32_t* r11 = arg4

if (rsi.d s> 2)
    int64_t r10_1 = rsi << 2
    void* r15_2 = &(&data_143701ca0)[rsi]
    
    do
        int64_t rax_1 = sx.q(arg2.d)
        
        if (arg2.d s< rsi.d)
            int32_t r9_2 = *(r10_1 + (&data_143701ca0)[rax_1])
            int32_t rcx_2 = *(r10_1 + (&data_143701ca8)[rax_1])
            
            if (r9_2 u> arg3 || arg3 u>= rcx_2)
                int32_t rbx_7 = arg2.d
                int32_t rdi_2
                rdi_2.b = arg3 u>= rcx_2
                int32_t rdi_3 = neg.d(rdi_2)
                int32_t r8_1 = arg3 - (rcx_2 & rdi_3)
                void* rcx_4 = &(&data_143701ca0)[rax_1]
                int32_t r9_3
                
                do
                    int64_t rax_8 = *(rcx_4 - 8)
                    rcx_4 -= 8
                    arg2 = zx.q(arg2.d - 1)
                    r9_3 = *(r10_1 + rax_8)
                while (r9_3 u> r8_1)
                
                arg3 = r8_1 - r9_3
                *r11 = (rbx_7 - arg2.d + rdi_3) ^ rdi_3
            else
                arg3 -= r9_2
                *r11 = 0
        else
            int64_t r9 = *r15_2
            int64_t rdi_1 = rax_1 << 2
            int32_t rbx_1 = arg2.d
            int32_t rbp_1
            rbp_1.b = arg3 u>= *(rdi_1 + r9 + 4)
            int32_t rbp_2 = neg.d(rbp_1)
            int32_t r8 = arg3 - (rbp_2 & *(rdi_1 + r9 + 4))
            int32_t rbx_4
            
            if (*(r10_1 + r9) u<= r8)
                int32_t rcx_1 = *(rdi_1 + r9)
                
                if (rcx_1 u> r8)
                    void* rax_5 = rdi_1 + r9
                    
                    do
                        rcx_1 = *(rax_5 - 4)
                        rax_5 -= 4
                        arg2 = zx.q(arg2.d - 1)
                    while (rcx_1 u> r8)
                
                arg3 = r8 - rcx_1
                rbx_4 = (rbx_1 - arg2.d + rbp_2) ^ rbp_2
            else
                arg2 = zx.q(rsi.d)
                void* r9_1 = r15_2
                int32_t rcx
                
                do
                    int64_t rax_4 = *(r9_1 - 8)
                    r9_1 -= 8
                    arg2 = zx.q(arg2.d - 1)
                    rcx = *(r10_1 + rax_4)
                while (rcx u> r8)
                
                arg3 = r8 - rcx
                rbx_4 = (rbx_1 - arg2.d + rbp_2) ^ rbp_2
            
            *r11 = rbx_4
        
        rsi = zx.q(rsi.d - 1)
        r11 = &r11[1]
        r15_2 -= 8
        r10_1 -= 4
    while (rsi.d s> 2)

int32_t rcx_5 = ((arg2 << 1) + 1).d
int32_t r12
r12.b = arg3 u>= rcx_5
int32_t r12_1 = neg.d(r12)
int32_t r8_2 = arg3 - (r12_1 & rcx_5)
uint32_t r9_5 = (r8_2 + 1) u>> 1

if (r9_5 != 0)
    r8_2 += 1 - r9_5 * 2

int32_t r8_3 = neg.d(r8_2)
int32_t result = (r8_3 + r9_5) ^ r8_3
*r11 = (arg2.d - r9_5 + r12_1) ^ r12_1
r11[1] = result
return result
