// 函数: sub_142b434d0
// 地址: 0x142b434d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t rbp = 0
int32_t rsi

if (sub_142b46530(arg1, 0) != 0x2b)
    rsi = 0
else
    rsi = -1
    rbx = 1

if (rbx s< sub_142b467c0(arg1))
    int32_t rax_3
    
    do
        if (sub_142b46530(arg1, rbx) != 0x23)
            break
        
        rsi += 1
        rbx += 1
        rax_3 = sub_142b467c0(arg1)
    while (rbx s< rax_3)

if (rbx s< sub_142b467c0(arg1) && rbx s< sub_142b467c0(arg1))
    int32_t rax_7
    
    do
        if (sub_142b46530(arg1, rbx) != 0x30)
            break
        
        rbp += 1
        rbx += 1
        rax_7 = sub_142b467c0(arg1)
    while (rbx s< rax_7)

int32_t r14 = rsi + rbp

if (rsi == 0xffffffff)
    r14 = rsi

int32_t result = sub_142b467c0(arg1)

if (rbx s>= result)
    int16_t var_38
    int16_t* rax_8 = sub_142b4a860(&var_38, rbp)
    void var_2c
    
    if (r14 != 0xffffffff)
        rax_8 = sub_142b4a7f0(rax_8, &var_2c, r14, rax_8.d)
    *(arg2 + 0x7c) = *rax_8
    result = *(rax_8 + 8)
    *(arg2 + 0x84) = result
else
    *arg3 = 0x10113

return result
