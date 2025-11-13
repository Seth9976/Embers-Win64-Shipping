// 函数: sub_141b9cd60
// 地址: 0x141b9cd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int32_t var_258 = 0
char r12 = 0
void var_238
sub_141b7aa70(&var_238)
char var_6a = 0
char var_6d = 0
sub_140f72060(arg1, &var_238)
void*** rax_2 = j_sub_140a82f30(0x680)
void*** rdi = rax_2
int128_t var_248

if (rax_2 == 0)
    rdi = nullptr
else
    rax_2[1].d = 0x3f800000
    *(rax_2 + 0xc) = 1
    *rdi = &data_14307f918
    rdi[3] = arg1 + 0x420
    rdi[2] = &data_14307fb00
    __builtin_memset(&rdi[4], 0, 0x18)
    rdi[0xa].d &= 0xfffffffe
    rdi[0xa].d |= 2
    rdi[7].d = 0x42b40000
    *(rdi + 0x3c) = 0x42b40000
    rdi[8] = 0x44000000
    rdi[9].d = 0x4a000000
    *(rdi + 0x4c) = 0x3faaaaab
    *(rdi + 0x54) = 0
    rdi[0xb].d = 0
    sub_1422d7fd0(&rdi[0xc])
    rdi[0xb4] = 0
    rdi[0xbc].b = 0
    rdi[0xc0] = 0
    rdi[0xc1] = data_143dbb1f8.q
    rdi[0xc2].d = data_143dbb200
    *(rdi + 0x614) = data_143dbb208
    *(rdi + 0x61c) = data_143dbb210
    rdi[0xc4] = data_143dbb1f8.q
    rdi[0xc5].d = data_143dbb200
    *(rdi + 0x62c) = data_143dbb1f8.q
    *(rdi + 0x634) = data_143dbb200
    rdi[0xc7] = data_143dbb1f8.q
    rdi[0xc8].d = data_143dbb200
    *(rdi + 0x644) = 0x461c4000
    rdi[0xc9] = 0
    rdi[0xca] = &data_14306d5a8
    __builtin_memset(&rdi[0xcb], 0, 0x18)
    rdi[0xcf] = -1
    rdi[0xcf].d |= 0x48000
    *(rdi + 0x67c) = (*(rdi + 0x67c) & 0xfff8ffff) | 0x400
    sub_1422dd6d0(&rdi[0xca])
    var_258 = 0xff373737
    sub_140acc920(&var_248, &var_258)
    *(rdi + 0x5f0) = var_248

int64_t* rax_11 = j_sub_140a82f30(0x18)
int64_t* rbx = rax_11

if (rax_11 == 0)
    rbx = nullptr
else
    rax_11[1].d = 1
    *(rax_11 + 0xc) = 1
    *rbx = &data_142d42ea8
    rbx[2] = rdi

var_258.q = rdi
int64_t* var_250 = rbx

if (arg1 + 0x400 == &var_258)
label_141b9d01f:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx + 8))(rbx, 1)
else
    *(arg1 + 0x400) = rdi
    int64_t* rdi_1 = *(arg1 + 0x408)
    var_258.q = 0
    
    if (rbx == rdi_1)
        goto label_141b9d01f
    
    int64_t* var_250_1 = nullptr
    *(arg1 + 0x408) = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
        
        rbx = var_250_1
        goto label_141b9d01f

void*** rax_16 = j_sub_140a82f30(0x310)
int64_t* rbx_1
void*** rsi_1

if (rax_16 == 0)
    rbx_1 = var_258.q
    rsi_1 = nullptr
else
    rbx_1 = *(arg1 + 0x10)
    int64_t rdi_2 = 0
    
    if (rbx_1 != 0)
        int32_t rax_17 = rbx_1[1].d
        
        if (rax_17 != 0)
            rbx_1[1].d = rax_17 + 1
            rax_17.b = 1
        
        if (rax_17.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            int32_t rax_18 = rbx_1[1].d
            rdi_2 = *(arg1 + 8)
            rbx_1[1].d = rax_18
            
            if (rax_18 == 0)
                (**rbx_1)(rbx_1)
                int32_t temp5_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    var_248.q = rdi_2
    var_248:8.q = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    rsi_1 = sub_142329f50(rax_16, *(arg1 + 0x400), &var_248)
    r12 = 1

int64_t* rax_22 = j_sub_140a82f30(0x18)
int64_t* rdi_3 = rax_22

if (rax_22 == 0)
    rdi_3 = nullptr
else
    rax_22[1].d = 1
    *(rax_22 + 0xc) = 1
    *rdi_3 = &data_143084930
    rdi_3[2] = rsi_1

var_258.q = rsi_1
int64_t* var_250_2 = rdi_3

if (arg1 + 0x410 == &var_258)
label_141b9d180:
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp6_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
else
    *(arg1 + 0x410) = rsi_1
    int64_t* rsi_2 = *(arg1 + 0x418)
    var_258.q = 0
    
    if (rdi_3 == rsi_2)
        goto label_141b9d180
    
    int64_t* var_250_3 = nullptr
    *(arg1 + 0x418) = rdi_3
    
    if (rsi_2 != 0)
        rsi_2[1].d -= 1
        
        if (rsi_2[1].d == 1)
            (**rsi_2)(rsi_2)
            int32_t temp9_1 = *(rsi_2 + 0xc)
            *(rsi_2 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rsi_2 + 8))(rsi_2, 1)
        
        rdi_3 = var_250_3
        goto label_141b9d180

if ((r12 & 1) != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp10_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = *(arg1 + 0x418)
int64_t rcx_19 = *(arg1 + 0x410)

if (rbx_2 != 0)
    rbx_2[1].d += 1

int64_t rax_29 = rcx_19 + 0xd0

if (rcx_19 == 0)
    rax_29 = 0

if (rbx_2 != 0)
    rbx_2[1].d += 1

*(arg1 + 0x390) = rax_29
int64_t* rcx_20 = *(arg1 + 0x398)

if (rbx_2 != rcx_20)
    if (rbx_2 != 0)
        *(rbx_2 + 0xc) += 1
        rcx_20 = *(arg1 + 0x398)
    
    if (rcx_20 != 0)
        int32_t temp14_1 = *(rcx_20 + 0xc)
        *(rcx_20 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*rcx_20 + 8))(rcx_20, 1)
    
    *(arg1 + 0x398) = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp13_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp19_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp19_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

void var_48
sub_140745b20(&var_48)
int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t temp16_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*(*var_60 + 8))(var_60, 1)

void var_80
sub_140745b20(&var_80)
int64_t* var_90

if (var_90 != 0)
    var_90[1].d -= 1
    
    if (var_90[1].d == 1)
        (**var_90)(var_90)
        int32_t temp18_1 = *(var_90 + 0xc)
        *(var_90 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*var_90 + 8))(var_90, 1)

int64_t result = sub_140ddea30(&var_238)
__security_check_cookie(rax_1 ^ &var_278)
return result
