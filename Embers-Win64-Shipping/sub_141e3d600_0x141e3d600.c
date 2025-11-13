// 函数: sub_141e3d600
// 地址: 0x141e3d600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = *(arg1 + 0x28)
char arg_8
char* var_40 = &arg_8
int32_t i = 0
void*** (* var_48)() = j_sub_141a7e490
arg_8 = 0
void* rax = sub_140a756e0(&var_48, &data_143a2d2b0)
int32_t rsi = 0
uint64_t result = zx.q(*(rax + 0x1c))
*(rax + 0x18) = 0

if (result.d s< 0 && result.d != 0)
    result = sub_1405c5510(rax + 0x10, 0)
    rsi = *(rax + 0x18)

if (rbp s> rsi)
    *(rax + 0x18) = rbp
    
    if (rbp s> *(rax + 0x1c))
        sub_140679a80(rax + 0x10)
    
    result = memset(sx.q(rsi) + *(rax + 0x10), 0, sx.q(rbp - rsi))
else if (rbp s< rsi && rbp != rsi)
    *(rax + 0x18) = rbp
    result = sub_1405dac10(rax + 0x10)

if (arg2[1].d s> 0)
    int16_t* rsi_1 = nullptr
    
    do
        result = *arg2
        uint64_t rcx_6 = *(rax + 0x10)
        int16_t rdx_1 = *(rsi_1 + result)
        
        if (rdx_1 == 0)
            *rcx_6 = 1
            i += 1
            rsi_1 = &rsi_1[1]
        else
            uint64_t rax_1 = zx.q(rdx_1)
            *(rcx_6 + rax_1) = 1
            int64_t r15_3 = sx.q(*(*(arg1 + 0x20) + rax_1 * 0xc + 8))
            result = *(rax + 0x10)
            
            if (*(r15_3 + result) != 0)
                i += 1
                rsi_1 = &rsi_1[1]
            else
                int32_t rbp_1 = arg2[1].d
                arg2[1].d = rbp_1 + 1
                
                if (rbp_1 + 1 s> *(arg2 + 0xc))
                    sub_140594770(arg2)
                
                int64_t rdx_3 = *arg2 + (sx.q(i) << 1)
                memmove(rdx_3 + 2, rdx_3, (rbp_1 - i) * 2)
                *(rsi_1 + *arg2) = r15_3.w
                result = *(rax + 0x10)
                *(r15_3 + result) = 1
    while (i s< arg2[1].d)

return result
