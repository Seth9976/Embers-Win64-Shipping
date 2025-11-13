// 函数: sub_140b67ab0
// 地址: 0x140b67ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t* var_38 = nullptr
int64_t var_30 = 0
int64_t var_28
int64_t* rax = sub_140b69730(&var_28)
int64_t rbx = sx.q(var_30.d)
int32_t rdx = (rbx + 1).d
var_30.d = rdx

if (rdx s> 0)
    sub_1405a4f90(&var_38)

sub_140596d10(&var_38[rbx * 2], rax)
int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int32_t rax_1 = data_143e185f8

if (rax_1 s> 0)
    int64_t rdi_1 = sx.q(var_30.d)
    int64_t* rbx_3 = (sx.q(rax_1 - 1) << 4) + data_143e185f0
    int32_t rax_3 = (rdi_1 + 1).d
    var_30.d = rax_3
    
    if (rax_3 s> 0)
        sub_1405a4f90(&var_38)
    
    sub_140596d10(&var_38[rdi_1 * 2], rbx_3)

int32_t i = 0

if (data_143e18608 s> 0)
    do
        int64_t rbx_4 = sx.q(var_30.d)
        int64_t r14_1 = data_143e18600
        int32_t rax_4 = (rbx_4 + 1).d
        var_30.d = rax_4
        
        if (rax_4 s> var_30:4.d)
            sub_1405a4f90(&var_38)
        
        sub_140596d10(&var_38[rbx_4 * 2], (sx.q(i) << 4) + r14_1)
        i += 1
    while (i s< data_143e18608)

enum THREAD_ERROR_MODE dwNewMode = SEM_ALL_ERRORS

if (sub_140b21a10(GetCommandLineW(), u"dllerrors") == 0)
    dwNewMode = SEM_NOOPENFILEERRORBOX
    
    if (sub_140b21a10(GetCommandLineW(), u"unattended") != 0)
        dwNewMode = SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX | SEM_NOOPENFILEERRORBOX

enum THREAD_ERROR_MODE arg_8 = SEM_ALL_ERRORS
BOOL rax_9 = SetThreadErrorMode(dwNewMode, &arg_8)
var_28 = 0
int32_t rcx_17 = 0
int32_t var_1c = 0
int32_t var_20 = 0

if (arg1 != 0 && *arg1 != 0)
    int64_t rbx_5 = -1
    
    do
        rbx_5 += 1
    while (arg1[rbx_5] != 0)
    
    if (rbx_5.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_5.d + 1)
        rcx_17 = var_1c
        rsi = var_20
    
    int32_t rax_10 = rsi + rbx_5.d + 1
    int32_t var_20_1 = rax_10
    
    if (rax_10 s> rcx_17)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, arg1, (rbx_5.d + 1) * 2)

HMODULE result = sub_140b6fa10(&var_28, &var_38)
int64_t rcx_22 = var_28

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

if (rax_9 != 0)
    SetThreadErrorMode(arg_8, nullptr)

int32_t i_2 = var_30.d
int64_t* rbx_7 = var_38

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_24 = *rbx_7
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        rbx_7 = &rbx_7[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rbx_7 = var_38

if (rbx_7 != 0)
    sub_140a74f90(rbx_7)

return result
