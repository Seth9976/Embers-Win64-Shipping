// 函数: sub_140baaa10
// 地址: 0x140baaa10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* string

if (arg2[1].d == 0)
    string = &data_142d40450
else
    string = *arg2
    
    if (string == 0)
        *arg1 = 0
        return arg1

wchar16* rax_1 = wcsrchr(string, 0x2f)
void* string_1 = &rax_1[1]

if (rax_1 == 0)
    string_1 = string

sub_140b58260(arg1, string_1, 1)
return arg1
