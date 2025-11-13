// 函数: sub_140d7e0c0
// 地址: 0x140d7e0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* rax_2 = arg3[1]
int64_t rcx = *arg3
HINSTANCE var_a0 = arg4

if (rax_2 != 0)
    rax_2[1].d += 1

RECT rect

if (&arg1[1] == &rect)
label_140d7e161:
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t temp1_1 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rax_2 + 8))(rax_2, 1)
else
    arg1[1] = rcx
    int64_t* rdi_1 = arg1[2]
    
    if (rax_2 == rdi_1)
        goto label_140d7e161
    
    arg1[2] = rax_2
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

void* rax_6 = arg1[1]
arg1[4] = arg2
arg1[6] = -1
uint128_t zmm6 = *(rax_6 + 4)
int128_t zmm7 = *(rax_6 + 8)
int128_t zmm8 = *(rax_6 + 0xc)
int128_t zmm9 = *(rax_6 + 0x10)
float zmm0_1
float zmm6_1
zmm0_1, zmm6_1 = sub_140d7ade0(zmm6.d, zmm7.d, zmm6)
void* rdx = arg1[1]
arg1[0x15].d = zmm0_1
int32_t Y_1 = int.d(zmm7.d)
bool cond:0 = *(rdx + 0x18) != 0
int32_t nWidth_1 = int.d(zmm8.d)
uint32_t Y_2 = Y_1
int32_t Y = Y_1
int32_t nHeight_1 = int.d(zmm9.d)
int32_t nWidth = nWidth_1
int32_t X_1 = int.d(zmm6_1)
int32_t nHeight = nHeight_1
int32_t X = X_1
enum WINDOW_EX_STYLE dwExStyle
enum WINDOW_STYLE dwStyle

if (cond:0)
    dwExStyle = WS_EX_APPWINDOW
    
    if (*(rdx + 0x25) == 0)
        dwStyle = 0x80c80000
    else
        enum WINDOW_STYLE dwStyle_2 = 0xc90000
        
        if (*(rdx + 0x23) == 0)
            dwStyle_2 = 0xc80000
        
        enum WINDOW_STYLE dwStyle_1 = dwStyle_2 | WS_GROUP
        
        if (*(rdx + 0x22) == 0)
            dwStyle_1 = dwStyle_2
        
        dwStyle = dwStyle_1 | WS_THICKFRAME
        
        if (*(rdx + 0x26) == 0)
            dwStyle = dwStyle_1
    
    __builtin_memset(&rect, 0, 0x10)
    AdjustWindowRectEx(&rect, dwStyle, 0, WS_EX_APPWINDOW)
    int32_t left = rect.left
    nWidth = rect.right - left + nWidth_1
    Y = Y_2 + rect.top
    X = left + X_1
    rdx = arg1[1]
    nHeight = rect.bottom - rect.top + nHeight_1
else
    dwStyle = 0x86000000
    enum WINDOW_EX_STYLE dwExStyle_2
    enum WINDOW_EX_STYLE dwExStyle_3
    
    if (*(rdx + 0x19) == 0)
        dwExStyle_2 = 0x80180
        dwExStyle_3 = 0x180
    else
        dwExStyle_2 = 0xc0100
        dwExStyle_3 = 0x40100
    
    if (*(rdx + 0x14) != 1)
        dwExStyle_2 = dwExStyle_3
    
    enum WINDOW_EX_STYLE dwExStyle_1 = dwExStyle_2 | WS_EX_TOPMOST
    
    if (*(rdx + 0x1a) == 0)
        dwExStyle_1 = dwExStyle_2
    
    dwExStyle = dwExStyle_1 | WS_EX_TRANSPARENT
    
    if (*(rdx + 0x1b) != 0)
        dwExStyle = dwExStyle_1

void* rax_9 = *arg5
HWND hWndParent

if (rax_9 == 0)
    hWndParent = nullptr
else
    hWndParent = *(rax_9 + 0x28)

