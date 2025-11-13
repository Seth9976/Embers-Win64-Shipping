// 函数: sub_140ec7310
// 地址: 0x140ec7310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138

if (*(arg1 + 0x56a) == 0)
    int64_t* rbx_2 = nullptr
    
    if (sub_140e19840(arg1, arg5) != 0)
        *(arg1 + 0x569) = 1
        
        if (*(arg1 + 0x568) != 0 && *(arg1 + 0x4d0) == 0)
            int64_t* rsi_2 = *(arg1 + 0x4c0)
            
            if (rsi_2 != 0)
                int32_t rax_11 = rsi_2[1].d
                
                if (rax_11 != 0)
                    rsi_2[1].d = rax_11 + 1
                    rax_11.b = 1
                
                if (rax_11.b == 0)
                    rsi_2 = nullptr
            
            int64_t* rcx_8 = nullptr
            
            if (rsi_2 != 0)
                rcx_8 = *(arg1 + 0x4b8)
            
            (*(*rcx_8 + 0x40))(rcx_8, 2)
            
            if (rsi_2 != 0)
                rsi_2[1].d -= 1
                
                if (rsi_2[1].d == 1)
                    (**rsi_2)(rsi_2)
                    int32_t temp5_1 = *(rsi_2 + 0xc)
                    *(rsi_2 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rsi_2 + 8))(rsi_2, 1)
    
    if (*(arg1 + 0x518) == 0)
    label_140ec754f:
        *arg2 = 0
        *(arg2 + 8) = 0
        *(arg2 + 0x10) = 0
        arg2[0x20] = 0
        __builtin_memset(&arg2[0x28], 0, 0x88)
        *(arg2 + 0xb4) &= 0xffffff00
        *(arg2 + 0xb0) = 0x20702
    else
        int64_t* rcx_11 = *(arg1 + 0x510)
        
        if (rcx_11 == 0)
            goto label_140ec754f
        
        if ((*(*rcx_11 + 0x28))(rcx_11) == 0)
            goto label_140ec754f
        
        if (*(arg1 + 0x518) != 0)
            rbx_2 = *(arg1 + 0x510)
        
        (*(*rbx_2 + 0x48))(rbx_2, arg2, arg3, arg4)
else
    *(arg1 + 0x56a) = 0
    int64_t* rsi_1 = *(arg1 + 0x4c0)
    int64_t* rax_2 = rsi_1
    
    if (rsi_1 != 0)
        int32_t rax_3 = rsi_1[1].d
        
        if (rax_3 == 0)
            rsi_1 = nullptr
            rax_2 = nullptr
        else
            rsi_1[1].d = rax_3 + 1
            rax_2 = rsi_1
    
    int64_t* rcx = nullptr
    
    if (rax_2 != 0)
        rcx = *(arg1 + 0x4b8)
    
    int64_t rax_5 = *rcx
    int32_t var_54
    int32_t var_54_1 = var_54 & 0xffffff00
    arg5.o = zx.o(0)
    char var_108 = 1
    int64_t var_100_1 = 0
    int64_t var_f8_1 = 0
    char var_e8_1 = 0
    int64_t var_e0_1 = 0
    int64_t var_d8_1 = 0
    int128_t var_c8
    __builtin_memset(&var_c8, 0, 0x70)
    int32_t var_58_1 = 0x20702
    void var_118
    int64_t* rax_6 = (*(rax_5 + 0xe0))(rcx, &var_118)
    void* rbx = rax_6[1]
    int64_t var_d0_1 = *rax_6
    
    if (rbx != 0)
        *(rbx + 0xc) += 1
        var_c8.q = rbx
        int64_t* rbx_1 = rax_6[1]
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    sub_140596b00(arg2, &var_108)
    sub_140597700(&var_108)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            int64_t r8 = *rsi_1
            (*r8)(rsi_1, arg5, r8)
            int32_t temp2_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                int64_t r8_1 = *rsi_1
                (*(r8_1 + 8))(rsi_1, 1, r8_1)

__security_check_cookie(rax_1 ^ &var_138)
return arg2
