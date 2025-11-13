// 函数: sub_1428b0700
// 地址: 0x1428b0700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t rbp = arg4
char* r15 = arg3
char* r12 = arg2
int32_t arg_20

if (arg4 u>= 0x40000000)
    uint64_t i_1 = arg4 u>> 0x1e
    rbp -= i_1 * 0x40000000
    uint64_t i
    
    do
        arg_20 = sub_142890ef0(arg1)
        int32_t rax_3 = sub_142890eb0(arg1)
        int32_t* rax_4 = sub_1406219d0(arg1)
        int32_t var_38_1 = rax_3
        sub_1428fcfc0(r15, r12, 0x40000000, sub_142890ec0(arg1), rax_4, &arg_20)
        sub_142890f20(arg1, arg_20)
        r15 = &r15[0x40000000]
        r12 = &r12[0x40000000]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rbp != 0)
    arg_20 = sub_142890ef0(arg1)
    int32_t rax_7 = sub_142890eb0(arg1)
    int32_t* rax_8 = sub_1406219d0(arg1)
    int32_t var_38_2 = rax_7
    sub_1428fcfc0(r15, r12, rbp.d, sub_142890ec0(arg1), rax_8, &arg_20)
    sub_142890f20(arg1, arg_20)

return 1
