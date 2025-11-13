// 函数: sub_1426860c0
// 地址: 0x1426860c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t* result = __security_cookie ^ &var_178
int64_t* result_1 = result

if (*(arg1 + 8) != 0)
    void var_f8
    sub_1426022c0(&var_f8)
    uint32_t rax_1
    void* r15_1
    
    if (data_143de5480 != 0)
        r15_1 = &var_f8
        rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_1.b != 0)
        r15_1 = arg1 + 0x60
    
    sub_142611af0(r15_1, *(arg1 + 8), 0x800, nullptr)
    int64_t i = 0
    int32_t rsi_2 = arg2[1].d - 1
    arg3[1].d = 0
    
    if (*(arg3 + 0xc) != rsi_2)
        sub_1405a51b0(arg3, rsi_2)
    
    if (rsi_2 s> 0)
        do
            int64_t rdx_2 = *arg2
            uint8_t var_137 = 0
            int64_t var_64_1 = 0
            int32_t var_78 = 0
            int64_t var_74_1 = 0
            uint8_t var_138
            uint8_t* var_148_1 = &var_138
            uint8_t* var_150_1 = &var_137
            var_138 = 0
            int32_t var_68 = 0
            sub_142610700(r15_1, *(rdx_2 + (i << 3)), *(rdx_2 + (i << 3) + 8), &var_68, &var_78, 
                var_150_1, var_148_1)
            int64_t rsi_3 = sx.q(arg3[1].d)
            float zmm4_1[0x4] = var_78 ^ 0x80000000
            float var_128_1 = var_64_1.d[0]
            float var_11c_1 = var_74_1.d[0]
            int64_t rax_4 = *arg2
            int64_t var_130_1 =
                (_mm_unpacklo_ps(var_68 ^ 0x80000000, (var_64_1:4.d ^ 0x80000000).q)).q
            int32_t rax_5 = (rsi_3 + 1).d
            int64_t var_124_1 = (_mm_unpacklo_ps(zmm4_1, (var_74_1:4.d ^ 0x80000000).q)).q
            int64_t var_118_1 = *(rax_4 + (i << 3) + 8)
            arg3[1].d = rax_5
            
            if (rax_5 s> *(arg3 + 0xc))
                sub_1405c4e40(arg3)
            
            uint64_t rax_6 = *arg3
            int64_t rcx_7 = rsi_3 << 5
            i += 1
            *(rcx_7 + rax_6) = var_130_1.o
            *(rcx_7 + rax_6 + 0x10) = var_124_1:4.o
        while (i s< sx.q(rsi_2))
    
    result = sub_142602500(&var_f8)

__security_check_cookie(result_1 ^ &var_178)
return result
