// 函数: sub_142635270
// 地址: 0x142635270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rsi = arg2
int32_t rbp = arg4
int32_t i_1 = 0
int128_t var_50 = data_142fc59d0
int16_t r12 = 0
int64_t r14 = sx.q(arg3)
void* rax_2 = *arg5
int32_t var_64 = arg2
int32_t var_68 = arg1
uint32_t r10 = zx.d(*(rax_2 + 0x32))
uint32_t r13 = zx.d(*(rax_2 + 0x30))
int32_t var_5c = r14.d
uint64_t rcx = (zx.q(arg4) & 3) << 2
int32_t r9 = *(&var_50 + rcx)
var_50 = data_14344e350
int32_t r8_1 = *(&var_50 + rcx) + rsi
int32_t r9_1 = r9 + arg1

if (r9 + arg1 s>= 0 && r9_1 s< r13 && r8_1 s>= 0 && r8_1 s< r10
        && ((1 << rbp.b).b & *(r14 + arg5[4])) != 0)
    r12 = *(arg6 + (sx.q(r9_1 + r8_1 * r13) << 1))

sub_142616290(arg7, arg7[1].d + 1)
int32_t r15 = 1
*(*arg7 + (sx.q(arg7[1].d) << 2) - 4) = zx.d(r12)
__builtin_memcpy(&var_50, 
    "\xff\xff\xff\xff\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x"
"00\x00\x00\x00\xff\xff\xff\xff", 
    0x20)
int64_t result

while (true)
    uint64_t rcx_5 = (zx.q(rbp) & 3) << 2
    int32_t r11_2 = var_68 + *(&var_50 + rcx_5)
    int128_t var_40
    int32_t r9_3 = *(&var_40 + rcx_5) + rsi
    int32_t r8_5 = r9_3 * r13 + r11_2
    int64_t r10_1
    
    if (r11_2 s>= 0 && r11_2 s< r13 && r9_3 s>= 0 && r9_3 s< r10)
        r10_1 = sx.q(r14.d)
    
    int16_t rsi_1
    
    if (r11_2 s< 0 || r11_2 s>= r13 || r9_3 s< 0 || r9_3 s>= r10
            || ((1 << rbp.b).b & *(r10_1 + arg5[4])) == 0)
        rcx_5.b = 0
        r10_1 = sx.q(r14.d)
        rsi_1 = 0
    else
        rcx_5.b = 1
        rsi_1 = *(arg6 + (sx.q(r8_5) << 1))
    
    result = arg6
    
    if (rsi_1 == *(result + (r10_1 << 1)))
        if (rcx_5.b == 0)
            break
        
        if (r8_5 == 0xffffffff)
            break
        
        var_68 = r11_2
        rsi = r9_3
        var_64 = r9_3
        r14 = zx.q(r8_5)
        result = 3
    else
        if (rsi_1 != r12)
            r12 = rsi_1
            sub_142616290(arg7, arg7[1].d + 1)
            *(*arg7 + (sx.q(arg7[1].d) << 2) - 4) = zx.d(rsi_1)
        
        rsi = var_64
        result = 1
    
    rbp = (rbp + result.d) & 3
    
    if (var_5c != r14.d || arg4 != rbp)
        r15 += 1
        
        if (r15 s< 0x9c40)
            continue
    
    int32_t r9_4 = arg7[1].d
    
    if (r9_4 s> 1 && r9_4 s> 0)
        int32_t* result_1 = nullptr
        
        do
            int64_t r8_6 = *arg7
            result = sx.q(mods.dp.d(sx.q(i_1 + 1), r9_4))
            
            if (*(result_1 + r8_6) != *(r8_6 + (result << 2)))
                i_1 += 1
                result_1 = &result_1[1]
            else
                result = zx.q(r9_4 - 1)
                int32_t i = i_1
                int32_t rdx_12 = r9_4
                
                if (i_1 s< result.d)
                    result = result_1
                    
                    do
                        int32_t* rdx_13 = *arg7
                        result += 4
                        i += 1
                        *(rdx_13 + result - 4) = *(rdx_13 + result)
                        rdx_12 = arg7[1].d
                    while (i s< rdx_12 - 1)
                
                r9_4 = rdx_12
                
                if (rdx_12 s> 0)
                    r9_4 = rdx_12 - 1
                    arg7[1].d = r9_4
        while (i_1 s< r9_4)
    
    break

__security_check_cookie(rax_1 ^ &var_88)
return result
