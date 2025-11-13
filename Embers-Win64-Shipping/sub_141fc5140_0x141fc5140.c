// 函数: sub_141fc5140
// 地址: 0x141fc5140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x748) = 0
*(arg1 + 0x890) = 0
*(arg1 + 0x750) = 0
*(arg1 + 0x758) = 0
*(arg1 + 0xe20) = 0
*(arg1 + 0xe84) = 0
*(arg1 + 0xb09) = 0
*(arg1 + 0x10c8) = 0
*(arg1 + 0xb0d) = 0
sub_141fb05f0(arg1 + 0xa08, 0)
int32_t i_1 = *(arg1 + 0xa60)
int64_t* rbx = *(arg1 + 0xa58)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_1 = *rbx
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx = &rbx[4]
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0xa60) = 0

if (*(arg1 + 0xa64) != 0)
    sub_1405a51b0(arg1 + 0xa58, 0)

sub_141fb0570(arg1 + 0xc98, 0)
return sub_141faae20(arg1) __tailcall
