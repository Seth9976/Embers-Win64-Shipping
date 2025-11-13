// 函数: sub_1423478d0
// 地址: 0x1423478d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405d16e0(arg1 + 0x2e8, *arg2)
void* rax = *arg2
int64_t* rdx_1
int32_t r8
int32_t r9

if (rax == 0)
    r9 = 0
    int64_t arg_10 = 0
    r8 = 0
    rdx_1 = &arg_10
else
    r9 = *(rax + 0x64)
    r8 = *(rax + 0x60)
    void* rax_1 = *(arg1 + 0x2e8)
    void* arg_8 = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    rdx_1 = &arg_8

return sub_142376dc0(*(arg1 + 0x2f0), rdx_1, r8, r9)
