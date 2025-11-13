// 函数: sub_140f554b0
// 地址: 0x140f554b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
int32_t var_a0 = 0
void* r12 = arg4
int64_t* rsi_1 = arg1[0x73] + 0x2b0
int128_t zmm7
int128_t var_68 = zmm7
int32_t r14 = 0
int64_t* result

if ((**rsi_1)(rsi_1) s<= 0)
label_140f55802:
    result = arg2
    sub_140dc1a00(arg1, result, arg3, r12)
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            int64_t rdx_9 = *rdi
            (*rdx_9)(rdi, rdx_9)
            int32_t temp1_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp1_1 == 1)
                int64_t r8_5 = *rdi
                (*(r8_5 + 8))(rdi, 1, r8_5)
else
    int64_t rbx_1 = 0
    
    while (true)
        uint64_t rax_3
        
        if (*(sub_140e19aa0(*(*(rsi_1[2] + rbx_1) + 0x10), &var_a0, *(r12 + 0xc)) + 1) != 0)
            rax_3.b = 1
        else
            rax_3 = sub_140e19b90(*(*(rsi_1[2] + rbx_1) + 0x10), *(r12 + 0xc), arg5)
            
            if (rax_3.b != 0)
                rax_3.b = 1
        
        var_a0:1.b = 0
        
        if (rax_3.b != 0)
            break
        
        r14 += 1
        rbx_1 += 8
        
        if (r14 s>= (**rsi_1)(rsi_1))
            goto label_140f55802
    
    void* rdx_2 = *(rsi_1[2] + (sx.q(r14) << 3))
    int64_t* rbx_2 = *(rdx_2 + 0x18)
    bool cond:0_1 = rbx_2 == 0
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        cond:0_1 = rbx_2 == 0
    
    if (cond:0_1)
        rbx_2 = nullptr
    
    rdi = rbx_2
    
    if (*(rdx_2 + 0x10) == 0)
        goto label_140f55802
    
    uint32_t rdx_3 = zx.d(*(r12 + 0x18))
    bool cond:2_1
    
    if (arg1[0x83].d != 1)
        cond:2_1 = rdx_3 == 0
    else
        uint32_t temp3_1 = rdx_3
        rdx_3 -= 2
        cond:2_1 = temp3_1 == 2
    
    int32_t r15_1
    
    if (cond:2_1)
        r15_1 = -1
    label_140f555ed:
        int32_t rbp_1 = r14 + r15_1
        int64_t r14_1 = sx.q(rbp_1)
        
        if (rbp_1 s< 0)
            goto label_140f55802
        
        int64_t r12_1 = sx.q(r15_1)
        
        while (true)
            rdi = rbx_2
            
            if (rbp_1 s>= (**rsi_1)(rsi_1))
                goto label_140f557fd
            
            void* rcx_9 = *(rsi_1[2] + (r14_1 << 3))
            int64_t var_88 = *(rcx_9 + 0x10)
            int64_t* rax_13 = *(rcx_9 + 0x18)
            
            if (rax_13 != 0)
                rax_13[1].d += 1
            
            int64_t var_78
            sub_140f47460(arg1, &var_78, &var_88)
            
            if (var_78 != 0)
                uint128_t zmm6 = var_78.o
                int64_t* rdi_2 = _mm_bsrli_si128(zmm6, 8).q
                
                if (rdi_2 != 0)
                    rdi_2[1].d += 1
                
                int64_t* rsi_2 = _mm_bsrli_si128(zx.o(0), 8).q
                var_88.o = zmm6
                
                if (rsi_2 != 0)
                    rsi_2[1].d -= 1
                    
                    if (rsi_2[1].d == 1)
                        (**rsi_2)(rsi_2)
                        int32_t temp11_1 = *(rsi_2 + 0xc)
                        *(rsi_2 + 0xc) -= 1
                        
                        if (temp11_1 == 1)
                            (*(*rsi_2 + 8))(rsi_2, 1)
                
                if (rdi_2 != 0)
                    rdi_2[1].d -= 1
                    
                    if (rdi_2[1].d == 1)
                        (**rdi_2)(rdi_2)
                        int32_t temp12_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp12_1 == 1)
                            (*(*rdi_2 + 8))(rdi_2, 1)
                
                if (zmm6.q == 0)
                    rdi = rbx_2
                    
                    if (rax_13 != 0)
                        rax_13[1].d -= 1
                        
                        if (rax_13[1].d == 1)
                            (**rax_13)(rax_13)
                            int32_t temp14_1 = *(rax_13 + 0xc)
                            *(rax_13 + 0xc) -= 1
                            
                            if (temp14_1 == 1)
                                (*(*rax_13 + 8))(rax_13, 1)
                    
                label_140f557fd:
                    r12 = arg4
                    goto label_140f55802
                
                int128_t zmm1
                uint128_t zmm6_1
                zmm1, zmm6_1 =
                    sub_140f49cc0(arg1, arg3, &var_88, 0, *(arg1 + 0x3fc), arg1[0x7f].d.d)
                var_88.o = zmm6_1
                int64_t* rdi_3 = _mm_bsrli_si128(zmm6_1, 8).q
                
                if (rdi_3 != 0)
                    rdi_3[1].d += 1
                
                result = arg2
                sub_140eb9b00(result, &var_88, zmm1)
                
                if (rdi_3 != 0)
                    rdi_3[1].d -= 1
                    
                    if (rdi_3[1].d == 1)
                        (**rdi_3)(rdi_3)
                        int32_t temp16_1 = *(rdi_3 + 0xc)
                        *(rdi_3 + 0xc) -= 1
                        
                        if (temp16_1 == 1)
                            (*(*rdi_3 + 8))(rdi_3, 1)
                
                break
            
            int64_t* var_70
            
            if (var_70 != 0)
                var_70[1].d -= 1
                
                if (var_70[1].d == 1)
                    (**var_70)(var_70)
                    int32_t temp9_1 = *(var_70 + 0xc)
                    *(var_70 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*var_70 + 8))(var_70, 1)
            
            rbp_1 += r15_1
            int64_t temp6_1 = r14_1
            r14_1 += r12_1
            
            if (temp6_1 + r12_1 s< 0)
                rdi = rbx_2
                goto label_140f557fd
        
        goto label_140f55799
    
    if (rdx_3 == 1)
        r15_1 = 1
        goto label_140f555ed
    
    result = arg2
    sub_140dc1a00(arg1, result, arg3, r12)
label_140f55799:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

return result
