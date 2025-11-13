// 函数: sub_140ebeb20
// 地址: 0x140ebeb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x2e0)
int32_t arg_8 = 0

if (rax == 0)
    int32_t rax_4 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
    int64_t rax_5
    
    if (rax_4 s> 0)
        rax_5 = sx.q(*(arg1 + 0x2fc))
    
    int64_t* var_20
    int128_t var_18
    int64_t* rcx_2
    int64_t rdx
    int32_t rsi_1
    
    if (rax_4 s<= 0 || rax_5.d s<= 0xffffffff)
        rcx_2 = &var_18
        var_18 = zx.o(0)
        rsi_1 = 2
        rdx = 0
    else
        int64_t* rax_7 = (rax_5 << 4) + *(arg1 + 0x2b8)
        int64_t* rcx_1 = rax_7[1]
        rdx = *rax_7
        int64_t var_28 = rdx
        var_20 = rcx_1
        
        if (rcx_1 != 0)
            rcx_1[1].d += 1
        
        rcx_2 = &var_28
        rsi_1 = 1
    
    int64_t rax_8 = rcx_2[1]
    rcx_2[1] = 0
    *arg2 = rdx
    arg2[1] = rax_8
    *rcx_2 = 0
    
    if ((rsi_1.b & 2) != 0)
        int64_t* rdi_1 = var_18:8.q
        rsi_1 &= 0xfffffffd
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp2_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    if ((rsi_1.b & 1) != 0 && var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp3_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_20 + 8))(var_20, 1)
else
    *arg2 = rax
    void* rax_1 = *(arg1 + 0x2e8)
    arg2[1] = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1

return arg2
