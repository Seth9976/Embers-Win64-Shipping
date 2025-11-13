// 函数: ?QueryLastError@PDBCommon@@UEAAJQEAD@Z
// 地址: 0x140baa980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_858
int64_t rax_1 = __security_cookie ^ &var_858
wchar16 string[0x410]
sub_140b63d10(arg2, &string)
wchar16* rax_2 = wcsrchr(&string, 0x2f)

if (rax_2 == 0)
    *arg1 = *arg2
else
    sub_140b58260(arg1, &rax_2[1], 1)

__security_check_cookie(rax_1 ^ &var_858)
return arg1
