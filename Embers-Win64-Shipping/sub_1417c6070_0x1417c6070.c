// 函数: sub_1417c6070
// 地址: 0x1417c6070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg5
int64_t rbx = sx.q(arg3)
int64_t rsi = arg4
void* rcx = *rdi
int32_t r14 = *(rcx + 0x18)

if (arg3 != 0)
    sub_1417502a0(rcx, r14 + rbx.d)

int64_t rbp = 0
*arg2 = 0
*(arg2 + 0xc) = 0
arg2[1].d = rbx.d

if (rbx.d s> 0)
    sub_1405a4d70(arg2)

int32_t rdx_4 = *(arg1 + 0x258)

if (rbx.d != 0)
    sub_1417502a0(arg1 + 0x240, *(arg1 + 0x258) + rbx.d)

if (rbx.d s> 0)
    int64_t rax_1 = sx.q(rdx_4)
    int32_t rdx_5 = rdx_4 - r14
    float zmm6[0x4] = zx.o(0)
    int64_t var_78_1 = rax_1
    
    do
        void* rbx_1 = *rdi
        int64_t* rax_4 = j_sub_140a82f30(0x18)
        int64_t* rdi_1 = rax_4
        
        if (rax_4 == 0)
            rdi_1 = rax_4
        else
            *rax_4 = rbx_1
            rax_4[1].d = r14
            char rax_5
            
            if (rbx_1 == 0)
                rax_5 = 0
            else
                rax_5 = *(rbx_1 + 0x40)
            
            *(rdi_1 + 0xc) = rax_5
            float temp0_1[0x4] = _mm_unpacklo_ps(zmm6, zmm6[0].q)
            rdi_1[2].d = rdx_5 + r14
            int64_t rcx_3 = *(rbx_1 + 0x28)
            int32_t var_60_1 = 0
            int64_t rdx_6 = sx.q(r14) * 3
            *(rcx_3 + (rdx_6 << 2)) = temp0_1.q
            *(rcx_3 + (rdx_6 << 2) + 8) = 0
            *(*(*rdi_1 + 0x68) + sx.q(rdi_1[1].d) * 0x10) = data_14399f720
            *(*(*rdi_1 + 0x170) + (sx.q(rdi_1[1].d) << 1)) = 0
            *(*(*rdi_1 + 0x188) + (sx.q(rdi_1[1].d) << 3)) = 0
            *(sx.q(rdi_1[1].d) + *(*rdi_1 + 0x158)) = 0
        
        sub_141755ea0(rbx_1, r14, rdi_1)
        *(*(*rdi_1 + 0x1a0) + (sx.q(rdi_1[1].d) << 2)) = *(arg1 + 0x2b8)
        *(arg1 + 0x2b8) += 1
        (*arg2)[rbp] = rdi_1
        
        if (rsi == 0)
            int32_t* rax_21
            rax_21, zmm6 = sub_1417b1d50(arg1 + 0x288)
            int32_t rcx_13
            
            if (rax_21 != 0)
            label_1417c628c:
                rcx_13 = *rax_21
            else
                while (true)
                    bool z_1
                    
                    if (0 == *(arg1 + 0x2b0))
                        *(arg1 + 0x2b0) = 1
                        z_1 = true
                    else
                        int64_t rax_22
                        rax_22.b = *(arg1 + 0x2b0)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_26
                        rax_26, zmm6 = sub_1417c7d10(arg1 + 0x278, 1)
                        rcx_13 = rax_26
                        bool z_2
                        
                        do
                            rax_26.b = 1
                            
                            if (1 == *(arg1 + 0x2b0))
                                *(arg1 + 0x2b0) = 0
                                z_2 = true
                            else
                                rax_26.b = *(arg1 + 0x2b0)
                                z_2 = false
                        while (not(z_2))
                        break
                    
                    rax_21, zmm6 = sub_1417b1d50(arg1 + 0x288)
                    
                    if (rax_21 != 0)
                        goto label_1417c628c
            
            rsi = arg4
            int64_t* rax_24 = (*arg2)[rbp]
            *(*(*rax_24 + 0x50) + (sx.q(rax_24[1].d) << 2)) = rcx_13
        else
            int64_t* rax_18 = (*arg2)[rbp]
            *(*(*rax_18 + 0x50) + (sx.q(rax_18[1].d) << 2)) = *(rsi + (rbp << 2))
        
        void** rcx_15 = (rax_1 << 3) + (rbp << 3) + *(arg1 + 0x268)
        void var_70
        
        if (rcx_15 == &var_70)
            sub_1417a2540(rdi_1)
            j_sub_140a74f90(rdi_1)
        else
            int64_t* rbx_3 = *rcx_15
            *rcx_15 = rdi_1
            
            if (rbx_3 != 0)
                sub_1417a2540(rbx_3)
                j_sub_140a74f90(rbx_3)
        
        rdi = arg5
        r14 += 1
        rax_1 = var_78_1
        rbp += 1
    while (rbp s< rbx)

return arg2
