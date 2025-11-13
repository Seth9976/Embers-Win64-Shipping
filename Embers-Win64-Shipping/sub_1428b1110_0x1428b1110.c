// 函数: sub_1428b1110
// 地址: 0x1428b1110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int64_t r15 = arg4
char* r13 = arg3
char* r12 = arg2
int64_t arg_20

if (arg4 u>= 0x40000000)
    uint64_t i_1 = arg4 u>> 0x1e
    arg_20 = r15 - i_1 * 0x40000000
    char* r15_2 = arg2
    uint64_t i
    
    do
        int32_t var_48 = sub_142890ef0(arg1)
        int32_t rax_3 = sub_142890eb0(arg1)
        int32_t* rax_4 = sub_1406219d0(arg1)
        int32_t* rdi_1 = sub_142890ec0(arg1) + 0x100
        int32_t* rbx_1 = sub_142890ec0(arg1) + 0x80
        int32_t var_58_1 = rax_3
        sub_1428fd4d0(r13, r15_2, 0x40000000, sub_142890ec0(arg1), rbx_1, rdi_1, rax_4, &var_48)
        sub_142890f20(arg1, var_48)
        r13 = &r13[0x40000000]
        r15_2 = &r15_2[0x40000000]
        i = i_1
        i_1 -= 1
    while (i != 1)
    r15 = arg_20
    r12 = r15_2

if (r15 != 0)
    arg_20.d = sub_142890ef0(arg1)
    int32_t rax_9 = sub_142890eb0(arg1)
    int32_t* rax_10 = sub_1406219d0(arg1)
    int32_t* rdi_2 = sub_142890ec0(arg1) + 0x100
    int32_t* rbx_2 = sub_142890ec0(arg1) + 0x80
    int32_t var_58_2 = rax_9
    sub_1428fd4d0(r13, r12, r15.d, sub_142890ec0(arg1), rbx_2, rdi_2, rax_10, &arg_20)
    sub_142890f20(arg1, arg_20.d)

return 1
