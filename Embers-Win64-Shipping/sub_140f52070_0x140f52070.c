// 函数: sub_140f52070
// 地址: 0x140f52070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int64_t* rbx = *(arg4 + 0x48)

if (rbx != 0)
    rbx[1].d += 1

int64_t rdi

if (*(arg4 + 0x38) != data_143e1e008 || *(arg1 + 0x60c) != 0xffffffff)
    rdi.b = 0
else
    rdi.b = 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rdi.b == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    *(arg1 + 0x448) = 0
    
    if (*(arg1 + 0x3a0) != 0)
        int64_t* rcx_2 = *(arg1 + 0x398)
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            int64_t* rcx_3
            
            if (*(arg1 + 0x3a0) == 0)
                rcx_3 = nullptr
            else
                rcx_3 = *(arg1 + 0x398)
            
            (*(*rcx_3 + 0x48))(rcx_3)
            *(arg1 + 0x390) = arg5[0].d
    
    int64_t rbx_1 = 0
    arg5 = _mm_cvtps_pd((*(arg1 + 0x390))[0])
    *(arg1 + 0x618) = _mm_unpacklo_pd(arg5, arg5[0])
    *(arg1 + 0x60c) = *(arg4 + 0x50)
    int128_t zmm1 = *(arg4 + 0x18)
    zmm1.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f+ 0.5f
    int32_t rcx_4 = int.d(zmm1.d)
    zmm1 = *(arg4 + 0x1c)
    zmm1.d = zmm1.d f+ zmm1.d
    *(arg1 + 0x610) = rcx_4 s>> 1
    zmm1.d = zmm1.d f+ 0.5f
    *(arg1 + 0x614) = int.d(zmm1.d) s>> 1
    int64_t* r14_1 = *(arg1 + 0x10)
    
    if (r14_1 != 0)
        int32_t rax_11 = r14_1[1].d
        
        if (rax_11 != 0)
            r14_1[1].d = rax_11 + 1
            rax_11.b = 1
        
        if (rax_11.b == 0)
            r14_1 = nullptr
        
        if (r14_1 != 0)
            int32_t rax_12 = r14_1[1].d
            rbx_1 = *(arg1 + 8)
            r14_1[1].d = rax_12
            
            if (rax_12 == 0)
                (**r14_1)(r14_1)
                int32_t temp2_1 = *(r14_1 + 0xc)
                *(r14_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*r14_1 + 8))(r14_1, 1)
    
    int64_t var_1d8 = rbx_1
    int64_t* var_1d0_1 = r14_1
    
    if (r14_1 != 0)
        r14_1[1].d += 1
    
    int64_t* rdi_1 = *(arg1 + 0x10)
    int64_t rbx_2 = 0
    
    if (rdi_1 != 0)
        int32_t rax_15 = rdi_1[1].d
        
        if (rax_15 != 0)
            rdi_1[1].d = rax_15 + 1
            rax_15.b = 1
        
        if (rax_15.b == 0)
            rdi_1 = nullptr
        
        if (rdi_1 != 0)
            int32_t rax_16 = rdi_1[1].d
            rbx_2 = *(arg1 + 8)
            rdi_1[1].d = rax_16
            
            if (rax_16 == 0)
                (**rdi_1)(rdi_1)
                int32_t temp6_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t var_1e8 = rbx_2
    int64_t* var_1e0_1 = rdi_1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int64_t* rbx_3 = *(arg1 + 0x10)
    int64_t r12_1 = 0
    
    if (rbx_3 != 0)
        int32_t rax_19 = rbx_3[1].d
        
        if (rax_19 != 0)
            rbx_3[1].d = rax_19 + 1
            rax_19.b = 1
        
        if (rax_19.b == 0)
            rbx_3 = nullptr
        
        if (rbx_3 != 0)
            int32_t rax_20 = rbx_3[1].d
            r12_1 = *(arg1 + 8)
            rbx_3[1].d = rax_20
            
            if (rax_20 == 0)
                (**rbx_3)(rbx_3)
                int32_t temp12_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
            
            rbx_3[1].d += 1
    
    int32_t var_114
    int32_t var_114_1 = var_114 & 0xffffff00
    int64_t var_190_1 = r12_1
    char var_1c8 = 1
    int64_t var_1c0_1 = 0
    int64_t var_1b8_1 = 0
    char var_1a8_1 = 0
    int64_t var_1a0_1 = 0
    int64_t var_198_1 = 0
    int64_t* var_188_1 = (zx.o(0)).q
    int128_t var_178
    __builtin_memset(&var_178, 0, 0x60)
    int32_t var_118_1 = 0x20702
    
    if (rbx_3 != 0)
        *(rbx_3 + 0xc) += 1
        
        if (var_188_1 != 0)
            int32_t temp5_1 = *(var_188_1 + 0xc)
            *(var_188_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_188_1 + 8))(var_188_1, 1)
        
        var_188_1 = rbx_3
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp9_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    void var_108
    sub_140596b00(&var_108, sub_140dbdce0(sub_140f63c00(&var_1c8, &var_1e8), &var_1d8, 0, 0))
    sub_140597700(&var_1c8)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp8_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp11_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t temp13_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp13_1 == 1)
                int64_t r8 = *r14_1
                (*(r8 + 8))(r14_1, 1, r8)
    
    int32_t var_54
    
    if (*(arg1 + 0x62d) != 0)
        int32_t var_54_1 = var_54 | 0x40
    sub_140e51550(arg2, &var_108)
    sub_140597700(&var_108)

__security_check_cookie(rax_1 ^ &var_208)
return arg2
