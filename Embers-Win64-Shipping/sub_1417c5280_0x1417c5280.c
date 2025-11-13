// 函数: sub_1417c5280
// 地址: 0x1417c5280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x140))(arg2, arg1)
int64_t* rcx_1 = *(arg1 + 8)
char rax_1

if (rcx_1 == 0)
    rax_1 = 0
else
    rax_1 = (*(*rcx_1 + 8))(rcx_1)

int64_t* rcx_2 = arg2[1]
char arg_10 = rax_1
char* rdx_1 = *rcx_2

if (&rdx_1[1] u> rcx_2[1])
    (*(*arg2 + 0x150))(arg2, &arg_10, 1)
else
    arg_10 = *rdx_1
    *rcx_2 += 1

int64_t* rcx_4 = *(arg1 + 8)
char rax_4

if (rcx_4 == 0)
    rax_4 = 0
else
    rax_4 = (*(*rcx_4 + 0x10))(rcx_4)

int64_t* rcx_5 = arg2[1]
char arg_8 = rax_4
char* rdx_3 = *rcx_5
uint64_t result

if (&rdx_3[1] u> rcx_5[1])
    result = (*(*arg2 + 0x150))(arg2, &arg_8, 1)
else
    result = zx.q(*rdx_3)
    arg_8 = result.b
    *rcx_5 += 1

if ((arg2[5].b & 1) != 0)
    result = sub_1417c36b0(zx.d(arg_10), zx.d(arg_8))
    int64_t* rcx_8 = *(arg1 + 8)
    
    if (rcx_8 != result)
        *(arg1 + 8) = result
        
        if (rcx_8 != 0)
            result = (**rcx_8)(rcx_8, 1)

int64_t* rcx_9 = *(arg1 + 8)

if (rcx_9 == 0)
    return result

return (*(*rcx_9 + 0x20))(rcx_9, arg2)
