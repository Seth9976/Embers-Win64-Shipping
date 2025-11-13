// 函数: sub_1429258a0
// 地址: 0x1429258a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rbp = arg4
char* r15 = arg3
uint8_t* r12 = arg2

if (arg4 u>= 0x40000000)
    uint64_t i_1 = arg4 u>> 0x1e
    rbp -= i_1 * 0x40000000
    uint64_t i
    
    do
        int32_t rax_2 = sub_142890eb0(arg1)
        char* rax_3 = sub_1406219d0(arg1)
        sub_142957a80(r15, r12, 0x40000000, sub_142890ec0(arg1), rax_3, rax_2)
        r15 = &r15[0x40000000]
        r12 = &r12[0x40000000]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rbp != 0)
    int32_t rax_5 = sub_142890eb0(arg1)
    char* rax_6 = sub_1406219d0(arg1)
    sub_142957a80(r15, r12, rbp.d, sub_142890ec0(arg1), rax_6, rax_5)

return 1
