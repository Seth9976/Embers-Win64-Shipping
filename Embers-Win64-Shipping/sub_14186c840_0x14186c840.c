// 函数: sub_14186c840
// 地址: 0x14186c840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1418283e0(arg1 + 0x78, arg3, 0)
int64_t* rax_1 = sub_14185c510(arg1 + 0x88, sub_140a6b260(arg2, 0x10), arg2)
int64_t rdi_1 = sx.q(rax_1[1].d)
int32_t rcx_3 = (rdi_1 + 1).d
rax_1[1].d = rcx_3

if (rcx_3 s> *(rax_1 + 0xc))
    sub_1405a4f90(rax_1)

return sub_14181d6f0((rdi_1 << 4) + *rax_1, arg3) __tailcall
