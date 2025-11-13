// 函数: sub_140f5d3c0
// 地址: 0x140f5d3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)

while (arg1[0x60].d s<= rbp.d)
    int64_t rdi_1 = sx.q(arg1[0x60].d)
    int32_t rax_1 = (rdi_1 + 1).d
    arg1[0x60].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x304))
        sub_1405a4df0(&arg1[0x5f])
    
    int64_t rax_2 = arg1[0x5f]
    int64_t rcx_1 = rdi_1 * 3
    *(rax_2 + (rcx_1 << 3)) = 0
    *(rax_2 + (rcx_1 << 3) + 4) = 1
    *(rax_2 + (rcx_1 << 3) + 8) = 0
    *(rax_2 + (rcx_1 << 3) + 0x10) = 0

int64_t rcx_2 = arg1[0x5f]
int64_t r8_1 = rbp * 3
*(rcx_2 + (r8_1 << 3)) = *arg3
*(rcx_2 + (r8_1 << 3) + 4) = arg3[1].b
sub_140692f90(rcx_2 + (r8_1 << 3) + 8, &arg3[2])
return sub_140e19ef0(arg1, 1) __tailcall
