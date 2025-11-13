// 函数: sub_142364580
// 地址: 0x142364580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x48)
int512_t result

if (rcx != 0)
    int64_t* rax_1
    rax_1, result = sub_141fe6490(rcx, arg1 + 0x50)
    rcx = rax_1

if (rcx == 0)
    result.o = zx.o(0)
    return result

if ((*(arg1 + 0x68) & 1) == 0)
    jump(*(*rcx + 0x288))

result.o = 0x461c4000
return result
