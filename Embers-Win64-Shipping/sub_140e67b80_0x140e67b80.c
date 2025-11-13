// 函数: sub_140e67b80
// 地址: 0x140e67b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = *(arg2 + 0x18)
int64_t var_20 = *(arg2 + 0x20)
int64_t* rax_2 = *(arg2 + 0x28)

if (rax_2 != 0)
    rax_2[1].d += 1

char rax_4 = (*(*arg1 + 0x40))(arg1, &var_28)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        int64_t rdx_1 = *rax_2
        (*rdx_1)(rax_2, rdx_1)
        int32_t temp1_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rax_2 + 8))(rax_2, 1)

return zx.q(rax_4)
