// 函数: sub_142440990
// 地址: 0x142440990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)

if (arg1[4].b != 0)
    void* r10_1 = *(*arg1 + (rbp << 3))
    
    if (r10_1 != 0)
        int32_t r9_1 = 0
        int32_t i_2 = arg1[3].d
        int32_t i = i_2
        int64_t r14_1 = arg1[2]
        
        if (i_2 s> 0)
            do
                int32_t rcx_1 = i & 0x80000001
                
                if (rcx_1 s< 0)
                    rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(i)
                int32_t i_1 = (temp3_1 - temp2_1) s>> 1
                i = i_1
                int32_t rax_5 = i_1 + r9_1
                int32_t r11_1 = rax_5 + rcx_1
                void* rdx_1 = *(r14_1 + sx.q(rax_5) * 0x10)
                
                if (rdx_1 == 0)
                    rax_5.b = 0
                else
                    rax_5 = *(rdx_1 + 0xb4)
                    int32_t temp4_1 = *(r10_1 + 0xb4)
                    
                    if (rax_5 != temp4_1)
                        rax_5.b = rax_5 s< temp4_1
                    else
                        rax_5.b = rdx_1 u< r10_1
                
                if (rax_5.b != 0)
                    r9_1 = r11_1
            while (i s> 0)
        
        if (r9_1 s< i_2)
            int64_t* r11_4 = (sx.q(r9_1) << 4) + r14_1
            void* rax_6 = *r11_4
            
            if (rax_6 != 0)
                int32_t rcx_6 = *(r10_1 + 0xb4)
                int32_t temp1_1 = *(rax_6 + 0xb4)
                
                if (rcx_6 != temp1_1)
                    rax_6.b = rcx_6 s< temp1_1
                else
                    rax_6.b = r10_1 u< rax_6
                
                if (rax_6.b == 0 && r9_1 != 0xffffffff)
                    int32_t rax_8 = i_2 - r9_1
                    
                    if (rax_8 != 1)
                        memmove(r11_4, (sx.q(r9_1 + 1) << 4) + r14_1, (rax_8 - 1) << 4)
                        i_2 = arg1[3].d
                    
                    arg1[3].d = i_2 - 1
                    sub_1405a5010(&arg1[2])

int32_t rcx_9 = arg1[1].d
int32_t rax_13 = rcx_9 - rbp.d

if (rax_13 == 1)
    arg1[1].d = rcx_9 - 1
    return rcx_9 - 1

int64_t r9_2 = *arg1
int64_t result = memmove(r9_2 + (rbp << 3), r9_2 + (sx.q((rbp + 1).d) << 3), (rax_13 - 1) << 3)
arg1[1].d -= 1
return result
