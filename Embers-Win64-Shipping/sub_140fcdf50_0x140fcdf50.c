// 函数: sub_140fcdf50
// 地址: 0x140fcdf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af2b60()
uint64_t result = sub_140b21a10(&data_143dbb3f0, u"novendordevice")

if (result.b == 0)
    PWSTR lpLibFileName_2
    int64_t* rax = sub_140b13b30(&lpLibFileName_2)
    int32_t rdx_1 = rax[1].d
    int32_t rdx_2 = neg.d(rdx_1)
    int64_t var_28 = *rax
    *rax = 0
    int32_t rcx_3 = rax[1].d
    int32_t rcx_4 = *(rax + 0xc)
    rax[1] = 0
    int32_t rdx_5 = sbb.d(rdx_2, rdx_2, rdx_1 != 0) + 0x2f + rcx_3
    
    if (rdx_5 s> rcx_4)
        sub_1405947f0(&var_28, rdx_5)
    
    sub_140a2cf70(&var_28, u"Binaries/ThirdParty/NVIDIA/NVaftermath/Win64/", 0x2d)
    PWSTR lpLibFileName_4 = lpLibFileName_2
    
    if (lpLibFileName_4 != 0)
        sub_140a74f90(lpLibFileName_4)
    
    lpLibFileName_2 = nullptr
    int32_t var_30_1 = 0
    sub_1405947f0(&lpLibFileName_2, 0x1c)
    int32_t rbx_1 = var_30_1 + 0x1c
    
    if (rbx_1 s> 0)
        sub_140594770(&lpLibFileName_2)
    
    PWSTR lpLibFileName_3 = lpLibFileName_2
    sub_1405a7220(lpLibFileName_3, 0x1c, "GFSDK_Aftermath_Lib.x64.dll", 0x1c, 0x3f)
    PWSTR lpLibFileName_1
    
    if (rcx_3 s> 1)
        int32_t rbx_2
        
        if (rbx_1 == 0)
            rbx_2 = 0
        else
            rbx_2 = rbx_1 - 1
        
        int32_t rax_1
        
        if (rcx_3 == 0)
            rax_1 = rcx_3 + 1
        
        if (rcx_3 != 0 || rbx_2 == 0)
            rax_1 = 0
        
        int64_t r14_1 = var_28
        int32_t rcx_10 = rax_1 + rbx_2
        lpLibFileName_2 = nullptr
        var_30_1 = rcx_3
        
        if (rcx_3 != 0 || rcx_10 != 0)
            sub_1405a4c70(&lpLibFileName_2, rcx_3 + rcx_10, 0)
            memcpy(lpLibFileName_2, r14_1, rcx_3 * 2)
        else
            var_30_1 = 0
        
        sub_140a20ba0(&lpLibFileName_2, lpLibFileName_3, rbx_2)
        lpLibFileName_1 = lpLibFileName_2
        rbx_1 = var_30_1
        lpLibFileName_2 = nullptr
        int64_t var_30_2 = 0
    else
        lpLibFileName_1 = lpLibFileName_3
        lpLibFileName_3 = nullptr
    
    PWSTR lpLibFileName = &data_142d40450
    
    if (rbx_1 != 0)
        lpLibFileName = lpLibFileName_1
    
    result = LoadLibraryW(lpLibFileName)
    rbx_1.b = result == 0
    
    if (lpLibFileName_1 != 0)
        result = sub_140a74f90(lpLibFileName_1)
    
    if (lpLibFileName_3 != 0)
        result = sub_140a74f90(lpLibFileName_3)
    
    int64_t rcx_16 = var_28
    rbx_1.b ^= 1
    data_143e2b8b5 = rbx_1.b
    
    if (rcx_16 != 0)
        return sub_140a74f90(rcx_16)

return result
