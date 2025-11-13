// 函数: sub_141a5b0b0
// 地址: 0x141a5b0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8

if ((*(arg1 + 0x45c) & 2) != 0)
    int64_t rbx_1 = sx.q(arg1[0x90].d)
    int32_t rax_1 = (rbx_1 + 1).d
    arg1[0x90].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x484))
        sub_14083a7e0(&arg1[0x8f])
    
    int64_t rcx_1 = arg1[0x8f]
    int64_t rdx_2 = rbx_1 * 3
    int32_t arg_c = (zx.o(0)).d
    arg_8 = 0
    int64_t rax = arg_8.q
    *(rcx_1 + (rdx_2 << 2)) = 1
    *(rcx_1 + (rdx_2 << 2) + 4) = rax
else if (arg1[0x8b].b == 1)
    int64_t* rbx_2 = arg1[0x109]
    int64_t var_e0 = *(arg1 + 0x7d4)
    arg1[0x8b].b = 6
    int64_t var_d8_1 = arg1[0xf8]
    (*(*rbx_2 + 0x18))(rbx_2, &var_e0)
    
    if (rbx_2[3].b != 0)
        rbx_2[3].b = 0
    
    if (*(arg1 + 0x884) != 0)
        *(arg1 + 0x884) = 0
    
    *(arg1 + 0x45c) |= 2
    sub_1408ec700(&arg_8, *(arg1 + 0x7d4), arg1[0xf8], arg1[0xf9])
    int64_t rax_5 = arg_8.q
    char var_74
    char var_74_1 = var_74 & 0xc0
    int64_t var_104_1 = rax_5
    int64_t var_f0_1 = arg1[0xf9]
    int128_t var_b8_1 = rax_5.o
    int32_t var_a0_1 = 0x3f800000
    char var_fc_1 = 1
    int32_t var_e4_1 = 0x80000000
    int128_t var_88_1 = data_142e1c7b0
    uint128_t var_c8 = 1.o
    uint64_t var_a8_1 = 0.q
    int32_t var_98_1 = 0
    int32_t var_9c_1 = 0
    int64_t var_90_1 = 0
    int32_t var_78_1 = 0
    void var_68
    uint128_t zmm0_2
    int512_t zmm1_2
    zmm0_2, zmm1_2 =
        sub_141a474c0(&arg1[0x94], sub_141a2f010(&var_68, &var_c8), &arg1[5], data_143f29fb0)
    *(arg1 + 0x45c) &= 0xfffffffd
    
    if (var_90_1 != 0)
        zmm0_2, zmm1_2 = sub_140a74f90(var_90_1)
    
    sub_141a3a160(arg1, zmm1_2, zmm0_2)
    
    if (sub_141a53830(arg1) != 0)
        arg1[0x105] = *(arg1 + 0x7d4)
        arg1[0x106].b = arg1[0x8b].b
        *(arg1 + 0x834) = arg1[0x8e].d
    
    sub_140d3c6e0(&arg1[0x94])
    
    if (arg1[0x88].d s> 0)
        sub_1405a9f90(&arg1[0x87], 0)
