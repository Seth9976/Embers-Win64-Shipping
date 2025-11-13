// 函数: sub_142192770
// 地址: 0x142192770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
void* rcx = *(arg1 + 0x408)

if (rcx == 0)
    sub_1405947f0(arg2, 0x12)
    int32_t rax_5 = arg2[1].d + 0x12
    arg2[1].d = rax_5
    
    if (rax_5 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    __builtin_memcpy(*arg2, u"No_ParticleSystem", 0x24)
else
    int64_t var_18
    int64_t* rax_1 = sub_140d21e10(rcx, &var_18, 0)
    
    if (arg2 != rax_1)
        int64_t rcx_1 = *arg2
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        *arg2 = *rax_1
        *rax_1 = 0
        arg2[1].d = rax_1[1].d
        *(arg2 + 0xc) = *(rax_1 + 0xc)
        rax_1[1] = 0
    
    int64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

return arg2
