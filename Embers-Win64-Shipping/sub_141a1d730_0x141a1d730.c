// 函数: sub_141a1d730
// 地址: 0x141a1d730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg1[1].d)
int32_t rbp = (r8 - 1).d

if (r8.d != 0)
    int32_t* r10_1 = *arg1
    int32_t r9 = (r8 - 1).d
    
    if (arg3.d f< *r10_1)
    label_141a1da44:
        int32_t rax_17 = r10_1[3]
        *arg2 = *(r10_1 + 4)
        arg2[1].d = rax_17
    else
        int64_t rdi_1 = r8 - 1
        int32_t rsi_1 = 0
        
        if (not(arg3.d f>= *(rdi_1 * 0x2c + r10_1)))
            r9 = 0
            
            if (r8.d s> 1)
                do
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(r8.d + r9)
                    int32_t rax_6 = (temp1_1 - temp0_1) s>> 1
                    float temp2_1 = *(sx.q(rax_6) * 0x2c + r10_1)
                    arg3.d f- temp2_1
                    
                    if (arg3.d f< temp2_1)
                        r8 = zx.q(rax_6)
                    
                    if (arg3.d f< temp2_1)
                        rax_6 = r9
                    
                    r9 = rax_6
                while (r8.d - r9 s> 1)
        
        if (r9 == 0xffffffff)
            goto label_141a1da44
        
        uint128_t zmm0
        
        if (r9 != rbp)
        label_141a1d822:
            
            if (arg1[2].b == 0 || r9 != rbp)
                r8.b = 0
            else
                r8.b = 1
            
            int32_t* rcx_1 = sx.q(r9) * 0x2c
            
            if (r8.b == 0)
                rsi_1 = r9 + 1
            
            void* rdx_3 = sx.q(rsi_1) * 0x2c + r10_1
            uint128_t zmm9
            
            if (r8.b == 0)
                zmm9.d = (*rdx_3).d f- *(rcx_1 + r10_1)
            else
                zmm9 = *(arg1 + 0x14)
            
            char rax_14
            
            if (not(zmm9.d f<= 0f))
                rax_14 = *(rcx_1 + r10_1 + 0x28)
            
            if (zmm9.d f<= 0f || rax_14 == 2)
                int32_t rax_16 = *(rcx_1 + r10_1 + 0xc)
                *arg2 = *(rcx_1 + r10_1 + 4)
                arg2[1].d = rax_16
            else
                uint128_t zmm8
                zmm8.d = arg3.d f- *(rcx_1 + r10_1)
                zmm8.d = zmm8.d f/ zmm9.d
                uint128_t zmm1
                
                if (rax_14 != 0)
                    zmm1.d = zmm8.d f* zmm8.d
                    arg3.d = zmm9.d f* *(rcx_1 + r10_1 + 0x1c)
                    uint128_t zmm6
                    zmm6.d = zmm1.d f* zmm8.d
                    zmm0.d = zmm1.d f* 3f
                    uint128_t zmm5
                    zmm5.d = zmm6.d f+ zmm6.d
                    float zmm4 = zmm6.d f- zmm1.d
                    zmm1.d = zmm1.d f+ zmm1.d
                    uint128_t zmm7
                    zmm7.d = zmm0.d f- zmm5.d
                    zmm5.d = zmm5.d f- zmm0.d
                    zmm6.d = zmm6.d f- zmm1.d
                    zmm1.d = zmm9.d f* *(rdx_3 + 0x10)
                    zmm5.d = zmm5.d f+ 1f
                    zmm1.d = zmm1.d f* zmm4
                    zmm6.d = zmm6.d f+ zmm8.d
                    zmm0.d = zmm5.d f* *(rcx_1 + r10_1 + 4)
                    arg3.d = arg3.d f* zmm6.d
                    float zmm3 = zmm9.d f* *(rcx_1 + r10_1 + 0x20) f* zmm6.d
                    arg3.d = arg3.d f+ zmm0.d
                    zmm0.d = zmm7.d f* *(rdx_3 + 4)
                    arg3.d = arg3.d f+ zmm1.d
                    zmm1.d = zmm9.d f* *(rdx_3 + 0x14)
                    zmm1.d = zmm1.d f* zmm4
                    arg3.d = arg3.d f+ zmm0.d
                    zmm0 = zmm5
                    zmm5.d = zmm5.d f* *(rcx_1 + r10_1 + 0xc)
                    zmm0.d = zmm0.d f* *(rcx_1 + r10_1 + 8)
                    *arg2 = arg3.d
                    zmm3 = zmm3 f+ zmm0.d
                    zmm0 = zmm7
                    zmm7.d = zmm7.d f* *(rdx_3 + 0xc)
                    zmm0.d = zmm0.d f* *(rdx_3 + 8)
                    zmm3 = zmm3 f+ zmm1.d
                    zmm1.d = zmm9.d f* *(rcx_1 + r10_1 + 0x24)
                    zmm9.d = zmm9.d f* *(rdx_3 + 0x18)
                    zmm1.d = zmm1.d f* zmm6.d
                    zmm9.d = zmm9.d f* zmm4
                    zmm1.d = zmm1.d f+ zmm5.d
                    *(arg2 + 4) = zmm3 f+ zmm0.d
                    zmm1.d = zmm1.d f+ zmm9.d
                    zmm1.d = zmm1.d f+ zmm7.d
                    arg2[1].d = zmm1.d
                else
                    zmm0.d = (*(rdx_3 + 4)).d f- *(rcx_1 + r10_1 + 4)
                    zmm1.d = (*(rdx_3 + 8)).d f- *(rcx_1 + r10_1 + 8)
                    zmm0.d = zmm0.d f* zmm8.d
                    zmm1.d = zmm1.d f* zmm8.d
                    zmm0.d = zmm0.d f+ *(rcx_1 + r10_1 + 4)
                    zmm1.d = zmm1.d f+ *(rcx_1 + r10_1 + 8)
                    *arg2 = zmm0.d
                    zmm0.d = (*(rdx_3 + 0xc)).d f- *(rcx_1 + r10_1 + 0xc)
                    *(arg2 + 4) = zmm1.d
                    zmm0.d = zmm0.d f* zmm8.d
                    zmm0.d = zmm0.d f+ *(rcx_1 + r10_1 + 0xc)
                    arg2[1].d = zmm0.d
        else
            int32_t* rax_9 = rdi_1 * 0x2c
            
            if (arg1[2].b != 0)
                zmm0.d = (*(arg1 + 0x14)).d f+ *(rax_9 + r10_1)
                
                if (arg3.d f>= zmm0.d)
                    goto label_141a1da44
                
                goto label_141a1d822
            
            int32_t rax_10 = *(rax_9 + r10_1 + 0xc)
            *arg2 = *(rax_9 + r10_1 + 4)
            arg2[1].d = rax_10
else
    int32_t rax_1 = arg4[1].d
    *arg2 = *arg4
    arg2[1].d = rax_1

return arg2
