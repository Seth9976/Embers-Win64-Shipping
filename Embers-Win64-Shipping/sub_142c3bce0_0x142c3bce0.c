// 函数: sub_142c3bce0
// 地址: 0x142c3bce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t var_38 = __security_cookie ^ &var_2a8
void* const rsi = &data_1436a10f8
int32_t i_3 = 0
int32_t rdi = 0
int32_t i_4
char var_244[0x4]
int32_t var_238[0x2]
int32_t var_230[0x2]

for (int32_t i = 0; i u< 2; )
    if (sub_142bf49d0(arg2, zx.d(*rsi), 0, &i_4, arg1) != 0)
        int16_t i_6 = i_4.w
        uint64_t i_5 = zx.q(i_3)
        i_3 += 1
        var_244[i_5 << 1] = (i_6 u>> 8).b
        var_243
        *(&var_243 + (i_5 << 1)) = i_6.b
        var_238[i_5] = 0
        var_230[i_5] = i
    
    i += 1
    rsi += 0x12

i_4 = i_3
sub_142c3aee0(&var_244, i_3, sub_142c3c660, &var_230)
int32_t var_180[0x8]
char var_160[0x10]
char var_150[0x18]
int64_t j_1
int32_t i_7

if (i_3 != 0)
    int64_t r12_1 = 0
    uint64_t i_2 = zx.q(i_3)
    uint64_t i_1
    
    do
        j_1 = 4
        void* rbx = &data_1436a10fc + zx.q(*(&var_230 + r12_1)) * 0x12
        int64_t j
        
        do
            uint32_t rdx_2 = zx.d(*(rbx - 2))
            int32_t var_240
            int32_t var_23c
            
            if (rdx_2 != 0 && sub_142bf49d0(arg2, rdx_2, 0, &var_23c, arg1) != 0
                    && sub_142bf49d0(arg2, zx.d(*rbx), 0, &var_240, arg1) != 0)
                int16_t rcx_6 = var_240.w
                *(&var_238 + r12_1) += 1
                uint64_t rdx_4 = zx.q(rdi)
                var_150[rdx_4 << 1] = (rcx_6 u>> 8).b
                var_14f
                *(&var_14f + (rdx_4 << 1)) = rcx_6.b
                int16_t rcx_7 = var_23c.w
                var_160[rdx_4 << 1] = (rcx_7 u>> 8).b
                rdi += 1
                var_180[rdx_4] = 2
                var_15f
                *(&var_15f + (rdx_4 << 1)) = rcx_7.b
            
            rbx += 4
            j = j_1
            j_1 -= 1
        while (j != 1)
        r12_1 += 4
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    i_7 = i_4

int64_t result

if (i_3 == 0 || rdi == 0)
    result = 0
else
    char var_200_1 = 1
    char var_138[0x100]
    char (* var_218_1)[0x100] = &var_138
    int64_t result_1 = 0
    int64_t* var_210_1 = &var_38
    int32_t var_220 = 0
    int32_t var_208_1 = &var_138
    int32_t var_260_1 = var_210_1.d - var_218_1.d
    int64_t* var_268_1 = &var_38
    char (* var_270_1)[0x100] = &var_138
    char const* const var_278_1 = "start [%p..%p] (%lu bytes)"
    int32_t var_280_1 = 1
    int64_t var_288_1 = 0
    int32_t var_1e8_1 = rdi
    char (* var_1f0_1)[0x10] = &var_160
    int32_t var_1d0_1 = rdi
    int32_t (* var_1d8_1)[0x8] = &var_180
    int32_t var_1b8_1 = rdi
    char (* var_1c0_1)[0x18] = &var_150
    int32_t i_8 = i_7
    int32_t (* var_1a8_1)[0x2] = &var_238
    int32_t i_9 = i_7
    char (* var_190_1)[0x4] = &var_244
    void var_1c8
    var_280_1.q = &var_1c8
    void var_1f8
    void var_1e0
    void var_1b0
    void var_198
    char rax_12 = sub_142c3d980(&var_138, &var_220, (j_1 + 8).d, &var_198, &var_1b0, var_280_1, 
        &var_1e0, &var_1f8)
    char const* const rdx_6 = "UNSUCCESSFUL"
    uint32_t count = var_208_1 - var_218_1.d
    
    if (var_200_1 != 0)
        rdx_6 = "successful"
    
    char const* const var_258_1 = rdx_6
    uint32_t count_1 = count
    int64_t* var_268_2 = var_210_1
    char (* var_270_3)[0x100] = var_218_1
    char const* const var_278_3 = "end [%p..%p] serialized %d bytes; %s"
    int32_t var_280_2 = 0xffffffff
    int64_t var_288_3 = 0
    
    if (rax_12 != 0)
        int64_t result_2 = j_sub_140a82f30(zx.q(count))
        result_1 = result_2
        
        if (result_2 != 0)
            memcpy(result_2, var_218_1, count)
    
    result = result_1

__security_check_cookie(var_38 ^ &var_2a8)
return result
