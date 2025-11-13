// 函数: sub_141ab1820
// 地址: 0x141ab1820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0x28) != 0)
    int64_t r8_1 = sx.q(*(arg1 + 0x50))
    int64_t rdx = *(arg1 + 0x40)
    int64_t* rdi_3 = r8_1 * 0x30 + rdx
    int32_t r8_3 = (r8_1.d + 1) & 0x80000001
    
    if (r8_3 s< 0)
        r8_3 = ((r8_3 - 1) | 0xfffffffe) + 1
    
    int64_t* r12_3 = sx.q(r8_3) * 0x30 + rdx
    int64_t* rsi_1 = **rdi_3
    char rax_2 = sub_141a8a6c0(rdi_3[3].d, 0x3f800000, 4)
    void* r13_1 = *arg2
    uint8_t var_108
    
    if (rax_2 == 0)
        int32_t r8_6 = 0
        int64_t var_c8 = 0
        void* var_b8_1 = r13_1 + 0x4a0
        int32_t rcx = 0
        int32_t var_bc_1 = 0
        int32_t rdx_1 = 0
        int64_t var_b0
        __builtin_memset(&var_b0, 0, 0x33)
        int64_t var_78
        __builtin_memset(&var_78, 0, 0x1b)
        int32_t rsi_2 = *(r13_1 + 0x4a8)
        int64_t var_a8
        
        if (rsi_2 s> 0)
            int32_t var_c0_1 = 0
            sub_141acba60(&var_c8, rsi_2)
            rcx = var_a8:4.d
            r8_6 = var_bc_1
            rdx_1 = var_c0_1
        
        int32_t rax_3 = rdx_1 + rsi_2
        int32_t var_c0_2 = rax_3
        
        if (rax_3 s> r8_6)
            sub_141acb8e0(&var_c8, rdx_1)
            rcx = var_a8:4.d
        
        void* var_a0_1 = r13_1 + 0x4a0
        int32_t rdx_3 = 0
        int32_t rsi_3 = *(r13_1 + 0x4a8)
        
        if (rsi_3 s> rcx)
            var_a8.d = 0
            
            if (rsi_3 != rcx)
                sub_141acba60(&var_b0, rsi_3)
                rcx = var_a8:4.d
                rdx_3 = var_a8.d
        
        int32_t rax_4 = rdx_3 + rsi_3
        var_a8.d = rax_4
        
        if (rax_4 s> rcx)
            sub_141acb8e0(&var_b0, rdx_3)
        
        int64_t var_98
        sub_141abd4c0(&var_98, r13_1 + 0x4a0)
        sub_141abd4c0(&var_78, r13_1 + 0x4a0)
        int64_t* rax_5 = *r12_3
        int32_t zmm1_1 = r12_3[3].d
        int32_t arg_8 = rdi_3[3].d.d
        int32_t arg_c = zmm1_1
        int64_t* rsi_4 = *rax_5
        int32_t var_104_1 = (*(rdi_3 + 0xc)).d
        var_108 = *(r13_1 + 0x6d9) u>> 1 & 1
        int64_t rax_7 = *rsi_1
        int64_t var_100
        __builtin_memset(&var_100, 0, 0x20)
        (*(rax_7 + 0x2c0))(rsi_1, &var_c8, &var_98, &var_108)
        int64_t var_f0
        
        if (var_f0 != 0)
            sub_140a74f90(var_f0)
        
        int64_t rcx_9 = var_100
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        int32_t var_104_2 = (*(r12_3 + 0xc)).d
        var_108 = *(r13_1 + 0x6d9) u>> 1 & 1
        int64_t rax_9 = *rsi_4
        int64_t var_100_1
        __builtin_memset(&var_100_1, 0, 0x20)
        (*(rax_9 + 0x2c0))(rsi_4, &var_b0, &var_78, &var_108)
        int64_t var_f0_1
        
        if (var_f0_1 != 0)
            sub_140a74f90(var_f0_1)
        
        int64_t rcx_12 = var_100_1
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        int32_t var_d0_1 = 2
        int32_t* var_d8 = &arg_8
        int128_t zmm0_2 = var_d8.o
        var_d8 = &var_98
        int32_t var_d0_2 = 2
        int128_t var_58 = zmm0_2
        zmm0_2 = var_d8.o
        var_d8 = &var_c8
        int32_t var_d0_3 = 2
        int128_t var_48 = zmm0_2
        var_d8.o = var_d8.o
        return sub_141de3ac0(&var_d8, &var_48, &var_58, &arg2[1], &arg2[4])
    
    int32_t var_104_3 = *(rdi_3 + 0xc)
    var_108 = *(r13_1 + 0x6d9) u>> 1 & 1
    int64_t rax_12 = *rsi_1
    int64_t var_100_2
    __builtin_memset(&var_100_2, 0, 0x20)
    result = (*(rax_12 + 0x2c0))(rsi_1, &arg2[1], &arg2[4], &var_108)
    int64_t var_f0_2
    
    if (var_f0_2 != 0)
        result = sub_140a74f90(var_f0_2)
    
    int64_t rcx_16 = var_100_2
    
    if (rcx_16 != 0)
        return sub_140a74f90(rcx_16)

return result
