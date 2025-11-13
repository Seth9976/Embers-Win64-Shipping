// 函数: sub_1426454b0
// 地址: 0x1426454b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1 = arg2 & 0xfffffff0

do
    int64_t rdi_1 = *(arg1 + ((zx.q(rbx_1) & 7) << 3) + 0x398)
    
    if (rdi_1 != 0)
        sub_1426454b0(rdi_1)
        j_sub_140a74f90(rdi_1)
    
    if ((rbx_1.b & 7) u>= 7)
        rbx_1 |= 8
    else
        rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
while (((rbx_1 u>> 3).b & 1) == 0)

return sub_142644e30(arg1) __tailcall
