// 函数: sub_142a63ff0
// 地址: 0x142a63ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s> 0)
    return 0

char** rax_1 = sub_142a7dd00(0x190)
int128_t* result_1 = sub_142a7dd00(0x38)
int128_t* result = result_1

if (result_1 == 0 || rax_1 == 0)
    *arg2 = 7
    sub_142a7dcd0(result)
    sub_142a7dcd0(rax_1)
    return 0

*result_1 = data_14363de48
__builtin_memcpy(&result_1[1], 
    "\x20\xf7\xa5\x42\x01\x00\x00\x00\x70\xf7\xa5\x42\x01\x00\x00\x00\x90\x2a\xa9\x42\x01\x00\x00\x00\x"
"90\xf7\xa5\x42\x01\x00\x00\x00", 
    0x20)
result_1[3].q = sub_142a5f810
memset(rax_1, 0, 0xc8)
*(rax_1 + 0xb4) = 0
memset(&rax_1[0x19], 0, 0xc8)
*(rax_1 + 0x17c) = 0
char** rax_2 = sub_142a61b10(nullptr, arg1, "res_index", 2, arg2)
sub_142a625a0(rax_2, "InstalledLocales", rax_1, arg2)

if (*arg2 s> 0)
    sub_142a61820(rax_1, 1)
    sub_142a7dcd0(rax_1)
    sub_142a7dcd0(result)
    result = nullptr
else
    *(result + 8) = rax_1

sub_142a61820(rax_2, 1)
return result
