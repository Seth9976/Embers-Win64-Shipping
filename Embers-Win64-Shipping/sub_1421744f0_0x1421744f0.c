// 函数: sub_1421744f0
// 地址: 0x1421744f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* r8 = arg1[8]
int32_t rbp = 0
void* r15 = &arg1[7]
void* rax_6 = r15
int64_t rdx_2 = (sx.q((arg2 u>> 0x20).d) ^ sx.q(arg2.d)) & sx.q(arg1[9].d - 1)

if (r8 != 0)
    rax_6 = r8

void* r14 = rax_6 + (rdx_2 << 2)
int32_t i = *(rax_6 + (rdx_2 << 2))

while (i != 0xffffffff)
    int64_t* rdi_3 = (sx.q(i) << 4) + *arg1
    int64_t arg_8 = arg2
    int64_t arg_18 = *rdi_3
    
    if (sub_14077a170(&arg_18, &arg_8) != 0)
        int64_t rcx_2 = sx.q(*r14)
        
        if (arg1[1].d != *(arg1 + 0x34))
            void* r8_1 = *(r15 + 8)
            int64_t r10_2 = rcx_2 * 2
            void* r9_1 = *arg1
            int64_t rdx_5 = sx.q(arg1[9].d - 1) & sx.q(*(r9_1 + (r10_2 << 3) + 0xc))
            
            if (r8_1 != 0)
                r15 = r8_1
            
            int32_t j = *(r15 + (rdx_5 << 2))
            void* r8_2 = r15 + (rdx_5 << 2)
            
            for (; j != 0xffffffff; j = *r8_2)
                if (j == rcx_2.d)
                    *r8_2 = *(r9_1 + (r10_2 << 3) + 8)
                    break
                
                r8_2 = r9_1 + 8 + (sx.q(j) << 4)
        
        rbp = 1
        void* r10_3 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x10) = rcx_2.d
        
        int32_t rax_17 = -1
        int32_t* r8_6 = (rcx_2 << 4) + *arg1
        *r8_6 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rax_17 = arg1[6].d
        
        r8_6[1] = rax_17
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_2.d
        void* rax_18 = *(r10_3 + 0x10)
        
        if (rax_18 != 0)
            r10_3 = rax_18
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_2.d)
        int64_t rcx_3 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_3 + (rcx_3 << 2)) &= not.d(rol.d(1, rcx_2.b))
        break
    
    i = rdi_3[1].d
    r14 = &rdi_3[1]

return zx.q(rbp)
