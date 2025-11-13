// 函数: sub_1413a3930
// 地址: 0x1413a3930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x30) s> 0)
    int64_t r12_1 = 0
    
    do
        void* rbp_2 = *(arg1 + 0x28) + r12_1
        
        if (*(rbp_2 + 0xc) == 0xffffffff)
            int64_t rsi_1 = sx.q(*(rbp_2 + 8))
            
            if (rsi_1.d s>= 0)
                int64_t rdx_3 = rsi_1 * 0xe8
                int64_t* rdi_8 =
                    (((sx.q(*(rbp_2 + 0x10) << 0x1a) s>> 0x1a) + 0x24) << 6) + *(arg1 + 0xf0)
                int64_t rax_9 = *rdi_8
                void* r13_2 = rsi_1 * 0xe8 + rax_9
                int32_t rbx_1 = *(rax_9 + rdx_3 + 0xc0)
                int64_t rcx_8 = *(r13_2 + 0xa8)
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                sub_14125cf90(r13_2)
                void* r8_2 = &rdi_8[2]
                int32_t rdx_4 = rol.d(1, rsi_1.b)
                
                if (*(rdi_8 + 0x34) != 0)
                    *(sx.q(rdi_8[6].d) * 0xe8 + *rdi_8) = rsi_1.d
                
                int32_t* rcx_13 = rdx_3 + *rdi_8
                *rcx_13 = 0xffffffff
                int32_t rax_12
                
                if (*(rdi_8 + 0x34) s<= 0)
                    rax_12 = -1
                else
                    rax_12 = rdi_8[6].d
                
                rcx_13[1] = rax_12
                *(rdi_8 + 0x34) += 1
                rdi_8[6].d = rsi_1.d
                void* rax_13 = *(r8_2 + 0x10)
                
                if (rax_13 != 0)
                    r8_2 = rax_13
                
                if (rsi_1.d s< 0)
                    rsi_1 = zx.q(rsi_1.d + 0x1f)
                
                int64_t rax_14 = sx.q(rsi_1.d s>> 5)
                *(r8_2 + (rax_14 << 2)) &= not.d(rdx_4)
                sub_14128e860(rbx_1)
                int32_t rcx_15 = *(rbp_2 + 8)
                
                if (rdi_8[7].d s<= rcx_15)
                    rcx_15 = rdi_8[7].d
                
                rdi_8[7].d = rcx_15
        else
            int64_t rdi_2 = sx.q(*(rbp_2 + 0x10) << 0x1a) s>> 0x1a
            CRITICAL_SECTION* lpCriticalSection =
                *(arg1 + 0xf0) + ((rdi_2 + ((rdi_2 + 9) << 2)) << 3)
            EnterCriticalSection(lpCriticalSection)
            int64_t rdx_1 = sx.q(*(rbp_2 + 0xc)) * 0xf8
            int64_t rcx_3 = *(rdi_2 * 0x48 + 0x3f0 + *(arg1 + 0xf0))
            int32_t rdi_3 = *(rdx_1 + rcx_3 + 0xc0)
            int32_t temp0_1 = *(rdx_1 + rcx_3 + 0xe8)
            *(rdx_1 + rcx_3 + 0xe8) -= 1
            
            if (temp0_1 == 1)
                sub_1413a3620(*(arg1 + 0xf0) + rdi_2 * 0x48 + 0x3f0, *(rbp_2 + 0xc))
            
            sub_14128e860(rdi_3)
            
            if (lpCriticalSection != 0)
                LeaveCriticalSection(lpCriticalSection)
        
        i += 1
        r12_1 += 0x14
    while (i s< *(arg1 + 0x30))

int32_t i_1 = 0

if (*(arg1 + 0x40) s> 0)
    int64_t rdx_6 = 0
    
    do
        rdx_6 += 0x14
        i_1 += 1
        *(rdx_6 + *(arg1 + 0x38) - 0x14) = 0
    while (i_1 s< *(arg1 + 0x40))

bool cond:1 = *(arg1 + 0x34) == 0
*(arg1 + 0x30) = 0

if (not(cond:1))
    sub_1405c55e0(arg1 + 0x28, 0)

if (data_143f0f21f == 0)
    return 

uint64_t rdx_7 = zx.q(data_143f0f1a0)

if (((*(&data_143f025fc + sx.q(rdx_7.d) * 0x14) u>> 0x13).b & 1) == 0
        || not(test_bit(data_143f13cd8, rdx_7)))
    return 

void* r13_3 = arg1 + 0x100
void* i_5 = *r13_3
uint64_t rdi_9 = sx.q(*(r13_3 + 8))
uint64_t rax = rdi_9 * 0x18 + i_5

if (i_5 != rax)
    uint64_t r13_4 = rax
    
    do
        void* i_4 = *(i_5 + 8)
        void* i_2 = i_5
        
        if (i_4 != 0)
            i_2 = i_4
        
        for (void* r12_2 = i_2 + (sx.q(*(i_5 + 0x10)) << 2); i_2 != r12_2; i_2 += 4)
            int64_t rbx_2 = sx.q(*i_2)
            
            if (rbx_2.d s>= 0)
                void* rdi_10 = *(arg1 + 0xf0)
                sub_14125cf90(*(rdi_10 + 0xd80) + rbx_2 * 0x88)
                void* r8_3 = rdi_10 + 0xd90
                int32_t rdx_8 = rol.d(1, rbx_2.b)
                
                if (*(rdi_10 + 0xdb4) != 0)
                    *(sx.q(*(rdi_10 + 0xdb0)) * 0x88 + *(rdi_10 + 0xd80)) = rbx_2.d
                
                int32_t* rcx_23 = *(rdi_10 + 0xd80)
                rcx_23[rbx_2 * 0x22] = 0xffffffff
                int32_t rax_20
                
                if (*(rdi_10 + 0xdb4) s<= 0)
                    rax_20 = -1
                else
                    rax_20 = *(rdi_10 + 0xdb0)
                
                rcx_23[rbx_2 * 0x22 + 1] = rax_20
                *(rdi_10 + 0xdb4) += 1
                *(rdi_10 + 0xdb0) = rbx_2.d
                void* rax_21 = *(r8_3 + 0x10)
                
                if (rax_21 != 0)
                    r8_3 = rax_21
                
                if (rbx_2.d s< 0)
                    rbx_2 = zx.q(rbx_2.d + 0x1f)
                
                rax = sx.q(rbx_2.d s>> 5)
                *(r8_3 + (rax << 2)) &= not.d(rdx_8)
        
        i_5 += 0x18
    while (i_5 != r13_4)
    
    rdi_9 = zx.q(*(r13_3 + 8))

if (rdi_9.d != 0)
    int64_t* rbx_5 = *r13_3 + 8
    int32_t i_3
    
    do
        int64_t rcx_24 = *rbx_5
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        rbx_5 = &rbx_5[3]
        i_3 = rdi_9.d
        rdi_9 = zx.q(rdi_9.d - 1)
    while (i_3 != 1)

bool cond:2_1 = *(r13_3 + 0xc) == 0
*(r13_3 + 8) = 0

if (not(cond:2_1))
    sub_1405a5130(r13_3, 0)
