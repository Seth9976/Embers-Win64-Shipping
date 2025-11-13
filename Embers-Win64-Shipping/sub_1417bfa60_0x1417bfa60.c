// 函数: sub_1417bfa60
// 地址: 0x1417bfa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg2 + 0x10))(arg2)
int64_t r8 = *arg1
uint64_t result

if (rax_1 == (*(r8 + 0x10))(arg1, arg4, r8).d)
    result = arg2[1]
    
    if (arg1[1].d == result.d && *(arg1 + 0xc) == (result u>> 0x20).d)
        int512_t zmm0
        result, zmm0 = sub_1417bf050(&arg1[2], &arg2[2], arg3, arg4)
        
        if (result.b != 0 && sub_1417bf050(&arg1[3], &arg2[3], zmm0, arg4).b != 0
                && arg1[4].d == arg2[4].d)
            result.b = 1
            return result

result.b = 0
return result
