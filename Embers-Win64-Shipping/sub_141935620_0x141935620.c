// 函数: sub_141935620
// 地址: 0x141935620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg4

if (data_143f01c92 != 0)
    sub_140a80f40()

char r13 = *(arg3 + 0x3c)
int32_t r15 = *(arg3 + 0x40)
int32_t var_38 = *(arg3 + 0x30)
int128_t var_48 = *(arg3 + 0x20)

if (rbx == 0)
    int32_t rax_1 = arg6
    rbx = 1
    
    if (arg5 u> arg6)
        rax_1 = arg5
    
    for (uint32_t i = rax_1 u>> 1; i != 0; i u>>= 1)
        rbx += 1

void*** rax_2 = j_sub_140a82f30(0xf0)
void*** rdi_1 = nullptr

if (rax_2 != 0)
    int128_t* var_50_1 = &var_48
    int64_t var_58_1 = 0
    rdi_1 = sub_141928d30(rax_2, arg2, 0, 0xde1, 0xffffffff, arg5, arg6, 0, rbx, 1, 1, 1, r13, 0, 
        0, r15)

sub_141941370(rdi_1, r15)
*arg1 = rdi_1

if (rdi_1 != 0)
    rdi_1[1].d += 1

return arg1
