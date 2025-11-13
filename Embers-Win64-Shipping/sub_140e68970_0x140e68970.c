// 函数: sub_140e68970
// 地址: 0x140e68970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = nullptr
int32_t arg_8 = 0
int64_t* rcx = arg1[0xc0]
int32_t rax_1 = (*(*rcx + 8))(rcx)
int32_t rax_5
int64_t* rbx
int64_t* rsi
int64_t* rdi
void* const r13

if (rax_1 s< 0 || rax_1 s>= arg1[0x58].d)
    rdi = arg_8.q
    rsi = nullptr
    rax_5 = 2
    r13 = nullptr
    rbx = nullptr
else
    int64_t* rax_4 = (sx.q(rax_1) << 4) + arg1[0x57]
    rdi = rax_4[1]
    r13 = *rax_4
    
    if (rdi != 0)
        rdi[1].d += 1
    
    rsi = arg_8.q
    rax_5 = 1
    rbx = rdi
    
    if (rdi != 0)
        rdi[1].d += 1

if ((rax_5.b & 2) != 0)
    rax_5 &= 0xfffffffd
    arg_8 = rax_5
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t temp2_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rsi + 8))(rsi, 1)
            
            rax_5 = arg_8

if ((rax_5.b & 1) != 0 && rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp4_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (r13 == 0)
label_140e68d50:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp5_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    int64_t var_90 = 0
    int128_t var_58
    __builtin_memset(&var_58, 0, 0x20)
    int64_t var_88_1 = 0
    void var_98
    sub_140da3dc0(arg1, &var_98)
    int32_t var_80[0x4]
    *arg2 = _mm_cvtepi32_ps(var_80)
    sub_140d72800(&var_90)
else
    int32_t var_b8
    uint128_t zmm1
    uint128_t zmm2
    
    if (*(r13 + 0x60) s<= 0 || *(r13 + 0x68) == 0)
    label_140e68b94:
        int32_t arg_20
        sub_140e68880(r13, &arg_20, 0xa)
        zmm1 = arg_20
        zmm2 = arg5
        int64_t* rcx_13 = data_143e20d18
        uint128_t zmm3
        zmm3.d = zmm1.d f+ 1f
        uint128_t zmm4_1
        zmm4_1.d = zmm2.d f+ 1f
        var_b8 = int.d(zmm1.d)
        int32_t var_b4_2 = int.d(zmm2.d)
        int32_t var_b0_2 = int.d(zmm3.d)
        int32_t var_ac_2 = int.d(zmm4_1.d)
        int32_t var_c8
        int32_t r8_3
        int32_t r9_1
        r8_3, r9_1 = (*(*rcx_13 + 0xb0))(rcx_13, &var_c8, &var_b8)
        uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(var_c8))
        int32_t var_c4
        zmm1 = _mm_cvtepi32_ps(zx.o(var_c4))
        int32_t var_a8 = zmm0_2.d
        int32_t var_a4_1 = zmm1.d
        int32_t var_c0
        int32_t var_a0_1 = _mm_cvtepi32_ps(zx.o(var_c0)).d
        int32_t var_bc
        int32_t var_9c_1 = _mm_cvtepi32_ps(zx.o(var_bc)).d
        
        if (sub_140d9b3b0(&arg1[0x30], &var_a8, r8_3, r9_1) == 0)
            (*(*arg1 + 0x30))(arg1, &var_c8)
            void* rcx_16 = var_c8.q
            
            if (rcx_16 == 0)
                int64_t* rdi_3 = var_c0.q
                
                if (rdi_3 != 0)
                    rdi_3[1].d -= 1
                    
                    if (rdi_3[1].d == 1)
                        (**rdi_3)(rdi_3)
                        int32_t temp10_1 = *(rdi_3 + 0xc)
                        *(rdi_3 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*rdi_3 + 8))(rdi_3, 1)
                
                sub_140e65190(arg1, &var_c8)
                rcx_16 = var_c8.q
                
                if (rcx_16 == 0)
                    int64_t* rdi_5 = var_c0.q
                    
                    if (rdi_5 != 0)
                        rdi_5[1].d -= 1
                        
                        if (rdi_5[1].d == 1)
                            (**rdi_5)(rdi_5)
                            int32_t temp14_1 = *(rdi_5 + 0xc)
                            *(rdi_5 + 0xc) -= 1
                            
                            if (temp14_1 == 1)
                                (*(*rdi_5 + 8))(rdi_5, 1)
                    
                    goto label_140e68d50
            
            sub_140e69d90(arg1, arg2, sub_140e15ab0(rcx_16, &var_b8))
            int64_t* rdi_4 = var_c0.q
            
            if (rdi_4 != 0)
                rdi_4[1].d -= 1
                
                if (rdi_4[1].d == 1)
                    (**rdi_4)(rdi_4)
                    int32_t temp9_1 = *(rdi_4 + 0xc)
                    *(rdi_4 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rdi_4 + 8))(rdi_4, 1)
        else
            *arg2 = var_a8.o
    else
        int64_t* rdi_1 = *(r13 + 0x70)
        
        if (rdi_1 == 0)
            goto label_140e68b94
        
        int32_t rax_10 = rdi_1[1].d
        
        if (rax_10 s<= 0)
            goto label_140e68b94
        
        void* rcx_5 = nullptr
        
        if (rdi_1 != 0)
            if (rax_10 != 0)
                rdi_1[1].d = rax_10 + 1
                rax_10.b = 1
            
            if (rax_10.b == 0)
                rdi_1 = nullptr
            
            if (rdi_1 != 0)
                rcx_5 = *(r13 + 0x68)
        
        sub_140e15940(rcx_5, &arg_8)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp15_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp15_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t* rdi_2 = *(r13 + 0x70)
        
        if (rdi_2 != 0)
            int32_t rax_13 = rdi_2[1].d
            
            if (rax_13 != 0)
                rdi_2[1].d = rax_13 + 1
                rax_13.b = 1
            
            if (rax_13.b == 0)
                rdi_2 = nullptr
            
            if (rdi_2 != 0)
                r14 = *(r13 + 0x68)
        
        float arg_18
        sub_140e173b0(r14, &arg_18)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp17_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp17_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        zmm1 = arg_8
        zmm2 = arg3
        float zmm0_1 = arg_18 f+ zmm1.d
        var_b8 = zmm1.d
        zmm1.d = arg4.d f+ zmm2.d
        int32_t var_b4_1 = zmm2.d
        float var_b0_1 = zmm0_1
        int32_t var_ac_1 = zmm1.d
        sub_140e69d90(arg1, arg2, &var_b8)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp11_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rbx + 8))(rbx, 1)

return arg2
