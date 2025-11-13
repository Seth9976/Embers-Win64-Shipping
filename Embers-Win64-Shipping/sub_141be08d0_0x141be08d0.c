// 函数: sub_141be08d0
// 地址: 0x141be08d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)

while (*(arg1 + 0x128) s<= rbp.d)
    int64_t rdi_1 = sx.q(*(arg1 + 0x128))
    int32_t rax_1 = (rdi_1 + 1).d
    *(arg1 + 0x128) = rax_1
    
    if (rax_1 s> *(arg1 + 0x12c))
        sub_1406105e0(arg1 + 0x120)
    
    *(*(arg1 + 0x120) + (rdi_1 << 2)) = 0

uint64_t result = *(arg1 + 0x120)
*(result + (rbp << 2)) = arg3.d
int64_t* rcx_1 = *(arg1 + 0x140)

if (rcx_1 == 0)
    return result

int32_t var_38 = arg3.d
char var_34_1 = 1
int64_t var_30 = 0
int32_t var_28_1 = 0
sub_140f5d3c0(rcx_1, rbp.d, &var_38)
return sub_140745b20(&var_30)
