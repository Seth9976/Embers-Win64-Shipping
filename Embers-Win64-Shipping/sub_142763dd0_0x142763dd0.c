// 函数: sub_142763dd0
// 地址: 0x142763dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0
int32_t i = 0

if (*(arg1 + 0x58) s> 0)
    int64_t r14_1 = 0
    int64_t r15_1 = 0
    
    do
        uint64_t* rbx_2 = *(arg1 + 0x60) + r15_1
        
        if (rbx_2[1].d s> 0)
            void* rcx = *(arg1 + 0x50)
            int64_t r13_1 = sx.q(i) * 0x70
            int64_t* r12_1 = *(r14_1 + rcx + 0x20)
            int32_t* rdi_1 = *(r14_1 + rcx + 0x30)
            EnterCriticalSection(rcx + 0x48 + r13_1)
            uint64_t rdx_1 = *rbx_2
            int64_t r8_1 = 0
            int64_t r9_1 = sx.q(rbx_2[1].d) << 2
            uint64_t r9_2 = r9_1 u>> 2
            
            if (rdx_1 u> r9_1 + rdx_1)
                r9_2 = 0
            
            if (r9_2 != 0)
                int64_t r10_1 = *r12_1
                
                do
                    int64_t rcx_3 = sx.q(*rdi_1)
                    rdx_1 += 4
                    r8_1 += 1
                    *rdi_1 = (rcx_3 + 1).d
                    *(r10_1 + (rcx_3 << 2)) = *(rdx_1 - 4)
                while (r8_1 != r9_2)
            
            LeaveCriticalSection(*(arg1 + 0x50) + 0x48 + r13_1)
            int32_t rax_5 = *(rbx_2 + 0xc)
            rbx_2[1].d = 0
            
            if (rax_5 s< 0 && rax_5 != 0)
                sub_1405dadb0(rbx_2, 0)
        
        result = *(arg1 + 0x50)
        int32_t* rdx_2 = *(result + r14_1 + 0x38)
        int32_t rcx_8
        
        if (*(arg1 + 0xa0) == 0)
            rcx_8 = rbx_2[2].d
            
            if (*rdx_2 s>= rcx_8)
                rcx_8 = *rdx_2
        else
            while (true)
                int32_t rax_6 = *rdx_2
                rcx_8 = rbx_2[2].d
                
                if (rax_6 s>= rcx_8)
                    break
                
                bool z_1
                
                if (rax_6 == *rdx_2)
                    *rdx_2 = rcx_8
                    z_1 = true
                else
                    *rdx_2
                    z_1 = false
                
                if (z_1)
                    rcx_8 = rbx_2[2].d
                    break
            
            result = zx.q(*rdx_2)
            
            if (result.d s>= rcx_8)
                rcx_8 = result.d
        
        i += 1
        *rdx_2 = rcx_8
        r15_1 += 0x18
        r14_1 += 0x70
    while (i s< *(arg1 + 0x58))

return result
