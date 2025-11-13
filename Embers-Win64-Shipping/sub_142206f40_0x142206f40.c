// 函数: sub_142206f40
// 地址: 0x142206f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || *(arg2 + 0x118) s<= 0 || *(arg2 + 0xf0) == 0 || *(arg2 + 0xf8) == 0)
    return 

int32_t* rax_2 = sub_141fe1890(arg1 + 0x30)
int16_t* r14_1 = *(arg2 + 0xf8)
int32_t rbp_1 = *(arg2 + 0x114)
int64_t rsi_1 = *(arg2 + 0xf0)
*r14_1
int32_t rcx_2 = *(arg1 + 0x78)
int32_t var_38
int32_t var_34
int32_t var_30
int32_t rax

if ((rcx_2.b & 7) != 7)
    int32_t rax_7 = rcx_2 & 6
    int32_t r8_3 = rcx_2 & 1
    int64_t r12_2
    
    if (r8_3 == 0)
        if (rax_7 != 2)
            if ((rcx_2.b & 3) != 0 || (rcx_2.b & 4) == 0)
                goto label_142207167
            
            goto label_142207156
        
    label_14220722a:
        rcx_2.b &= 2
        char temp0_1 = rcx_2.b
        rcx_2.b = neg.b(rcx_2.b)
        r12_2 = sbb.q(rax_2, rax_2, temp0_1 != 0) + 2
    label_142207236:
        int32_t rax_10 = *(arg2 + 0x118)
        int64_t rdi_8 = sx.q(rax_10 - 1)
        
        if (rax_10 - 1 s>= 0)
            int64_t temp5_1
            
            do
                void* rbx_7 = zx.q(zx.d(r14_1[rdi_8]) * rbp_1) + rsi_1
                
                if ((*(rbx_7 + 0x5c) & 0x4000000) == 0)
                    int64_t var_40_3 = 0
                    arg3 = sub_141fe56b0(arg1 + 0x30, &var_38, *(rbx_7 + 0xc), arg3, 
                        (*(arg2 + 0x18)).d, nullptr)
                    r14_1[rdi_8 + 1]
                    *(rbx_7 + (r12_2 << 2) + 0x50) =
                        (&var_38)[r12_2] f* *(rbx_7 + (r12_2 << 2) + 0x50)
                
                temp5_1 = rdi_8
                rdi_8 -= 1
            while (temp5_1 - 1 s>= 0)
    else
        if (rax_7 == 0 || ((rcx_2.b & 3) == 0 && (rcx_2.b & 4) != 0))
        label_142207156:
            
            if (r8_3 == 0)
                goto label_14220722a
            
            r12_2 = 0
            goto label_142207236
        
    label_142207167:
        int32_t rax_8 = *(arg2 + 0x118)
        int64_t rdi_7 = sx.q(rax_8 - 1)
        
        if (rax_8 - 1 s>= 0)
            int64_t temp6_1
            
            do
                void* rbx_4 = zx.q(zx.d(r14_1[rdi_7]) * rbp_1) + rsi_1
                
                if ((*(rbx_4 + 0x5c) & 0x4000000) == 0)
                    int64_t var_40_2 = 0
                    arg3 = sub_141fe56b0(arg1 + 0x30, &var_38, *(rbx_4 + 0xc), arg3, 
                        (*(arg2 + 0x18)).d, nullptr)
                    r14_1[rdi_7 + 1]
                    rax = *(arg1 + 0x78)
                    
                    if ((rax.b & 1) != 0)
                        *(rbx_4 + 0x50) = var_38 f* *(rbx_4 + 0x50)
                        rax = *(arg1 + 0x78)
                    
                    if ((rax.b & 2) != 0)
                        *(rbx_4 + 0x54) = var_34 f* *(rbx_4 + 0x54)
                        rax = *(arg1 + 0x78)
                    
                    if ((rax.b & 4) != 0)
                        *(rbx_4 + 0x58) = var_30 f* *(rbx_4 + 0x58)
                
                temp6_1 = rdi_7
                rdi_7 -= 1
            while (temp6_1 - 1 s>= 0)
else
    rax = *(arg2 + 0x118) - 1
    int64_t rbx_1 = sx.q(rax)
    
    if (rax_2 == 0)
        if (rax s>= 0)
            int64_t temp3_1
            
            do
                void* rdi_6 = zx.q(zx.d(r14_1[rbx_1]) * rbp_1) + rsi_1
                
                if ((*(rdi_6 + 0x5c) & 0x4000000) == 0)
                    int64_t var_40_1 = 0
                    sub_141fe56b0(arg1 + 0x30, &var_38, *(rdi_6 + 0xc), arg3, (*(arg2 + 0x18)).d, 
                        nullptr)
                    r14_1[rbx_1 + 1]
                    arg3.d = var_34.d f* *(rdi_6 + 0x54)
                    *(rdi_6 + 0x50) = var_38 f* *(rdi_6 + 0x50)
                    int32_t zmm0_2 = var_30 f* *(rdi_6 + 0x58)
                    *(rdi_6 + 0x54) = arg3.d
                    *(rdi_6 + 0x58) = zmm0_2
                
                temp3_1 = rbx_1
                rbx_1 -= 1
            while (temp3_1 - 1 s>= 0)
    else if (rax s>= 0)
        int64_t temp4_1
        
        do
            void* rdi_3 = zx.q(zx.d(r14_1[rbx_1]) * rbp_1) + rsi_1
            
            if ((*(rdi_3 + 0x5c) & 0x4000000) == 0)
                sub_141fe52c0(rax_2, *(rdi_3 + 0xc), &var_38)
                r14_1[rbx_1 + 1]
                arg3.d = var_34.d f* *(rdi_3 + 0x54)
                *(rdi_3 + 0x50) = var_38 f* *(rdi_3 + 0x50)
                int32_t zmm0_1 = var_30 f* *(rdi_3 + 0x58)
                *(rdi_3 + 0x54) = arg3.d
                *(rdi_3 + 0x58) = zmm0_1
            
            temp4_1 = rbx_1
            rbx_1 -= 1
        while (temp4_1 - 1 s>= 0)
