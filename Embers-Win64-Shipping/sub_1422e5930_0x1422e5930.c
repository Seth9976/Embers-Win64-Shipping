// 函数: sub_1422e5930
// 地址: 0x1422e5930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1
int32_t rbx = 0
int64_t* var_28 = nullptr
int32_t i_2 = 0
int64_t zmm0 =
    sub_140af5a00(data_143ddb400, ScalabilitySettings", PerfIndexValues_ResolutionQuality"
    , &var_28, &data_143de5800)
int64_t* rbx_1
int64_t result

if (i_2 != 0)
    if (rdi s<= 0)
        rdi = 0
    
    if (arg2 != 1)
        int32_t rax_3 = i_2 - 1
        
        if (rdi s>= 0)
            if (rdi s< rax_3)
                rax_3 = rdi
            
            rbx = rax_3
    else
        int32_t rax_1 = i_2 - rdi
        
        if (rax_1 - arg2 s>= 0)
            rbx = rax_1 - arg2
    
    int64_t* rax_6 = &var_28[sx.q(rbx) * 2]
    wchar16* _String
    
    if (rax_6[1].d == 0)
        _String = &data_142d40450
    else
        _String = *rax_6
    
    _wtof(_String)
    int32_t i_1 = i_2
    rbx_1 = var_28
    result.d = fconvert.s(zmm0)
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_1 = &rbx_1[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_1 = var_28
else
    result = 0x42c80000
    rbx_1 = var_28

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

return result
