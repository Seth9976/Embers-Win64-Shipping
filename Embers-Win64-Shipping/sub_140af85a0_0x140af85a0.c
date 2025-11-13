// 函数: sub_140af85a0
// 地址: 0x140af85a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = data_1439a0364

if (result == 0xffffffff)
    int32_t rcx_1 = data_1439a0360
    int16_t* const rbx_1 = &data_142d40450
    int64_t var_18
    
    if (rcx_1 == result)
        int64_t* rax = sub_140b26cf0(&var_18)
        int32_t rdx_1 = rax[1].d
        int32_t rdx_2 = neg.d(rdx_1)
        int16_t* var_38 = *rax
        *rax = 0
        int32_t rcx_4 = rax[1].d
        int32_t rcx_5 = *(rax + 0xc)
        rax[1] = 0
        int32_t rdx_5 = sbb.d(rdx_2, rdx_2, rdx_1 != 0) + 0x28 + rcx_4
        
        if (rdx_5 s> rcx_5)
            sub_1405947f0(&var_38, rdx_5)
        
        sub_140a2cf70(&var_38, u"Engine/Build/InstalledProjectBuild.txt", 0x26)
        int64_t rcx_8 = var_18
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        sub_140b21570(&var_38)
        sub_140a464c0()
        int16_t* const rdx_6 = &data_142d40450
        
        if (rcx_4 != 0)
            rdx_6 = var_38
        
        char const (* r8_1)[0x4] = data_14399ea08
        (*(r8_1 + 0x48))(&data_14399ea08, rdx_6, r8_1)
        sub_140af2b60()
        bool cond:4_1 = sub_140b21a10(&data_143dbb3f0, u"NotInstalled") == 0
        int16_t* rax_2 = var_38
        rcx_1.b = cond:4_1
        data_1439a0360 = rcx_1
        
        if (rax_2 != 0)
            sub_140a74f90(rax_2)
            rcx_1 = data_1439a0360
    
    int64_t rdi
    rdi.b = rcx_1 == 1
    int16_t** rax_3 = sub_140b26cf0(&var_18)
    int32_t rdx_7 = rax_3[1].d
    int32_t rdx_8 = neg.d(rdx_7)
    int16_t* var_28 = *rax_3
    *rax_3 = nullptr
    int32_t rcx_13 = rax_3[1].d
    int32_t rcx_14 = *(rax_3 + 0xc)
    rax_3[1] = 0
    int32_t rdx_11 = sbb.d(rdx_8, rdx_8, rdx_7 != 0) + 0x21 + rcx_13
    
    if (rdx_11 s> rcx_14)
        sub_1405947f0(&var_28, rdx_11)
    
    sub_140a2cf70(&var_28, u"Engine/Build/InstalledBuild.txt", 0x1f)
    int64_t rcx_17 = var_18
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    sub_140b21570(&var_28)
    sub_140a464c0()
    
    if (rcx_13 != 0)
        rbx_1 = var_28
    
    char const (* r8_2)[0x4] = data_14399ea08
    char rbx_2 = (*(r8_2 + 0x48))(&data_14399ea08, rbx_1, r8_2) | rdi.b
    sub_140af2b60()
    bool result_1
    
    if (rbx_2 == 0)
        result_1 = sub_140b21a10(&data_143dbb3f0, u"InstalledEngine")
    else
        result_1 = sub_140b21a10(&data_143dbb3f0, u"NotInstalledEngine") == 0
    
    int16_t* rcx_19 = var_28
    result = zx.d(result_1)
    data_1439a0364 = result
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
        result = data_1439a0364

result.b = result == 1
return result
