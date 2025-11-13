// 函数: sub_1411dc520
// 地址: 0x1411dc520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0x7fffffff
int32_t r10 = -0x7fffffff
arg1[1] = 0x7fffffff
arg1[2] = 0x80000001
arg1[3] = 0x80000001

if (data_143e75950 s<= 0)
    *arg1 = *arg2
    arg1[1] = arg2[1]
    arg1[2] = arg2[2]
    arg1[3] = arg2[3]
else
    void* r8 = *arg3
    void* r11_2 = sx.q(arg3[1].d) * 0xe0 + r8
    
    if (r8 != r11_2)
        void* r9 = r8 + 0xc4
        int32_t rbx = arg1[1]
        int32_t rdi = -0x7fffffff
        
        do
            int32_t rdx = *(r9 - 8)
            r9 += 0xe0
            
            if (*arg1 s<= rdx)
                rdx = *arg1
            
            *arg1 = rdx
            int32_t rax_2 = *(r9 - 0xe4)
            
            if (rbx s<= rax_2)
                rax_2 = rbx
            
            rbx = rax_2
            arg1[1] = rax_2
            int32_t rax_3 = *(r9 - 0xe0)
            
            if (r10 s>= rax_3)
                rax_3 = r10
            
            r10 = rax_3
            arg1[2] = rax_3
            int32_t rax_4 = *(r9 - 0xdc)
            
            if (rdi s>= rax_4)
                rax_4 = rdi
            
            r8 += 0xe0
            arg1[3] = rax_4
            rdi = rax_4
        while (r8 != r11_2)

return arg1
