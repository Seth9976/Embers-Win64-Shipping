// 函数: sub_1423f3030
// 地址: 0x1423f3030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t rax = sx.q(*(arg1 + 0x798))
performanceCount.d = rax.d
int64_t r13 = rax

if (rax.d s> 0)
    int64_t* r14_1 = nullptr
    
    while (true)
        int64_t rax_1 = *(arg1 + 0x790)
        int16_t* const r8_1
        
        if (*(r14_1 + rax_1 + 8) == 0)
            r8_1 = &data_142d40450
        else
            r8_1 = *(r14_1 + rax_1)
        
        sub_140b44040(0, u"Cmd: %s", r8_1)
        int32_t rbx_1 = 0
        void* rcx_7
        int64_t rdx_2
        int64_t rsi_1
        int16_t* const r15_1
        
        while (true)
            if (rbx_1 s>= 0 && rbx_1 s< *(arg1 + 0xc40))
                int64_t rdi_1 = sx.q(rbx_1)
                char* rcx_1 = *(*(arg1 + 0xc38) + (rdi_1 << 3))
                
                if (*rcx_1 == 6)
                    rbx_1 += 1
                    continue
                else
                    void* rcx_2 = *(rcx_1 + 0x218)
                    
                    if (rcx_2 == 0)
                        rbx_1 += 1
                        continue
                    else if (sub_142029870(rcx_2) == 0)
                        rbx_1 += 1
                        continue
                
                int64_t* rax_5 = sub_142029870(*(*(*(arg1 + 0xc38) + (rdi_1 << 3)) + 0x218))
                
                if (rax_5 != 0)
                    int64_t rcx_5 = *(arg1 + 0x790)
                    
                    if (*(r14_1 + rcx_5 + 8) == 0)
                        r15_1 = &data_142d40450
                    else
                        r15_1 = *(r14_1 + rcx_5)
                    
                    rsi_1 = rax_5[5]
                    sub_140b19e60()
                    int64_t rdx_1 = *rax_5
                    rcx_7 = &rax_5[5]
                    rdx_2 = (*(rdx_1 + 0x150))(rax_5, rdx_1)
                    break
            
            int64_t rax_7 = *(arg1 + 0x790)
            
            if (*(r14_1 + rax_7 + 8) == 0)
                r15_1 = &data_142d40450
            else
                r15_1 = *(r14_1 + rax_7)
            
            int64_t rbx_2 = data_143f5e920
            rsi_1 = *(arg1 + 0x28)
            sub_140b19e60()
            rcx_7 = arg1 + 0x28
            rdx_2 = rbx_2
            break
        
        (*(rsi_1 + 8))(rcx_7, rdx_2, r15_1, &data_1439a8bd0)
        r14_1 = &r14_1[2]
        int64_t temp0_1 = r13
        r13 -= 1
        
        if (temp0_1 == 1)
            break

int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
sub_142218a10()
return sub_1406a4a20(arg1 + 0x790, 0, performanceCount.d, 1) __tailcall
