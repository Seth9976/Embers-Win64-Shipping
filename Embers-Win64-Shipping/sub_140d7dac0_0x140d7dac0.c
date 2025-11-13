// 函数: sub_140d7dac0
// 地址: 0x140d7dac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78

if (*(*(*arg1 + 0xe0))() == 5 && *((*(*arg1 + 0xe0))(arg1) + 0x18) == 0)
    __security_check_cookie(rax_1 ^ &var_78)
    return 0

WINDOWINFO pwi
pwi.cyWindowBorders = 0
pwi.atomWindowType = 0
pwi.wCreatorVersion = 0
pwi.cbSize = 0x3c
pwi.rcWindow.left = 0
pwi.rcWindow.top = 0
pwi.rcWindow.right = 0
pwi.rcWindow.bottom = 0
pwi.rcClient.left = 0
pwi.rcClient.top = 0
pwi.rcClient.right = 0
pwi.rcClient.bottom = 0
pwi.dwStyle = 0
pwi.dwExStyle = 0
pwi.dwWindowStatus = 0
pwi.cxWindowBorders = 0
GetWindowInfo(arg1[5], &pwi)
uint64_t cxWindowBorders = zx.q(pwi.cxWindowBorders)
__security_check_cookie(rax_1 ^ &var_78)
return cxWindowBorders
