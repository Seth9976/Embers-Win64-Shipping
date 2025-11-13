// 函数: sub_142368b00
// 地址: 0x142368b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18 = nullptr
int32_t var_10 = 0
sub_141e4ed70(arg1, *(arg1 + 0x168), &var_18)
int64_t* rbx = var_18
void* rdi = &rbx[sx.q(var_10)]

if (rbx != rdi)
    do
        int64_t* rcx = *(*rbx + 0x70)
        
        if (rcx != 0 && (*(*rcx + 0x2e8))(rcx) != 0)
            rbx = var_18
            rdi.b = 1
            goto label_142368b6a
        
        rbx = &rbx[1]
    while (rbx != rdi)
    
    rbx = var_18

rdi.b = 0
label_142368b6a:

if (rbx != 0)
    sub_140a74f90(rbx)

return zx.q(rdi.b)
