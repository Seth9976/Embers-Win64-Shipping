// 函数: sub_142a42c60
// 地址: 0x142a42c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_144015388 u> 0)
    int64_t rax
    rax.b = 1
    return rax

enum WIN32_ERROR rdi = NO_ERROR
HANDLE arg_8 = nullptr
BOOL rax_2 = OpenProcessToken(GetCurrentProcess(), 0x28, &arg_8)
BOOL rbx = rax_2
bool cond:0_1

if (rax_2 == 0)
label_142a42d2f:
    sub_142a43740("cannot enable large OS page support, error %lu\n", zx.q(GetLastError()))
    cond:0_1 = rbx != 0
else
    var_14
    BOOL rax_3 = LookupPrivilegeValueA(nullptr, "SeLockMemoryPrivilege", &var_14)
    rbx = rax_3
    
    if (rax_3 != 0)
        TOKEN_PRIVILEGES NewState
        NewState.PrivilegeCount = 1
        NewState.Privileges[0].Attributes = 2
        BOOL rax_4 = AdjustTokenPrivileges(arg_8, 0, &NewState, 0, nullptr, nullptr)
        rbx = rax_4
        
        if (rax_4 != 0)
            enum WIN32_ERROR rax_5 = GetLastError()
            rdi = rax_5
            rbx.b = rax_5 == NO_ERROR
            
            if (rax_5 == NO_ERROR)
                data_144015388 = GetLargePageMinimum()
    
    CloseHandle(arg_8)
    cond:0_1 = rbx != 0
    
    if (rbx == 0)
        if (rdi == NO_ERROR)
            goto label_142a42d2f
        
        sub_142a43740("cannot enable large OS page support, error %lu\n", zx.q(rdi))
        cond:0_1 = rbx != 0

int64_t rax_7
rax_7.b = cond:0_1
return rax_7
