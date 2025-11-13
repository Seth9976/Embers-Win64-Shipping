// 函数: sub_141b8f9a0
// 地址: 0x141b8f9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || (arg1[0x23].b == 0 && arg1[0x22].d s> 0))
    return 0

(*(*arg2 + 0x280))(arg2)
int64_t arg_10 = 0
int32_t rbp_3 = (arg1[1].d u>> 6 & 1) << 6
int64_t* rax_2 = (*(*arg1 + 0x2c8))(arg1)

if ((1 & sub_140b5b8a0(0, 0)) != 0)
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* result = sub_140d2dfc0(rax_2, arg1, 0, rbp_3 + 8, 0, 0, 0, 0, 0)
*(result + 0x30) = arg2
*(result + 0x28) = arg1
arg2[5] = result
int64_t rbp_4 = sx.q(arg1[0x22].d)
int32_t rcx_4 = (rbp_4 + 1).d
arg1[0x22].d = rcx_4

if (rcx_4 s> *(arg1 + 0x114))
    sub_1405a4d70(&arg1[0x21])

*(arg1[0x21] + (rbp_4 << 3)) = result
(*(*arg1 + 0x2d0))(arg1, result)
sub_141bb7f50(arg1)
return result
