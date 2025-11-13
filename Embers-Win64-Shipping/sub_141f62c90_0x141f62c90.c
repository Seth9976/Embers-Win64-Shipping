// 函数: sub_141f62c90
// 地址: 0x141f62c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = *(arg1 + 0x440)

if (rax == 0)
    *arg2 = rax.d
    *arg3 = rax.d
else
    if ((*(arg1 + 0x44c) & 0x80) == 0)
        *arg2 = *(rax + 0x7c)
        rax = *(arg1 + 0x440)
        *arg3 = *(rax + 0x7c)
    else
        rax = zx.q(*(arg1 + 0x450))
        
        if (rax.d != 0)
            *arg2 = rax.d
            rax = zx.q(*(arg1 + 0x450))
            *arg3 = rax.d
    
    if (*arg2 == 0)
        void* rcx_1 = data_143ddb400
        int32_t arg_8 = 0
        sub_140af3c10(rcx_1, DevOptions.StaticLighting", DefaultStaticMeshLightingRes", &arg_8, 
            &data_143de57f0)
        int32_t rax_2 = arg_8
        *arg2 = rax_2
        *arg3 = rax_2
        return rax_2

return rax
