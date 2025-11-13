// 函数: sub_140b6e650
// 地址: 0x140b6e650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int32_t rcx = 0
int16_t* var_268 = nullptr
int32_t rdx = 0
int64_t var_260 = 0

if (arg1 != 0 && *arg1 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg1[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_268, rbx_1.d + 1)
        rdx = var_260:4.d
        rcx = var_260.d
    
    int32_t rax_2 = rcx + rbx_1.d + 1
    var_260.d = rax_2
    
    if (rax_2 s> rdx)
        sub_140594770(&var_268)
    
    UnDecorator::getReferenceType(var_268, arg1, (rbx_1.d + 1) * 2)

int32_t rax_3 = sub_140a23cf0(&var_268, u".exe", 1, 1, 0xffffffff)

if (rax_3 == 0xffffffff)
    sub_140a20ba0(&var_268, u".exe", rax_3 + 5)

HANDLE rax_4 = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0)
struct PROCESSENTRY32W lppe
BOOL rax_5

if (rax_4 != -1)
    lppe.dwSize = 0x238
    rax_5 = Process32FirstW(rax_4, &lppe)

HANDLE rbx_3

if (rax_4 == -1 || rax_5 == 0)
label_140b6e784:
    CloseHandle(rax_4)
    rbx_3.b = 0
else
    while (true)
        int16_t* const rcx_7 = &data_142d40450
        
        if (var_260.d != 0)
            rcx_7 = var_268
        
        var_22c
        
        if (sub_140a54510(rcx_7, &var_22c) == 0)
            CloseHandle(rax_4)
            rbx_3.b = 1
            break
        
        if (Process32NextW(rax_4, &lppe) == 0)
            goto label_140b6e784

int16_t* rcx_10 = var_268

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

__security_check_cookie(rax_1 ^ &var_298)
return zx.q(rbx_3.b)
