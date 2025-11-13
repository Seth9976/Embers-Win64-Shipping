// 函数: sub_142251b90
// 地址: 0x142251b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[1].d)

if (result.d != *(arg1 + 0x34))
    int64_t var_38
    sub_1407453e0(&var_38, arg1)
    void* var_28
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_28 + 0x18); i = i_1)
        sub_140d3a280(sx.q(i) * 0x60 + *var_38)
        int32_t var_2c
        int32_t var_20 = var_20 & not.d(var_2c)
        void var_30
        sub_14059bdd0(&var_30)
    
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) s<= 0xffffffff)
        sub_14090a730(arg1, 0)
    
    arg1[6].d = 0xffffffff
    *(arg1 + 0x34) = 0
    sub_140774790(&arg1[2])
    int64_t rcx_7 = sx.q(arg1[9].d)
    void* result_1 = &arg1[7]
    result = *(result_1 + 8)
    
    if (rcx_7 s> 0)
        if (result != 0)
            result_1 = result
        
        result = 0xffffffff
        __builtin_memset(result_1, 0xffffffff, rcx_7 << 2)

return result
