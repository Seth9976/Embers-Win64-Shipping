// 函数: sub_140b729b0
// 地址: 0x140b729b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_8f8
int64_t rax_1 = __security_cookie ^ &var_8f8
PWSTR lpSubKey_7 = nullptr
int64_t var_890 = 0
sub_1405947f0(&lpSubKey_7, 9)
int32_t r14 = var_890:4.d
int32_t rbx = var_890.d + 9
var_890.d = rbx

if (rbx s> r14)
    sub_140594770(&lpSubKey_7)
    r14 = var_890:4.d
    rbx = var_890.d

PWSTR lpSubKey_6 = lpSubKey_7
UnDecorator::getReferenceType(lpSubKey_6, u"Software", 0x12)
int32_t rax_2 = arg1[1].d
int32_t rdi = rax_2 - 1

if (rax_2 == 0)
    rdi = 0

int32_t r15 = 2
int32_t rax_4

if (rbx == 0)
    rax_4 = 2

if (rbx != 0 || rdi == 0xffffffff)
    rax_4 = 1

PWSTR lpSubKey_2 = lpSubKey_6
int32_t rdx_2 = rax_4 + rbx + rdi

if (rdx_2 s> r14)
    sub_1405947f0(&lpSubKey_2, rdx_2)

sub_140a2cf70(&lpSubKey_2, *arg1, rdi)
int32_t rax_5 = arg2[1].d
int32_t rbx_1 = rax_5 - 1

if (rax_5 == 0)
    rbx_1 = 0

if (rbx != 0 || rbx_1 == 0xffffffff)
    r15 = 1

PWSTR lpSubKey_1 = lpSubKey_2
int32_t rdx_5 = r15 + rbx + rbx_1
lpSubKey_2 = nullptr
int32_t var_8a0 = rbx
int32_t var_89c = r14
int32_t var_880
var_880.q = 0

if (rdx_5 s> r14)
    sub_1405947f0(&lpSubKey_1, rdx_5)

sub_140a2cf70(&lpSubKey_1, *arg2, rbx_1)
PWSTR lpSubKey_5 = lpSubKey_2

if (lpSubKey_5 != 0)
    sub_140a74f90(lpSubKey_5)

int64_t* rax_9 = sub_140a300d0(&lpSubKey_1, &lpSubKey_7, &data_142d5a024, &(*U"{}[\nt")[3], 1)

if (&lpSubKey_1 != rax_9)
    PWSTR lpSubKey_3 = lpSubKey_1
    
    if (lpSubKey_3 != 0)
        sub_140a74f90(lpSubKey_3)
    
    lpSubKey_1 = *rax_9
    *rax_9 = 0
    var_8a0 = rax_9[1].d
    int32_t var_89c_1 = *(rax_9 + 0xc)
    rax_9[1] = 0

PWSTR lpSubKey_8 = lpSubKey_7

if (lpSubKey_8 != 0)
    sub_140a74f90(lpSubKey_8)

int16_t* const rbx_3 = &data_142d40450
PWSTR lpSubKey = &data_142d40450

if (var_8a0 != 0)
    lpSubKey = lpSubKey_1

HKEY var_878
enum WIN32_ERROR dwMessageId_1 = RegCreateKeyExW(-0xffffffff80000001, lpSubKey, 0, nullptr, 
    REG_OPTION_RESERVED, KEY_WRITE, nullptr, &var_878, nullptr)
enum WIN32_ERROR dwMessageId = dwMessageId_1
enum REG_OPEN_CREATE_OPTIONS var_8d8_1

if (dwMessageId_1 == NO_ERROR)
    int32_t rax_12 = arg4[1].d
    uint64_t rcx_10 = zx.q(rax_12 - 1)
    
    if (rax_12 == 0)
        rcx_10 = 0
    
    int16_t* const r8_3
    
    if (rax_12 == 0)
        r8_3 = &data_142d40450
    else
        r8_3 = *arg4
    
    PWSTR lpValueName
    
    if (arg3[1].d == 0)
        lpValueName = &data_142d40450
    else
        lpValueName = *arg3
    
    var_8d8_1.q = r8_3
    dwMessageId = RegSetValueExW(var_878, lpValueName, 0, REG_SZ, var_8d8_1, ((rcx_10 << 1) + 2).d)
    RegCloseKey(var_878)

if (dwMessageId_1 != NO_ERROR || dwMessageId != NO_ERROR)
    void var_858
    var_8d8_1.q = &var_858
    FormatMessageW(FORMAT_MESSAGE_FROM_SYSTEM, nullptr, dwMessageId, 0, var_8d8_1, 0x400, nullptr)
    
    if (arg3[1].d != 0)
        rbx_3 = *arg3
    
    var_8d8_1.q = &var_858
    sub_140b1f700(data_143ddb418, 
        FWindowsPlatformMisc::SetStoredValue: ERROR: Could not store value for '%s'. Error Code %u: %s", 
        rbx_3)
    rbx_3.b = 0
else
    rbx_3.b = 1

PWSTR lpSubKey_4 = lpSubKey_1

if (lpSubKey_4 != 0)
    sub_140a74f90(lpSubKey_4)

__security_check_cookie(rax_1 ^ &var_8f8)
return zx.q(rbx_3.b)
