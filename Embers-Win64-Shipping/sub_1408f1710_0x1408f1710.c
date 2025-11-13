// 函数: sub_1408f1710
// 地址: 0x1408f1710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t var_60

if (*sub_1408f1b50(&data_143986580, &var_68, arg1) != 0xffffffff)
    int16_t* const rbx_1
    
    if (arg1[1].d == 0)
        rbx_1 = &data_142d40450
    else
        rbx_1 = *arg1
    
    sub_140a2e390(&var_60, 
        Cannot create GameplayScreenshotInstance - One with the name "%s" alrea", rbx_1)
    sub_140b19e60()
    sub_140b1f5f0(&data_1439a8bd0, &var_60)
    int64_t rcx_1 = var_60
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    goto label_1408f1910

void* rax_1 = data_143f5b298
int64_t result

if (rax_1 == 0 || *(rax_1 + 0x788) == 0)
    sub_140b19e60()
    sub_140b1f640(&data_1439a8bd0, 
        Cannot create GameplayScreenshotInstance - either GEngine or GameViewport is null!")
label_1408f1910:
    int64_t rcx_11 = *arg1
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int64_t rcx_12 = *arg4
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    result.b = 0
else
    int64_t* rax_2 = j_sub_140a82f30(0x58)
    int64_t* rbx_3
    
    if (rax_2 == 0)
        rbx_3 = nullptr
    else
        void var_50
        int32_t rax_3 = sub_140596d10(&var_50, arg4)
        void var_40
        int64_t* rax_4
        int64_t* r8_2
        rax_4, r8_2 = sub_140596d10(&var_40, arg1)
        int32_t var_78 = rax_3
        int512_t zmm3
        zmm3.o = arg3
        rbx_3 = sub_1408eee10(rax_2, rax_4, arg3, r8_2)
    
    sub_1408f1560(&data_143986580, &var_60)
    int64_t* var_58
    sub_140596d10(var_58, arg1)
    var_58[2] = rbx_3
    int16_t* const rbx_4 = &data_142d40450
    var_58[3].d = 0xffffffff
    int32_t rax_6 = var_58[1].d
    int16_t* rdx_7
    
    if (rax_6 == 0)
        rdx_7 = &data_142d40450
    else
        rdx_7 = *var_58
    
    int32_t rcx_6 = rax_6 - 1
    
    if (rax_6 == 0)
        rcx_6 = 0
    
    sub_1408f1950(&data_143986580, &var_68, sub_1405969c0(rcx_6, rdx_7), var_58, var_60.d, nullptr)
    
    if (arg1[1].d != 0)
        rbx_4 = *arg1
    
    sub_140a2e390(&var_60, u"Created GameplayScreenshotInstance "%s"", rbx_4)
    sub_140b19e60()
    sub_140b1f5f0(&data_1439a8bd0, &var_60)
    int64_t rcx_8 = var_60
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int64_t rcx_9 = *arg1
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    int64_t rcx_10 = *arg4
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    result.b = 1

return result
