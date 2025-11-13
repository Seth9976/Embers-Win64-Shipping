// 函数: sub_142086480
// 地址: 0x142086480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x55].d = 0

if (*(arg1 + 0x2ac) s<= 0xffffffff)
    sub_1405a51b0(&arg1[0x54], 0)

int32_t rax = *(arg1 + 0x2bc)
arg1[0x57].d = 0

if (rax s< 0 && rax != 0)
    sub_1405c5570(&arg1[0x56], 0)

if ((arg1[0x46].b & 2) != 0)
    int64_t* rcx_2 = arg1[0x44]
    
    if (rcx_2 != 0)
        int64_t var_48
        int64_t var_38
        (*(*rcx_2 + 0x6f8))(rcx_2, &var_38, &var_48)
        int32_t var_40
        int32_t var_20_1 = var_40
        int32_t var_30
        int32_t var_10_1 = var_30
        int64_t rax_4 = *arg1
        int64_t var_28 = var_48
        int64_t var_18 = var_38
        (*(rax_4 + 0x658))(arg1, &var_18, &var_28)

void* rax_5 = arg1[0x4e]
*(rax_5 + 0x44)
return sub_1424c38a0(arg1, *(rax_5 + 0x40)) __tailcall
