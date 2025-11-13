// 函数: sub_142778f30
// 地址: 0x142778f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_b8
int64_t rax_2 = __security_cookie ^ &var_b8

if ((*(*arg1 + 0x308))() != 0)
    void*** rax_4 = j_sub_140a82f30(0x30)
    void*** rdi_1 = rax_4
    
    if (rax_4 == 0)
        rdi_1 = nullptr
    else
        rax_4[1] = 0
        *rdi_1 = &data_142fc9648
        int32_t zmm6_1 = sub_140b58170(&rdi_1[1], &data_1437020ab, 1)
        int64_t zmm0_1 = *arg3
        *rdi_1 = &data_142fc96b0
        int32_t rax_5 = arg3[1].d
        *(rdi_1 + 0x14) = zmm0_1
        *(rdi_1 + 0x1c) = rax_5
        rdi_1[2].d = zmm6_1
        rdi_1[4].d = 4
        *(rdi_1 + 0x24) = 2
        rdi_1[5].d = 1
    
    void var_98
    int64_t var_88 = *sub_140b58170(&var_98, "DynamicState", 1)
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x2c)
    int32_t var_4c_1 = 0x80
    int32_t var_48_1 = 0xffffffff
    int32_t var_44_1 = 0
    int64_t var_38_1 = 0
    int32_t var_30_1 = 0
    sub_1427795e0(arg1, &var_88)
    int32_t var_30_2 = 0
    
    if (var_38_1 != 0)
        sub_140a74f90(var_38_1)
    
    sub_1409aaf90(&var_78)
    
    if (rdi_1 != 0)
        (**rdi_1)(rdi_1, 1)

__security_check_cookie(rax_2 ^ &var_b8)
