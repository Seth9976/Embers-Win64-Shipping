// 函数: sub_140ac1b20
// 地址: 0x140ac1b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *(arg1 + 8)
int64_t* rcx = r9[1]
char* r8 = *rcx

if (&r8[1] u> rcx[1])
    jump(*(*r9 + 0x150))

*arg2 = *r8
int64_t* result = r9[1]
*result += 1
return result
