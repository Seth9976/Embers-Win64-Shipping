// 函数: sub_140b66470
// 地址: 0x140b66470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4d8
int64_t rax_1 = __security_cookie ^ &var_4d8
int64_t* lpcchValueName = arg1
PWSTR lpSubKey_8 = nullptr
int64_t var_480 = 0
sub_1405947f0(&lpSubKey_8, 9)
int32_t rsi = var_480:4.d
int32_t rbx = var_480.d + 9
var_480.d = rbx

if (rbx s> rsi)
    sub_140594770(&lpSubKey_8)
    rsi = var_480:4.d
    rbx = var_480.d

PWSTR lpSubKey_7 = lpSubKey_8
UnDecorator::getReferenceType(lpSubKey_7, u"Software", 0x12)
int32_t rax_2 = arg1[1].d
int32_t rdi_1 = rax_2 - 1

if (rax_2 == 0)
    rdi_1 = 0

int32_t r14 = 2
int32_t rax_4

if (rbx == 0)
    rax_4 = 2

if (rbx != 0 || rdi_1 == 0xffffffff)
    rax_4 = 1

PWSTR lpSubKey_3 = lpSubKey_7
int32_t rdx_2 = rdi_1 + rax_4 + rbx

if (rdx_2 s> rsi)
    sub_1405947f0(&lpSubKey_3, rdx_2)

sub_140a2cf70(&lpSubKey_3, *lpcchValueName, rdi_1)
int32_t rax_5 = arg2[1].d
int32_t rbx_1 = rax_5 - 1

if (rax_5 == 0)
    rbx_1 = 0

if (rbx != 0 || rbx_1 == 0xffffffff)
    r14 = 1

PWSTR lpSubKey_2 = lpSubKey_3
int32_t rdx_6 = rbx_1 + r14 + rbx
lpSubKey_3 = nullptr
int32_t var_490 = rbx
int32_t var_48c = rsi
int32_t var_470
var_470.q = 0

if (rdx_6 s> rsi)
    sub_1405947f0(&lpSubKey_2, rdx_6)

sub_140a2cf70(&lpSubKey_2, *arg2, rbx_1)
PWSTR lpSubKey_6 = lpSubKey_3

if (lpSubKey_6 != 0)
    sub_140a74f90(lpSubKey_6)

int32_t var_4b8 = 1
uint64_t rax_9 = sub_140a300d0(&lpSubKey_2, &lpSubKey_8, &data_142d5a024, &(*U"{}[\nt")[3], var_4b8)

if (&lpSubKey_2 != rax_9)
    PWSTR lpSubKey_4 = lpSubKey_2
    
    if (lpSubKey_4 != 0)
        sub_140a74f90(lpSubKey_4)
    
    lpSubKey_2 = *rax_9
    *rax_9 = 0
    var_490 = *(rax_9 + 8)
    int32_t var_48c_1 = *(rax_9 + 0xc)
    *(rax_9 + 8) = 0

PWSTR lpSubKey_9 = lpSubKey_8

if (lpSubKey_9 != 0)
    sub_140a74f90(lpSubKey_9)

PWSTR lpSubKey_1 = &data_142d40450
HKEY hKey
var_4b8.q = &hKey
PWSTR lpSubKey = &data_142d40450

if (var_490 != 0)
    lpSubKey = lpSubKey_2

enum WIN32_ERROR rax_12 = RegOpenKeyExW(-0xffffffff80000001, lpSubKey, 0, 0x2001f, var_4b8)
enum WIN32_ERROR rsi_1 = rax_12

if (rax_12 == NO_ERROR)
    PWSTR lpValueName
    
    if (arg3[1].d == 0)
        lpValueName = &data_142d40450
    else
        lpValueName = *arg3
    
    enum WIN32_ERROR rax_13 = RegDeleteValueW(hKey, lpValueName)
    HKEY hKey_1 = hKey
    rsi_1 = rax_13
    __builtin_memset(&var_4b8, 0, 0x20)
    uint32_t lpcchName = 0x100
    wchar16* lpClass
    uint32_t* lpcchClass
    FILETIME* lpftLastWriteTime
    wchar16 name[0x38]
    enum WIN32_ERROR rax_14 =
        RegEnumKeyExW(hKey_1, 0, &name, &lpcchName, var_4b8, lpClass, lpcchClass, lpftLastWriteTime)
    HKEY hKey_2 = hKey
    __builtin_memset(&var_4b8, 0, 0x20)
    lpcchValueName.d = 0x100
    uint32_t* lpType
    uint8_t* lpData
    uint32_t* lpcbData
    wchar16 valueName[0x100]
    r14.b = RegEnumValueW(hKey_2, 0, &valueName, &lpcchValueName, var_4b8, lpType, lpData, lpcbData)
        != NO_ERROR
    RegCloseKey(hKey)
    
    if (rax_14 != 0 && r14.b != 0)
        if (var_490 != 0)
            lpSubKey_1 = lpSubKey_2
        
        RegDeleteKeyW(-0xffffffff80000001, lpSubKey_1)

PWSTR lpSubKey_5 = lpSubKey_2
uint64_t rbx_2
rbx_2.b = rsi_1 == NO_ERROR

if (lpSubKey_5 != 0)
    sub_140a74f90(lpSubKey_5)

__security_check_cookie(rax_1 ^ &var_4d8)
return zx.q(rbx_2.b)
