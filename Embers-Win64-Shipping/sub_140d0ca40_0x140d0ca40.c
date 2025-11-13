// 函数: sub_140d0ca40
// 地址: 0x140d0ca40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg3
int32_t rbx = arg2
int64_t* result = sub_140cfb1f0(arg1, arg2, arg3)

if (i != 0)
    int32_t rsi_1 = rol.d(1, rbx.b)
    
    do
        int64_t* r10_1 = arg1[1]
        
        if (rbx s>= 0 && rbx s< r10_1[5].d)
            void* rax = r10_1[4]
            void* rcx_1 = &r10_1[2]
            
            if (rax != 0)
                rcx_1 = rax
            
            int32_t rax_1 = rbx
            
            if (rbx s< 0)
                rax_1 = rbx + 0x1f
            
            result = sx.q(rax_1 s>> 5)
            
            if ((*(rcx_1 + (result << 2)) & rsi_1) != 0)
                void* rdx = r10_1[8]
                void* r8 = &r10_1[7]
                int32_t r9_1 = arg1[4].d
                int64_t r11_1 = *r10_1
                int64_t r14_2 = sx.q(r9_1 * rbx) + r11_1
                int64_t rcx_3 = sx.q(*(sx.q(*(arg1 + 0x14)) + r14_2)) & sx.q(r10_1[9].d - 1)
                
                if (rdx != 0)
                    r8 = rdx
                
                void* rax_9 = r8 + (rcx_3 << 2)
                
                for (int32_t j = *(r8 + (rcx_3 << 2)); j != 0xffffffff; j = *rax_9)
                    int64_t rdx_1 = sx.q(arg1[2].d)
                    
                    if (j == rbx)
                        *rax_9 = *(rdx_1 + r14_2)
                        break
                    
                    rax_9 = sx.q(r9_1 * j) + r11_1 + rdx_1
                
                result = sub_140d0cb70(r10_1, arg1 + 0x1c, rbx, 1)
                i -= 1
        
        rbx += 1
        rsi_1 = rol.d(rsi_1, 1)
    while (i != 0)

return result
