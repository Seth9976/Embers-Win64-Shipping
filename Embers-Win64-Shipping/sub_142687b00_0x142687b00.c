// 函数: sub_142687b00
// 地址: 0x142687b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
uint64_t var_58 = __security_cookie ^ &var_188
int32_t rdi = *(arg4 + 0x20)
uint64_t result

if (arg1[1] == 0 || rdi - 1 u> 0xfff)
    result.b = 0
else
    int64_t* rcx = *arg1
    void* rax_2 = (*(*rcx + 0x150))(rcx)
    void* const rsi_1
    
    if (rax_2 == 0)
        rsi_1 = nullptr
    else
        rsi_1 = *(rax_2 + 0x120)
        
        if (rsi_1 == 0)
            rsi_1 = nullptr
        else
            void* rax_3 = sub_14269bba0()
            void* rdx = *(rsi_1 + 0x10)
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                rsi_1 = nullptr
    
    void* const var_118_1 = rsi_1
    void** const var_120 = &data_143459760
    void var_110
    sub_140d3a3a0(&var_110, arg5)
    int64_t var_108_1 = 0
    void var_f8
    sub_1426022c0(&var_f8)
    uint32_t rax_6
    void* rsi_2
    
    if (data_143de5480 != 0)
        rsi_2 = &var_f8
        rax_6.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_6.b != 0)
        rsi_2 = &arg1[0xc]
    
    sub_142611af0(rsi_2, arg1[1], rdi, &var_120)
    void* rax_7 = *(arg4 + 0x10)
    uint64_t* rbx
    
    if (rax_7 == 0 || rax_7 == -8)
        rbx.b = 0
    else
        void* rcx_5 = *arg1
        int128_t* var_158_1 = nullptr
        int32_t* var_160_1 = nullptr
        float rax_8 = *(rcx_5 + 0x274)
        uint128_t zmm2 = zx.o(*(rcx_5 + 0x26c))
        float temp0_1 = _mm_max_ss(*(rcx_5 + 0x480), 0)
        uint128_t zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        int32_t var_68 = zmm2.d
        int32_t var_60_1 = zmm0_1.d
        zmm0_1 = *(arg2 + 8)
        zmm2 = *(arg2 + 4) ^ data_142d3f780
        int32_t var_78 = (*arg2 ^ data_142d3f780).d
        int32_t var_74_1 = zmm0_1.d
        float var_64_1 = temp0_1 + rax_8
        int32_t var_70_1 = zmm2.d
        int64_t var_140 = 0
        int128_t zmm6_1 =
            sub_14260acd0(rsi_2, &var_78, &var_68, rax_7 + 8, &var_140, var_160_1, var_158_1)
        int32_t rcx_7 = *(arg6 + 0xc)
        int32_t rdx_4 = 0
        
        if (rdi s> rcx_7)
            arg6[1].d = 0
            
            if (rdi != rcx_7)
                sub_1405c5570(arg6, rdi)
                rdx_4 = arg6[1].d
                rcx_7 = *(arg6 + 0xc)
        
        int32_t rax_10 = rdx_4 + rdi
        arg6[1].d = rax_10
        
        if (rax_10 s> rcx_7)
            sub_1405a4d70(arg6)
        
        int64_t rdx_6 = var_140
        int32_t var_148
        int32_t* var_158_2 = &var_148
        int64_t* var_160_2 = *arg6
        var_148 = 0
        sub_14260bde0(rsi_2, rdx_6, &var_78, zmm6_1, rax_7 + 8, var_160_2, var_158_2, rdi)
        
        if (arg6[1].d != var_148)
            arg6[1].d = var_148
            sub_1405c53d0(arg6)
        
        if (arg7 != 0)
            sub_142697020(rsi_2, arg1[1], arg7)
        
        rbx.b = arg6[1].d s> 0
    
    sub_142602500(&var_f8)
    result = zx.q(rbx.b)

__security_check_cookie(var_58 ^ &var_188)
return result
