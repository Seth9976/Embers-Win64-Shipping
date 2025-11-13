// 函数: sub_1426c0760
// 地址: 0x1426c0760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0)
    int16_t* const rax_9 = &data_142d40450
    int16_t* rdx_5
    
    if (arg5[1].d == 0)
        rdx_5 = &data_142d40450
    else
        rdx_5 = *arg5
    
    if (*(arg1 + 0x38) != 0)
        rax_9 = *(arg1 + 0x30)
    
    int32_t rax_10
    rax_10.b = sub_140a54510(rax_9, rdx_5) == 0
    return rax_10

if (arg4 == 1)
    int16_t* const rax_7 = &data_142d40450
    int16_t* rdx_3
    
    if (arg5[1].d == 0)
        rdx_3 = &data_142d40450
    else
        rdx_3 = *arg5
    
    if (*(arg1 + 0x38) != 0)
        rax_7 = *(arg1 + 0x30)
    
    int32_t rax_8
    rax_8.b = sub_140a54510(rax_7, rdx_3) != 0
    return rax_8

if (arg4 == 2)
    int16_t* rax_5
    
    if (arg5[1].d == 0)
        rax_5 = &data_142d40450
    else
        rax_5 = *arg5
    
    int32_t rax_6
    rax_6.b = sub_140a23cf0(arg1 + 0x30, rax_5, 1, 0, 0xffffffff) != 0xffffffff
    return rax_6

if (arg4 != 3)
    int64_t rax
    rax.b = 0
    return rax

int16_t* rax_2

if (arg5[1].d == 0)
    rax_2 = &data_142d40450
else
    rax_2 = *arg5

int32_t rax_3
rax_3.b = sub_140a23cf0(arg1 + 0x30, rax_2, 1, 0, 0xffffffff) == 0xffffffff
return rax_3
