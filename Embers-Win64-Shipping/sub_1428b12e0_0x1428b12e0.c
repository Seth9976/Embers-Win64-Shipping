// 函数: sub_1428b12e0
// 地址: 0x1428b12e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x78)
int64_t r15 = arg4
int64_t rbx = arg3

if (sub_142890f30(arg1, 0x2000) == 0)
    r15 <<= 3

int64_t r12 = 0

if (r15 != 0)
    do
        uint64_t r14_2 = r12 u>> 3
        char rax_2 = (1 << (7 - (r12.b & 7))).b & *(r14_2 + rbx)
        char temp0_1 = rax_2
        rax_2 = neg.b(rax_2)
        char arg_20 = sbb.b(rax_2, rax_2, temp0_1 != 0) & 0x80
        int32_t rax_3 = sub_142890eb0(arg1)
        char* rax_4 = sub_1406219d0(arg1)
        int32_t* rdi_1 = sub_142890ec0(arg1) + 0x100
        int32_t* rbx_1 = sub_142890ec0(arg1) + 0x80
        uint8_t var_48
        sub_1428fd750(&arg_20, &var_48, 1, 1, sub_142890ec0(arg1), rbx_1, rdi_1, rax_4, rax_3)
        rbx = arg3
        char rcx_9 = r12.b & 7
        char rdx_1 = not.b((0x80 s>> (r12.b & 7)).b) & *(r14_2 + arg2)
        r12 += 1
        *(r14_2 + arg2) = rdx_1 | (var_48 & 0x80) u>> rcx_9
    while (r12 u< r15)

return 1
