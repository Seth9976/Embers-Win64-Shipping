// 函数: sub_1409019d0
// 地址: 0x1409019d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
uint32_t result

if (*(arg1 + 0x24) - 2 u> 1 || *(arg1 + 0x80) != 0)
    result.b = 0
else
    void var_50
    int64_t* rax_3 = sub_140902390(*(arg1 + 0x58), &var_50, *(arg1 + 0x28))
    int64_t* rdi_1 = rax_3[1]
    int64_t* r14_1 = *rax_3
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int64_t* var_48
    
    if (var_48 != 0)
        var_48[1].d -= 1
        
        if (var_48[1].d == 1)
            (**var_48)(var_48)
            int32_t rax_7 = *(var_48 + 0xc)
            *(var_48 + 0xc) -= 1
            
            if (rax_7 == 1)
                (*(*var_48 + 8))(var_48, 1)
    
    int64_t rax_11
    
    if (r14_1 != 0)
        int64_t var_58
        (*(*r14_1 + 0x40))(r14_1, &var_58)
        rax_11 = var_58
    
    int64_t* rbx_1
    
    if (r14_1 == 0 || rax_11 == *(arg1 + 0x50))
        rbx_1.b = 0
    else
        *(arg1 + 0x50) = rax_11
        int64_t* rcx_4 = rdi_1
        int64_t* var_60_1 = rcx_4
        int64_t* var_68 = r14_1
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
            rcx_4 = var_60_1
        
        if (&var_68 != arg3)
            int128_t zmm1_1 = var_68.o
            int128_t var_40_1 = zmm1_1
            var_68.o = *arg3
            rcx_4 = var_60_1
            *arg3 = zmm1_1
        
        if (rcx_4 != 0)
            rcx_4[1].d -= 1
            
            if (rcx_4[1].d == 1)
                (**var_60_1)(var_60_1)
                int32_t rax_15 = *(var_60_1 + 0xc)
                *(var_60_1 + 0xc) -= 1
                
                if (rax_15 == 1)
                    (*(*var_60_1 + 8))(var_60_1, 1)
        
        rbx_1.b = 1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rsi_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                int64_t r8_2 = *rdi_1
                (*(r8_2 + 8))(rdi_1, zx.q(rsi_1), r8_2)
    
    result = zx.d(rbx_1.b)

__security_check_cookie(rax_1 ^ &var_88)
return result
