// 函数: sub_141d7eec0
// 地址: 0x141d7eec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = arg2

if (arg2 == 0)
    rbx = nullptr
else
    void* rax_1 = sub_141d82280()
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rbx = nullptr

int64_t var_28
sub_140d15b50(&var_28, rbx)
*(arg1 + 0x50) = var_28
int64_t var_20
sub_140597df0(arg1 + 0x58, &var_20)
int64_t rcx_3 = var_20

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return sub_141d7c390(arg1) __tailcall
