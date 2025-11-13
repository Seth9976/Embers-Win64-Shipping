// 函数: sub_140fc5390
// 地址: 0x140fc5390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
int64_t* result

if (*(*(*arg2 + 0xa0))(arg2, &arg_8) == *(arg1 + 0x20))
    int32_t namelen = (*(*arg2 + 0xf8))(arg2)
    int32_t rax_2 = connect(*(arg1 + 0x28), &arg2[1], namelen)
    int64_t* rcx_3 = *(arg1 + 0x38)
    int64_t r8_2 = *rcx_3
    result = (*(r8_2 + 0xc0))(rcx_3, zx.q(rax_2), r8_2)
    
    if (result.d == 0 || result.d - 7 u<= 1)
        result.b = 1
        return result

result.b = 0
return result
