// 函数: sub_141a70550
// 地址: 0x141a70550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x108))()
int64_t* result = sub_1409ac860(arg1, arg2 + 8, arg3)
int64_t* rdx_1 = result[1]
char* rax_1 = *rdx_1

if (&rax_1[1] u> rdx_1[1])
    (*(*result + 0x150))(result, arg2 + 0x18, 1)
    return result

*(arg2 + 0x18) = *rax_1
int64_t* rcx_3 = result[1]
*rcx_3 += 1
return result
