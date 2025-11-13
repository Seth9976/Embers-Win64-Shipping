// 函数: sub_1418959d0
// 地址: 0x1418959d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
uint64_t var_48 = __security_cookie ^ &var_1d8
uint64_t result

if ((arg1[5].b & 2) == 0)
    *(arg1 + 0x29) |= 1
    result.b = 0
else
    void** const var_148
    memset(&var_148, 0, 0x90)
    sub_140b4c2a0(&var_148)
    int32_t var_74_1 = 0x80
    var_148 = &data_142fe61a8
    int128_t var_b8
    __builtin_memset(&var_b8, 0, 0x14)
    int64_t var_a0
    __builtin_memset(&var_a0, 0, 0x2c)
    int32_t var_70_1 = 0xffffffff
    int32_t var_6c_1 = 0
    int64_t var_60_1 = 0
    int32_t var_58_1 = 0
    sub_140b552a0(&var_148, 0)
    int64_t rdx
    rdx.b = 1
    var_148[0x15](&var_148, rdx)
    char rax_2
    int512_t zmm1_1
    rax_2, zmm1_1 = sub_141895160(&var_148, arg2)
    sub_141883000(&var_148, zmm1_1)
    char var_11f
    
    if (rax_2 == 0 || (var_11f & 1) != 0)
        *(arg1 + 0x29) |= 1
    else
        int32_t r12_1 = 0
        char* r14_1 = nullptr
        int32_t var_a8
        int32_t r15_1 = var_a8
        char* var_190 = nullptr
        int32_t var_184_1 = 0
        int32_t rdi_1 = r15_1
        
        if (r15_1 s> 0)
            sub_1405daba0(&var_190)
            r12_1 = var_184_1
            rdi_1 = r15_1
            r14_1 = var_190
        
        void* rbx_2 = var_b8:8.q
        int32_t var_194 = r15_1
        int32_t var_1a8_1 = 0
        int32_t var_17c_1 = 0
        void var_178
        char rax_4 =
            sub_140aecc20((*sub_140b5e500(&var_178, 0x101)).q, r14_1, &var_194, rbx_2, r15_1, 0x10)
        int64_t rbx_3 = sx.q(var_194)
        
        if (rbx_3.d s> rdi_1)
            int32_t rbx_4 = rbx_3.d - rdi_1
            int32_t rcx_10 = rdi_1 + rbx_4
            int32_t var_188_2 = rcx_10
            
            if (rcx_10 s> r12_1)
                sub_1405daba0(&var_190)
                r14_1 = var_190
            
            memset(&r14_1[sx.q(rdi_1)], 0, sx.q(rbx_4))
        else if (rbx_3.d s< rdi_1)
            int32_t rax_6 = rdi_1 - rbx_3.d
            
            if (rdi_1 != rbx_3.d)
                int32_t rdi_2 = rdi_1 - rax_6
                
                if (rdi_2 != rbx_3.d)
                    memmove(&r14_1[rbx_3], &r14_1[sx.q(rax_6 + rbx_3.d)], rdi_2 - rbx_3.d)
                
                int32_t var_188_3 = rdi_2
                sub_1405dac10(&var_190)
                r14_1 = var_190
        
        char** rbx_5 = &var_190
        
        if (rax_4 == 0)
            rbx_5 = &var_b8:8
        
        int32_t var_174
        sub_141820bd0(&var_174)
        int64_t rdx_7 = sx.q(rbx_5[1].d)
        char* rcx_19 = *rbx_5
        bool var_164_1 = rax_4 != 0
        int32_t var_168_1 = r15_1
        var_174 = *(arg2 + 8)
        
        if (rax_4 != 0)
            r15_1 = var_194
        
        int32_t var_16c_1 = r15_1
        void var_160
        sub_141825e10(arg1, &var_174, sub_140b3f690(rcx_19, rdx_7, &var_160))
        (*(*arg1 + 0x150))(arg1, *rbx_5, sx.q(rbx_5[1].d))
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
    
    char result_1 = not.b(*(arg1 + 0x29)) & 1
    sub_1405ae200(&var_a0)
    int64_t rcx_24 = var_b8:8.q
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    sub_140b4cb40(&var_148)
    result = zx.q(result_1)

__security_check_cookie(var_48 ^ &var_1d8)
return result
