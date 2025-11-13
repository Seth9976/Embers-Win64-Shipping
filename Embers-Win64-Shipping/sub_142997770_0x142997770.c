// 函数: sub_142997770
// 地址: 0x142997770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg2 + 0x38)

if (rdx u>= 0x10)
    void* rcx = *(arg2 + 0x20)
    
    if (rdx + 1 u>= 0x1000)
        void* r8_1 = *(rcx - 8)
        
        if (rcx - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx = r8_1
    
    j_sub_140a74f90(rcx)

*(arg2 + 0x30) = 0
*(arg2 + 0x38) = 0xf
*(arg2 + 0x20) = 0
return j_sub_140a74f90(arg2) __tailcall
