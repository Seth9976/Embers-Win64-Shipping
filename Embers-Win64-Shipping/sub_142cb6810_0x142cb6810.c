// 函数: sub_142cb6810
// 地址: 0x142cb6810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = data_143988dc0:8

if (rdx u>= 0x10)
    void* rcx_1 = data_143988db0.q
    
    if (rdx + 1 u>= 0x1000)
        void* r8_1 = *(rcx_1 - 8)
        
        if (rcx_1 - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_1 = r8_1
    
    j_sub_140a74f90(rcx_1)

int128_t result = data_143702ea0
data_143988dc0 = result
data_143988db0 = 0
return result
