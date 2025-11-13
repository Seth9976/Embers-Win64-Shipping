// 函数: sub_1428d0cb0
// 地址: 0x1428d0cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

__chkstk(0x68)
int64_t rdx = arg1
int64_t rdi_1 = 0

do
    uint64_t rbx_2 = rdi_1 u>> 3
    char rax_2 = (1 << (7 - (rdi_1.b & 7))).b & *(rbx_2 + rdx)
    char temp0_1 = rax_2
    rax_2 = neg.b(rax_2)
    char arg_18 = sbb.b(rax_2, rax_2, temp0_1 != 0) & 0x80
    uint8_t var_48
    sub_1428d1110(&arg_18, &var_48, 1, arg4, arg5, arg6, arg7)
    char rdx_3 = *(rbx_2 + arg2) & (not.d(1 << ((7 - (rdi_1.d & 7)) u% 0x20))).b
    char rcx_4 = rdi_1.b & 7
    rdi_1 += 1
    *(rbx_2 + arg2) = rdx_3 | (var_48 & 0x80) u>> rcx_4
    rdx = arg1
while (rdi_1 u< arg3)
