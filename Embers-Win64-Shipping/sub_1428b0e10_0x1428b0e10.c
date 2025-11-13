// 函数: sub_1428b0e10
// 地址: 0x1428b0e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t r14 = arg4
int64_t r12 = arg3
int64_t r13 = arg2
int32_t arg_20

if (arg4 u>= 0x40000000)
    uint64_t i_1 = arg4 u>> 0x1e
    r14 -= i_1 * 0x40000000
    uint64_t i
    
    do
        arg_20 = sub_142890ef0(arg1)
        char* rax_3 = sub_1406219d0(arg1)
        int32_t* rdi_1 = sub_142890ec0(arg1) + 0x100
        int32_t* rbx_1 = sub_142890ec0(arg1) + 0x80
        sub_1428fdf80(r12, r13, 0x40000000, sub_142890ec0(arg1), rbx_1, rdi_1, rax_3, &arg_20)
        sub_142890f20(arg1, arg_20)
        r12 += 0x40000000
        r13 += 0x40000000
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r14 != 0)
    arg_20 = sub_142890ef0(arg1)
    char* rax_8 = sub_1406219d0(arg1)
    int32_t* rdi_2 = sub_142890ec0(arg1) + 0x100
    int32_t* rbx_2 = sub_142890ec0(arg1) + 0x80
    sub_1428fdf80(r12, r13, r14.d, sub_142890ec0(arg1), rbx_2, rdi_2, rax_8, &arg_20)
    sub_142890f20(arg1, arg_20)

return 1
