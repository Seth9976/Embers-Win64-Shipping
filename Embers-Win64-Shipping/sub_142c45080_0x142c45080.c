// 函数: sub_142c45080
// 地址: 0x142c45080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *(arg1 + 0x70)
uint64_t rbp = zx.q(arg2)
int64_t arg_8 = rdi
uint64_t rdx = rbp * 0x14
uint32_t result = zx.d(*(rdx + rdi + 0xf)) & 0xf

if (((1 << result.b).b & 0x46) != 0)
    int128_t* rsi_1 = rdx + rdi
    char* r14_1 = rsi_1 + 0x12
    int128_t zmm0
    
    if (*(rsi_1 + 0x12) == 0x12)
        result = arg3 - rbp.d
        
        if (result u> 1)
            uint64_t r15_1 = zx.q((rbp + 1).d)
            int32_t rdx_1 = r15_1.d
            
            if (r15_1.d u< arg3)
                char* r8_1 = rdi + 0x12 + r15_1 * 0x14
                
                while (true)
                    char rcx_2 = *r8_1
                    int64_t rax_2
                    
                    if (rcx_2 u>= 0x40)
                        rax_2 = 0
                    else
                        rax_2 = 1 << rcx_2
                    
                    if ((0xee7fc00100 & rax_2) != 0
                            || (((rcx_2 - 0xc) & 0xdf) == 0 && (r8_1[-6] u>> 5 & 1) == 0))
                        rcx_2 = 1
                    else
                        rcx_2 = 0
                        result = arg3 - 1
                        
                        if (rdx_1 != result)
                            rdx_1 += 1
                            r8_1 = &r8_1[0x14]
                            
                            if (rdx_1 u>= arg3)
                                break
                            
                            continue
                    
                    uint64_t rdi_1 = zx.q(rdx_1 - 1)
                    
                    if (rcx_2 == 0)
                        rdi_1 = zx.q(rdx_1)
                    
                    int32_t r8_2 = (rdi_1 + 1).d
                    
                    if (r8_2 - rbp.d u>= 2)
                        sub_142bf5140(arg1, rbp.d, r8_2)
                    
                    zmm0 = *rsi_1
                    int32_t rbx_1 = rsi_1[1].d
                    memmove(rsi_1, arg_8 + r15_1 * 0x14, (rdi_1.d - rbp.d) * 0x14)
                    uint64_t rcx_6 = rdi_1 * 5
                    result = rdi_1.d
                    rdi = arg_8
                    *(rdi + (rcx_6 << 2)) = zmm0
                    *(rdi + (rcx_6 << 2) + 0x10) = rbx_1
                    break
    
    int32_t rbx_2 = rbp.d
    
    if (rbp.d u< arg3)
        do
            char rcx_7 = *r14_1
            int32_t rdx_5
            
            if (rcx_7 u>= 0x20)
                rdx_5 = 0
            else
                rdx_5 = 1 << rcx_7
            
            if (((rcx_7 - 0xc) & 0xdf) == 0)
                result.b = r14_1[-6] u>> 5
            
            if (((rcx_7 - 0xc) & 0xdf) == 0 && (result.b & 1) == 0)
                rbp = zx.q(rbx_2 + 1)
            else if ((rdx_5 & 0xc00000) != 0)
                result = zx.d(r14_1[-4])
                
                if ((result.b & 0x10) != 0)
                label_142c45229:
                    
                    if (rbp.d u< rbx_2)
                        uint64_t r15_3 = zx.q(rbx_2 - rbp.d)
                        
                        if ((r15_3 + 1).d u>= 2)
                            sub_142bf5140(arg1, rbp.d, rbx_2 + 1)
                        
                        zmm0 = *(r14_1 - 0x12)
                        int32_t rsi_2 = *(r14_1 - 2)
                        int128_t* rdi_2 = rdi + rbp * 0x14
                        result = memmove(arg_8 + zx.q((rbp + 1).d) * 0x14, rdi_2, (r15_3 * 0x14).d)
                        *rdi_2 = zmm0
                        rdi_2[1].d = rsi_2
                else
                    result = zx.d(result.b) & 0xf
                    
                    if (result == 0)
                        goto label_142c45229
            
            rdi = arg_8
            rbx_2 += 1
            r14_1 = &r14_1[0x14]
        while (rbx_2 u< arg3)

return result
