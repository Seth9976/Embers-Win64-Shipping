// 函数: sub_1426d8a80
// 地址: 0x1426d8a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
int64_t var_10 = 0
void* rdx

if (arg1[0xd] == 0)
    rdx = nullptr
else
    void* rax_1 = sub_142736ba0()
    
    if (rax_1 == 0)
        rdx = nullptr
    else
        rdx = arg1[0xd]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rdx = nullptr

sub_1426e7790(arg2, rdx, &var_18)
arg1[0xf] = arg2
int64_t result = sub_1427392c0(arg1, &var_18)
int64_t rcx_3 = var_18
arg1[0xf] = 0

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
