// 函数: sub_141a50d90
// 地址: 0x141a50d90
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
    sub_140d3a3a0(&arg_8, rdx)
    rbx = arg_8.q
    arg_8.q = rbx
    r9 = arg_c
    r8 = arg_8

int64_t* r10 = *arg1

for (int32_t* i = r10[3]; i != &i[sx.q(r10[4].d) * 3]; i = &i[3])
    if (*i == r8 && i[1] == r9)
        return zx.q(i[2])

int32_t rax_3 = (*(*r10 + 0x28))(r10, arg1[2], arg1[3], r9)

if (arg1[3] != 0)
    void* rdi_1 = *arg1
    int64_t rsi_1 = sx.q(*(rdi_1 + 0x20))
    int32_t rcx_3 = (rsi_1 + 1).d
    *(rdi_1 + 0x20) = rcx_3
    
    if (rcx_3 s> *(rdi_1 + 0x24))
        sub_14083a7e0(rdi_1 + 0x18)
    
    int64_t rax_4 = *(rdi_1 + 0x18)
    int64_t rcx_5 = rsi_1 * 3
    *(rax_4 + (rcx_5 << 2)) = rbx
    *(rax_4 + (rcx_5 << 2) + 8) = rax_3

return zx.q(rax_3)
