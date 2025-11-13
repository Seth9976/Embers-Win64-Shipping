// 函数: sub_140af87c0
// 地址: 0x140af87c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = data_1439a0360

if (rbx == 0xffffffff)
    int64_t var_18
    int64_t* rax_1 = sub_140b26cf0(&var_18)
    int32_t rdx_1 = rax_1[1].d
    int32_t rdx_2 = neg.d(rdx_1)
    int16_t* var_28 = *rax_1
    *rax_1 = 0
    int32_t rcx_3 = rax_1[1].d
    int32_t rcx_4 = *(rax_1 + 0xc)
    rax_1[1] = 0
    int32_t rdx_5 = sbb.d(rdx_2, rdx_2, rdx_1 != 0) + 0x28 + rcx_3
    
    if (rdx_5 s> rcx_4)
        sub_1405947f0(&var_28, rdx_5)
    
    sub_140a2cf70(&var_28, u"Engine/Build/InstalledProjectBuild.txt", 0x26)
    int64_t rcx_7 = var_18
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    sub_140b21570(&var_28)
    sub_140a464c0()
    int16_t* const rdx_6 = &data_142d40450
    
    if (rcx_3 != 0)
        rdx_6 = var_28
    
    char const (* r8_1)[0x4] = data_14399ea08
    (*(r8_1 + 0x48))(&data_14399ea08, rdx_6, r8_1)
    sub_140af2b60()
    bool rax = sub_140b21a10(&data_143dbb3f0, u"NotInstalled")
    int16_t* rcx_9 = var_28
    rbx.b = rax == 0
    data_1439a0360 = rbx
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
        rbx = data_1439a0360

return rbx == 1
