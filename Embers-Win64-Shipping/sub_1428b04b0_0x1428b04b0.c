// 函数: sub_1428b04b0
// 地址: 0x1428b04b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rbp = arg4
int64_t r14 = arg3
int64_t r15 = arg2
int32_t arg_20

if (arg4 u>= 0x40000000)
    uint64_t i_1 = arg4 u>> 0x1e
    rbp -= i_1 * 0x40000000
    uint64_t i
    
    do
        arg_20 = sub_142890ef0(arg1)
        char* rax_3 = sub_1406219d0(arg1)
        sub_1428fd1f0(r14, r15, 0x40000000, sub_142890ec0(arg1), rax_3, &arg_20)
        sub_142890f20(arg1, arg_20)
        r14 += 0x40000000
        r15 += 0x40000000
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rbp != 0)
    arg_20 = sub_142890ef0(arg1)
    char* rax_6 = sub_1406219d0(arg1)
    sub_1428fd1f0(r14, r15, rbp.d, sub_142890ec0(arg1), rax_6, &arg_20)
    sub_142890f20(arg1, arg_20)

return 1
