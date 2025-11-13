// 函数: sub_140d229a0
// 地址: 0x140d229a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *arg2
int64_t* rbp = *(arg1 + 0x20)
int32_t* r13 = *(arg1 + 0x18)

if (r8 == 0)
    return 

int32_t r9_1 = data_143e1d9b4
int64_t r10_1 = data_143e1d9a0
int32_t i = *(r8 + 0xc)
void* r14_1 = nullptr
void* rdi_1

if (i s>= r9_1)
    rdi_1 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(i)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_1
    rdi_1 = *(r10_1 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18

uint64_t rax = zx.q(*(rdi_1 + 0xc))

if (rax.d == *r13)
    return 

char rcx_3 = *(rdi_1 + 0xb) & 1

if (rcx_3 != 0 || rax.d != 0)
    if (rcx_3 == 0)
        i = rax.d
    
    void* const rdx_11
    
    if (i s>= r9_1)
        rdx_11 = nullptr
    else
        int16_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(i)
        uint32_t rdx_9 = zx.d(temp2_1)
        int32_t rax_23 = temp3_1 + rdx_9
        rdx_11 = *(r10_1 + (sx.q(rax_23 s>> 0x10) << 3)) + sx.q(zx.d(rax_23.w) - rdx_9) * 0x18
    
    void* rdi_2 = *(r13 + 8)
    int32_t* r8_3 = *(rdi_2 + 0x18)
    int64_t rdx_12 = sx.q(*(rdi_2 + 0x20))
    int32_t* rcx_17 = r8_3
    void* r15_3 = sx.q(not.d(*(rdx_11 + 0xc))) * 0x50 + data_143e1d678
    void* rax_31 = &r8_3[rdx_12]
    
    if (r8_3 != rax_31)
        while (*rcx_17 != i)
            rcx_17 = &rcx_17[1]
            
            if (rcx_17 == rax_31)
                goto label_140d22bb1
    
    if (r8_3 == rax_31 || ((rcx_17 - r8_3) s>> 2).d == 0xffffffff)
    label_140d22bb1:
        int32_t rax_32 = (rdx_12 + 1).d
        *(rdi_2 + 0x20) = rax_32
        
        if (rax_32 s> *(rdi_2 + 0x24))
            sub_1405a4cf0(rdi_2 + 0x18)
        
        *((rdx_12 << 2) + *(rdi_2 + 0x18)) = i
    
    sub_1408d92c0(r15_3 + 0x38, r13)
    int64_t rbp_1 = 0
    int32_t* rsi_3 = *(r15_3 + 0x18)
    uint64_t r12_2 = sx.q(*(r15_3 + 0x20)) << 2 u>> 2
    
    if (rsi_3 u> &rsi_3[sx.q(*(r15_3 + 0x20))])
        r12_2 = 0
    
    if (r12_2 != 0)
        do
            int32_t i_1 = *rsi_3
            
            if (i_1 != *r13)
                void* rdi_3 = *(r13 + 8)
                int32_t* r8_4 = *(rdi_3 + 0x18)
                int64_t rdx_14 = sx.q(*(rdi_3 + 0x20))
                int32_t* rcx_22 = r8_4
                void* rax_36 = &r8_4[rdx_14]
                
                if (r8_4 != rax_36)
                    while (*rcx_22 != i_1)
                        rcx_22 = &rcx_22[1]
                        
                        if (rcx_22 == rax_36)
                            goto label_140d22c43
                
                if (r8_4 == rax_36 || ((rcx_22 - r8_4) s>> 2).d == 0xffffffff)
                label_140d22c43:
                    int32_t rax_37 = (rdx_14 + 1).d
                    *(rdi_3 + 0x20) = rax_37
                    
                    if (rax_37 s> *(rdi_3 + 0x24))
                        sub_1405a4cf0(rdi_3 + 0x18)
                    
                    *((rdx_14 << 2) + *(rdi_3 + 0x18)) = i_1
            
            rsi_3 = &rsi_3[1]
            rbp_1 += 1
        while (rbp_1 != r12_2)
    
    int32_t* rsi_4 = *(r15_3 + 0x28)
    uint64_t r15_6 = sx.q(*(r15_3 + 0x30)) << 2 u>> 2
    
    if (rsi_4 u> &rsi_4[sx.q(*(r15_3 + 0x30))])
        r15_6 = 0
    
    if (r15_6 != 0)
        do
            void* rbx_2 = *(r13 + 8)
            int32_t i_2 = *rsi_4
            int32_t* rdx_15 = *(rbx_2 + 0x28)
            int64_t r8_5 = sx.q(*(rbx_2 + 0x30))
            int32_t* rax_40 = rdx_15
            void* rcx_26 = &rdx_15[r8_5]
            
            if (rdx_15 != rcx_26)
                while (*rax_40 != i_2)
                    rax_40 = &rax_40[1]
                    
                    if (rax_40 == rcx_26)
                        goto label_140d22cdd
            
            if (rdx_15 == rcx_26 || ((rax_40 - rdx_15) s>> 2).d == 0xffffffff)
            label_140d22cdd:
                int32_t rax_42 = (r8_5 + 1).d
                *(rbx_2 + 0x30) = rax_42
                
                if (rax_42 s> *(rbx_2 + 0x34))
                    sub_1405a4cf0(rbx_2 + 0x28)
                
                *((r8_5 << 2) + *(rbx_2 + 0x28)) = i_2
            
            rsi_4 = &rsi_4[1]
            r14_1 += 1
        while (r14_1 != r15_6)
else if (i s> data_143e1d994)
    if ((*(*r8 + 0x20))(r8) == 0)
    label_140d22abc:
        void* rbx_1 = *(r13 + 8)
        int32_t i_3 = *(*arg2 + 0xc)
        int32_t* r8_2 = *(rbx_1 + 0x28)
        int64_t rdx_7 = sx.q(*(rbx_1 + 0x30))
        int32_t* rcx_10 = r8_2
        rax = &r8_2[rdx_7]
        
        if (r8_2 != rax)
            while (*rcx_10 != i_3)
                rcx_10 = &rcx_10[1]
                
                if (rcx_10 == rax)
                    goto label_140d22aff
        
        if (r8_2 == rax || ((rcx_10 - r8_2) s>> 2).d == 0xffffffff)
        label_140d22aff:
            int32_t rax_20 = (rdx_7 + 1).d
            *(rbx_1 + 0x30) = rax_20
            
            if (rax_20 s> *(rbx_1 + 0x34))
                sub_1405a4cf0(rbx_1 + 0x28)
            
            *((rdx_7 << 2) + *(rbx_1 + 0x28)) = i_3
    else
        int64_t* r9_2 = *arg2
        
        if ((r9_2[1].d & 0x1400) != 0)
            goto label_140d22abc
        
        int32_t r10_2 = *(r9_2 + 0xc)
        
        if (r10_2 s< data_143e1d9b4)
            int16_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r10_2)
            uint32_t rdx_4 = zx.d(temp4_1)
            int32_t rax_12 = temp5_1 + rdx_4
            r14_1 = *(data_143e1d9a0 + (sx.q(rax_12 s>> 0x10) << 3))
                + sx.q(zx.d(rax_12.w) - rdx_4) * 0x18
        
        if (((*(r14_1 + 8) u>> 0x1e).b & 1) != 0)
            goto label_140d22abc
        
        sub_140d17860(r13, r10_2, rdi_1, r9_2, rbp, 1)
