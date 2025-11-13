// 函数: sub_140aef990
// 地址: 0x140aef990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16* string

if (arg1[1].d == 0)
    string = &data_142d40450
else
    string = *arg1

int64_t* i_2 = wcschr(string, 0x25)
int64_t* i_1 = i_2

if (i_2 == 0)
    return i_2

wchar16* i

do
    int64_t* rax = sub_140af9950(i_1)
    
    if (rax != 0)
        return sub_140aef750(arg1, &arg1[2])
    
    i = wcschr(i_1 + 2, (rax + 0x25).w)
    i_1 = i
while (i != 0)

return i
