// 函数: sub_142778cb0
// 地址: 0x142778cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_e8
int64_t rax_2 = __security_cookie ^ &var_e8

if ((*(*arg1 + 0x308))() != 0)
    void*** rax_4 = j_sub_140a82f30(0x38)
    void*** rdi_1 = rax_4
    int512_t zmm1
    
    if (rax_4 == 0)
        rdi_1 = nullptr
    else
        rax_4[1] = 0
        *rax_4 = &data_142fc9648
        int32_t zmm6_1
        zmm1, zmm6_1 = sub_140b58170(&rax_4[1], &data_1437020ab, 1)
        int64_t zmm0_1 = *arg3
        *rdi_1 = &data_142fc9720
        int32_t rax_5 = arg3[1].d
        *(rdi_1 + 0x24) = zmm0_1
        *(rdi_1 + 0x2c) = rax_5
        rdi_1[2].d = zmm6_1
        rdi_1[4].d = arg4.d
        *(rdi_1 + 0x14) = 0
        rdi_1[3] = 0x3f800000
        rdi_1[6].d = 1
    
    void*** rax_6 = j_sub_140a82f30(0x20)
    void*** rsi_1 = rax_6
    
    if (rax_6 == 0)
        rsi_1 = nullptr
    else
        rax_6[1] = 0
        *rax_6 = &data_142fc9648
        int32_t zmm6_2
        zmm1, zmm6_2 = sub_140b58170(&rax_6[1], &data_1437020ab, 1)
        int64_t zmm0_2 = *arg3
        *rsi_1 = &data_142fc9838
        int32_t rax_7 = arg3[1].d
        *(rsi_1 + 0x14) = zmm0_2
        *(rsi_1 + 0x1c) = rax_7
        rsi_1[2].d = zmm6_2
    
    void*** rax_8
    int64_t rdx
    rax_8, rdx = j_sub_140a82f30(0x38)
    void*** rdi_2
    
    if (rax_8 == 0)
        rdi_2 = nullptr
    else
        zmm1.o = 0x3f800000
        rdi_2 = sub_1417bf890(rax_8, rdx, rdi_1, rsi_1, 0, 0)
    
    void var_b8
    int64_t var_a8 = *sub_140b58170(&var_b8, "LinearForce", 1)
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t var_6c_1 = 0x80
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    sub_1427795e0(arg1, &var_a8)
    int32_t var_50_2 = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    sub_1409aaf90(&var_98)
    
    if (rdi_2 != 0)
        (**rdi_2)(rdi_2, 1)

__security_check_cookie(rax_2 ^ &var_e8)
