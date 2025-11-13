// 函数: sub_141be8cc0
// 地址: 0x141be8cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if ((*(arg1 + 0x795) & 1) == 0)
    *(arg1 + 0x758) = 0
    int64_t* rdi_1
    
    if (sub_140d3c6e0(arg1 + 0x418) == 0 || *(arg1 + 0x420) == 0)
        rdi_1 = arg1 + 0x28
    else
        int32_t arg_c = 0
        void var_98
        char* rax_3 = sub_141a2f700(&var_98, (*(arg1 + 0x740)).q, *(arg1 + 0x738))
        char var_a4
        char var_a4_1 = var_a4 & 0xc0
        int64_t var_cc_1 = 0
        int64_t var_c0_1 = 0
        rdi_1 = arg1 + 0x28
        int64_t var_b8_1 = 0
        int128_t zmm1 = *(rax_3 + 0x10)
        int32_t var_ac_1 = 0x80000000
        uint128_t var_f8 = *rax_3
        int128_t var_e8_1 = zmm1
        int32_t var_d0_1 = 0x3f800000
        uint64_t var_d8_1 = *(rax_3 + 0x20)
        int32_t var_b0_1 = *(arg1 + 0x758)
        int32_t var_a8_1 = 0
        void var_70
        sub_141a474c0(arg1 + 0x418, sub_141a2f010(&var_70, &var_f8), rdi_1, data_143f312e0)
        sub_141a4c5d0(arg1 + 0x418, rdi_1)
        
        if (var_c0_1 != 0)
            sub_140a74f90(var_c0_1)
    
    if (*(arg1 + 0x784) != 0)
        sub_141a64f00(&rdi_1[0x1f], rdi_1)
        sub_141a3cee0(&rdi_1[1], rdi_1)
    
    int64_t* rax_6 = sub_140d3c6e0(arg1 + 0x410)
    int64_t r8_3 = *rax_6
    (*(r8_3 + 0x2f0))(rax_6, arg1, r8_3)
    sub_140920c10(arg1 + 0x760, arg1)
    result = 0
    int32_t arg_8
    arg_8.q = 0
    *(arg1 + 0x744) = 0
else
    int64_t rdi = sx.q(*(arg1 + 0x7a0))
    int32_t rax = (rdi + 1).d
    *(arg1 + 0x7a0) = rax
    
    if (rax s> *(arg1 + 0x7a4))
        sub_1405a4cf0(arg1 + 0x798)
    
    result = *(arg1 + 0x798)
    *(result + (rdi << 2)) = 0

return result
