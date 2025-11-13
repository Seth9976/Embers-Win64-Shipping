// 函数: sub_14192f8e0
// 地址: 0x14192f8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ff7468

if (data_143f0f19c != 0)
    sub_140a80e70()
    sub_1419415b0(arg1)
    int64_t rax_1 = arg1[0xe]
    int32_t var_70_1 = arg1[0x10].d
    int32_t var_6c_1 = arg1[0x12].d
    int32_t rax_4 = *(arg1 + 0x84)
    int32_t var_64_1 = arg1[8].d
    int64_t var_60_1 = arg1[0x16]
    uint8_t rax_8 = (arg1[0x13].d u>> 0x1f).b
    void*** rax_9 = sub_140a82f30(0x30, 8)
    *rax_9 = &data_142ff5cc8
    *(rax_9 + 8) = rax_1.o
    *(rax_9 + 0x18) = rax_4.o
    rax_9[5] = rax_8.q
    void*** var_38_1 = rax_9
    void (* var_48)(int64_t* arg1)
    void (* rax_10)(int64_t* arg1) = var_48
    
    if (rax_9 != -8)
        rax_10 = j_sub_14192d800
    
    var_48 = rax_10
    sub_14195af10(&var_48, 0, arg3, arg4)
    int64_t rcx_3 = arg1[0x16]
    
    if (rcx_3 != 0)
        j_sub_140a74f90(rcx_3)
        arg1[0x16] = 0
    
    sub_14194b1a0(arg1[0xe], arg1)

int64_t rcx_5 = arg1[0x1b]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x17]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_140fda0a0(&arg1[0x14])
*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
