// 函数: sub_1417c6350
// 地址: 0x1417c6350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg5
int64_t rbx = sx.q(arg3)
void* rcx = *rdi
int32_t r12 = *(rcx + 0x18)

if (arg3 != 0)
    sub_1417502a0(rcx, r12 + rbx.d)

int64_t rbp = 0
*arg2 = 0
*(arg2 + 0xc) = 0
arg2[1].d = rbx.d

if (rbx.d s> 0)
    sub_1405a4d70(arg2)

int32_t rdx_4 = *(arg1 + 0x258)

if (rbx.d != 0)
    sub_1417502a0(arg1 + 0x240, *(arg1 + 0x258) + rbx.d)

int64_t rsi = rbx

if (rbx.d s> 0)
    int32_t rdx_5 = rdx_4 - r12
    int16_t arg_18 = 0
    char arg_1a = 0
    int64_t rax_2 = sx.q(rdx_4) << 3
    int64_t var_58_1 = rax_2
    
    do
        void* rbx_1 = *rdi
        int64_t r13_1 = rax_2 + (rbp << 3)
        int64_t* rax_3 = j_sub_140a82f30(0x18)
        int64_t* rdi_1 = rax_3
        
        if (rax_3 == 0)
            rdi_1 = rax_3
        else
            sub_1417a0c20(rdi_1, rbx_1, r12, rdx_5 + r12, &arg_18)
            sub_1417936e0(rdi_1, &arg_18)
            *(*(*rdi_1 + 0x350) + (sx.q(rdi_1[1].d) << 2)) = 0xffffffff
            *(sx.q(rdi_1[1].d) + *(*rdi_1 + 0x380)) = 0
        
        sub_141755ea0(rbx_1, r12, rdi_1)
        *(*(*rdi_1 + 0x1a0) + (sx.q(rdi_1[1].d) << 2)) = *(arg1 + 0x2b8)
        *(arg1 + 0x2b8) += 1
        *(*arg2 + (rbp << 3)) = rdi_1
        
        if (arg4 == 0)
            int32_t* rax_14 = sub_1417b1d50(arg1 + 0x288)
            int32_t rcx_12
            
            if (rax_14 != 0)
            label_1417c6520:
                rcx_12 = *rax_14
            else
                while (true)
                    bool z_1
                    
                    if (0 == *(arg1 + 0x2b0))
                        *(arg1 + 0x2b0) = 1
                        z_1 = true
                    else
                        int64_t rax_15
                        rax_15.b = *(arg1 + 0x2b0)
                        z_1 = false
                    
                    if (z_1)
                        rcx_12 = sub_1417c7d10(arg1 + 0x278, 1)
                        bool z_2
                        
                        do
                            int32_t rax_21
                            rax_21.b = 1
                            
                            if (1 == *(arg1 + 0x2b0))
                                *(arg1 + 0x2b0) = 0
                                z_2 = true
                            else
                                rax_21.b = *(arg1 + 0x2b0)
                                z_2 = false
                        while (not(z_2))
                        break
                    
                    rax_14 = sub_1417b1d50(arg1 + 0x288)
                    
                    if (rax_14 != 0)
                        goto label_1417c6520
            
            rsi = rbx
            int64_t* rax_17 = *(*arg2 + (rbp << 3))
            *(*(*rax_17 + 0x50) + (sx.q(rax_17[1].d) << 2)) = rcx_12
        else
            int64_t* rax_11 = *(*arg2 + (rbp << 3))
            *(*(*rax_11 + 0x50) + (sx.q(rax_11[1].d) << 2)) = *(arg4 + (rbp << 2))
        
        int64_t* rax_19 = *(arg1 + 0x268)
        int64_t* rbx_3 = *(rax_19 + r13_1)
        *(rax_19 + r13_1) = rdi_1
        
        if (rbx_3 != 0)
            sub_1417a2540(rbx_3)
            j_sub_140a74f90(rbx_3)
        
        rdi = arg5
        r12 += 1
        rax_2 = var_58_1
        rbp += 1
    while (rbp s< rsi)

return arg2
