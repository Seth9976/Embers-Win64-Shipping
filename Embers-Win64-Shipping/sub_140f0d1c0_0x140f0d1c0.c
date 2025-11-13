// 函数: sub_140f0d1c0
// 地址: 0x140f0d1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rbx = *(arg4 + 0x48)

if (rbx != 0)
    rbx[1].d += 1

int64_t rsi
rsi.b = *(arg4 + 0x38) == data_143e1e008

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rsi.b == 0)
    *arg2 = 0
label_140f0d407:
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    if (*(arg1 + 0x2e8) != 0)
        int64_t* rcx_2 = *(arg1 + 0x2e0)
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            int64_t* rcx_3
            
            if (*(arg1 + 0x2e8) == 0)
                rcx_3 = nullptr
            else
                rcx_3 = *(arg1 + 0x2e0)
            
            (*(*rcx_3 + 0x50))(rcx_3)
    
    if (sub_140f13cd0(arg1, arg3, arg4, 0) == 0)
        if (*(arg1 + 0x2f8) == 0)
            *arg2 = 0
        else
            int64_t* rcx_5 = *(arg1 + 0x2f0)
            
            if (rcx_5 == 0)
                *arg2 = 0
            else if ((*(*rcx_5 + 0x28))(rcx_5) == 0)
                *arg2 = 0
            else if (*(arg1 + 0x2f8) == 0)
                (*(*nullptr + 0x50))(0)
                *arg2 = 0
            else
                int64_t* rcx_6 = *(arg1 + 0x2f0)
                (*(*rcx_6 + 0x50))(rcx_6)
                *arg2 = 0
        
        goto label_140f0d407
    
    int64_t* rbx_1 = *(arg1 + 0x10)
    int64_t r15_1 = 0
    
    if (rbx_1 != 0)
        int32_t rax_13 = rbx_1[1].d
        
        if (rax_13 != 0)
            rbx_1[1].d = rax_13 + 1
            rax_13.b = 1
        
        if (rax_13.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            int32_t rax_14 = rbx_1[1].d
            r15_1 = *(arg1 + 8)
            rbx_1[1].d = rax_14
            
            if (rax_14 == 0)
                (**rbx_1)(rbx_1)
                int32_t temp6_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
            
            rbx_1[1].d += 1
    
    int32_t var_54
    int32_t var_54_1 = var_54 & 0xffffff00
    char var_108 = 1
    int64_t var_100_1 = 0
    int64_t var_f8_1 = 0
    char var_e8_1 = 0
    int64_t var_e0_1 = 0
    int64_t var_d8_1 = 0
    int128_t var_c8
    __builtin_memset(&var_c8, 0, 0x70)
    int32_t var_58_1 = 0x20702
    int64_t var_d0_1 = r15_1
    
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
        rbx_1[1].d -= 1
        var_c8.q = rbx_1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    sub_140596b00(arg2, &var_108)
    sub_140597700(&var_108)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

__security_check_cookie(rax_1 ^ &var_128)
return arg2
