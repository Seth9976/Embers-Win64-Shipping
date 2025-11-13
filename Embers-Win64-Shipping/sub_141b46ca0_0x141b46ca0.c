// 函数: sub_141b46ca0
// 地址: 0x141b46ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b507a0(arg1)
void*** rax = j_sub_140a82f30(0x350)
void*** rbx_1

if (rax == 0)
    rbx_1 = nullptr
else
    void* rcx = *(arg1 + 0x10)
    int64_t var_28 = *(arg1 + 8)
    void* var_20_1 = rcx
    
    if (rcx != 0)
        *(rcx + 8) += 1
    
    int64_t var_18 = *(arg1 + 0x18)
    void* rax_2 = *(arg1 + 0x20)
    void* var_10_1 = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    rbx_1 = sub_141b49b70(rax, &var_18, &var_28)

void*** rax_4 = j_sub_140a82f30(0x18)

if (rax_4 != 0)
    rax_4[1].d = 1
    *rax_4 = &data_142d42ea8
    *(rax_4 + 0xc) = 1
    rax_4[2] = rbx_1

*arg2 = rbx_1
arg2[1] = rax_4
return arg2
