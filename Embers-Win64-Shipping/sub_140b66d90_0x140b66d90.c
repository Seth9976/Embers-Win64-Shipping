// 函数: sub_140b66d90
// 地址: 0x140b66d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int16_t* var_48
sub_140b74300(arg1, &var_48, arg2, 1)
int16_t* const lpFileName = &data_142d40450
int32_t var_40

if (var_40 != 0)
    lpFileName = var_48

char fileInformation
BOOL rax_2 = GetFileAttributesExW(lpFileName, GetFileExInfoStandard, &fileInformation)
int16_t* rcx = var_48
int64_t rbx
rbx.b = rax_2 != 0

if (rcx != 0)
    sub_140a74f90(rcx)

if (rbx.b == 0 || (fileInformation & 0x10) != 0)
    __security_check_cookie(rax_1 ^ &var_68)
    return -1

int32_t var_1c
var_48:4.d = var_1c
int32_t var_18
var_48.d = var_18
int16_t* result = var_48
__security_check_cookie(rax_1 ^ &var_68)
return result
