// 函数: sub_142a7f6d0
// 地址: 0x142a7f6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* string = arg1
int64_t* rax = sub_142a7f760(arg2)

if (*arg2 s> 0)
    return 0

char* rax_2 = strrchr(string, 0x5c)

if (rax_2 != 0)
    string = &rax_2[1]

sub_142a860a0(nullptr)
void* rax_3 = sub_142a86c30(rax, string)
sub_142a860d0(nullptr)

if (rax_3 == 0)
    return 0

return *(rax_3 + 8)
