// 函数: sub_140de76e0
// 地址: 0x140de76e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140e10bf0(arg1, arg2, arg3, arg4.d)

if (result != 0 && arg2 != 0 && arg3 != 0)
    int32_t r9 = *(arg1 + 0x28)
    int32_t rbp_1 = *(arg1 + 0x34)
    int32_t r8 = *(arg1 + 0x30)
    int32_t i_1
    i_1.b = rbp_1 != 0
    int32_t var_30_1 = r9
    int32_t rdx = i_1 * 2
    int32_t r13_2 = *(result + 0x1c) - rdx
    int32_t r15_1 = result[3].d
    int64_t r12_2 = sx.q((*(result + 0x14) * r9 + result[2].d) * r8) + *(arg1 + 8)
    int64_t var_50 = *arg4
    int64_t var_48_1 = r12_2
    int32_t var_34_1 = r15_1 - rdx
    int32_t var_38_1 = r15_1
    int64_t var_40
    
    if (rbp_1 != 0)
        var_40 = 0
        
        if (rbp_1 != 1)
            memset(r12_2, 0, zx.q(r8 * r15_1))
        else
            sub_140dec100(arg1, &var_50)
    
    int32_t rdx_3 = *(result + 0x1c)
    int32_t i = i_1
    
    if (i_1 u< rdx_3 - i_1)
        do
            var_40:4.d = i
            var_40.d = i - i_1
            sub_140dec100(arg1, &var_50)
            rdx_3 = *(result + 0x1c)
            i += 1
        while (i u< rdx_3 - i_1)
    
    if (rbp_1 != 0)
        int32_t rdx_4 = rdx_3 - i_1
        var_40.d = r13_2 - 1
        var_40:4.d = rdx_4
        
        if (*(arg1 + 0x34) != 1)
            int32_t rcx_4 = *(arg1 + 0x30)
            memset(zx.q(rcx_4 * rdx_4 * r9) + r12_2, 0, zx.q(rcx_4 * r15_1))
        else
            sub_140dec100(arg1, &var_50)
    
    *(arg1 + 0x38) = 1

return result
