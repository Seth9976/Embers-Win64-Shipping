// 函数: sub_140ac2900
// 地址: 0x140ac2900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2
int64_t* r9 = *(rax + 8)

if ((r9[5].b & 2) == 0)
    return rax

char arg_10 = 0
int64_t* rcx = r9[1]
char* rdx = *rcx

if (&rdx[1] u> rcx[1])
    return (*(*r9 + 0x150))(r9, &arg_10, 1)

arg_10 = *rdx
int64_t* rax_3 = r9[1]
*rax_3 += 1
return rax_3
