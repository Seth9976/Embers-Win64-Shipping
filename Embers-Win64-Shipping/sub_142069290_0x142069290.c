// 函数: sub_142069290
// 地址: 0x142069290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg1
int64_t r12 = arg4
TEB* gsbase

if (data_143f46d70 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f46d70)
    
    if (data_143f46d70 == 0xffffffff)
        int64_t i = 3
        void* rbx_1 = &data_143f46d00
        
        do
            *(rbx_1 - 0x18) = 0xffffffff
            i -= 1
            *(rbx_1 - 0x14) = 4
            *(rbx_1 - 0x10) = 0
            *(rbx_1 - 8) = 0
            *rbx_1 = 0
            *(rbx_1 + 8) = 0
            *(rbx_1 - 0x20) = &data_1432aaf28
            
            if (sub_140a80f40() == 0)
                sub_141997e80(rbx_1 - 0x20)
            else
                (*(*(rbx_1 - 0x20) + 0x28))(rbx_1 - 0x20)
            
            rbx_1 += 0x30
        while (i != 0)
        
        atexit(sub_142d01740)
        _Init_thread_footer(&data_143f46d70)
    
    rdx = arg1

int64_t r13 = *(arg2 + 0x1b0)
uint32_t rdi = zx.d(*(rdx + 0x11e))
void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &rcx_2[5]

if (rax_2 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rdx = arg1
    rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_2[5]

*(arg2 + 0x30) = rax_2
int64_t* rax_3 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_3 = rcx_2
*(arg2 + 8) = &rcx_2[1]
rcx_2[1] = 0
*rcx_2 = &data_142d99560
uint64_t result = zx.q(arg6)
rcx_2[2] = r13
rcx_2[3].d = rdi
rcx_2[4] = arg3
int64_t var_4c = 0
int32_t var_44 = 0
int64_t r15 = sx.q(arg7)
int32_t var_50 = result.d

if (r15 s> 0)
    void* rdi_1 = rdx + 0x122
    int64_t rbp_1 = 0
    void* rdx_1 = arg5 - rdx - 0x122
    void* var_58_1 = rdx_1
    
    do
        int64_t r14_1 = *(r12 + (rbp_1 << 3))
        
        if (*(rdi_1 + 2) u> 0)
            uint32_t r12_1 = zx.d(*rdi_1)
            void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_7 = &rcx_8[5]
            
            if (rax_7 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rdx_1 = var_58_1
                rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_7 = &rcx_8[5]
            
            *(arg2 + 0x30) = rax_7
            void**** rax_8 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_8 = rcx_8
            *(arg2 + 8) = &rcx_8[1]
            rcx_8[1] = 0
            *rcx_8 = &data_142da77d8
            rcx_8[3].d = r12_1
            r12 = arg4
            rcx_8[2] = r13
            rcx_8[4] = r14_1
        
        result = zx.q(*(rdx_1 + rdi_1))
        rbp_1 += 1
        *(rdi_1 + &var_4c - rdx - 0x122) = result.d
        rdi_1 += 4
    while (rbp_1 s< r15)

if (r15 s< 3)
    void* i_1 = r15 * 0x30 + &data_143f46cf8
    void* rbp_3 = (r15 << 2) + 0x122 + arg1
    
    do
        int64_t rax_11 = *i_1
        int64_t* rdi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_12 = &rdi_4[1]
        
        if (rcx_12 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            rdi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_12 = &rdi_4[1]
        
        *(arg2 + 0x30) = rcx_12
        *rdi_4 = rax_11
        void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_12 = &rcx_16[6]
        
        if (rax_12 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_12 = &rcx_16[6]
        
        *(arg2 + 0x30) = rax_12
        void**** rax_13 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_13 = rcx_16
        result = &rcx_16[1]
        *(arg2 + 8) = result
        *result = 0
        *rcx_16 = &data_142da7798
        rcx_16[2].d = 1
        rcx_16[3] = rdi_4
        rcx_16[4].d = 3
        *(rcx_16 + 0x24) = 3
        rcx_16[5] = 0
        int64_t r15_1 = *i_1
        
        if (*(rbp_3 + 2) u> 0)
            uint32_t rdi_7 = zx.d(*rbp_3)
            void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_14 = &rcx_22[5]
            
            if (rax_14 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_14 = &rcx_22[5]
            
            *(arg2 + 0x30) = rax_14
            void**** rax_15 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_15 = rcx_22
            *(arg2 + 8) = &rcx_22[1]
            rcx_22[1] = 0
            result = &data_142da77d8
            *rcx_22 = &data_142da77d8
            rcx_22[2] = r13
            rcx_22[3].d = rdi_7
            rcx_22[4] = r15_1
        
        i_1 += 0x30
        rbp_3 += 4
    while (i_1 s< &data_143f46d88)

uint64_t rbp_4 = zx.q(*(arg1 + 0x11c))

if (rbp_4.d u>= 0x10)
    rbp_4 = 0x10

if (rbp_4.d != 0)
    uint32_t r15_2 = zx.d(*(arg1 + 0x11a))
    uint32_t r12_3 = zx.d(*(arg1 + 0x118))
    int64_t rdi_10 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_17 = rdi_10 + rbp_4
    
    if (rax_17 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rbp_4 + 0x10).d)
        rdi_10 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_17 = rdi_10 + rbp_4
    
    *(arg2 + 0x30) = rax_17
    memcpy(rdi_10, &var_50, rbp_4.d)
    void*** rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_18 = &rcx_30[6]
    
    if (rax_18 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_18 = &rcx_30[6]
    
    *(arg2 + 0x30) = rax_18
    void**** rax_19 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_19 = rcx_30
    *(arg2 + 8) = &rcx_30[1]
    rcx_30[1] = 0
    result = &data_142d99550
    *rcx_30 = &data_142d99550
    rcx_30[2] = r13
    rcx_30[3] = rdi_10
    rcx_30[4].d = r12_3
    *(rcx_30 + 0x24) = r15_2
    rcx_30[5].d = rbp_4.d

return result
