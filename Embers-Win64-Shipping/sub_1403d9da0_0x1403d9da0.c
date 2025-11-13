// 函数: sub_1403d9da0
// 地址: 0x1403d9da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t rax_2 = *(arg1 + 0x464)
uint64_t result

if (rax_2 == 0)
label_1403d9df1:
    char rax_4 = (*(arg1 + 0x154)).b
    
    if ((rax_4 & 1) == 0)
        png_error(arg1, "Missing IHDR before sPLT")
        noreturn
    
    if ((rax_4 & 4) != 0)
        png_warning(arg1, "Invalid sPLT after IDAT")
        result = sub_1403d8880(arg1, arg3)
    else
        png_free(arg1, *(arg1 + 0x4a0))
        void* rax_5 = png_malloc(arg1, zx.q(arg3 + 1))
        *(arg1 + 0x4a0) = rax_5
        uint64_t r15_1 = zx.q(arg3)
        sub_1403cc480(arg1, rax_5, r15_1)
        sub_1403be770(arg1, rax_5, r15_1.d)
        int32_t rax_6 = sub_1403d8880(arg1, 0)
        int64_t rdx_5 = *(arg1 + 0x4a0)
        
        if (rax_6 == 0)
            *(rdx_5 + r15_1) = 0
            char* r8_2 = *(arg1 + 0x4a0)
            char* rdi_2 = r8_2
            bool cond:0_1
            
            do
                cond:0_1 = *rdi_2 != 0
                rdi_2 = &rdi_2[1]
            while (cond:0_1)
            
            if (rdi_2 u<= &r8_2[r15_1 - 2])
                int64_t rbp
                rbp.b = *rdi_2
                void* rdi_3 = &rdi_2[1]
                char var_50_1 = rbp.b
                int64_t rax_9
                rax_9.b = rbp.b != 8
                int32_t rcx_11 = ((rax_9 << 2) + 6).d
                int32_t rbx_1 = arg3 + r8_2.d - rdi_3.d
                uint32_t temp0_1 = divu.dp.d(0:rbx_1, rcx_11)
                
                if (modu.dp.d(0:rbx_1, rcx_11) == 0)
                    uint16_t* rax_16 = png_malloc_warn(arg1, zx.q(temp0_1) * 0xa)
                    uint16_t* var_48_1 = rax_16
                    
                    if (rax_16 == 0)
                        result = png_warning(arg1, "sPLT chunk requires too much memory")
                    else
                        if (temp0_1 s> 0)
                            int64_t rcx_15 = 1
                            int64_t rdx_12 = 0
                            uint16_t rbp_5
                            void* rdi_4
                            
                            if (rbp.b == 8)
                                int16_t rbp_1
                                
                                do
                                    *(rax_16 + rdx_12) = zx.w(*rdi_3)
                                    *(rax_16 + rdx_12 + 2) = zx.w(*(rdi_3 + 1))
                                    *(rax_16 + rdx_12 + 4) = zx.w(*(rdi_3 + 2))
                                    rbp_5 = zx.w(*(rdi_3 + 3))
                                    rdi_4 = rdi_3 + 4
                                label_1403da000:
                                    *(rax_16 + rdx_12 + 6) = rbp_5
                                    *(rax_16 + rdx_12 + 8) = rol.w(*rdi_4, 8)
                                    
                                    if (rcx_15 s>= sx.q(temp0_1))
                                        goto label_1403da026
                                    
                                    rdi_3 = rdi_4 + 2
                                    rax_16 = var_48_1
                                    rbp_1.b = var_50_1
                                    rdx_12 += 0xa
                                    rcx_15 += 1
                                while (rbp_1.b == 8)
                            
                            *(rax_16 + rdx_12) = rol.w(*rdi_3, 8)
                            *(rax_16 + rdx_12 + 2) = rol.w(*(rdi_3 + 2), 8)
                            *(rax_16 + rdx_12 + 4) = rol.w(*(rdi_3 + 4), 8)
                            rbp_5 = rol.w(*(rdi_3 + 6), 8)
                            rdi_4 = rdi_3 + 8
                            goto label_1403da000
                        
                    label_1403da026:
                        int64_t var_58 = *(arg1 + 0x4a0)
                        png_set_sPLT(arg1, arg2, &var_58, 1)
                        png_free(arg1, *(arg1 + 0x4a0))
                        *(arg1 + 0x4a0) = 0
                        result = png_free(arg1, var_48_1)
                else
                    png_free(arg1, r8_2)
                    *(arg1 + 0x4a0) = 0
                    result = png_warning(arg1, "sPLT chunk has bad length")
            else
                png_free(arg1, r8_2)
                *(arg1 + 0x4a0) = 0
                result = png_warning(arg1, "malformed sPLT chunk")
        else
            result = png_free(arg1, rdx_5)
            *(arg1 + 0x4a0) = 0
else if (rax_2 == 1)
    result = sub_1403d8880(arg1, arg3)
else
    *(arg1 + 0x464) = rax_2 - 1
    
    if (rax_2 != 2)
        goto label_1403d9df1
    
    png_warning(arg1, "No space in chunk cache for sPLT")
    result = sub_1403d8880(arg1, arg3)

__security_check_cookie(rax_1 ^ &var_78)
return result
