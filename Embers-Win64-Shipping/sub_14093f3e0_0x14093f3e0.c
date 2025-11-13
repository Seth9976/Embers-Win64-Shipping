// 函数: sub_14093f3e0
// 地址: 0x14093f3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    int64_t* rcx = *(arg1 + 8)
    int64_t* var_18
    (*(*rcx + 0xd0))(rcx, &var_18)
    int64_t* rcx_1 = var_18
    
    if (rcx_1 != 0)
        int512_t zmm0
        zmm0.o = zx.o(0)
        int128_t var_28 = zx.o(0)
        (*(*rcx_1 + 0x58))(zmm0, arg2, &var_28)
        int64_t* rbx_1 = var_28:8.q
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t rdi_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_10 + 8))(var_10, zx.q(rdi_1))
        
        uint64_t rax_6
        rax_6.b = 1
        return rax_6

int64_t rax
rax.b = 1
return rax
