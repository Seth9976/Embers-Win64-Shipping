// 函数: sub_1426979e0
// 地址: 0x1426979e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void* rdi = *(arg4 + 0x10)
uint128_t* var_140 = arg2
uint64_t result

if (rdi == 0 || rdi == -8)
    result = 1
else
    int64_t* rcx = *arg1
    void* rax_3 = (*(*rcx + 0x150))(rcx)
    void* const rbx_1
    
    if (rax_3 == 0)
        rbx_1 = nullptr
    else
        rbx_1 = *(rax_3 + 0x120)
        
        if (rbx_1 == 0)
            rbx_1 = nullptr
        else
            void* rax_4 = sub_14269bba0()
            void* rdx = *(rbx_1 + 0x10)
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                rbx_1 = nullptr
    
    void* const var_f0_1 = rbx_1
    void** const var_f8 = &data_143459760
    void var_e8
    sub_140d3a3a0(&var_e8, arg5)
    int64_t var_e0_1 = 0
    void var_d8
    sub_1426022c0(&var_d8)
    uint32_t rax_7
    void* rbx_2
    
    if (data_143de5480 != 0)
        rbx_2 = &var_d8
        rax_7.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_7.b != 0)
        rbx_2 = &arg1[0xc]
    
    sub_142611af0(rbx_2, arg1[1], *(arg4 + 0x20), &var_f8)
    void* rcx_5 = *arg1
    int128_t* var_178_1 = nullptr
    uint128_t zmm2 = zx.o(*(rcx_5 + 0x26c))
    int32_t rax_8 = *(rcx_5 + 0x274)
    uint128_t* rax_9 = var_140
    int128_t zmm1_1 = _mm_max_ss((*(rcx_5 + 0x480)).d, 0)
    uint64_t var_158 = zmm2.q
    int32_t var_50_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55).d
    uint128_t zmm0_1 = *rax_9
    zmm1_1.d = zmm1_1.d f+ rax_8
    int32_t var_58 = zmm2.d
    int64_t var_148 = 0
    var_140.d = (zmm0_1 ^ 0x80000000).d
    int32_t var_54_1 = zmm1_1.d
    var_140:4.d = (*(rax_9 + 8)).d
    int32_t var_138_1 = (*(rax_9 + 4) ^ 0x80000000).d
    var_158.d = (*arg3 ^ 0x80000000).d
    int32_t var_150_2 = (*(arg3 + 4) ^ 0x80000000).d
    var_158:4.d = (*(arg3 + 8)).d
    int32_t var_108[0x4]
    sub_14260acd0(rbx_2, &var_140, &var_58, rdi + 8, &var_148, &var_108, var_178_1)
    
    if (var_148 == 0)
        sub_142602500(&var_d8)
        result = 1
    else
        int128_t* var_178_2 = nullptr
        int32_t var_118[0x4]
        int32_t* var_180_2 = &var_118
        int64_t var_130 = 0
        sub_14260acd0(rbx_2, &var_158, &var_58, rdi + 8, &var_130, var_180_2, var_178_2)
        int64_t r8_4 = var_130
        
        if (r8_4 == 0)
            sub_142602500(&var_d8)
            result = 1
        else
            int64_t rdx_5 = var_148
            int32_t* var_168_1 = nullptr
            int64_t var_128
            int64_t* var_170_1 = &var_128
            var_180_2.d = 0x7f7fffff
            int32_t* var_188_3 = &var_118
            var_128 = 0
            int64_t var_120_1 = 0
            int32_t rax_10 = sub_14260b290(rbx_2, rdx_5, r8_4, &var_108, var_188_3, var_180_2.d, 
                rdi + 8, var_170_1, var_168_1)
            
            if (arg6 != 0)
                *arg6 = *(rbx_2 + 0x78)
            
            if (((rax_10 u>> 0x1e).b & 1) == 0)
                uint32_t rbx_6
                rbx_6.b = not.b((rax_10 u>> 3).b)
                sub_142609160(var_128)
                sub_142602500(&var_d8)
                result = zx.q((rbx_6 & 1) + 1)
            else
                uint32_t rbx_3
                rbx_3.b = not.b((rax_10 u>> 6).b)
                sub_142609160(var_128)
                sub_142602500(&var_d8)
                result = (zx.q(rbx_3) & 1) | 2

__security_check_cookie(rax_1 ^ &var_1a8)
return result
