// 函数: sub_140d7fe60
// 地址: 0x140d7fe60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t Y = arg3
int32_t X = arg2

if (*(*(arg1 + 8) + 0x18) != 0)
    int32_t dwStyle = GetWindowLongW(*(arg1 + 0x28), 0xfffffff0)
    enum WINDOW_EX_STYLE dwExStyle = GetWindowLongW(*(arg1 + 0x28), 0xffffffec)
    RECT rect
    __builtin_memset(&rect, 0, 0x10)
    AdjustWindowRectEx(&rect, dwStyle, 0, dwExStyle)
    X += rect.left
    Y += rect.top

int64_t result = SetWindowPos(*(arg1 + 0x28), nullptr, X, Y, 0, 0, 0x15)
__security_check_cookie(rax_1 ^ &var_78)
return result
