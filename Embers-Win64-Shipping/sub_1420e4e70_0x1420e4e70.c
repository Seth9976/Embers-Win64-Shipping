// 函数: sub_1420e4e70
// 地址: 0x1420e4e70
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
    
    void* const rdx_12
    
    if (i s>= r9_1)
        rdx_12 = nullptr
    else
        int16_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(i)
        uint32_t rdx_10 = zx.d(temp2_1)
        int32_t rax_22 = temp3_1 + rdx_10
        rdx_12 = *(r10_1 + (sx.q(rax_22 s>> 0x10) << 3)) + sx.q(zx.d(rax_22.w) - rdx_10) * 0x18
    
    void* rdi_2 = *(r13 + 8)
    int32_t* r8_3 = *(rdi_2 + 0x18)
    int64_t rdx_13 = sx.q(*(rdi_2 + 0x20))
    int32_t* rcx_17 = r8_3
    void* r15_3 = sx.q(not.d(*(rdx_12 + 0xc))) * 0x50 + data_143e1d678
    void* rax_30 = &r8_3[rdx_13]
    
    if (r8_3 != rax_30)
        while (*rcx_17 != i)
            rcx_17 = &rcx_17[1]
            
            if (rcx_17 == rax_30)
                goto label_1420e5082
    
    if (r8_3 == rax_30 || ((rcx_17 - r8_3) s>> 2).d == 0xffffffff)
    label_1420e5082:
        int32_t rax_31 = (rdx_13 + 1).d
        *(rdi_2 + 0x20) = rax_31
        
        if (rax_31 s> *(rdi_2 + 0x24))
            sub_1405a4cf0(rdi_2 + 0x18)
        
        *((rdx_13 << 2) + *(rdi_2 + 0x18)) = i
    
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
                int64_t rdx_15 = sx.q(*(rdi_3 + 0x20))
                int32_t* rcx_22 = r8_4
                void* rax_35 = &r8_4[rdx_15]
                
                if (r8_4 != rax_35)
                    while (*rcx_22 != i_1)
                        rcx_22 = &rcx_22[1]
                        
                        if (rcx_22 == rax_35)
                            goto label_1420e5113
                
                if (r8_4 == rax_35 || ((rcx_22 - r8_4) s>> 2).d == 0xffffffff)
                label_1420e5113:
                    int32_t rax_36 = (rdx_15 + 1).d
                    *(rdi_3 + 0x20) = rax_36
                    
                    if (rax_36 s> *(rdi_3 + 0x24))
                        sub_1405a4cf0(rdi_3 + 0x18)
                    
                    *((rdx_15 << 2) + *(rdi_3 + 0x18)) = i_1
            
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
            int32_t* rdx_16 = *(rbx_2 + 0x28)
            int64_t r8_5 = sx.q(*(rbx_2 + 0x30))
            int32_t* rax_39 = rdx_16
            void* rcx_26 = &rdx_16[r8_5]
            
            if (rdx_16 != rcx_26)
                while (*rax_39 != i_2)
                    rax_39 = &rax_39[1]
                    
                    if (rax_39 == rcx_26)
                        goto label_1420e51ad
            
            if (rdx_16 == rcx_26 || ((rax_39 - rdx_16) s>> 2).d == 0xffffffff)
            label_1420e51ad:
                int32_t rax_41 = (r8_5 + 1).d
                *(rbx_2 + 0x30) = rax_41
                
                if (rax_41 s> *(rbx_2 + 0x34))
                    sub_1405a4cf0(rbx_2 + 0x28)
                
                *((r8_5 << 2) + *(rbx_2 + 0x28)) = i_2
            
            rsi_4 = &rsi_4[1]
            r14_1 += 1
        while (r14_1 != r15_6)
else if (i s> data_143e1d994)
    if (sub_1420de8c0(r13, r8) == 0)
    label_1420e4f8e:
        void* rbx_1 = *(r13 + 8)
        int32_t i_3 = *(*arg2 + 0xc)
        int32_t* r8_2 = *(rbx_1 + 0x28)
        int64_t rdx_8 = sx.q(*(rbx_1 + 0x30))
        int32_t* rcx_10 = r8_2
        rax = &r8_2[rdx_8]
        
        if (r8_2 != rax)
            while (*rcx_10 != i_3)
                rcx_10 = &rcx_10[1]
                
                if (rcx_10 == rax)
                    goto label_1420e4fd0
        
        if (r8_2 == rax || ((rcx_10 - r8_2) s>> 2).d == 0xffffffff)
        label_1420e4fd0:
            int32_t rax_19 = (rdx_8 + 1).d
            *(rbx_1 + 0x30) = rax_19
            
            if (rax_19 s> *(rbx_1 + 0x34))
                sub_1405a4cf0(rbx_1 + 0x28)
            
            *((rdx_8 << 2) + *(rbx_1 + 0x28)) = i_3
    else
        int64_t* r9_2 = *arg2
        
        if ((r9_2[1].d & 0x1400) != 0)
            goto label_1420e4f8e
        
        int32_t r10_2 = *(r9_2 + 0xc)
        
        if (r10_2 s< data_143e1d9b4)
            int16_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r10_2)
            uint32_t rdx_5 = zx.d(temp4_1)
            int32_t rax_11 = temp5_1 + rdx_5
            r14_1 = *(data_143e1d9a0 + (sx.q(rax_11 s>> 0x10) << 3))
                + sx.q(zx.d(rax_11.w) - rdx_5) * 0x18
        
        if (((*(r14_1 + 8) u>> 0x1e).b & 1) != 0)
            goto label_1420e4f8e
        
        sub_1420dc470(r13, r10_2, rdi_1, r9_2, rbp, 1)
