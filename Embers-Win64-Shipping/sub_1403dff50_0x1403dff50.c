// 函数: sub_1403dff50
// 地址: 0x1403dff50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rax_3

if (arg4 != 0 || *(arg1 + (sx.q(arg3) << 2) + 0x970) != arg4)
    rax_3 = sub_1403f73c0(arg2, &data_1436fc878, 8) + 2
else
    rax_3 = sub_1403f73c0(arg2, &data_1436fc87c, arg4.b + 8)

int32_t rcx_2 = rax_3
rax_3.b &= 1
char rcx_3 = (rcx_2 s>> 1).b
*(arg1 + 0xae6) = rax_3.b
*(arg1 + 0xae5) = rcx_3

if (arg5 != 2)
    *(arg1 + 0xac8) = sub_1403f73c0(arg2, &data_1436fd3b0 + (sx.q(rcx_3) << 3), 8) << 3
    char rax_8 = sub_1403f73c0(arg2, &data_1436fc868, 8)
    *(arg1 + 0xac8) += rax_8
else
    *(arg1 + 0xac8) = sub_1403f73c0(arg2, &data_1436fd3c8, 8)

int32_t i = 1

if (*(arg1 + 0x914) s> 1)
    void* rsi_1 = arg1 + 0xac9
    
    do
        i += 1
        rsi_1 += 1
        *(rsi_1 - 1) = sub_1403f73c0(arg2, &data_1436fd3c8, 8)
    while (i s< *(arg1 + 0x914))

int16_t* r8_1 = *(arg1 + 0xac0)
char rax_11 =
    sub_1403f73c0(arg2, sx.q((sx.d(*(arg1 + 0xae5)) s>> 1) * sx.d(*r8_1)) + *(r8_1 + 0x10), 8)
*(arg1 + 0xad0) = rax_11
void var_68
void var_58
sub_1403e6130(&var_58, &var_68, *(arg1 + 0xac0), sx.d(rax_11))
int32_t i_2 = 0
int32_t i_1 = 0

if (0 s< *(*(arg1 + 0xac0) + 2))
    void* rsi_2 = arg1 + 0xad1
    void* rbp = &var_58
    
    do
        int32_t rax_14 = sub_1403f73c0(arg2, sx.q(*rbp) + *(*(arg1 + 0xac0) + 0x28), 8)
        
        if (rax_14 == 0)
            rax_14 = neg.d(sub_1403f73c0(arg2, &data_1436fc85c, rax_14.b + 8))
        else if (rax_14 == 8)
            rax_14 = sub_1403f73c0(arg2, &data_1436fc85c, rax_14.b) + 8
        
        rax_14.b -= 4
        i_1 += 1
        rbp += 2
        *rsi_2 = rax_14.b
        rsi_2 += 1
    while (i_1 s< sx.d(*(*(arg1 + 0xac0) + 2)))

if (*(arg1 + 0x914) != 4)
    *(arg1 + 0xae7) = 4
else
    *(arg1 + 0xae7) = sub_1403f73c0(arg2, &data_1436fc8d0, 8)

if (*(arg1 + 0xae5) == 2)
    if (arg5 != 2 || *(arg1 + 0x968) != 2)
    label_1403e0200:
        int16_t rax_21 = sub_1403f73c0(arg2, &data_1436fcbb0, 8)
        int64_t rdx_6 = *(arg1 + 0x950)
        *(arg1 + 0xae2) = rax_21 * (*(arg1 + 0x90c) s>> 1).w
        int16_t rax_22 = sub_1403f73c0(arg2, rdx_6, 8)
        *(arg1 + 0xae2) += rax_22
    else
        int32_t rcx_19 = sx.d(sub_1403f73c0(arg2, &data_1436fcbd0, 8))
        
        if (rcx_19 s<= 0)
            goto label_1403e0200
        
        *(arg1 + 0xae2) = *(arg1 + 0x96c) - 9 + rcx_19.w
    
    int64_t rdx_7 = *(arg1 + 0x958)
    *(arg1 + 0x96c) = *(arg1 + 0xae2)
    *(arg1 + 0xae4) = sub_1403f73c0(arg2, rdx_7, 8)
    *(arg1 + 0xae8) = sub_1403f73c0(arg2, &data_1436fd400, 8)
    
    if (*(arg1 + 0x914) s> 0)
        void* rsi_3 = arg1 + 0xacc
        
        do
            i_2 += 1
            rsi_3 += 1
            *(rsi_3 - 1) = sub_1403f73c0(arg2, (&data_1436fd408)[sx.q(*(arg1 + 0xae8))], 8)
        while (i_2 s< *(arg1 + 0x914))
    
    if (arg5 != 0)
        *(arg1 + 0xae9) = 0
    else
        *(arg1 + 0xae9) = sub_1403f73c0(arg2, &data_1436fc864, 8)

*(arg1 + 0x968) = sx.d(*(arg1 + 0xae5))
char result = sub_1403f73c0(arg2, &data_1436fc848, 8)
*(arg1 + 0xaea) = result
__security_check_cookie(rax_1 ^ &var_88)
return result
