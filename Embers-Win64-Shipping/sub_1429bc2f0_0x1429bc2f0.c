// 函数: sub_1429bc2f0
// 地址: 0x1429bc2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t* r10 = arg5
int64_t rbx = 0
uint64_t rsi = zx.q(*arg2)
int32_t r11 = 0
int32_t i_3 = 0
int64_t r14 = sx.q(arg3)
int64_t r13 = sx.q(arg4)
int32_t arg_10 = r10.d
uint64_t arg_8 = 0
int32_t rbp = r10.d
int32_t arg_18 = 0

if (r14 s> 1)
    int64_t rbp_1 = 1
    
    do
        if (rsi.d != zx.d(arg2[rbp_1]) || i_3 s>= 0xff)
            int64_t r8 = *(arg1 + (rsi << 3))
            int64_t r9 = *(arg1 + (r13 << 3))
            uint64_t rdx_1 = zx.q(r8.d) & 0x3f
            int64_t i_4 = sx.q(i_3)
            
            if ((zx.q(r9.d) & 0x3f) + 8 + rdx_1 u< i_4 * rdx_1)
                int32_t rax_5 = r8.d & 0x3f
                int64_t rbx_2 = rbx << rax_5.b | r8 u>> 6
                int32_t i = rax_5 + r11
                
                if (i s>= 8)
                    do
                        i -= 8
                        *r10 = (rbx_2 u>> i.b).b
                        r10 = &r10[1]
                    while (i s>= 8)
                    
                    arg5 = r10
                
                int32_t rax_9 = r9.d & 0x3f
                int32_t i_1 = rax_9 + i
                int64_t rbx_4 = rbx_2 << rax_9.b | r9 u>> 6
                
                if (i_1 s>= 8)
                    do
                        i_1 -= 8
                        *r10 = (rbx_4 u>> i_1.b).b
                        r10 = &r10[1]
                    while (i_1 s>= 8)
                    
                    arg5 = r10
                
                r11 = i_1 + 8
                rbx = rbx_4 << 8 | i_4
                arg_18 = r11
                arg_8 = rbx
                
                if (r11 s>= 8)
                    int32_t i_2
                    
                    do
                        i_2 = r11 - 8
                        r11 = i_2
                        *r10 = (rbx u>> i_2.b).b
                        r10 = &r10[1]
                    while (i_2 s>= 8)
                    
                    arg5 = r10
                    arg_18 = i_2
            else if (i_3 s>= 0)
                int32_t rdx_5 = r8.d & 0x3f
                
                do
                    r11 += rdx_5
                    i_3 -= 1
                    rbx = rbx << rdx_5.b | r8 u>> 6
                    arg_18 = r11
                    
                    if (r11 s>= 8)
                        int32_t j
                        
                        do
                            j = r11 - 8
                            r11 = j
                            *r10 = (rbx u>> j.b).b
                            r10 = &r10[1]
                        while (j s>= 8)
                        
                        arg5 = r10
                        arg_18 = j
                while (i_3 s>= 0)
                
                arg_8 = rbx
            
            i_3 = 0
        else
            i_3 += 1
        
        rsi = zx.q(arg2[rbp_1])
        rbp_1 += 1
    while (rbp_1 s< r14)
    
    rbp = arg_10

sub_1429bcc40(*(arg1 + (rsi << 3)), i_3, *(arg1 + (r13 << 3)), &arg_8, &arg_18, &arg5)
int32_t rdx_7 = arg_18
uint8_t* r9_3 = arg5

if (rdx_7 != 0)
    *r9_3 = (arg_8 << (8 - rdx_7.b)).b

return zx.q(rdx_7 + ((r9_3.d - rbp) << 3))
