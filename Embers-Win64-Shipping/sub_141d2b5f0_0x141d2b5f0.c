// 函数: sub_141d2b5f0
// 地址: 0x141d2b5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg3)
void* rcx_1 = *arg5
int32_t r15 = *(rcx_1 + 0x18)

if (arg3 != 0)
    sub_1417502a0(rcx_1, r15 + rbx.d)

int64_t rsi = 0
*arg2 = 0
*(arg2 + 0xc) = 0
arg2[1].d = rbx.d

if (rbx.d s> 0)
    sub_1405a4d70(arg2)

int64_t rbp = sx.q(*(arg1 + 0x258))

if (rbx.d != 0)
    sub_1417502a0(arg1 + 0x240, *(arg1 + 0x258) + rbx.d)

int64_t rdi = rbx

if (rbx.d s> 0)
    int64_t rax_1 = rbp << 3
    int32_t rbp_1 = rbp.d - r15
    int64_t var_58_1 = rax_1
    int32_t arg_8 = rbp_1
    
    do
        int64_t r12_1 = rax_1 + (rsi << 3)
        void* rbx_1 = *arg5
        int64_t* rax_3 = j_sub_140a82f30(0x18)
        void arg_18
        
        if (rax_3 != 0)
            rax_3 = sub_1417a0c20(rax_3, rbx_1, r15, r15 + rbp_1, &arg_18)
        sub_141755ea0(rbx_1, r15, rax_3)
        *(*(*rax_3 + 0x1a0) + (sx.q(rax_3[1].d) << 2)) = *(arg1 + 0x2b8)
        *(arg1 + 0x2b8) += 1
        *(*arg2 + (rsi << 3)) = rax_3
        
        if (arg4 == 0)
            int32_t* rax_11 = sub_1417b1d50(arg1 + 0x288)
            int32_t rcx_10
            
            if (rax_11 != 0)
            label_141d2b762:
                rcx_10 = *rax_11
            else
                while (true)
                    bool z_1
                    
                    if (0 == *(arg1 + 0x2b0))
                        *(arg1 + 0x2b0) = 1
                        z_1 = true
                    else
                        int64_t rax_12
                        rax_12.b = *(arg1 + 0x2b0)
                        z_1 = false
                    
                    if (z_1)
                        rcx_10 = sub_1417c7d10(arg1 + 0x278, 1)
                        bool z_2
                        
                        do
                            int32_t rax_18
                            rax_18.b = 1
                            
                            if (1 == *(arg1 + 0x2b0))
                                *(arg1 + 0x2b0) = 0
                                z_2 = true
                            else
                                rax_18.b = *(arg1 + 0x2b0)
                                z_2 = false
                        while (not(z_2))
                        break
                    
                    rax_11 = sub_1417b1d50(arg1 + 0x288)
                    
                    if (rax_11 != 0)
                        goto label_141d2b762
            
            rdi = rbx
            int64_t* rax_14 = *(*arg2 + (rsi << 3))
            *(*(*rax_14 + 0x50) + (sx.q(rax_14[1].d) << 2)) = rcx_10
        else
            int64_t* rax_8 = *(*arg2 + (rsi << 3))
            *(*(*rax_8 + 0x50) + (sx.q(rax_8[1].d) << 2)) = *(arg4 + (rsi << 2))
        
        int64_t rax_16 = *(arg1 + 0x268)
        int64_t* rbx_3 = *(r12_1 + rax_16)
        *(r12_1 + rax_16) = rax_3
        
        if (rbx_3 != 0)
            sub_1417a2540(rbx_3)
            j_sub_140a74f90(rbx_3)
        
        rbp_1 = arg_8
        r15 += 1
        rax_1 = var_58_1
        rsi += 1
    while (rsi s< rdi)

return arg2
