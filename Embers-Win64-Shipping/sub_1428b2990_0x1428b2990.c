// 函数: sub_1428b2990
// 地址: 0x1428b2990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x48)
int64_t rbp = arg4
char* r15 = arg3
char* r12 = arg2

if (arg4 == 0)
    return 1

int64_t rbx = arg4

if (arg4 u>= 0x40000000)
    rbx = 0x40000000

while (rbp u>= rbx)
    int32_t arg_20 = sub_142890ef0(arg1)
    int32_t rax_2 = sub_142890eb0(arg1)
    int32_t* rax_3 = sub_1406219d0(arg1)
    int32_t var_38_1 = rax_2
    sub_142900b90(r15, r12, rbx.d, sub_142890ec0(arg1) + 4, rax_3, &arg_20)
    sub_142890f20(arg1, arg_20)
    rbp -= rbx
    r15 = &r15[rbx]
    r12 = &r12[rbx]
    int64_t rax_5 = rbp
    
    if (rbp u>= rbx)
        rax_5 = rbx
    
    rbx = rax_5
    
    if (rbp == 0)
        break

return 1
