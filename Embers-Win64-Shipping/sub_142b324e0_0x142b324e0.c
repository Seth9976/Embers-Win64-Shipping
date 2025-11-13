// 函数: sub_142b324e0
// 地址: 0x142b324e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x58)

if (*(arg1 + 0x50) != rcx)
    if (rcx != 0)
        (**rcx)(rcx, 1)
    
    *(arg1 + 0x58) = 0

int64_t* rcx_1 = *(arg1 + 0x50)

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

int64_t* rcx_2 = *(arg1 + 0x68)
*(arg1 + 0x50) = 0

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

*(arg1 + 0x68) = 0
return sub_142a47ff0(arg1 + 0x10) __tailcall
