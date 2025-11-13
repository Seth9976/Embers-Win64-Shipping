// 函数: sub_140ecb960
// 地址: 0x140ecb960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t var_118 = 0
int32_t rsi = 0
void var_108
uint128_t zmm0 = sub_140dc0fb0(arg1, &var_108, arg3, arg4)
sub_140597700(&var_108)
int64_t* rdi
int64_t r14

if (arg1[0x92].b == 0)
    rdi = var_118.q
    r14.b = 0
else
    rdi = *(arg4 + 0x28)
    
    if (rdi != 0)
        rdi[1].d += 1
    
    rsi = 1
    
    if (*(arg4 + 0x18) != data_143e1e080)
        r14.b = 0
    else
        r14 = 1

if ((rsi.b & 1) != 0)
    rsi &= 0xfffffffe
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp1_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi + 8))(rdi, 1)

if (r14.b == 0)
    int64_t* rdi_1
    
    if (arg1[0x92].b == 0)
        rdi_1 = var_118.q
        r14.b = 0
    else
        rdi_1 = *(arg4 + 0x28)
        rsi |= 2
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        if (*(arg4 + 0x18) != data_143e1e200)
            r14.b = 0
        else
            r14.b = 1
    
    if ((rsi.b & 2) != 0 && rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (r14.b != 0)
        sub_140ed5fb0(arg1)
        goto label_140ecba22
    
    int64_t* rdi_2 = *(arg4 + 0x28)
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    rsi.b = *(arg4 + 0x18) == data_143e1e1a0
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp5_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                int64_t r8 = *rdi_2
                (*(r8 + 8))(rdi_2, 1, r8)
    
    if (rsi.b == 0)
        int64_t* rdi_3 = *(arg4 + 0x28)
        
        if (rdi_3 != 0)
            rdi_3[1].d += 1
        
        rsi.b = *(arg4 + 0x18) == data_143e1e1d0
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t temp7_1 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
        
        if (rsi.b == 0)
            goto label_140ecba22
        
        sub_140ebb230(arg2, 4, zmm0)
    else
        sub_140ebb230(arg2, 5, zmm0)
else
    sub_140ed4170(arg1)
label_140ecba22:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702

__security_check_cookie(rax_1 ^ &var_138)
return arg2
