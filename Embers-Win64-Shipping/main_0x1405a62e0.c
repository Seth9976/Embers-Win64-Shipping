// 函数: main
// 地址: 0x1405a62e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_848
int64_t rax_1 = __security_cookie ^ &var_848
_set_invalid_parameter_handler(sub_14059c680)
data_143e18638 = arg1
PWSTR rbx_1 = GetCommandLineW()

if (sub_1405a3960() != 0)
    rbx_1 = &data_142d40450
    
    if (data_143cd5b20 != 0)
        rbx_1 = data_143cd5b18

if (sub_140b21a10(rbx_1, u"unattended") != 0)
    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX | SEM_NOOPENFILEERRORBOX)

void name
memset(&name, 0, 0x800)
int64_t rcx_2 = 0
int16_t i

do
    i = *(rcx_2 + u"UnrealEngine4")
    *(&name + rcx_2) = i
    rcx_2 += 2
while (i != 0)
HANDLE hMutex = CreateMutexW(nullptr, 1, &name)
data_143cd5a20 = hMutex

if (hMutex == 0)
    hMutex.b = 0
else
    enum WIN32_ERROR rax_5 = GetLastError()
    char rax_6
    
    if (rax_5 != ERROR_ALREADY_EXISTS)
        rax_6 = sub_140b21a10(rbx_1, u"NEVERFIRST")
    
    if (rax_5 == ERROR_ALREADY_EXISTS || rax_6 != 0)
        hMutex = data_143cd5a20
        
        if (hMutex != 0)
            ReleaseMutex(hMutex)
            data_143cd5a20 = 0
        
        hMutex.b = 0
    else
        hMutex = 1

data_14399fa58 = hMutex.b
char rax_7 = sub_140b21a10(rbx_1, u"crashreports")
char rcx_6 = data_143d78ec4

if (rax_7 != 0)
    rcx_6 = 1

data_143d78ec4 = rcx_6
char rax_8 = sub_140b21a10(rbx_1, u"noexceptionhandler")
char rax_9 = sub_140b21a10(rbx_1, u"noinnerexception")

if (rax_9 != 0 || data_143dbb3b5 != rax_9 || rax_8 != 0)
    data_143958010 = 0

int32_t rbx_2

if ((rax_9 != 0 || data_143dbb3b5 != rax_9 || rax_8 != 0) && rax_8 != 0)
    rbx_2 = sub_14059bf80(rbx_1)
else
    data_143de5431 = 1
    int32_t rax_10 = sub_14059c330(rbx_1)
    rbx_2 = rax_10
    int32_t var_828_1 = rax_10
    data_143de5431 = 0

sub_140d89600()
void* rcx_11 = data_143ddb400

if (rcx_11 != 0)
    sub_140aef720(rcx_11)
    int64_t* rcx_12 = data_143ddb400
    
    if (rcx_12 != 0)
        (**rcx_12)(rcx_12, 1)
    
    data_143ddb400 = 0

sub_140b19e60()
sub_140b19e60()
void* rdx_1 = data_1439a8bd0
(*(rdx_1 + 0x20))(&data_1439a8bd0, rdx_1)
sub_140a8dcd0()
HANDLE hMutex_1 = data_143cd5a20

if (hMutex_1 != 0)
    ReleaseMutex(hMutex_1)
    data_143cd5a20 = 0

if (data_143cd5a28 != 0)
    Sleep(0xffffffff)

__security_check_cookie(rax_1 ^ &var_848)
return zx.q(rbx_2)
