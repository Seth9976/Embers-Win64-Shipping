// 函数: sub_14058f6e0
// 地址: 0x14058f6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg1 + 0x20)

if (rdx u>= 8)
    void* rcx = *(arg1 + 8)
    
    if ((rdx << 1) + 2 u>= 0x1000)
        void* r8_1 = *(rcx - 8)
        
        if (rcx - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx = r8_1
    
    j_sub_140a74f90(rcx)

*(arg1 + 0x20) = 7
*(arg1 + 0x18) = 0
*(arg1 + 8) = 0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
