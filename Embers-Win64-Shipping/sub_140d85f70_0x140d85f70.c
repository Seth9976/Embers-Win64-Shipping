// 函数: sub_140d85f70
// 地址: 0x140d85f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
WINDOWINFO pwi
pwi.rcWindow.left = 0
pwi.rcWindow.top = 0
pwi.rcWindow.right = 0
pwi.rcWindow.bottom = 0
int32_t cx = arg4
int32_t X = arg2
pwi.rcClient.left = 0
pwi.rcClient.top = 0
pwi.rcClient.right = 0
pwi.rcClient.bottom = 0
pwi.dwStyle = 0
pwi.dwExStyle = 0
pwi.dwWindowStatus = 0
pwi.cxWindowBorders = 0
pwi.cyWindowBorders = 0
pwi.atomWindowType = 0
pwi.wCreatorVersion = 0
int32_t Y = arg3
pwi.cbSize = 0x3c
int64_t rax_2
int64_t r8
rax_2, r8 = GetWindowInfo(arg1[5], &pwi)
uint32_t cy = arg5
void* rcx_1 = arg1[1]
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(cx)).d f/ _mm_cvtepi32_ps(zx.o(cy)).d
arg1[0x14].d = zmm1.d

if (*(rcx_1 + 0x18) != 0)
    uint32_t dwExStyle = pwi.dwExStyle
    enum WINDOW_STYLE dwStyle = pwi.dwStyle
    RECT rect
    __builtin_memset(&rect, 0, 0x10)
    AdjustWindowRectEx(&rect, dwStyle, 0, dwExStyle)
    X += rect.left
    cx += rect.right - rect.left
    Y += rect.top
    rcx_1 = arg1[1]
    cy += rect.bottom - rect.top

int64_t rbp

if (cx != arg1[0x13].d || cy != *(arg1 + 0x9c))
    rbp.b = 1
else
    rbp.b = 0

arg1[0x13].d = cx
*(arg1 + 0x9c) = cy

if (*(rcx_1 + 0x27) != 0)
    int64_t rax_7
    rax_7.d = pwi.rcWindow.left
    rax_7:4.d = pwi.rcWindow.top
    int64_t r8_2
    r8_2.d = pwi.rcWindow.right
    r8_2:4.d = pwi.rcWindow.bottom
    int32_t cx_2 = pwi.rcWindow.right - pwi.rcWindow.left
    uint32_t cy_2 = (r8_2 u>> 0x20).d - (rax_7 u>> 0x20).d
    int32_t cx_1 = *(rcx_1 + 0x2c)
    uint32_t cy_1 = *(rcx_1 + 0x30)
    
    if (cx_1 == 0xffffffff)
        cx_1 = cx_2
    
    if (cy_1 == 0xffffffff)
        cy_1 = cy_2
    
    if (cx_2 s<= cx_1)
        cx_1 = cx_2
    
    if (cx s>= cx_1)
        cx_1 = cx
    
    cx = cx_1
    
    if (cy_2 s<= cy_1)
        cy_1 = cy_2
    
    if (cy s>= cy_1)
        cy_1 = cy
    
    cy = cy_1

if ((*(*arg1 + 0x70))(arg1) != 0)
    (*(*arg1 + 0x48))(arg1)

enum SET_WINDOW_POS_FLAGS uFlags = 0x14

if (arg1[7].d == 0)
    uFlags = 0x414

SetWindowPos(arg1[5], nullptr, X, Y, cx, cy, uFlags)
int64_t result = arg1[1]

if (*(result + 0x27) != 0 && rbp.b != 0)
    arg1[6].d = arg1[0x13].d
    *(arg1 + 0x34) = *(arg1 + 0x9c)
    HRGN hRgn = sub_140d7fa60(arg1, 1)
    result = SetWindowRgn(arg1[5], hRgn, 0)

__security_check_cookie(rax_1 ^ &var_d8)
return result
