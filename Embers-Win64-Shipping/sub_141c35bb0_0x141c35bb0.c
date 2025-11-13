// 函数: sub_141c35bb0
// 地址: 0x141c35bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[2])
int64_t* i = *arg1

for (void* r14_2 = &i[sx.q(arg1[1].d) * 2]; i != r14_2; i = &i[2])
    int64_t rbp_1 = sx.q(arg1[0xf].d)
    int32_t rax_1 = (rbp_1 + 1).d
    arg1[0xf].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x7c))
        sub_1405a4f90(&arg1[0xe])
    
    int64_t* rcx_4 = (rbp_1 << 4) + arg1[0xe]
    *rcx_4 = *i
    void* rax_3 = i[1]
    rcx_4[1] = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1

int64_t result = sub_141c45050(arg1, 0)

if (arg1 == -0x10)
    return result

return LeaveCriticalSection(&arg1[2]) __tailcall
