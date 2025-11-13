// 函数: sub_140b25880
// 地址: 0x140b25880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140b12800()

if (*(rax + 8) s> 1)
    sub_140596d10(arg1, rax)
    return arg1

if (sub_140b27f10() == 0)
    sub_140b251a0(arg1)
else
    int16_t* rax_3 = sub_140b73bf0()
    int16_t* var_28 = rax_3
    int16_t* var_38 = nullptr
    int64_t var_30_1 = 0
    int32_t rdx_2 = 0
    int64_t i = 0
    wchar16* var_20_1 = u"Embers"
    int64_t rbx_1 = -1
    
    do
        int64_t rax_4 = -1
        
        do
            rax_4 += 1
        while ((&var_28)[i][rax_4] != 0)
        
        i += 1
        rdx_2 = rdx_2 + 1 + rax_4.d
    while (i s< 2)
    
    if (rdx_2 != 0)
        sub_1405947f0(&var_38, rdx_2)
    
    int64_t r8_1 = -1
    
    do
        r8_1 += 1
    while (rax_3[r8_1] != 0)
    
    sub_140a20ba0(&var_38, rax_3, r8_1.d)
    
    do
        rbx_1 += 1
    while ((*u"Embers")[rbx_1] != 0)
    
    int32_t rcx_5 = sub_140a2cf70(&var_38, u"Embers", rbx_1.d)
    int32_t rdx_5 = var_30_1.d
    var_20_1.d = rdx_5
    int32_t rdx_6 = rdx_5 + sbb.d(rcx_5, rcx_5, rdx_5 != 0) + 2
    var_28 = var_38
    int32_t rax_7 = var_30_1:4.d
    var_38 = nullptr
    int64_t var_30_2 = 0
    var_20_1:4.d = rax_7
    
    if (rdx_6 s> rax_7)
        sub_1405947f0(&var_28, rdx_6)
    
    sub_140a20ba0(&var_28, &data_142d5a024, 1)
    int16_t* rcx_10 = var_38
    *arg1 = var_28
    arg1[1].d = var_20_1.d
    *(arg1 + 0xc) = var_20_1:4.d
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

return arg1
