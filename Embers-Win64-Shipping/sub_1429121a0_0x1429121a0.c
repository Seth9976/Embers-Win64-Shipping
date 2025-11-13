// 函数: sub_1429121a0
// 地址: 0x1429121a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (strcmp(arg2, "dsa_paramgen_bits") == 0)
    return sub_1428bcb30(arg1, 0x74, 2, 0x1001, atoi(arg3), 0)

if (strcmp(arg2, "dsa_paramgen_q_bits") == 0)
    return sub_1428bcb30(arg1, 0x74, 2, 0x1002, atoi(arg3), 0)

if (strcmp(arg2, "dsa_paramgen_md") != 0)
    return 0xfffffffe

int64_t rax_7 = sub_14289b970(arg3)

if (rax_7 != 0)
    return sub_1428bcb30(arg1, 0x74, 2, 0x1003, 0, rax_7)

sub_1428a5670((rax_7 + 0xa).d, (rax_7 + 0x68).d, (rax_7 + 0x6a).d, "crypto\dsa\dsa_pmeth.c", 0xb9)
return 0
