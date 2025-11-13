// 函数: sub_140d7f600
// 地址: 0x140d7f600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t result = __security_cookie ^ &var_d8
int64_t result_1 = result
int32_t rdx = *(arg1 + 8)
int64_t* var_a8 = nullptr
int32_t var_a0 = 0
BSTR bstrString

if (rdx == 1)
    sub_1405947f0(&var_a8, 4)
    int32_t rax_5 = var_a0 + 4
    var_a0 = rax_5
    
    if (rax_5 s> 0)
        sub_140594770(&var_a8)
    
    *var_a8 = 0x4d004d0049
    HKL param0 = GetKeyboardLayout(0)
    BSTR lpszDescription = nullptr
    int64_t var_90_1 = 0
    bstrString = nullptr
    int64_t rdi_1 = sx.q(ImmGetDescriptionW(param0, nullptr, 0))
    int32_t rcx_11 = (rdi_1 + 1).d
    
    if (rcx_11 s> 0)
        var_90_1.d = rcx_11
        sub_140594770(&bstrString)
        lpszDescription = bstrString
    else if (rcx_11 s< 0 && rcx_11 != 0)
        var_90_1.d = rcx_11
        sub_1405a50a0(&bstrString)
        lpszDescription = bstrString
    
    result = ImmGetDescriptionW(param0, lpszDescription, rdi_1.d)
    lpszDescription[rdi_1] = 0
    
    if (rdi_1.d s> 0)
        sub_140a20ba0(&var_a8, &data_142e62d08, 2)
        int64_t r8_5 = -1
        
        do
            r8_5 += 1
        while (lpszDescription[r8_5] != 0)
        
        sub_140a20ba0(&var_a8, lpszDescription, r8_5.d)
        result = sub_140a20ba0(&var_a8, &data_142da76f4, 1)
    
    if (lpszDescription != 0)
        result = sub_140a74f90(lpszDescription)
    
label_140d7f839:
    int64_t* rcx_19 = var_a8
    
    if (rcx_19 != 0)
        result = sub_140a74f90(rcx_19)
else if (rdx == 2)
    sub_1405947f0(&var_a8, 4)
    int32_t rax_1 = var_a0 + 4
    var_a0 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_a8)
    
    *var_a8 = 0x4600530054
    int64_t* rcx_2 = *(arg1 + 0x18)
    int32_t var_88
    result = (*(*rcx_2 + 0x50))(rcx_2, "c\t4", &var_88)
    
    if (result.d s>= 0 && var_88 == 1)
        int64_t* rcx_3 = *(arg1 + 0x10)
        int16_t var_84
        void var_80
        void var_70
        result = (*(*rcx_3 + 0x60))(rcx_3, &var_80, zx.q(var_84), &var_70, &bstrString)
        
        if (result.d s>= 0)
            sub_140a20ba0(&var_a8, &data_142e62d08, 2)
            BSTR bstrString_1 = bstrString
            int64_t r8_3 = -1
            
            do
                r8_3 += 1
            while (bstrString_1[r8_3] != 0)
            
            sub_140a20ba0(&var_a8, bstrString_1, r8_3.d)
            sub_140a20ba0(&var_a8, &data_142da76f4, 1)
            result = SysFreeString(bstrString)
    
    goto label_140d7f839
__security_check_cookie(result_1 ^ &var_d8)
return result
