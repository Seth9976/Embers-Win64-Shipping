// 函数: sub_140ffc530
// 地址: 0x140ffc530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
int32_t rax = 0

if (0 == *(arg1 + 0x5c))
    *(arg1 + 0x5c) = 0
else
    rax = *(arg1 + 0x5c)

BOOL result = rax & 1

if (result.b != 0)
    HWND rax_1 = GetFocus()
    HWND hWnd = *(arg1 + 0x40)
    result = IsIconic(hWnd)
    
    if (arg2 != 0)
    label_140ffc595:
        sub_1419a21e0(0)
        char rdx = *(arg1 + 0x68)
        int64_t* rbx_1
        int32_t rbp_2
        int64_t* r8_1
        
        if (rdx == 0 || (*(arg1 + 0x88) == 0 && *(arg1 + 0x60) != 0xa))
            rbx_1 = arg3
            r8_1 = nullptr
            int32_t arg_8
            arg_8.q = 0
            rbp_2 = 2
        else
            rbx_1 = *(arg1 + 0x80)
            arg3 = rbx_1
            
            if (rbx_1 != 0)
                (*(*rbx_1 + 8))(rbx_1)
                rdx = *(arg1 + 0x68)
            
            rdi = 0.q
            r8_1 = rbx_1
            rbp_2 = 1
        
        int64_t* rcx_3 = *(arg1 + 0x70)
        result = (*(*rcx_3 + 0x50))(rcx_3, zx.q(rdx), r8_1)
        BOOL result_1 = result
        
        if ((rbp_2.b & 2) != 0)
            rbp_2 &= 0xfffffffd
            
            if (rdi != 0)
                int64_t rdx_2 = *rdi
                result = (*(rdx_2 + 0x10))(rdi, rdx_2)
        
        if ((rbp_2.b & 1) != 0 && rbx_1 != 0)
            result = (*(*rbx_1 + 0x10))(rbx_1)
        
        if (result_1 s>= 0)
            *(arg1 + 0x5c) &= 0xfffffffe
    else if (rax_1 == hWnd && result == 0)
        goto label_140ffc595

return result
