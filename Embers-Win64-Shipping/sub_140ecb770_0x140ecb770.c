// 函数: sub_140ecb770
// 地址: 0x140ecb770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t var_118 = 0
void var_108
uint128_t zmm0 = sub_140dc0fb0(arg1, &var_108, arg3, arg4)
sub_140597700(&var_108)
int64_t* rsi = *(arg4 + 0x28)

if (rsi != 0)
    rsi[1].d += 1

char rax_2 = 1
int64_t* rdi
int64_t r14

if (*(arg4 + 0x18) == data_143e1e1a0)
    rdi = var_118.q
    r14.b = 1
else
    rdi = *(arg4 + 0x28)
    
    if (rdi != 0)
        rdi[1].d += 1
    
    rax_2 = 3
    
    if (*(arg4 + 0x18) == data_143e1e1d0)
        r14.b = 1
    else
        r14.b = 0

if ((rax_2 & 2) != 0 && rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t temp2_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rsi + 8))(rsi, 1)

if (r14.b == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t* rdi_1 = *(arg4 + 0x28)
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    rsi.b = *(arg4 + 0x18) == data_143e1e1a0
    rsi.b += 4
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                int64_t r8_1 = *rdi_1
                (*(r8_1 + 8))(rdi_1, 1, r8_1)
    
    sub_140ebb230(arg2, rsi.b, zmm0)

__security_check_cookie(rax_1 ^ &var_138)
return arg2
