// 函数: sub_14178cc30
// 地址: 0x14178cc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg5
void* rsi = arg1
int64_t rbx = sx.q(arg3)
int64_t* result = arg2
void* rcx = *r12
int32_t r14 = *(rcx + 0x18)
int32_t var_64 = r14

if (arg3 != 0)
    sub_1417502a0(rcx, r14 + rbx.d)

*result = 0
*(result + 0xc) = 0
result[1].d = rbx.d

if (rbx.d s> 0)
    sub_1405a4d70(result)

int32_t rdx_4 = *(rsi + 0x258)

if (rbx.d != 0)
    sub_1417502a0(rsi + 0x240, *(rsi + 0x258) + rbx.d)

int64_t rbp = rbx

if (rbx.d s> 0)
    int32_t rdx_5 = rdx_4 - r14
    int64_t r13_1 = 0
    int16_t arg_18 = 0
    char arg_1a = 0
    int64_t rax_2 = sx.q(rdx_4) << 3
    int64_t var_50_1 = rax_2
    
    do
        void* rbx_1 = *r12
        int64_t r15_1 = rax_2 + (r13_1 << 3)
        int64_t* rax_3 = j_sub_140a82f30(0x18)
        int64_t* r12_1 = rax_3
        
        if (rax_3 == 0)
            r12_1 = rax_3
        else
            sub_1417a0c20(r12_1, rbx_1, r14, rdx_5 + r14, &arg_18)
            sub_1417936e0(r12_1, &arg_18)
            *(*(*r12_1 + 0x350) + (sx.q(r12_1[1].d) << 2)) = 0xffffffff
            *(sx.q(r12_1[1].d) + *(*r12_1 + 0x380)) = 0
        
        sub_141755ea0(rbx_1, r14, r12_1)
        *(*(*r12_1 + 0x1a0) + (sx.q(r12_1[1].d) << 2)) = *(rsi + 0x2b8)
        *(rsi + 0x2b8) += 1
        *(*result + (r13_1 << 3)) = r12_1
        
        if (arg4 == 0)
            int32_t* rax_14 = sub_1417b1d50(rsi + 0x288)
            int32_t rbx_2
            
            if (rax_14 != 0)
            label_14178ce13:
                rbx_2 = *rax_14
            else
                while (true)
                    bool z_1
                    
                    if (0 == *(rsi + 0x2b0))
                        *(rsi + 0x2b0) = 1
                        z_1 = true
                    else
                        int64_t rax_15
                        rax_15.b = *(rsi + 0x2b0)
                        z_1 = false
                    
                    if (z_1)
                        int32_t* rax_21 = j_sub_140a82f30(0x1000)
                        int32_t* r15_2 = rax_21
                        
                        if (rax_21 == 0)
                            r15_2 = rax_21
                        else
                            int32_t* rcx_15 = rax_21
                            int64_t i_2 = 0x40
                            int64_t i
                            
                            do
                                __builtin_memset(rcx_15, 0xff, 0x40)
                                rcx_15 = &rcx_15[0x10]
                                i = i_2
                                i_2 -= 1
                            while (i != 1)
                        
                        void* r14_1 = &r15_2[1]
                        rbx_2 = *(rsi + 0x280) << 0xa
                        int32_t i_1 = 1
                        *r15_2 = rbx_2
                        
                        do
                            *r14_1 = i_1 + rbx_2
                            sub_1417b1ee0(rsi + 0x288, &r15_2[sx.q(i_1)])
                            i_1 += 1
                            r14_1 += 4
                        while (i_1 s< 0x400)
                        
                        int64_t rsi_1 = sx.q(*(rsi + 0x280))
                        int32_t rax_24 = (rsi_1 + 1).d
                        *(rsi + 0x280) = rax_24
                        
                        if (rax_24 s> *(rsi + 0x284))
                            sub_1405a4d70(rsi + 0x278)
                        
                        *(*(rsi + 0x278) + (rsi_1 << 3)) = r15_2
                        j_sub_140a74f90(0)
                        bool z_2
                        
                        do
                            int64_t rax_26
                            rax_26.b = 1
                            
                            if (1 == *(rsi + 0x2b0))
                                *(rsi + 0x2b0) = 0
                                z_2 = true
                            else
                                rax_26.b = *(rsi + 0x2b0)
                                z_2 = false
                        while (not(z_2))
                        rsi = arg1
                        r14 = var_64
                        break
                    
                    rax_14 = sub_1417b1d50(rsi + 0x288)
                    
                    if (rax_14 != 0)
                        goto label_14178ce13
            
            result = arg2
            rbp = rbx
            int64_t* rax_17 = *(*result + (r13_1 << 3))
            *(*(*rax_17 + 0x50) + (sx.q(rax_17[1].d) << 2)) = rbx_2
        else
            int64_t* rax_11 = *(*result + (r13_1 << 3))
            *(*(*rax_11 + 0x50) + (sx.q(rax_11[1].d) << 2)) = *(arg4 + (r13_1 << 2))
        
        int64_t rax_19 = *(rsi + 0x268)
        int64_t* rbx_3 = *(r15_1 + rax_19)
        *(r15_1 + rax_19) = r12_1
        
        if (rbx_3 != 0)
            sub_1417a2540(rbx_3)
            j_sub_140a74f90(rbx_3)
        
        r12 = arg5
        r14 += 1
        rax_2 = var_50_1
        r13_1 += 1
        var_64 = r14
    while (r13_1 s< rbp)

return result
