// 函数: sub_140b14400
// 地址: 0x140b14400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
char rax_2 = sub_140b27f10()
char rax_3

if (rax_2 == 0)
    rax_3 = sub_140af85a0()

if (rax_2 != 0 || rax_3 != 0)
    int64_t var_48
    int64_t* rax_4 = sub_140af3ab0(&var_48)
    int16_t* const rbx_1
    
    if (rax_4[1].d == 0)
        rbx_1 = &data_142d40450
    else
        rbx_1 = *rax_4
    
    int16_t* rax_5 = sub_140b73bf0()
    int16_t* var_38 = rax_5
    int16_t* const var_30_1 = rbx_1
    int16_t* var_58 = nullptr
    wchar16 const* const var_28_1 = u"Common"
    int32_t rdx_1 = 0
    int64_t var_50_1 = 0
    
    for (int64_t i = 0; i s< 3; )
        int64_t rax_6 = -1
        
        do
            rax_6 += 1
        while ((&var_38)[i][rax_6] != 0)
        
        i += 1
        rdx_1 = rdx_1 + 1 + rax_6.d
    
    if (rdx_1 != 0)
        sub_1405947f0(&var_58, rdx_1)
    
    int64_t r8_1 = -1
    
    do
        r8_1 += 1
    while (rax_5[r8_1] != 0)
    
    sub_140a20ba0(&var_58, rax_5, r8_1.d)
    int32_t rcx_6
    
    for (int64_t i_1 = 1; i_1 s< 3; i_1 += 1)
        int16_t* rdx_4 = (&var_38)[i_1]
        int64_t r8_2 = -1
        
        do
            r8_2 += 1
        while (rdx_4[r8_2] != 0)
        
        rcx_6 = sub_140a2cf70(&var_58, rdx_4, r8_2.d)
    
    int32_t rdx_5 = var_50_1.d
    var_30_1.d = rdx_5
    var_38 = var_58
    int32_t rax_9 = var_50_1:4.d
    int32_t rdx_6 = rdx_5 + sbb.d(rcx_6, rcx_6, rdx_5 != 0) + 2
    var_58 = nullptr
    int64_t var_50_2 = 0
    var_30_1:4.d = rax_9
    
    if (rdx_6 s> rax_9)
        sub_1405947f0(&var_38, rdx_6)
    
    sub_140a20ba0(&var_38, &data_142d5a024, 1)
    int16_t* rcx_11 = var_58
    *arg1 = var_38
    arg1[1].d = var_30_1.d
    *(arg1 + 0xc) = var_30_1:4.d
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int64_t rcx_12 = var_48
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
else
    sub_140b13b30(arg1)

__security_check_cookie(rax_1 ^ &var_78)
return arg1
