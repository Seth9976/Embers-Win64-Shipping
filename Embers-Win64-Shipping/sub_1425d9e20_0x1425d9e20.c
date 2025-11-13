// 函数: sub_1425d9e20
// 地址: 0x1425d9e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0 = *arg2
int32_t rsi = arg2[1].d
void*** rax = sub_140a84c80(0, 0x20, 0)

if (rax != 0)
    rax[1] = zmm0
    rax[2].d = rsi
    *rax = &data_1434480d8
    rax[3] = sub_140a387b0()
    *rax = &data_143448130

int64_t rbp = sx.q(*(arg1 + 0x38))
int32_t rax_2 = (rbp + 1).d
*(arg1 + 0x38) = rax_2

if (rax_2 s> *(arg1 + 0x3c))
    sub_1405a4f90(arg1 + 0x30)

int64_t* rdx_3 = (rbp << 4) + *(arg1 + 0x30)
*rdx_3 = 0
rdx_3[1].d = 0
void var_18
void* result = &var_18

if (&var_18 == rdx_3)
    goto label_1425d9eca

if (rax != 0)
    result = (*rax)[8](rax)
label_1425d9eca:
    
    if (rax != 0)
        (*rax)[7](rax, 0)
        result = sub_140a84c80(rax, 0, 0)
        
        if (result != 0)
            result = sub_140a74f90(result)

*(arg1 + 0x28) = 1
return result
