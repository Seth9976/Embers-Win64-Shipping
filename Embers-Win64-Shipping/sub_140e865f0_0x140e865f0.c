// 函数: sub_140e865f0
// 地址: 0x140e865f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[1].d)

if (result.d != *(arg1 + 0x34))
    int64_t var_38
    sub_1407453e0(&var_38, arg1)
    void* var_28
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_28 + 0x18); i = i_1)
        void* rdi_3 = sx.q(i) * 0x30 + *var_38
        int64_t* rcx_1 = *(rdi_3 + 0x20)
        
        if (rcx_1 != 0)
            int32_t temp0_1 = *(rcx_1 + 0xc)
            *(rcx_1 + 0xc) -= 1
            
            if (temp0_1 == 1)
                (*(*rcx_1 + 8))(rcx_1, 1)
        
        sub_140d94cb0(rdi_3 + 8)
        int32_t var_2c
        int32_t var_20 = var_20 & not.d(var_2c)
        void var_30
        sub_14059bdd0(&var_30)
    
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) s<= 0xffffffff)
        sub_1405a5220(arg1, 0)
    
    arg1[6].d = 0xffffffff
    *(arg1 + 0x34) = 0
    sub_140774790(&arg1[2])
    int64_t rcx_6 = sx.q(arg1[9].d)
    void* result_1 = &arg1[7]
    result = *(result_1 + 8)
    
    if (rcx_6 s> 0)
        if (result != 0)
            result_1 = result
        
        result = 0xffffffff
        __builtin_memset(result_1, 0xffffffff, rcx_6 << 2)

return result
