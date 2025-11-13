// 函数: sub_14186a050
// 地址: 0x14186a050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[1]
int64_t* rax_1 = sub_14185c400(*arg1 + 0x250, sub_140a6b260(rbx, 0x10), rbx)
int64_t r15_1 = *arg2 - *arg4
int32_t r12_1 = (arg4[1]).d - (arg2[1]).d
int32_t rdi_1 = rax_1[1].d

if (rdi_1 == 0)
    int64_t* rcx_2 = *arg1
    void arg_8
    rax_1[2].d = *(*(*rcx_2 + 0x48))(rcx_2, &arg_8, *arg3)
    sub_141813e70(&rax_1[3], *arg3 + 0x38)
    rax_1[0xd] = *arg4 - arg3[1] + r15_1
    rdi_1 = rax_1[1].d

int32_t rsi_2 = *(arg4 + 0x24) - r12_1
int32_t rbp_2 = arg4[4].d + r15_1.d
rax_1[1].d = rdi_1 + 1

if (rdi_1 + 1 s> *(rax_1 + 0xc))
    sub_1405a4df0(rax_1)

return sub_141820580(*rax_1 + sx.q(rdi_1) * 0x18, &arg4[2], rbp_2, rsi_2) __tailcall
