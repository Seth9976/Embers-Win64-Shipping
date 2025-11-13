// 函数: sub_140630520
// 地址: 0x140630520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = -1
int64_t var_28 = 0
int32_t var_20 = 0
int32_t var_18 = 0xffffffff
sub_140d3cc80(sub_14256a090(), &var_28, 1, 0x10, 0)
int32_t rcx_2 = var_18 + 1
int64_t rdx_1 = var_28
int32_t var_18_1 = rcx_2

if (rcx_2 s< var_20)
    while (*(rdx_1 + (sx.q(rcx_2) << 3)) == 0)
        int32_t rax_2 = rcx_2 + 1
        int32_t var_18_2 = rax_2
        rcx_2 = rax_2
        
        if (rax_2 s>= var_20)
            break

if (rcx_2 s>= 0 && rcx_2 s< var_20)
    void* rax_4 = *(*(rdx_1 + (sx.q(rcx_2) << 3)) + 0x228)
    
    if (rax_4 != 0)
        rbx = *(rax_4 + 0x224)

if (rdx_1 != 0)
    sub_140a74f90(rdx_1)

return zx.q(rbx)
