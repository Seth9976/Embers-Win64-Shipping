// 函数: sub_14122f7d0
// 地址: 0x14122f7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg1 + 0x90))
int32_t i = 0
void* r12_1

if (rbx s> 0)
    r12_1 = *(arg1 + 0x88)
    void* rdx = arg1 + 0x10
    int64_t r11_1 = 0
    
    if (r12_1 != 0)
        rdx = r12_1
    
    int64_t rcx = 0
    
    while (zx.d(*(rcx + rdx + 8)) != arg2 || zx.d(*(rcx + rdx + 0xa)) != arg3
            || zx.d(*(rcx + rdx + 0xc)) != arg4 || zx.d(*(rcx + rdx + 0xe)) != arg6
            || zx.d(*(rcx + rdx + 0x10)) != arg7 || zx.d(*(rcx + rdx + 0x12)) != arg8)
        i += 1
        r11_1 += 1
        rcx += 0x18
        
        if (r11_1 s>= rbx)
            goto label_14122f86f

uint64_t result

if (rbx s<= 0 || i == 0xffffffff)
label_14122f86f:
    result.b = 0
else
    void* rdx_1 = arg1 + 0x10
    
    if (r12_1 != 0)
        rdx_1 = r12_1
    
    int32_t rdi_1 = 0
    *(rdx_1 + sx.q(i) * 0x18 + 0x14) = 0
    int64_t rsi_2 = sx.q(*(arg1 + 0x90))
    
    if (rsi_2 s<= 0)
    label_14122f8ed:
        rdi_1 = -1
    else
        void* rax_1 = *(arg1 + 0x88)
        void* rdx_2 = arg1 + 0x10
        int64_t rcx_2 = 0
        
        if (rax_1 != 0)
            rdx_2 = rax_1
        
        int32_t* rax_2 = nullptr
        
        while (*(rax_2 + rdx_2) != i)
            if (*(rax_2 + rdx_2 + 4) == i)
                break
            
            rdi_1 += 1
            rcx_2 += 1
            rax_2 = &rax_2[6]
            
            if (rcx_2 s>= rsi_2)
                goto label_14122f8ed
    
    int512_t zmm0
    result, zmm0 = sub_14122cb50(arg1, rdi_1, arg5)
    
    if (result.b != 0)
        rdi_1 = -1
    
    int32_t r12_2 = rdi_1
    
    if (rdi_1 != 0xffffffff)
        int64_t rcx_4 = sx.q(rdi_1)
    label_14122f910:
        void* rax_3 = *(arg1 + 0x88)
        void* rbx_1 = arg1 + 0x10
        
        if (rax_3 != 0)
            rbx_1 = rax_3
        
        int64_t rbp_2 = rcx_4 * 0x18
        char r8 = 0
        int32_t* r14_2 = sx.q(*(rbx_1 + rbp_2)) * 0x18
        int32_t rdx_4 = *(r14_2 + rbx_1)
        
        if (rdx_4 != 0xffffffff)
            result, zmm0 = sub_14122cb50(arg1, rdx_4, zmm0)
            
            if (result.b != 0)
                r8 = 1
            else
                result, zmm0 = sub_14122cb50(arg1, *(r14_2 + rbx_1 + 4), zmm0)
                
                r8 = result.b != 0 ? 1 : 0
        
        if (*(r14_2 + rbx_1 + 0x14) == 0 && r8 == 0)
            int32_t* r14_3 = sx.q(*(rbx_1 + rbp_2 + 4)) * 0x18
            int32_t rdx_6 = *(r14_3 + rbx_1)
            
            if (rdx_6 != 0xffffffff)
                result, zmm0 = sub_14122cb50(arg1, rdx_6, zmm0)
                
                if (result.b != 0)
                    r8 = 1
                else
                    result, zmm0 = sub_14122cb50(arg1, *(r14_3 + rbx_1 + 4), zmm0)
                    
                    r8 = result.b != 0 ? 1 : 0
            
            if (*(r14_3 + rbx_1 + 0x14) == 0 && r8 == 0)
                result = 0
                rcx_4 = 0
                r12_2 = rdi_1
                
                if (rsi_2 s> 0)
                    while (true)
                        if (*rbx_1 == rdi_1 || *(rbx_1 + 4) == rdi_1)
                            rdi_1 = result.d
                            
                            if (result.d != 0xffffffff)
                                goto label_14122f910
                            
                            goto label_14122f9fc
                        
                        result = zx.q(result.d + 1)
                        rcx_4 += 1
                        rbx_1 += 0x18
                        
                        if (rcx_4 s>= rsi_2)
                            break
                        
                        continue
        
    label_14122f9fc:
        
        if (r12_2 != 0xffffffff)
            sub_14122ef20(arg1, r12_2)
    
    result.b = 1

return result
