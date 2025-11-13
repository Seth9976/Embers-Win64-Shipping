// 函数: sub_14089c5f0
// 地址: 0x14089c5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = *(arg1 + 0x30)

while (i != 0)
    sub_14058f000(*(*(arg1 + 0x18) + (((i + *(arg1 + 0x28) - 1) & (*(arg1 + 0x20) - 1)) << 3)))
    int64_t rcx_3 = *(arg1 + 0x30)
    i = rcx_3 - 1
    *(arg1 + 0x30) = i
    
    if (rcx_3 == 1)
        *(arg1 + 0x28) = 0

int64_t i_1 = *(arg1 + 0x20)

while (i_1 != 0)
    i_1 -= 1
    int64_t rcx_4 = *(*(arg1 + 0x18) + (i_1 << 3))
    
    if (rcx_4 != 0)
        j_sub_140a74f90(rcx_4)

void* rcx_6 = *(arg1 + 0x18)

if (rcx_6 != 0)
    if (*(arg1 + 0x20) << 3 u>= 0x1000)
        void* r8_1 = *(rcx_6 - 8)
        
        if (rcx_6 - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_6 = r8_1
    
    j_sub_140a74f90(rcx_6)

int64_t rcx_7 = *(arg1 + 0x10)
__builtin_memset(arg1 + 0x10, 0, 0x18)
return j_sub_140a74f90(rcx_7) __tailcall
