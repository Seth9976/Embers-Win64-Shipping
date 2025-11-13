// 函数: sub_140d7fa60
// 地址: 0x140d7fa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
HRGN result

if (arg1[6].d == 0xffffffff || *(arg1 + 0x34) == 0xffffffff)
    RECT rect
    GetWindowRect(arg1[5], &rect)
    result = CreateRectRgn(0, 0, rect.right - rect.left, rect.bottom - rect.top)
else
    int32_t* rax_3 = (*(*arg1 + 0xe0))()
    void* rax_5
    
    if (*rax_3 == 5)
        rax_5 = (*(*arg1 + 0xe0))(arg1)
    
    int64_t rdi
    
    if (*rax_3 != 5 || *(rax_5 + 0x18) != 0)
        rdi.b = 0
    else
        rdi.b = 1
    
    if ((*(*arg1 + 0x70))(arg1) == 0)
        int32_t rcx_7
        
        if (arg1[7].d == 2 && rdi.b == 0)
            rcx_7 = *(arg1[1] + 0x4c)
        
        if (arg1[7].d != 2 || rdi.b != 0 || rcx_7 s<= 0)
            result = CreateRectRgn(0, 0, arg1[6].d, *(arg1 + 0x34))
        else
            result = CreateRoundRectRgn(0, 0, arg1[6].d + 1, *(arg1 + 0x34) + 1, rcx_7, rcx_7)
    else
        uint32_t cxWindowBorders
        int32_t x2
        int32_t y2
        
        if (rdi.b != 0)
            WINDOWINFO pwi
            pwi.cbSize = 0x3c
            cxWindowBorders = 0
            pwi.rcWindow.left = 0
            pwi.rcWindow.top = 0
            pwi.rcWindow.right = 0
            pwi.rcWindow.bottom = 0
            pwi.cyWindowBorders = 0
            pwi.atomWindowType = 0
            pwi.wCreatorVersion = 0
            pwi.rcClient.left = 0
            pwi.rcClient.top = 0
            pwi.rcClient.right = 0
            pwi.rcClient.bottom = 0
            pwi.dwStyle = 0
            pwi.dwExStyle = 0
            pwi.dwWindowStatus = 0
            pwi.cxWindowBorders = 0
            GetWindowInfo(arg1[5], &pwi)
            
            if (arg2 != 0)
                cxWindowBorders = pwi.cxWindowBorders
            
            y2 = *(arg1 + 0x34) + cxWindowBorders
            x2 = arg1[6].d + cxWindowBorders
        else if (arg2 == 0)
            cxWindowBorders = 0
            y2 = *(arg1 + 0x34)
            x2 = arg1[6].d
        else
            uint32_t cxWindowBorders_1 = (*(*arg1 + 0xb0))(arg1)
            cxWindowBorders = cxWindowBorders_1
            y2 = *(arg1 + 0x34) - cxWindowBorders_1
            x2 = arg1[6].d - cxWindowBorders_1
        
        result = CreateRectRgn(cxWindowBorders, cxWindowBorders, x2, y2)

__security_check_cookie(rax_1 ^ &var_98)
return result
