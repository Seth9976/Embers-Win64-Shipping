// 函数: sub_140d887f0
// 地址: 0x140d887f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143e20cb0 != 0)
    return 

sub_140af2b60()

if (sub_140b21a10(&data_143dbb3f0, u"NOSPLASH") == 1)
    return 

int32_t rdx_1 = 0
int32_t rcx_1 = 0
int32_t var_30_1 = 0
int32_t var_2c_1 = 0
int64_t var_38 = 0

if ((*u"Embers")[0] != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while ((*u"Embers")[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        rcx_1 = var_2c_1
        rdx_1 = var_30_1
    
    int32_t rax_1 = rdx_1 + rbx_1.d + 1
    var_30_1 = rax_1
    
    if (rax_1 s> rcx_1)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, u"Embers", (rbx_1.d + 1) * 2)

void var_28
sub_140aae2f0(&var_28, &var_38)
int64_t rcx_6 = var_38

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

bool cond:1_1 = sub_140ab3dc0(&var_28) != 0
var_38 = 0
var_30_1.q = 0
wchar16 const* const rcx_8 = u"Splash"

if (cond:1_1)
    rcx_8 = u"SplashDefault"

char arg_8
char rax_3 = sub_140d7d150(rcx_8, &var_38, &arg_8)
int64_t rbx_3 = var_38

if (rax_3 == 1)
    if (arg_8 == 0)
        int64_t* rax_4 = sub_140ac6680(&var_28)
        int16_t* rdx_5
        
        if (rax_4[1].d == 0)
            rdx_5 = &data_142d40450
        else
            rdx_5 = *rax_4
        
        sub_140d88e50(3, rdx_5)
    
    int32_t lpThreadId = 0
    HWND hWnd = CreateWindowExW(WS_EX_LEFT, STATIC", SplashScreenGuard"
        , WS_OVERLAPPED, 0, 0, 0, 0, -fffffffffffffffd, nullptr, data_143e18638, nullptr)
    data_143e20cc8 = hWnd
    
    if (hWnd != 0)
        ShowWindow(hWnd, SW_SHOW)
    
    sub_140596860(&data_143e205d8, rbx_3, var_30_1, data_143e205e4, 0)
    arg_8.d = 0
    lpThreadId.q = &arg_8
    data_143e20cb0 = CreateThread(nullptr, 0x20000, sub_140d88f80, nullptr, 
        STACK_SIZE_PARAM_IS_A_RESERVATION, lpThreadId)

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

sub_1405970a0(&var_28)
