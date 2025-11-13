// 函数: sub_1428b5fc0
// 地址: 0x1428b5fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rbp = arg4
int64_t* r15 = arg3
int128_t* r12 = arg2

if (arg4 u>= 0x40000000)
    uint64_t i_1 = arg4 u>> 0x1e
    rbp -= i_1 * 0x40000000
    uint64_t i
    
    do
        int32_t rax_2 = sub_142890eb0(arg1)
        int32_t rax_3 = sub_1406219d0(arg1)
        int32_t var_20_1 = rax_2
        sub_142905d70(r15, r12, 0x40000000, sub_142890ec0(arg1), rax_3)
        r15 = &r15[0x8000000]
        r12 = &r12[0x4000000]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rbp != 0)
    int32_t rax_5 = sub_142890eb0(arg1)
    int32_t rax_6 = sub_1406219d0(arg1)
    int32_t var_20_2 = rax_5
    sub_142905d70(r15, r12, sx.q(rbp.d), sub_142890ec0(arg1), rax_6)

return 1
