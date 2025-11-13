// 函数: sub_1405d6d90
// 地址: 0x1405d6d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = sx.d(arg1[0x1c].b)
int32_t arg_8

if (rcx == 1)
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(arg1[0x17].d)
    arg_8 = (temp3_1 - temp2_1) s>> 1
    arg2 = *(arg1 + 0xbc)
else if (rcx == 2)
    int32_t temp5_1
    int32_t temp6_1
    temp5_1:temp6_1 = muls.dp.d(0x2aaaaaab, arg1[0x17].d + 0x2f)
    int32_t rdx_3 = temp5_1 s>> 3
    arg_8 = (rdx_3 + (rdx_3 u>> 0x1f)) << 3
    arg2 = *(arg1 + 0xbc)
else if (rcx == 5)
    (*(*arg1 + 0x2c8))(arg1, &arg_8)
else
    arg_8.q = arg1[0x17]

*(arg1 + 0xc4) = arg_8
arg1[0x19].d = arg2
int32_t rcx_6 = sx.d(arg1[0x1c].b)
int32_t rax_11

if (rcx_6 == 1)
    rax_11 = 2
else if (rcx_6 == 2)
    rax_11 = 0x30
else if (rcx_6 == 5)
    rax_11 = (*(*arg1 + 0x2d0))(arg1)
else
    rax_11 = arg1[0x18].d

*(arg1 + 0xcc) = rax_11
int64_t arg_10 = *(arg1[0xa] + 0x18)
int16_t* var_28
sub_140b63b70(&arg_10, &var_28)
int16_t* const rsi = &data_142d40450
int32_t var_20

if (var_20 != 0)
    rsi = var_28

if (arg1[0x1d] != rsi)
    int32_t rdx_9 = 0
    int32_t rbx_2
    
    if (rsi == 0 || *rsi == 0)
        rbx_2 = 0
    else
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rsi[rbx_1] != 0)
        
        rbx_2 = rbx_1.d + 1
    
    arg1[0x1e].d = 0
    
    if (*(arg1 + 0xf4) != rbx_2)
        sub_1405947f0(&arg1[0x1d], rbx_2)
        rdx_9 = arg1[0x1e].d
    
    int32_t rax_14 = rdx_9 + rbx_2
    arg1[0x1e].d = rax_14
    
    if (rax_14 s> *(arg1 + 0xf4))
        sub_140594770(&arg1[0x1d])
    
    if (rbx_2 != 0)
        memcpy(arg1[0x1d], rsi, rbx_2 * 2)

int16_t* rcx_15 = var_28

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

char rax_16 = (*(*arg1 + 0x2a8))(arg1)
char result = *(arg1 + 0xfb)
*(arg1 + 0xfb) = rax_16
return result