PWSTR lpWindowName

if (*(rdx + 0x40) == 0)
    lpWindowName = &data_142d40450
else
    lpWindowName = *(rdx + 0x38)

HWND hwnd = CreateWindowExW(dwExStyle, UnrealWindow", lpWindowName, dwStyle, X, Y, nWidth, nHeight, 
    hWndParent, nullptr, var_a0, 0)
arg1[5] = hwnd
void* result

if (hwnd != 0)
    if (RegisterTouchWindow(hwnd, 0) == 0)
        GetLastError()
    
    int64_t rax_13 = *arg1
    uint64_t Y_3 = zx.q(Y_2)
    arg1[0x13].d = nWidth_1
    *(arg1 + 0x9c) = nHeight_1
    (*(rax_13 + 8))(arg1, zx.q(X_1), Y_3, zx.q(nWidth_1), nHeight_1)
    void* rcx_12 = arg1[1]
    
    if (*(rcx_12 + 0x14) == 1)
        (*(*arg1 + 0x98))(arg1, *(rcx_12 + 0x48))
        rcx_12 = arg1[1]
    
    if (*(rcx_12 + 0x18) == 0)
        HWND hwnd_1 = arg1[5]
        Y_2 = 1
        DwmSetWindowAttribute(hwnd_1, 2, &Y_2, 4)
        var_a0.d = 0
        DwmSetWindowAttribute(arg1[5], 4, &var_a0, 4)
        rcx_12 = arg1[1]
    
    if (*(rcx_12 + 0x25) != 0)
        if (*(rcx_12 + 0x18) != 0)
            goto label_140d7e4f5
        
        int32_t rdx_5 = 0xc90000
        
        if (*(rcx_12 + 0x23) == 0)
            rdx_5 = 0xc80000
        
        int32_t dwNewLong_2 = rdx_5 | dwStyle
        int32_t dwNewLong_1 = dwNewLong_2 | 0x20000
        
        if (*(rcx_12 + 0x22) == 0)
            dwNewLong_1 = dwNewLong_2
        
        int32_t dwNewLong = dwNewLong_1 | 0x40000
        
        if (*(rcx_12 + 0x26) == 0)
            dwNewLong = dwNewLong_1
        
        SetWindowLongW(arg1[5], 0xfffffff0, dwNewLong)
        enum SET_WINDOW_POS_FLAGS uFlags = 0x37
        
        if (*(arg1[1] + 0x1c) != 0)
            uFlags = 0x27
        
        SetWindowPos(arg1[5], nullptr, 0, 0, 0, 0, uFlags)
        arg1[6].d = nWidth_1
        *(arg1 + 0x34) = nHeight_1
        HRGN hRgn = sub_140d7fa60(arg1, 1)
        SetWindowRgn(arg1[5], hRgn, 0)
    else if (*(rcx_12 + 0x18) != 0)
    label_140d7e4f5:
        
        if (*(rcx_12 + 0x21) == 0)
            EnableMenuItem(GetSystemMenu(arg1[5], 0), 0xf060, MF_GRAYED)
    
    result = arg1[1]
    
    if (*(result + 0x25) != 0)
        struct IDropTarget pDropTarget = &arg1[3]
        
        if (arg1 == 0)
            pDropTarget = 0
        
        result = RegisterDragDrop(arg1[5], pDropTarget)
else
    void* rax_10 = sub_140a7b0a0()
    
    if (rax_10 != 0)
        sub_140a8dc00(rax_10, 0)
    
    MessageBoxW(nullptr, u"Window Creation Failed!", u"Error!", MB_ICONEXCLAMATION)
    GetLastError()
    Y_2 = 0
    GetProcessHandleCount(GetCurrentProcess(), &Y_2)
    result = sub_140a7b0a0()
    
    if (result != 0)
        result = sub_140a89de0(result, 0)

__security_check_cookie(rax_1 ^ &var_108)
return result
