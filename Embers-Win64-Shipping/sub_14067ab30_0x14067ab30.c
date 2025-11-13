// 函数: sub_14067ab30
// 地址: 0x14067ab30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[1].d s<= 1 || arg3 == 0 || sub_140d23de0(arg3) == 0)
    return 

int64_t var_18 = *(arg3 + 0x28)
int64_t* rax_2 = *(arg3 + 0x30)

if (rax_2 != 0)
    rax_2[1].d += 1

sub_140b75940(*(arg1 + 0x28), arg2, &var_18)

if (rax_2 == 0)
    return 

rax_2[1].d -= 1

if (rax_2[1].d != 1)
    return 

(**rax_2)(rax_2)
int32_t temp1_1 = *(rax_2 + 0xc)
*(rax_2 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rax_2 + 8))(rax_2, 1)
