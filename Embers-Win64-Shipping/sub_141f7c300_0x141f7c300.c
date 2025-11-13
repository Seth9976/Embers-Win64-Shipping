// 函数: sub_141f7c300
// 地址: 0x141f7c300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_1408d9160(arg1, arg2, arg3)
int64_t* rdx = result[1]
int32_t* rax = *rdx

if (&rax[1] u<= rdx[1])
    arg2[3] = *rax
    int64_t* rcx_2 = result[1]
    *rcx_2 += 4
    return result

if ((*(result + 0x29) & 0x20) != 0)
    sub_140b54070(result, &arg2[3], arg3)
    return result

(*(*result + 0x150))(result, &arg2[3], 4)
return result
