// 函数: sub_1417fcce0
// 地址: 0x1417fcce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x18)
void* rsi_2 = &rbx[sx.q(*(arg1 + 0x20)) * 4]
uint32_t rax

if (rbx != rsi_2)
    while (true)
        if (**rbx == 0x2e)
            rax = sub_140a236f0(arg3, rbx, 1)
        
        if (**rbx != 0x2e || rax.b == 0)
            int16_t* rdx_1
            
            if (rbx[1].d == 0)
                rdx_1 = &data_142d40450
            else
                rdx_1 = *rbx
            
            int16_t* const rcx_1
            
            if (arg3[1].d == 0)
                rcx_1 = &data_142d40450
            else
                rcx_1 = *arg3
            
            rax = sub_140a54510(rcx_1, rdx_1)
            
            if (rax != 0)
                rbx = &rbx[4]
                
                if (rbx == rsi_2)
                    break
                
                continue
        
        if (rbx == -0x10)
            break
        
        int64_t rax_2 = sx.q(arg2[1].d)
        
        if (rax_2.d s> 0)
            void* buffer1_1 = rbx[2]
            int64_t r12_1 = rax_2
            int64_t r14_1 = 0
            void* buffer2 = *arg2
            rax_2 = sx.q(rbx[3].d) * 0x28
            int64_t arg_8 = rax_2
            
            do
                void* rdi_1 = rax_2 + buffer1_1
                void* buffer1 = buffer1_1
                
                if (buffer1_1 != rdi_1)
                    int32_t rbp_1 = *(buffer2 + 0x20)
                    
                    do
                        uint64_t count = sx.q(*(buffer1 + 0x20))
                        
                        if (count.d == rbp_1 && memcmp(buffer1, buffer2, count).d == 0)
                            rax_2.b = 1
                            goto label_1417fce13
                        
                        buffer1 += 0x28
                    while (buffer1 != rdi_1)
                    
                    rax_2 = arg_8
                
                r14_1 += 1
                buffer2 += 0x28
            while (r14_1 s< r12_1)
        
        rax_2.b = 0
    label_1417fce13:
        return rax_2

rax.b = 1
return rax
