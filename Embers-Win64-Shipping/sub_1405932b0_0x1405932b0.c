// 函数: sub_1405932b0
// 地址: 0x1405932b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = *(arg1 + 0x20)

if (i != 0)
    int64_t i_2 = i
    
    do
        int64_t rdx_3 = *(arg1 + 0x18) - 1 + i
        int64_t* rcx_3 = *(*(*(arg1 + 8) + ((rdx_3 u>> 1 & (*(arg1 + 0x10) - 1)) << 3))
            + ((zx.q(rdx_3.d) & 1) << 3))
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x10))(rcx_3, 1)
            i_2 = *(arg1 + 0x20)
        
        i = i_2 - 1
        *(arg1 + 0x20) = i
        
        if (i == 0)
            *(arg1 + 0x18) = 0
        
        i_2 = i
    while (i != 0)

int64_t i_1 = *(arg1 + 0x10)

while (i_1 != 0)
    i_1 -= 1
    int64_t rcx_4 = *(*(arg1 + 8) + (i_1 << 3))
    
    if (rcx_4 != 0)
        j_sub_140a74f90(rcx_4)

void* rcx_6 = *(arg1 + 8)

if (rcx_6 != 0)
    if (*(arg1 + 0x10) << 3 u>= 0x1000)
        void* r8_1 = *(rcx_6 - 8)
        
        if (rcx_6 - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_6 = r8_1
    
    j_sub_140a74f90(rcx_6)

*(arg1 + 0x10) = 0
*(arg1 + 8) = 0
