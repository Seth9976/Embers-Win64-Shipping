// 函数: sub_141d502d0
// 地址: 0x141d502d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2
int64_t* rcx = *(arg1 + 0x130)
int128_t* r14 = arg3

if (rcx != 0)
    (*(*rcx + 0xb0))(rcx)

uint128_t zmm1 = *r14
int64_t rax_2 = *rdi
uint128_t var_98 = zx.o(0)
uint128_t zmm0 = r14[1]
uint128_t var_78 = zmm1
uint128_t var_68 = zmm0
int32_t result = (*(rax_2 + 0x20))(rdi, &var_78, &var_98)

if (result.b != 0)
    int64_t r12
    int64_t var_28_1 = r12
    
    do
        int64_t* rcx_2 = var_98.q
        
        if (rcx_2 != 0)
            void arg_20
            *(arg1 + 0x170) = *(*(*rcx_2 + 0x40))(rcx_2, &arg_20)
            zmm0 = var_98
            uint128_t var_88 = zmm0
            zmm0 = _mm_bsrli_si128(zmm0, 8)
            void* rax_6 = zmm0.q
            
            if (rax_6 != 0)
                *(rax_6 + 8) += 1
            
            int32_t rsi_1 = *(arg1 + 0xb8)
            r12.b = 0
            int32_t rsi_2 = rsi_1 - 1
            
            if (rsi_1 - 1 s>= 0)
                int64_t r14_2 = sx.q(rsi_2) << 4
                int32_t temp2_1
                
                do
                    int64_t rdi_1 = *(arg1 + 0xb0)
                    int64_t* rbx_1 = *(r14_2 + rdi_1 + 8)
                    
                    if (rbx_1 == 0)
                        zmm0 = sub_141c8bf50(arg1 + 0xb0, rsi_2, 1, 1)
                    else
                        int32_t rax_7 = 0
                        bool z_1
                        
                        if (0 == rbx_1[1].d)
                            rbx_1[1].d = 0
                            z_1 = true
                        else
                            rax_7 = rbx_1[1].d
                            z_1 = false
                        
                        if (z_1)
                        label_141d50407:
                            rbx_1 = nullptr
                            zmm0 = sub_141c8bf50(arg1 + 0xb0, rsi_2, 1, 1)
                        else
                            while (true)
                                bool z_2
                                
                                if (rax_7 == rbx_1[1].d)
                                    rbx_1[1].d = rax_7 + 1
                                    z_2 = true
                                else
                                    rbx_1[1].d
                                    z_2 = false
                                
                                if (z_2)
                                    break
                                
                                rax_7 = 0
                                bool z_3
                                
                                if (0 == rbx_1[1].d)
                                    rbx_1[1].d = 0
                                    z_3 = true
                                else
                                    rax_7 = rbx_1[1].d
                                    z_3 = false
                                
                                if (z_3)
                                    goto label_141d50407
                            
                            if (rbx_1 == 0)
                                zmm0 = sub_141c8bf50(arg1 + 0xb0, rsi_2, 1, 1)
                            else
                                int64_t* rdi_3 = *(r14_2 + rdi_1)
                                
                                if (rdi_3 == 0)
                                    zmm0 = sub_141c8bf50(arg1 + 0xb0, rsi_2, 1, 1)
                                else if ((*(*rdi_3 + 8))(rdi_3) s< 8)
                                    (**rdi_3)(rdi_3, &var_88)
                                else
                                    r12.b = 1
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t rax_11 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (rax_11 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    r14_2 -= 0x10
                    temp2_1 = rsi_2
                    rsi_2 -= 1
                while (temp2_1 - 1 s>= 0)
                r14 = arg3
                rdi = arg2
            
            int64_t* rbx_2 = var_88:8.q
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t rax_15 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_15 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            if (r12.b == 0)
                int64_t* rcx_9 = *(arg1 + 0x130)
                
                if (rcx_9 != 0)
                    int64_t* rax_18 = (*(*rcx_9 + 0x10))(rcx_9)
                    int64_t rdx_3 = *rax_18
                    (*(rdx_3 + 0x10))(rax_18, rdx_3)
                
                if (rcx_9 == 0 || not(zmm0.d f< 0f))
                    int64_t* rdi_2 = var_98.q
                    void var_a8
                    int64_t* rax_20 = (*(*rdi_2 + 0x10))(rdi_2, &var_a8)
                    int64_t r8_1 = *rdi_2
                    void var_a0
                    int64_t rax_21 = (*(r8_1 + 0x40))(rdi_2, &var_a0, r8_1)
                    rdi = arg2
                    *(arg1 + 0x128) = *rax_20 + *rax_21
        
        int64_t rax_22 = *rdi
        zmm1 = r14[1]
        var_78 = *r14
        uint128_t var_68_1 = zmm1
        result = (*(rax_22 + 0x20))(rdi, &var_78, &var_98)
    while (result.b != 0)

int64_t* rbx_4 = var_98:8.q

if (rbx_4 != 0)
    result = rbx_4[1].d
    rbx_4[1].d -= 1
    
    if (result == 1)
        result = (**rbx_4)(rbx_4)
        int32_t rbp_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rbp_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, zx.q(rbp_1))

return result
