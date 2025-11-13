// 函数: sub_1417b0390
// 地址: 0x1417b0390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1 + 0x118
void* arg_8 = rax
int64_t* i = arg1 + 0x18
int16_t r13 = 0
*arg2 = 0
arg2[1] = 0

for (; i != rax; i = &i[4])
    int64_t* rbx_1 = *i
    int16_t rbp_1 = 0
    void* r15_3 = &rbx_1[sx.q(i[1].d) * 2]
    
    if (rbx_1 != r15_3)
        do
            if (*rbx_1 != 0)
                int64_t r14_1 = sx.q(arg2[1].d)
                int32_t rax_2 = (r14_1 + 1).d
                arg2[1].d = rax_2
                
                if (rax_2 s> *(arg2 + 0xc))
                    sub_140594770(arg2)
                
                *(*arg2 + (r14_1 << 1)) = rbp_1 << 3 | (r13 & 7)
            
            rbp_1 += 1
            rbx_1 = &rbx_1[2]
        while (rbx_1 != r15_3)
        
        rax = arg_8
    
    r13 += 1

return arg2
