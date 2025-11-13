// 函数: sub_1417bf0f0
// 地址: 0x1417bf0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
char rax

if (rcx == 0)
    rax = 0
else
    rax = (*(*rcx + 8))(rcx)

int64_t* rcx_1 = arg1[1]
char arg_10 = rax
char* rdx = *rcx_1

if (&rdx[1] u> rcx_1[1])
    (*(*arg1 + 0x150))(arg1, &arg_10, 1)
else
    arg_10 = *rdx
    *rcx_1 += 1

int64_t* rcx_3 = *arg2
char rax_3

if (rcx_3 == 0)
    rax_3 = 0
else
    rax_3 = (*(*rcx_3 + 0x10))(rcx_3)

int64_t* rcx_4 = arg1[1]
char arg_8 = rax_3
char* rdx_2 = *rcx_4
uint64_t result

if (&rdx_2[1] u> rcx_4[1])
    result = (*(*arg1 + 0x150))(arg1, &arg_8, 1)
else
    result = zx.q(*rdx_2)
    arg_8 = result.b
    *rcx_4 += 1

if ((arg1[5].b & 1) != 0)
    result = sub_1417c36b0(zx.d(arg_10), zx.d(arg_8))
    int64_t* rcx_7 = *arg2
    
    if (rcx_7 != result)
        *arg2 = result
        
        if (rcx_7 != 0)
            result = (**rcx_7)(rcx_7, 1)

int64_t* rcx_8 = *arg2

if (rcx_8 == 0)
    return result

return (*(*rcx_8 + 0x20))(rcx_8, arg1)
