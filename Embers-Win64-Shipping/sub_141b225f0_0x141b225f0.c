// 函数: sub_141b225f0
// 地址: 0x141b225f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg1[2]
int32_t r9 = 0
int32_t arg_c = 0
int32_t r8 = -1
int32_t arg_8 = 0xffffffff
int64_t rbx

if (rdx == 0)
    rbx = arg_8.q
else
    arg2 = sub_140d3a3a0(&arg_8, rdx)
    rbx = arg_8.q
    arg_8.q = rbx
    r9 = arg_c
    r8 = arg_8

int64_t* r10 = *arg1

for (int32_t* i = r10[3]; i != &i[sx.q(r10[4].d) * 3]; i = &i[3])
    if (*i == r8 && i[1] == r9)
        return i[2]

(*(*r10 + 0x28))(r10, arg1[2], arg1[3], r9, arg3)

if (arg1[3] != 0)
    void* rdi_1 = *arg1
    int64_t rsi_1 = sx.q(*(rdi_1 + 0x20))
    int32_t rax_3 = (rsi_1 + 1).d
    *(rdi_1 + 0x20) = rax_3
    
    if (rax_3 s> *(rdi_1 + 0x24))
        sub_14083a7e0(rdi_1 + 0x18)
    
    int64_t rax_4 = *(rdi_1 + 0x18)
    int64_t rcx_4 = rsi_1 * 3
    *(rax_4 + (rcx_4 << 2) + 8) = arg2.d
    *(rax_4 + (rcx_4 << 2)) = rbx

return arg2
