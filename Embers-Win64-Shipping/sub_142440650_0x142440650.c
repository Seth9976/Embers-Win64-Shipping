// 函数: sub_142440650
// 地址: 0x142440650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
rdi.b = 0
int64_t* r10 = arg1

if (arg2 == 0)
    return 0

uint32_t r15 = 0
uint32_t result

if (arg1[4].b == 0)
    int64_t rcx_10 = sx.q(arg1[1].d)
    
    if (rcx_10.d != 0)
        int32_t rdi_1 = 0
        int32_t r12_1 = 0
        int64_t rbx_2 = 0
        int64_t r13
        r13.b = **r10 != arg2
        
        do
            int64_t r9_2 = sx.q(rdi_1)
            rbx_2 += 1
            rdi_1 += 1
            
            if (rbx_2 s< rcx_10)
                int64_t rcx_11 = *r10 + (rbx_2 << 3)
                
                do
                    int32_t rax_14
                    rax_14.b = *rcx_11 != arg2
                    
                    if (zx.d(r13.b) != rax_14)
                        break
                    
                    rdi_1 += 1
                    rbx_2 += 1
                    rcx_11 += 8
                while (rbx_2 s< rcx_10)
            
            int32_t r14_2 = rdi_1 - r9_2.d
            
            if (r13.b != 0)
                if (r12_1 != r9_2.d)
                    int64_t rcx_12 = *r10
                    memmove(rcx_12 + (sx.q(r12_1) << 3), rcx_12 + (r9_2 << 3), r14_2 << 3)
                    r10 = arg1
                
                r12_1 += r14_2
            
            r13.b ^= 1
        while (rbx_2 s< rcx_10)
        
        r10[1].d = r12_1
        r15 = rcx_10.d - r12_1
    
    result.b = r15 s> 0
else
    int64_t* rdx = *arg1
    int64_t* r8_1 = rdx
    void* rcx = &rdx[sx.q(arg1[1].d)]
    
    if (rdx != rcx)
        do
            if (*r8_1 == arg2)
                int32_t r8_3 = ((r8_1 - rdx) s>> 3).d
                
                if (r8_3 != 0xffffffff)
                    rdi.b = 1
                    rdx[sx.q(r8_3)] = 0
                
                break
            
            r8_1 = &r8_1[1]
        while (r8_1 != rcx)
    
    int32_t i_2 = r10[3].d
    int64_t rbp_1 = r10[2]
    int32_t r9_1 = 0
    int32_t i = i_2
    
    if (i_2 s> 0)
        do
            int32_t rcx_2 = i & 0x80000001
            
            if (rcx_2 s< 0)
                rcx_2 = ((rcx_2 - 1) | 0xfffffffe) + 1
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(i)
            int32_t i_1 = (temp2_1 - temp1_1) s>> 1
            i = i_1
            int32_t rax_5 = i_1 + r9_1
            int32_t r10_1 = rax_5 + rcx_2
            void* rdx_2 = *(rbp_1 + sx.q(rax_5) * 0x10)
            
            if (rdx_2 == 0)
                rax_5.b = 0
            else
                rax_5 = *(rdx_2 + 0xb4)
                int32_t temp3_1 = *(arg2 + 0xb4)
                
                if (rax_5 != temp3_1)
                    rax_5.b = rax_5 s< temp3_1
                else
                    rax_5.b = rdx_2 u< arg2
            
            if (rax_5.b != 0)
                r9_1 = r10_1
        while (i s> 0)
    
    if (r9_1 s< i_2)
        int64_t* r10_4 = (sx.q(r9_1) << 4) + rbp_1
        void* rax_6 = *r10_4
        
        if (rax_6 != 0)
            int32_t rcx_7 = *(arg2 + 0xb4)
            int32_t temp0_1 = *(rax_6 + 0xb4)
            
            if (rcx_7 != temp0_1)
                rax_6.b = rcx_7 s< temp0_1
            else
                rax_6.b = arg2 u< rax_6
            
            if (rax_6.b == 0 && r9_1 != 0xffffffff)
                int32_t rax_8 = i_2 - r9_1
                
                if (rax_8 != 1)
                    memmove(r10_4, (sx.q(r9_1 + 1) << 4) + rbp_1, (rax_8 - 1) << 4)
                    i_2 = r10[3].d
                
                r10[3].d = i_2 - 1
                sub_1405a5010(&r10[2])
                r15 = 1
    
    result = zx.d(rdi.b)
    
    if (r15 != 0)
        return 1

return result
