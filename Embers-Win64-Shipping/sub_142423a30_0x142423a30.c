// 函数: sub_142423a30
// 地址: 0x142423a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int16_t* const rsi = &data_142d40450
int16_t* const rdx = &data_142d40450

if (data_143f5bc68 != 0)
    rdx = data_143f5bc60

int16_t* const rcx

if (arg1[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg1

if (sub_140a54510(rcx, rdx) != 0 || arg3 != 0)
    int32_t rax_1 = arg1[1].d
    int32_t r8 = rax_1 - 1
    
    if (rax_1 == 0)
        r8 = 0
    
    sub_140a20ba0(arg2, *arg1, r8)
    sub_140a20ba0(arg2, &data_142d84ee0, 1)
    int16_t* const rdx_2 = &data_142d40450
    
    if (data_143f5bc88.d != 0)
        rdx_2 = data_143f5bc80
    
    int16_t* const rcx_3
    
    if (arg1[3].d == 0)
        rcx_3 = &data_142d40450
    else
        rcx_3 = arg1[2]
    
    if (sub_140a54510(rcx_3, rdx_2) != 0)
        sub_140a20ba0(arg2, &data_142e76608, 2)

int16_t* const rdx_3 = &data_142d40450

if (data_143f5bc88.d != 0)
    rdx_3 = data_143f5bc80

if (arg1[3].d != 0)
    rsi = arg1[2]

if (sub_140a54510(rsi, rdx_3) != 0 || arg1[4].d != data_143f5bcb0)
    int64_t var_28
    int64_t* rax_5 = sub_142411900(arg1, &var_28)
    int32_t rcx_7 = rax_5[1].d
    int32_t r8_1 = rcx_7 - 1
    
    if (rcx_7 == 0)
        r8_1 = 0
    
    sub_140a20ba0(arg2, *rax_5, r8_1)
    int64_t rcx_9 = var_28
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    if (sub_140a32ae0(&arg1[5], &data_142d5a024, 1) == 0 && sub_140a32ae0(&arg1[5], &(*{}[\nt")[3], 
            1) == 0)
        sub_140a20ba0(arg2, &data_142d5a024, 1)

int32_t rcx_13 = arg1[6].d
int32_t rax_8 = rcx_13 - 1

if (rcx_13 == 0)
    rax_8 = -1

int32_t r8_2 = rcx_13 - 1

if (rcx_13 == 0)
    rax_8 = 0

if (rcx_13 == 0)
    r8_2 = -1

if (rax_8 s> 0)
    if (rcx_13 == 0)
        r8_2 = 0
    
    sub_140a20ba0(arg2, arg1[5], r8_2)

int32_t i = 0

if (arg1[0xa].d s> 0)
    int64_t r14_1 = 0
    
    do
        sub_140a20ba0(arg2, &data_142e5f8f8, 1)
        int64_t* rdx_7 = arg1[9]
        int32_t rax_9 = *(rdx_7 + r14_1 + 8)
        int32_t r8_3 = rax_9 - 1
        
        if (rax_9 == 0)
            r8_3 = 0
        
        sub_140a20ba0(arg2, *(rdx_7 + r14_1), r8_3)
        i += 1
        r14_1 += 0x10
    while (i s< arg1[0xa].d)

int32_t rax_10 = arg1[0xc].d

if (rax_10 != 0 && rax_10 - 1 s> 0)
    sub_140a20ba0(arg2, &data_142d90624, 1)
    int32_t rax_12 = arg1[0xc].d
    int32_t r8_4 = rax_12 - 1
    
    if (rax_12 == 0)
        r8_4 = 0
    
    sub_140a20ba0(arg2, arg1[0xb], r8_4)

return arg2
