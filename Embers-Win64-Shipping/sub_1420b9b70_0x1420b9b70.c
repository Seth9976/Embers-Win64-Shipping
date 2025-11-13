// 函数: sub_1420b9b70
// 地址: 0x1420b9b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
int32_t rax =
    sub_141fda9f0(arg1 + 0x48, sub_141a1d730(arg1 + 0x48, &var_28, arg2, &data_143dbb1f8), &var_28)
sub_141fda9f0(arg1 + 0x60, 
    sub_141a1d730(arg1 + 0x60, &var_28, sub_141f55fe0(arg1 + 0x48, *(arg1 + 0x90), 1), 
        &data_143dbb1f8), 
    &var_28)
int32_t i = sub_141f55fe0(arg1 + 0x60, *(arg1 + 0x94), 1)
int64_t rax_1 = sx.q(*(arg1 + 0x80))
int32_t rbx = 0

if (rax_1.d s> 0)
    int64_t rcx_6 = 0
    int32_t* rax_3 = *(arg1 + 0x78) + 8
    
    while (not(i f<= *rax_3))
        rbx += 1
        rcx_6 += 1
        rax_3 = &rax_3[3]
        
        if (rcx_6 s>= rax_1)
            break

sub_142075310(arg1 + 0x78, rbx, 1)
int64_t rdx_4 = sx.q(rbx) * 3
*(*(arg1 + 0x78) + (rdx_4 << 2) + 8) = i
*(*(arg1 + 0x78) + (rdx_4 << 2)) = 0
return zx.q(rax)
