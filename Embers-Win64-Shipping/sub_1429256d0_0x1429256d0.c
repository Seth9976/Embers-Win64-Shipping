// 函数: sub_1429256d0
// 地址: 0x1429256d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t r15 = arg4
char* r13 = arg3
char* r12 = arg2

if (arg4 u>= 0x40000000)
    uint64_t i_1 = arg4 u>> 0x1e
    int64_t r15_1 = r15 - i_1 * 0x40000000
    char* r15_2 = arg2
    uint64_t i
    
    do
        uint32_t rax_2 = sub_142890eb0(arg1)
        char* rsi_1 = sub_142890ec0(arg1) + 0x88
        char* rdi_1 = sub_142890ec0(arg1) + 0x80
        char* rax_5 = sub_1406219d0(arg1)
        sub_142957010(r13, r15_2, 0x40000000, sub_142890ec0(arg1), rax_5, rdi_1, rsi_1, rax_2)
        r13 = &r13[0x40000000]
        r15_2 = &r15_2[0x40000000]
        i = i_1
        i_1 -= 1
    while (i != 1)
    r15 = r15_1
    r12 = r15_2

if (r15 != 0)
    uint32_t rax_7 = sub_142890eb0(arg1)
    char* rsi_2 = sub_142890ec0(arg1) + 0x88
    char* rdi_2 = sub_142890ec0(arg1) + 0x80
    char* rax_10 = sub_1406219d0(arg1)
    sub_142957010(r13, r12, r15.d, sub_142890ec0(arg1), rax_10, rdi_2, rsi_2, rax_7)

return 1
