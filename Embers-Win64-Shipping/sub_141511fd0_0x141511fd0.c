// 函数: sub_141511fd0
// 地址: 0x141511fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
int64_t result = sub_1411a4a10(arg1, (*(*rcx + 0x248))(rcx))
int32_t i = 0

if (arg2[0x13].d s> 0)
    void* rdi_1 = arg2 + 0xdc
    
    do
        int32_t var_28_1 = arg2[0xc].d
        char var_30_1 = *(arg2 + 0x5d)
        char var_38_1 = *(rdi_1 - 0x40)
        result = sub_14150fca0(arg1, *arg2, arg2[1].d, *(arg2 + 0x5c), *(arg2 + 0x5e), 
            *(arg2 + 0x5f), arg2[0xd], arg2[0xe], rdi_1 - 0x28, arg2[0xf], arg2[0x10], 
            rdi_1 - 0x14, arg2[0x11], arg2[0x12], rdi_1, arg2.b + 0x10, arg2.b + 0x40, 
            rdi_1.d - 0x3c)
        i += 1
        rdi_1 += 0x54
    while (i s< arg2[0x13].d)

return result
