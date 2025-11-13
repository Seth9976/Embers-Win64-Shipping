// 函数: sub_140e99cf0
// 地址: 0x140e99cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* rax_2 = *arg1
int64_t* rsi = nullptr

if (*(rax_2 + 0x508) == 0)
label_140e9a061:
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
        goto label_140e9a061
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_140e9a061
    
    void* rdx = *arg1
    int64_t* r13_1 = nullptr
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
            r13_1 = *rcx_1
    
    int64_t var_128
    
    if (&var_128 != rdx + 0x510 && *(rdx + 0x514) != 0)
        *(rdx + 0x514) = 0
        rdx = *arg1
    
    int64_t* rax_8 = (*(*r13_1 + 0x48))(r13_1, rdx)
    
    if (rax_8 == 0)
    label_140e9a03a:
        
        if (rdi_1 == 0)
            goto label_140e9a061
        
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp1_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
        
        goto label_140e9a061
    
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
    int64_t* rax_16
    int32_t var_118
    
    if (*(rax_9 + 0x4f8) == 0)
    label_140e99f17:
        var_118 = rbp_1
        rax_16 = &var_118
        char var_114_1 = 1
    else
        int64_t* rcx_4 = *(rax_9 + 0x4f0)
        
        if (rcx_4 == 0)
            goto label_140e99f17
        
        if ((*(*rcx_4 + 0x28))(rcx_4) == 0)
            goto label_140e99f17
        
        int64_t* r14_1 = rax_8[1]
        
        if (r14_1 != 0)
            r14_1[1].d += 1
        
        void* rax_12 = *arg1
        int64_t* rcx_5
        
        if (*(rax_12 + 0x4f8) == 0)
            rcx_5 = nullptr
        else
            rcx_5 = *(rax_12 + 0x4f0)
        
        var_118.q = *rax_8
        int64_t* var_110_1 = r14_1
        
        if (r14_1 != 0)
            r14_1[1].d += 1
        
        (*(*rcx_5 + 0x48))(rcx_5, &var_128, arg1[2], zx.q(rbp_1), &var_118)
        
        if (r14_1 != 0)
            r14_1[1].d -= 1
            
            if (r14_1[1].d == 1)
                (**r14_1)(r14_1)
                int32_t temp6_1 = *(r14_1 + 0xc)
                *(r14_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*r14_1 + 8))(r14_1, 1)
        
        rax_16 = &var_128
    
    if (*(rax_16 + 4) == 0)
        goto label_140e9a03a
    
    int64_t* r14_2 = rax_8[1]
    int32_t rbp_2 = *rax_16
    
    if (r14_2 != 0)
        r14_2[1].d += 1
    
    void* rax_17 = *arg1
    int64_t r8_2 = arg1[2]
    
    if (*(rax_17 + 0x508) != 0)
        rsi = *(rax_17 + 0x500)
    
    var_128 = *rax_8
    int64_t* var_120_1 = r14_2
    
    if (r14_2 != 0)
        r14_2[1].d += 1
    
    char var_108
    (*(*rsi + 0x48))(rsi, &var_108, r8_2, zx.q(rbp_2), &var_128)
    
    if (r14_2 != 0)
        r14_2[1].d -= 1
        
        if (r14_2[1].d == 1)
            (**r14_2)(r14_2)
            int32_t temp3_1 = *(r14_2 + 0xc)
            *(r14_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*r14_2 + 8))(r14_2, 1)
    
    if (var_108 != 0 && rbp_2 == 1)
        var_128 = *rax_8
        void* rax_22 = rax_8[1]
        void* var_120_2 = rax_22
        
        if (rax_22 != 0)
            *(rax_22 + 8) += 1
        
        int64_t r8_3
        r8_3.b = 1
        (*(*r13_1 + 0x50))(r13_1, &var_128, r8_3)
    
    sub_140e51550(arg2, &var_108)
    sub_140597700(&var_108)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            int64_t r8_4 = *rdi_1
            (*r8_4)(rdi_1, zmm1, r8_4)
            int32_t temp7_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                int64_t r8_5 = *rdi_1
                (*(r8_5 + 8))(rdi_1, 1, r8_5)

__security_check_cookie(rax_1 ^ &var_158)
return arg2
