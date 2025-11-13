// 函数: sub_141bbd550
// 地址: 0x141bbd550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8

if (*(arg1 + 0x4f0) == 0)
label_141bbd80b:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
else
    int64_t* rcx = *(arg1 + 0x4e8)
    
    if (rcx == 0)
        goto label_141bbd80b
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_141bbd80b
    
    int128_t zmm3 = *(arg3 + 0x20)
    int128_t zmm4_1 = *(arg3 + 0x1c)
    int128_t zmm1
    zmm1.d = zmm4_1.d f* *(arg3 + 0x28)
    zmm1.d = zmm1.d f- zmm3.d f* *(arg3 + 0x24)
    int128_t zmm2
    zmm2.d = 1f f/ zmm1.d
    zmm3.d = zmm3.d f* zmm2.d
    zmm4_1.d = zmm4_1.d f* zmm2.d
    zmm3 ^= data_142d3f780
    zmm2 = *(arg3 + 4)
    zmm1 = zmm3
    zmm3.d = zmm3.d f* *(arg4 + 0x18)
    float zmm0 = zmm4_1.d
    zmm4_1.d = zmm4_1.d f* *(arg4 + 0x1c)
    zmm1.d = zmm1.d f* *(arg3 + 0x2c)
    zmm4_1.d = zmm4_1.d f+ zmm3.d
    zmm3.d = zmm2.d f* 0.25f
    zmm1.d = (zmm1 ^ data_142d3f780).d f- zmm0 f* *(arg3 + 0x30)
    zmm0 = 3f
    zmm4_1.d = zmm4_1.d f+ zmm1.d
    
    if (not(zmm3.d f< 3f))
        zmm0 = __minss_xmmss_memss(zmm3.d, 0x41200000)
    
    int32_t rax_4 = 0
    
    if (not(zmm4_1.d f< zmm0))
        zmm2.d = zmm2.d f- zmm0
        rax_4.b = zmm4_1.d f> zmm2.d
        rax_4 += 1
    
    void** var_b0
    sub_140e51390(&var_b0, arg4)
    var_b0 = &data_142ed7318
    int64_t var_40_1 = *(arg4 + 0x70)
    int64_t* rax_6 = *(arg4 + 0x78)
    
    if (rax_6 != 0)
        rax_6[1].d += 1
    
    void* rdx_1 = arg1 - 8
    int64_t* rcx_2 = nullptr
    void* var_30_1 = rdx_1
    int64_t* rdi_1 = *(arg1 + 0x4c0)
    
    if (rdi_1 != 0)
        int32_t rax_7 = rdi_1[1].d
        
        if (rax_7 != 0)
            rdi_1[1].d = rax_7 + 1
            rax_7.b = 1
            rdx_1 = var_30_1
        
        if (rax_7.b == 0)
            rdi_1 = nullptr
        
        if (rdi_1 != 0)
            rcx_2 = *(arg1 + 0x4b8)
    
    int64_t* rax_9 = (*(*rcx_2 + 0x48))(rcx_2, rdx_1)
    int32_t var_28
    char var_24
    
    if (rax_9 == 0)
        var_24 = 0
    else
        int64_t* rcx_4
        
        if (*(var_30_1 + 0x4f8) == 0)
            rcx_4 = nullptr
        else
            rcx_4 = *(var_30_1 + 0x4f0)
        
        (*(*rcx_4 + 0x48))(rcx_4, &var_28, &var_b0, zx.q(rax_4), *rax_9)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp1_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (&var_28 == arg1 + 0x508)
        char var_24_1 = 0
    else
        if (*(arg1 + 0x50c) != 0)
            *(arg1 + 0x50c) = 0
        
        if (var_24 != 0)
            *(arg1 + 0x508) = var_28
            *(arg1 + 0x50c) = 1
            var_24_1 = 0
    
    if (rax_6 != 0)
        rax_6[1].d -= 1
        
        if (rax_6[1].d == 1)
            (**rax_6)(rax_6)
            int32_t temp3_1 = *(rax_6 + 0xc)
            *(rax_6 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rax_6 + 8))(rax_6, 1)
    
    sub_140e29130(&var_b0)
    *arg2 = 1
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)

*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
__security_check_cookie(rax_1 ^ &var_e8)
return arg2
