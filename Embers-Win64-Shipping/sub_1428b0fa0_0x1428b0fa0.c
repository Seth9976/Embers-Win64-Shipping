// 函数: sub_1428b0fa0
// 地址: 0x1428b0fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t rsi = arg4
char* r14 = arg3
char* r15 = arg2
int32_t* rax = sub_142890ec0(arg1)

if (*(rax + 0x180) != 0)
    (*(rax + 0x180))(r14, r15, rsi, rax, sub_1406219d0(arg1))
    return 1

if (rsi u>= 0x40000000)
    uint64_t i_1 = rsi u>> 0x1e
    int64_t rsi_1 = rsi - i_1 * 0x40000000
    uint64_t i
    
    do
        int32_t rax_4 = sub_142890eb0(arg1)
        sub_1428f9060(r14, r15, 0x40000000, rax, &rax[0x20], &rax[0x40], sub_1406219d0(arg1), rax_4)
        r14 = &r14[0x40000000]
        r15 = &r15[0x40000000]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rsi = rsi_1

if (rsi != 0)
    int32_t rax_6 = sub_142890eb0(arg1)
    sub_1428f9060(r14, r15, rsi.d, rax, &rax[0x20], &rax[0x40], sub_1406219d0(arg1), rax_6)

return 1
