// 函数: sub_140ac3890
// 地址: 0x140ac3890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(*arg2 + 8)

if ((rcx[5].b & 2) != 0)
    char arg_8 = 0xa
    int64_t* rdx = rcx[1]
    char* r8_1 = *rdx
    
    if (&r8_1[1] u> rdx[1])
        (*(*rcx + 0x150))(rcx, &arg_8, 1)
    else
        arg_8 = *r8_1
        int64_t* rax_3 = rcx[1]
        *rax_3 += 1

int64_t* rcx_1 = *(*arg2 + 8)
(*(*rcx_1 + 0x138))(rcx_1, arg1 + 0x10)
int64_t* r9 = *(*arg2 + 8)
int64_t* rcx_2 = r9[1]
char* r8_2 = *rcx_2

if (&r8_2[1] u> rcx_2[1])
    jump(*(*r9 + 0x150))

*(arg1 + 0x28) = *r8_2
int64_t* result = r9[1]
*result += 1
return result
