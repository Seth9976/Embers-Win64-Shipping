// 函数: sub_141b86220
// 地址: 0x141b86220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* rax_2 = *arg1
int64_t* rsi = nullptr

if (*(rax_2 + 0x508) == 0)
label_141b864cb:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t* rcx = *(rax_2 + 0x500)
    
    if (rcx == 0)
        goto label_141b864cb
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_141b864cb
    
    void* rdx = *arg1
    int64_t* r15_1 = nullptr
    int64_t* rcx_1 = rdx + 0x4c0
    int64_t* rdi_1 = rcx_1[1]
    
    if (rdi_1 != 0)
        int32_t rax_5 = rdi_1[1].d
        
        if (rax_5 != 0)
            rdi_1[1].d = rax_5 + 1
            rax_5.b = 1
            rdx = *arg1
        
        if (rax_5.b == 0)
            rdi_1 = nullptr
        
        if (rdi_1 != 0)
            r15_1 = *rcx_1
    
    void var_108
    
    if (&var_108 != rdx + 0x510 && *(rdx + 0x514) != 0)
        *(rdx + 0x514) = 0
        rdx = *arg1
    
    int64_t* rax_8 = (*(*r15_1 + 0x48))(r15_1, rdx)
    
    if (rax_8 == 0)
    label_141b864a4:
        
        if (rdi_1 == 0)
            goto label_141b864cb
        
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp1_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
        
        goto label_141b864cb
    
    void* rcx_3 = arg1[1]
    void* rdx_1 = arg1[2]
    int128_t zmm3 = *(rcx_3 + 0x20)
    int128_t zmm4_1 = *(rcx_3 + 0x1c)
    int128_t zmm1
    zmm1.d = zmm4_1.d f* *(rcx_3 + 0x28)
    zmm1.d = zmm1.d f- zmm3.d f* *(rcx_3 + 0x24)
    int128_t zmm2
    zmm2.d = 1f f/ zmm1.d
    zmm3.d = zmm3.d f* zmm2.d
    zmm4_1.d = zmm4_1.d f* zmm2.d
    zmm3 ^= data_142d3f780
    zmm2 = *(rcx_3 + 4)
    zmm1 = zmm3
    zmm3.d = zmm3.d f* *(rdx_1 + 0x18)
    float zmm0 = zmm4_1.d
    zmm4_1.d = zmm4_1.d f* *(rdx_1 + 0x1c)
    zmm1.d = zmm1.d f* *(rcx_3 + 0x2c)
    zmm4_1.d = zmm4_1.d f+ zmm3.d
    zmm3.d = zmm2.d f* 0.25f
    zmm1.d = (zmm1 ^ data_142d3f780).d f- zmm0 f* *(rcx_3 + 0x30)
    zmm0 = 3f
    zmm4_1.d = zmm4_1.d f+ zmm1.d
    
    if (not(zmm3.d f< 3f))
        zmm0 = __minss_xmmss_memss(zmm3.d, 0x41200000)
    
    int32_t rbp_1 = 0
    
    if (not(zmm4_1.d f< zmm0))
        zmm2.d = zmm2.d f- zmm0
        rbp_1.b = zmm4_1.d f> zmm2.d
        rbp_1 += 1
    
    void* rax_9 = *arg1
    void* rax_14
    
    if (*(rax_9 + 0x4f8) == 0)
    label_141b863ed:
        int32_t var_100 = rbp_1
        rax_14 = &var_100
        char var_fc_1 = 1
    else
        int64_t* rcx_4 = *(rax_9 + 0x4f0)
        
        if (rcx_4 == 0)
            goto label_141b863ed
        
        if ((*(*rcx_4 + 0x28))(rcx_4) == 0)
            goto label_141b863ed
        
        void* rax_12 = *arg1
        int64_t* rcx_5
        
        if (*(rax_12 + 0x4f8) == 0)
            rcx_5 = nullptr
        else
            rcx_5 = *(rax_12 + 0x4f0)
        
        (*(*rcx_5 + 0x48))(rcx_5, &var_108, arg1[2], zx.q(rbp_1), *rax_8)
        rax_14 = &var_108
    
    if (*(rax_14 + 4) == 0)
        goto label_141b864a4
    
    int32_t rbp_2 = *rax_14
    void* rax_15 = *arg1
    
    if (*(rax_15 + 0x508) != 0)
        rsi = *(rax_15 + 0x500)
    
    char var_f8
    (*(*rsi + 0x48))(rsi, &var_f8, arg1[2], zx.q(rbp_2), *rax_8)
    
    if (var_f8 != 0 && rbp_2 == 1)
        (*(*r15_1 + 0x50))(r15_1, *rax_8, zx.q(rbp_2.b))
    
    sub_140e51550(arg2, &var_f8)
    sub_140597700(&var_f8)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            int64_t rdx_7 = *rdi_1
            (*rdx_7)(rdi_1, rdx_7)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                int64_t r8_4 = *rdi_1
                (*(r8_4 + 8))(rdi_1, 1, r8_4)

__security_check_cookie(rax_1 ^ &var_138)
return arg2
