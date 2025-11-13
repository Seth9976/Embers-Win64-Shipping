// 函数: sub_14111d2b0
// 地址: 0x14111d2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbp = arg2
void* rdi_1 = *(arg1 + 8) + 0x18b0
void* rsi = *(rdi_1 + 0x18)

if (rsi != 0)
    sub_1408081b0(rsi + 0x28)
    sub_1405ec8a0(rsi + 0x38)
    sub_1405d1550(rsi + 0x30)
    sub_1405d1550(rsi + 0x28)
    sub_1408081b0(rsi + 8)
    sub_1405ec8a0(rsi + 0x18)
    sub_1405d1550(rsi + 0x10)
    sub_1405d1550(rsi + 8)
    j_sub_140a74f90(rsi)
    *(rdi_1 + 0x18) = 0
    *(rdi_1 + 4) = 0
    *(rdi_1 + 0x1fc) = 0

void* rcx_9 = rdi_1 + 0x1e8
int32_t rax = 0
int64_t r13 = 0
int32_t var_3c = 0
int32_t rsi_1 = 0
int32_t i = 0
int64_t var_48 = 0

if (*(rdi_1 + 0x1f0) s> 0)
    void* rbp_1 = nullptr
    
    do
        int64_t r15_1 = *rcx_9
        int32_t* r14_2 = rbp_1 + 0x10 + r15_1
        int64_t rbx_1 = sx.q(rsi_1)
        int32_t* rcx_10 = *(r14_2 + 8)
        rsi_1 = (rbx_1 + 1).d
        
        if (rsi_1 s> rax)
            sub_14113b710(&var_48, rbx_1.d)
            r13 = var_48
        
        if (rcx_10 != 0)
            r14_2 = rcx_10
        
        *(r13 + (rbx_1 << 2)) = *r14_2
        void* const rbx_2 = 0x1a8
        
        if (*(r15_1 + rbp_1 + 8) != 0)
            rbx_2 = 0x1b8
        
        void* rbx_3 = rbx_2 + rdi_1
        int64_t r14_3 = sx.q(*(rbx_3 + 8))
        int32_t rax_2 = (r14_3 + 1).d
        *(rbx_3 + 8) = rax_2
        
        if (rax_2 s> *(rbx_3 + 0xc))
            sub_1405a4f90(rbx_3)
        
        rcx_9 = rdi_1 + 0x1e8
        int128_t zmm0 = *(r15_1 + rbp_1 + 0x30)
        i += 1
        rbp_1 += 0x40
        *(*rbx_3 + r14_3 * 0x10) = zmm0
        rax = var_3c
    while (i s< *(rdi_1 + 0x1f0))
    
    rbp = arg2
    rcx_9 = rdi_1 + 0x1e8

sub_14113b5d0(rcx_9, 0)
sub_140a1c0d0(r13, rsi_1, arg2, arg2)
uint64_t result = zx.q(rsi_1 - 1)
int64_t rsi_2 = sx.q(result.d)

if (result.d s>= 0)
    int64_t temp0_1
    
    do
        int64_t rcx_14 = sx.q(*(rdi_1 + 0x40))
        int64_t r9_1 = sx.q(*(r13 + (rsi_2 << 2)))
        
        if (r9_1.d != (rcx_14 - 1).d)
            int32_t* rdx_7 = *(*(rdi_1 + 0x38) + (rcx_14 << 3) - 8) + 0x88
            int32_t* rax_6 = *(rdx_7 + 8)
            
            if (rax_6 != 0)
                rdx_7 = rax_6
            
            *rdx_7 = r9_1.d
        
        int32_t rdx_10 = *(rdi_1 + 0x40)
        int32_t rax_9 = rdx_10 - r9_1.d - 1
        
        if (rax_9 s>= 1)
            rax_9 = 1
        
        if (rax_9 != 0)
            int64_t rcx_15 = *(rdi_1 + 0x38)
            memcpy(rcx_15 + (r9_1 << 3), rcx_15 + (sx.q(rdx_10 - rax_9) << 3), rax_9 << 3)
            rdx_10 = *(rdi_1 + 0x40)
        
        *(rdi_1 + 0x40) = rdx_10 - 1
        result = sub_1405c53d0(rdi_1 + 0x38)
        temp0_1 = rsi_2
        rsi_2 -= 1
    while (temp0_1 - 1 s>= 0)
    rbp = arg2

if (rbp == 0)
    int32_t i_1 = 0
    
    if (*(rdi_1 + 0x1d0) s> 0)
        int64_t* r12 = nullptr
        
        do
            int64_t r14_4 = sx.q(*(rdi_1 + 0x40))
            void* r15_2 = *(r12 + *(rdi_1 + 0x1c8))
            int32_t rax_13 = (r14_4 + 1).d
            *(rdi_1 + 0x40) = rax_13
            
            if (rax_13 s> *(rdi_1 + 0x44))
                sub_1405a4d70(rdi_1 + 0x38)
            
            void* rbx_4 = r15_2 + 0x88
            int32_t rbp_2 = 0
            *(*(rdi_1 + 0x38) + (r14_4 << 3)) = r15_2
            bool cond:2_1 = *(rbx_4 + 0x14) == 1
            *(rbx_4 + 0x10) = 0
            
            if (not(cond:2_1))
                sub_1410b3a30(rbx_4, 1)
                rbp_2 = *(r15_2 + 0x98)
            
            *(rbx_4 + 0x10) = rbp_2 + 1
            
            if (rbp_2 + 1 s> *(rbx_4 + 0x14))
                sub_1405e3f00(rbx_4, rbp_2)
            
            void* rax_16 = *(rbx_4 + 8)
            
            if (rax_16 != 0)
                rbx_4 = rax_16
            
            *(rbx_4 + (sx.q(rbp_2) << 2)) = r14_4.d
            void* const rbx_5 = 0x1a8
            void* rax_18 = *(r15_2 + 8)
            var_48.d = (*(rax_18 + 0xc0)).d
            var_48:4.d = *(rax_18 + 0xc4)
            
            if (*(rax_18 + 0x32) == 2)
                rbx_5 = 0x1b8
            
            int32_t var_40_2 = (*(rax_18 + 0xc8)).d
            void* rbx_6 = rbx_5 + rdi_1
            int32_t var_3c_1 = *(rax_18 + 0xd8)
            int64_t rbp_3 = sx.q(*(rbx_6 + 8))
            int32_t rax_19 = (rbp_3 + 1).d
            *(rbx_6 + 8) = rax_19
            
            if (rax_19 s> *(rbx_6 + 0xc))
                sub_1405a4f90(rbx_6)
            
            result = *rbx_6
            i_1 += 1
            r12 = &r12[1]
            *(result + rbp_3 * 0x10) = var_48.o
        while (i_1 s< *(rdi_1 + 0x1d0))
    
    *(rdi_1 + 0x1d0) = 0
    
    if (*(rdi_1 + 0x1d4) s<= 0xffffffff)
        result = sub_1405c5570(rdi_1 + 0x1c8, 0)

bool cond:0 = *(rdi_1 + 0x1e4) == 0
*(rdi_1 + 0x1e0) = 0

if (cond:0)
    return result

return sub_1405c5570(rdi_1 + 0x1d8, 0) __tailcall
