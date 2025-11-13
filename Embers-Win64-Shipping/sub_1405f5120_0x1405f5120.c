// 函数: sub_1405f5120
// 地址: 0x1405f5120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t var_48 = -2
int512_t zmm0
zmm0.o = zx.o(0)
int128_t var_40 = zx.o(0)

while (*(arg1 + 0x14) s> 0)
    result = *(arg1 + 0x28)
    void* const rsi_1 = *result
    
    if (rsi_1 == 0)
        break
    
    if (&var_40 != rsi_1 + 8)
        var_40.q = *(rsi_1 + 8)
        *(rsi_1 + 8) = 0
        sub_1405aeff0(&var_40:8, rsi_1 + 0x10)
    
    void* r14_1 = *(arg1 + 0x28)
    *(arg1 + 0x28) = rsi_1
    zmm0.o = zx.o(0)
    int128_t var_30 = zx.o(0)
    result = &var_30
    
    if (rsi_1 + 8 != &var_30)
        *(rsi_1 + 8) = 0
        var_30.q = 0
        result = sub_1405aeff0(rsi_1 + 0x10, &var_30:8)
    
    void* rcx_2 = var_30:8.q
    
    if (rcx_2 != 0)
        result = zx.q(*(rcx_2 + 8))
        *(rcx_2 + 8) -= 1
        
        if (result.d == 1)
            int64_t* rbx_2 = var_30:8.q
            (**rbx_2)(rbx_2)
            result = zx.q(*(rbx_2 + 0xc))
            *(rbx_2 + 0xc) -= 1
            
            if (result.d == 1)
                int64_t* rcx_4 = var_30:8.q
                result = (*(*rcx_4 + 8))(rcx_4, 1)
    
    if (r14_1 != 0)
        int64_t* rbx_3 = *(r14_1 + 0x10)
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t rax_5 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax_5 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        result, zmm0 = j_sub_140a74f90(r14_1)
    
    if (var_40.q == 0)
        *(arg1 + 0x14) -= 1
    else
        *(arg1 + 0x10) -= 1

void* rcx_8 = var_40:8.q

if (rcx_8 != 0)
    result = zx.q(*(rcx_8 + 8))
    *(rcx_8 + 8) -= 1
    
    if (result.d == 1)
        int64_t* rbx_4 = var_40:8.q
        result = (**rbx_4)(rbx_4)
        int32_t rbp_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rbp_1 == 1)
            int64_t* rcx_10 = var_40:8.q
            return (*(*rcx_10 + 8))(rcx_10, zx.q(rbp_1))

return result
