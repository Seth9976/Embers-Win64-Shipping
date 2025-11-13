// 函数: sub_140965940
// 地址: 0x140965940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = (*(*arg1 + 0x150))()
int64_t rax_2 = sub_1423d6d00(data_143f5b298, rax_1, arg1[0x49])
arg1[0x46] = rax_2

if (rax_2 == 0)
    return rax_2

int64_t rbx = 0
uint64_t* rbp_1 = data_143f5b298 + 0x9f0
int32_t var_20 = 0
void*** rax_3 = sub_140a84c80(0, 0x30, 0)

if (rax_3 != 0)
    *rax_3 = &data_142e345f8
    sub_140d3a3a0(&rax_3[1], arg1)
    *(rax_3 + 0x10) = sub_14094eacc.o
    rax_3[5] = sub_140a387b0()
    *rax_3 = &data_142e34650

if (rax_3 != 0)
    sub_140599630(rbp_1, 1)
    void arg_8
    int64_t* rax_6 = (*rax_3)[6](rax_3, &arg_8)
    int64_t r14_1 = sx.q(rbp_1[1].d)
    rbx = *rax_6
    int32_t rax_7 = (r14_1 + 1).d
    rbp_1[1].d = rax_7
    
    if (rax_7 s> *(rbp_1 + 0xc))
        sub_1405a4f90(rbp_1)
    
    void** rax_10 = (r14_1 << 4) + *rbp_1
    *rax_10 = rax_3
    rax_10[1].d = 3

void* rdx_5 = arg1[0x46]
arg1[0x48] = rbx
sub_141dd8d70(arg1, *(rdx_5 + 0x190))
int64_t rax_11
rax_11.b = 1
return rax_11
