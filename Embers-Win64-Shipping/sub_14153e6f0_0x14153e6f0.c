// 函数: sub_14153e6f0
// 地址: 0x14153e6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r15 = *arg2
int64_t rbp = 0
void* result = &r15[arg2[1]]
uint64_t r12_1 = sx.q(arg2[1].d) << 2 u>> 2

if (r15 u> result)
    r12_1 = 0

if (r12_1 != 0)
    do
        int64_t rdi_1 = sx.q(*r15)
        void* const rcx_2
        
        if (arg4[1].d == *(arg4 + 0x34))
        label_14153e7a0:
            rcx_2 = nullptr
        else
            void* rcx = arg4[8]
            void* r8 = &arg4[7]
            
            if (rcx != 0)
                r8 = rcx
            
            int32_t rax_2 = *(r8 + (((sx.q(arg4[9].d) - 1) & rdi_1) << 2))
            
            if (rax_2 == 0xffffffff)
            label_14153e7a0_1:
                rcx_2 = nullptr
            else
                int64_t r8_1 = *arg4
                
                while (true)
                    int64_t rdx_3 = sx.q(rax_2) * 9
                    rcx_2 = r8_1 + (rdx_3 << 2)
                    
                    if (*(r8_1 + (rdx_3 << 2)) == rdi_1.d)
                        break
                    
                    rax_2 = *(rcx_2 + 0x1c)
                    
                    if (rax_2 == 0xffffffff)
                        goto label_14153e7a0_2
                
                if (rax_2 == 0xffffffff)
                label_14153e7a0_2:
                    rcx_2 = nullptr
        
        result = rcx_2 + 0x10
        void* r8_3 = arg3 - rcx_2
        int64_t rdx_4 = 0
        
        while (not(*(result - 0xc) f> *(r8_3 + result - 4)))
            if (*result f< *(r8_3 + result - 0x10))
                break
            
            rdx_4 += 1
            result += 4
            
            if (rdx_4 s>= 3)
                int64_t rbx_1 = sx.q(arg1[1].d)
                int32_t rax_3 = (rbx_1 + 1).d
                arg1[1].d = rax_3
                
                if (rax_3 s> *(arg1 + 0xc))
                    sub_1405a4cf0(arg1)
                
                result = *arg1
                *(result + (rbx_1 << 2)) = rdi_1.d
                break
        
        r15 = &r15[1]
        rbp += 1
    while (rbp != r12_1)

return result
