// 函数: sub_14105ed10
// 地址: 0x14105ed10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x5c) != 0)
    return 

if (*(arg1 + 0x55) != 0)
    sub_1419a21e0(0)
    int32_t rax_1 = *(arg1 + 0x58)
    int32_t r8 = *(arg1 + 0x50)
    int32_t rdx = *(arg1 + 0x4c)
    *(arg1 + 0x55) = 0
    sub_1410682f0(arg1, rdx, r8, 0, rax_1)
    return 

HWND rax_3 = GetFocus()
HWND hWnd = *(arg1 + 0x40)
bool rcx_2 = IsIconic(hWnd) != 0

if (arg2 != 0)
label_14105ed94:
    sub_1419a21e0(0)
    int64_t* rcx_3 = *(arg1 + 0x60)
    BOOL rax = (*(*rcx_3 + 0x50))(rcx_3, zx.q(*(arg1 + 0x54)), 0)
    
    if (rax s>= 0)
        *(arg1 + 0x5c) = 1
    else if (rax != 0x887a0022 && *(arg1 + 0x54) != 0)
        int64_t* rcx_4 = *(arg1 + 0x60)
        
        if ((*(*rcx_4 + 0x50))(rcx_4, 0, 0) s>= 0)
            *(arg1 + 0x54) = 0
            *(arg1 + 0x5c) = 1
else if (rax_3 == hWnd && rcx_2 == 0)
    goto label_14105ed94
