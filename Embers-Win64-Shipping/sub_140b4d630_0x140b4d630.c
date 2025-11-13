// 函数: sub_140b4d630
// 地址: 0x140b4d630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = j_sub_140a82f30(0x80)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    void var_18
    int64_t* rax = sub_140596d10(&var_18, arg2)
    result[2] = arg1
    *result = &data_142e79db8
    result[1].d = 0
    sub_140596d10(&result[3], rax)
    __builtin_memset(&result[5], 0, 0x54)
    *(result + 0x7c) = 1
    int64_t rcx_2 = *rax
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    result[1].d += 1

int64_t rbx_2 = sx.q(arg1[1].d)
int32_t rcx_3 = (rbx_2 + 1).d
arg1[1].d = rcx_3

if (rcx_3 s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

*(*arg1 + (rbx_2 << 3)) = result
return result
