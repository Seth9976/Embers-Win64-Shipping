// 函数: sub_141dd0560
// 地址: 0x141dd0560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = arg1[0x14]
int64_t* rcx = arg1[0x26]

if (result == 0)
    if (rcx != 0)
        result = (*(*rcx + 0x400))(rcx, &data_143a2de54)
    
    if ((arg1[0xb].b & 0x10) != 0)
        jump(*(*arg1 + 0x420))
else if (rcx != 0)
    int64_t* rdi_1 = arg1[0x1b]
    
    if (rdi_1 != 0)
    label_141dd05b7:
        int32_t rax = arg1[0x16].d
        int64_t var_18 = arg1[0x15]
        int32_t var_10_1 = rax
        sub_141f48c60(rcx, &var_18)
        int32_t rax_1 = arg1[0x19].d
        void* rcx_1 = arg1[0x26]
        var_18 = arg1[0x18]
        int32_t var_10_2 = rax_1
        sub_141f48ec0(rcx_1, &var_18)
        int32_t rax_2 = *(arg1 + 0xbc)
        void* rcx_2 = arg1[0x26]
        var_18 = *(arg1 + 0xb4)
        int32_t var_10_3 = rax_2
        sub_141f49070(rcx_2, &var_18)
        int64_t* r10_1 = arg1[0x26]
        
        if (rdi_1 == r10_1[0x18] && *(arg1 + 0xcc) == r10_1[0x19])
            for (int64_t* i = rdi_1[0x1a]; i != &i[sx.q(rdi_1[0x1b].d)]; i = &i[1])
                if (*i == r10_1)
                    return sub_1405c6ac0(r10_1, 1, 0) __tailcall
        
        return sub_141f32b40(r10_1, rdi_1, &data_143f3f280, *(arg1 + 0xcc))
    
    rdi_1 = *(result + 0x130)
    
    if (rdi_1 != 0)
        goto label_141dd05b7

return result
