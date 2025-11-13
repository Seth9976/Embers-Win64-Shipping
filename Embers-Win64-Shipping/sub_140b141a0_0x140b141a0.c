// 函数: sub_140b141a0
// 地址: 0x140b141a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
char rax_2 = sub_140b27f10()
char rax_3

if (rax_2 == 0)
    rax_3 = sub_140af85a0()

if (rax_2 != 0 || rax_3 != 0)
    int16_t* rax_4 = sub_140b17d00()
    int16_t* var_58
    sub_140a2e390(&var_58, u"%u", zx.q(*rax_4))
    int16_t* var_38
    sub_140a2e390(&var_38, u".%u", zx.q(rax_4[1]))
    int32_t var_30
    int32_t r8_4
    
    if (var_30 == 0)
        r8_4 = 0
    else
        r8_4 = var_30 - 1
    
    sub_140a20ba0(&var_58, var_38, r8_4)
    int16_t* rcx_4 = var_38
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int16_t* const rbx_2 = &data_142d40450
    int16_t* const rdi_1 = &data_142d40450
    int32_t var_50
    
    if (var_50 != 0)
        rdi_1 = var_58
    
    int64_t var_48
    int64_t* rax_5 = sub_140af3ab0(&var_48)
    
    if (rax_5[1].d != 0)
        rbx_2 = *rax_5
    
    int16_t* rax_6 = sub_140b73bf0()
    int16_t* const var_28_1 = rdi_1
    int32_t rdx_2 = 0
    var_38 = rax_6
    int64_t i = 0
    var_30.q = rbx_2
    int16_t* var_68 = nullptr
    int64_t var_60_1 = 0
    
    do
        int64_t rax_7 = -1
        
        do
            rax_7 += 1
        while ((&var_38)[i][rax_7] != 0)
        
        i += 1
        rdx_2 = rdx_2 + 1 + rax_7.d
    while (i s< 3)
    
    if (rdx_2 != 0)
        sub_1405947f0(&var_68, rdx_2)
    
    int64_t r8_5 = -1
    
    do
        r8_5 += 1
    while (rax_6[r8_5] != 0)
    
    sub_140a20ba0(&var_68, rax_6, r8_5.d)
    int32_t rcx_10
    
    for (int64_t i_1 = 1; i_1 s< 3; i_1 += 1)
        int16_t* rdx_5 = (&var_38)[i_1]
        int64_t r8_6 = -1
        
        do
            r8_6 += 1
        while (rdx_5[r8_6] != 0)
        
        rcx_10 = sub_140a2cf70(&var_68, rdx_5, r8_6.d)
    
    int32_t rdx_6 = var_60_1.d
    var_38 = var_68
    int32_t rax_10 = var_60_1:4.d
    int32_t rdx_7 = rdx_6 + sbb.d(rcx_10, rcx_10, rdx_6 != 0) + 2
    var_68 = nullptr
    int64_t var_60_2 = 0
    
    if (rdx_7 s> rax_10)
        sub_1405947f0(&var_38, rdx_7)
    
    sub_140a20ba0(&var_38, &data_142d5a024, 1)
    int16_t* rcx_15 = var_68
    *arg1 = var_38
    arg1[1].d = rdx_6
    *(arg1 + 0xc) = rax_10
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    int64_t rcx_16 = var_48
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    int16_t* rcx_17 = var_58
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
else
    sub_140b13b30(arg1)

__security_check_cookie(rax_1 ^ &var_88)
return arg1
