// 函数: sub_1417c0290
// 地址: 0x1417c0290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg2 + 0x10))(arg2)
int64_t r8 = *arg1
uint64_t result

if (rax_1 == (*(r8 + 0x10))(arg1, arg3, r8).d)
    result = arg2[1]
    
    if (arg1[1].d == result.d && *(arg1 + 0xc) == (result u>> 0x20).d)
        int32_t zmm0 = arg2[2].d
        
        if (not(zmm0 f!= arg1[2].d))
            int512_t zmm0_1
            result, zmm0_1 = sub_1417bf050(&arg1[3], &arg2[3], zmm0, arg3)
            
            if (result.b != 0)
                int512_t zmm0_2
                result, zmm0_2 = sub_1417bf050(&arg1[4], &arg2[4], zmm0_1, arg3)
                
                if (result.b != 0 && sub_1417bf050(&arg1[5], &arg2[5], zmm0_2, arg3).b != 0
                        && arg1[6].d == arg2[6].d)
                    result.b = 1
                    return result

result.b = 0
return result
