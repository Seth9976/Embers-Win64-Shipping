// 函数: sub_1419092f0
// 地址: 0x1419092f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ff49a8

if (data_143f01c92 != 0)
    sub_140a80f40()

int32_t rax = arg1[5].d

if (rax != 0)
    int32_t rcx = arg1[7].d
    int32_t var_64_1 = *(arg1 + 0x5c)
    uint8_t var_60_1 = (rcx u>> 2).b & 1
    int64_t rax_4 = arg1[9]
    int32_t var_50_1 = rcx u>> 3 & 1
    void*** rax_5 = sub_140a82f30(0x28, 8)
    *rax_5 = &data_142ff5d08
    *(rax_5 + 8) = rax.o
    *(rax_5 + 0x18) = rax_4.o
    void*** var_38_1 = rax_5
    int64_t (* var_48)(int32_t* arg1)
    int64_t (* rax_6)(int32_t* arg1) = var_48
    
    if (rax_5 != -8)
        rax_6 = sub_14190a530
    
    var_48 = rax_6
    sub_14195af10(&var_48, 0, arg3, arg4)
    *(arg1 + 0x5c)
    arg1[9] = 0
    int64_t rcx_6 = arg1[0xa]
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
        arg1[0xa] = 0
        arg1[0xb].d = 0

int64_t rcx_7 = arg1[4]
*arg1 = &data_142ff4968

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
