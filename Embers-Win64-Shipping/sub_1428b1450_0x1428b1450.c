// 函数: sub_1428b1450
// 地址: 0x1428b1450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int64_t r15 = arg4
void* r13 = arg3
void* r12 = arg2

if (arg4 u>= 0x40000000)
    uint64_t i_1 = arg4 u>> 0x1e
    int64_t r15_1 = r15 - i_1 * 0x40000000
    void* r15_2 = arg2
    uint64_t i
    
    do
        int32_t rax_2 = sub_142890eb0(arg1)
        char* rax_3 = sub_1406219d0(arg1)
        int32_t* rdi_1 = sub_142890ec0(arg1) + 0x100
        int32_t* rbx_1 = sub_142890ec0(arg1) + 0x80
        sub_1428fd750(r13, r15_2, 8, 0x40000000, sub_142890ec0(arg1), rbx_1, rdi_1, rax_3, rax_2)
        r13 += 0x40000000
        r15_2 += 0x40000000
        i = i_1
        i_1 -= 1
    while (i != 1)
    r15 = r15_1
    r12 = r15_2

if (r15 != 0)
    int32_t rax_7 = sub_142890eb0(arg1)
    char* rax_8 = sub_1406219d0(arg1)
    int32_t* rdi_2 = sub_142890ec0(arg1) + 0x100
    int32_t* rbx_2 = sub_142890ec0(arg1) + 0x80
    sub_1428fd750(r13, r12, 8, r15.d, sub_142890ec0(arg1), rbx_2, rdi_2, rax_8, rax_7)

return 1
