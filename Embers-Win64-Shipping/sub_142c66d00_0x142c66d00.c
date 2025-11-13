// 函数: sub_142c66d00
// 地址: 0x142c66d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg1[1](arg2, arg3, sx.q(arg1[4].d))
int64_t** r14_1 = *arg1 + (rax << 5)

for (int64_t* i = *r14_1; i != 0; i = i[2])
    void* rdx_1 = *i
    
    if (arg1[2](rdx_1 + 0x28, *(rdx_1 + 0x20), arg2, arg3) != 0)
        sub_142c6a090(r14_1, i, arg1)
        arg1[5] -= 1
        break

int64_t* rax_3 = data_143ccb898(arg3 + 0x30)

if (rax_3 == 0)
    return rax_3

memcpy(&rax_3[5], arg2, arg3.d)
rax_3[4] = arg3
rax_3[3] = arg4
sub_142c69f60(r14_1, r14_1[1], rax_3, rax_3)
arg1[5] += 1
return arg4
