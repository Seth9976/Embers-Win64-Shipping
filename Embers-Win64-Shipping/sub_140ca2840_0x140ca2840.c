// 函数: sub_140ca2840
// 地址: 0x140ca2840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140ce4310(arg1, arg2, arg3, arg4)

if (rax != 0 && *(arg1 + 0x118) != 0)
    void var_28
    int64_t var_20
    int64_t* rax_2 = sub_140b63b70(sub_140bdd7d0(arg1, &var_28), &var_20)
    int16_t* const rdx_2
    
    if (rax_2[1].d == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *rax_2
    
    int64_t* rcx_2 = *(arg1 + 0x118)
    (*(*rcx_2 + 0x138))(rcx_2, rdx_2, arg3, zx.q(arg4.d))
    int64_t rcx_3 = var_20
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

return zx.q(rax)
