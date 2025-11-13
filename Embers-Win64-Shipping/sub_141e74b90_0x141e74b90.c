// 函数: sub_141e74b90
// 地址: 0x141e74b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = 0
int32_t arg_10 = 0

if (data_143f39bb8 != 0)
    void* rcx_1 = data_143f5b298
    int64_t* rbx
    int64_t* arg_8 = rbx
    int64_t var_68
    
    if (rcx_1 == 0)
        rbx.b = 0
    else
        int64_t* rax = sub_1423ddaf0(rcx_1, &var_68)
        rcx_1 = data_143f5b298
        
        if (rcx_1 == 0)
            result = 1
            rbx.b = 0
        else if (sub_1423dcff0(rcx_1) == 0 || rax[1] == 0)
            rcx_1 = data_143f5b298
            result = 1
            rbx.b = 0
        else
            rcx_1 = data_143f5b298
            rbx.b = 1
            result = 1
    
    if ((result.b & 1) != 0 && rcx_1 != 0)
        int64_t var_60
        
        if (sub_1423dcff0(rcx_1) != 0 && var_60 != 0)
            void* rax_3 = sub_1423dcff0(data_143f5b298)
            int32_t var_58
            
            if (rax_3 != 0)
                sub_141e797e0(rax_3, zx.q(var_58), var_68)
        
        rcx_1 = data_143f5b298
    
    if (rbx.b != 0)
        int64_t var_80
        sub_1423ddaf0(rcx_1, &var_80)
        int64_t var_98
        sub_141e70c80(&var_98, &var_80)
        int64_t var_38_1 = 0
        void** const var_28_1 = &data_1432518c8
        int64_t var_20 = 0
        int64_t var_18_1 = 0
        int32_t var_10_1 = 0xffffffff
        sub_141e72190(&var_20, &var_98)
        void** const var_28_2 = &data_1432518e8
        int64_t (* var_48)(void* arg1) = sub_141e764b0
        sub_141e85cb0(&var_48, 0)
        void* rcx_7 = data_143f5b298
        
        if (rcx_7 != 0)
            int64_t var_90
            
            if (sub_1423dcff0(rcx_7) != 0 && var_90 != 0)
                void* rax_5 = sub_1423dcff0(data_143f5b298)
                int32_t var_88
                
                if (rax_5 != 0)
                    sub_141e797e0(rax_5, zx.q(var_88), var_98)
            
            void* rcx_10 = data_143f5b298
            int64_t var_78
            
            if (rcx_10 != 0 && sub_1423dcff0(rcx_10) != 0 && var_78 != 0)
                void* rax_7 = sub_1423dcff0(data_143f5b298)
                int32_t var_70
                
                if (rax_7 != 0)
                    sub_141e797e0(rax_7, zx.q(var_70), var_80)
    
    int128_t var_a8 = zx.o(0)
    sub_141e75650(&var_a8)
    result = sub_141e8d480(&var_a8)
    int64_t* rbx_1 = var_a8:8.q
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 0x20))(rbx_1, 0xffffffff, 0)
        result = sub_140a4fc50(rbx_1)
    
    void* rcx_17 = var_a8.q
    
    if (rcx_17 != 0)
        result = *(rcx_17 + 0x48)
        *(rcx_17 + 0x48) -= 1
        
        if (result == 1)
            return sub_140a2f6e0(var_a8.q)

return result
