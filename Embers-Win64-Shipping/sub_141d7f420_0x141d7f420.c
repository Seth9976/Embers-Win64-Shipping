// 函数: sub_141d7f420
// 地址: 0x141d7f420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax
float zmm0[0x4]
rax, zmm0 = j_sub_140a82f30(0x88)

if (rax != 0)
    void* rcx = *(arg1 + 0x30)
    int64_t var_18 = *(arg1 + 0x28)
    void* var_10_1 = rcx
    
    if (rcx != 0)
        *(rcx + 8) += 1
    
    rax = sub_141d73df0(rax, &var_18, *(arg1 + 0x38), *(arg1 + 0x58), zmm0, *(arg1 + 0x5c))

void* rcx_3 = *(arg1 + 0x60)

if (rcx_3 != rax)
    *(arg1 + 0x60) = rax
    sub_141d75b40(arg1 + 0x60, rcx_3)
    rcx_3 = *(arg1 + 0x60)

sub_141d7fce0(rcx_3)
int64_t result
result.b = 1
return result
