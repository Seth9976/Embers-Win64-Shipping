// 函数: sub_142635550
// 地址: 0x142635550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t i_1 = 0
int32_t r14 = arg1
int64_t rbp = sx.q(arg3)
uint64_t rsi = zx.q(arg4.d)
int32_t var_70 = arg2
int16_t r15 = 0
int32_t var_74 = arg1
int32_t var_68 = arg4.d
int32_t var_6c = rbp.d
int16_t var_78 = 0
uint32_t r9 = zx.d((*(*(arg5 + 0x48) + rbp * 0xc + 4) u>> (arg4 << 3).b).b)
int128_t var_60
int128_t var_50

if (r9 != 0xff)
    uint64_t rax_4 = zx.q(rsi.d) & 3
    __builtin_memcpy(&var_60, 
        "\xff\xff\xff\xff\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x"
    "00\x00\x00\x00\x00\xff\xff\xff\xff", 
        0x20)
    int32_t rdx_5 = *(*(arg5 + 0x40) +
        (sx.q((*(&var_50 + (rax_4 << 2)) + arg2) * *arg5 + *(&var_60 + (rax_4 << 2)) + r14) << 2))
        & 0xffffff
    r15 = *(arg6 + (zx.q(rdx_5 + r9) << 1))
    var_78 = r15

sub_142633840(arg7, arg7[1].d + 1)
int32_t r13 = 1
int32_t r9_1 = var_70
*(*arg7 + (sx.q(arg7[1].d) << 2) - 4) = zx.d(r15)
int64_t result

while (true)
    uint32_t r15_1 = zx.d((*(*(arg5 + 0x48) + sx.q(rbp.d) * 0xc + 4) u>> (rsi << 3).b).b)
    
    if (sub_14262cf90(arg5, arg6, r14, r9_1, rbp.d, rsi.d) == 0)
        var_60 = data_142fc59d0
        result = zx.q(rsi.d) & 3
        int64_t rcx_21 = result << 2
        r14 += *(&var_60 + rcx_21)
        var_60 = data_14344e350
        r9_1 += *(&var_60 + rcx_21)
        var_74 = r14
        var_70 = r9_1
        
        if (r15_1 == 0xff)
            break
        
        result = 3
        rbp = zx.q((*(*(arg5 + 0x40) + (sx.q(*arg5 * r9_1 + r14) << 2)) & 0xffffff) + r15_1)
    else
        int16_t r14_1 = 0
        
        if (r15_1 != 0xff)
            uint64_t rax_11 = zx.q(rsi.d) & 3
            __builtin_memcpy(&var_60, 
                "\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\x00\x"
            "00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00", 
                0x20)
            int32_t rdx_15 = *(*(arg5 + 0x40) + (sx.q((*(&var_60 + (rax_11 << 2)) + r9_1) * *arg5
                + *(&var_50 + (rax_11 << 2)) + var_74) << 2)) & 0xffffff
            r14_1 = *(arg6 + (zx.q(rdx_15 + r15_1) << 1))
        
        if (r14_1 != var_78)
            var_78 = r14_1
            sub_142633840(arg7, arg7[1].d + 1)
            r9_1 = var_70
            *(*arg7 + (sx.q(arg7[1].d) << 2) - 4) = zx.d(r14_1)
        
        r14 = var_74
        result = 1
    
    rsi = zx.q(rsi.d + result.d) & 3
    
    if (var_6c != rbp.d || var_68 != rsi.d)
        r13 += 1
        
        if (r13 s< 0x9c40)
            continue
    
    int32_t r9_2 = arg7[1].d
    
    if (r9_2 s> 1 && r9_2 s> 0)
        int64_t result_1 = 0
        
        do
            int32_t* r8_2 = *arg7
            result = sx.q(mods.dp.d(sx.q(i_1 + 1), r9_2))
            
            if (*(r8_2 + result_1) != r8_2[result])
                i_1 += 1
                result_1 += 4
            else
                result = zx.q(r9_2 - 1)
                int32_t i = i_1
                int32_t rdx_22 = r9_2
                
                if (i_1 s< result.d)
                    result = result_1
                    
                    do
                        int32_t* rdx_23 = *arg7
                        result += 4
                        i += 1
                        *(rdx_23 + result - 4) = *(rdx_23 + result)
                        rdx_22 = arg7[1].d
                    while (i s< rdx_22 - 1)
                
                r9_2 = rdx_22
                
                if (rdx_22 s> 0)
                    r9_2 = rdx_22 - 1
                    arg7[1].d = r9_2
        while (i_1 s< r9_2)
    
    break

__security_check_cookie(rax_1 ^ &var_a8)
return result
