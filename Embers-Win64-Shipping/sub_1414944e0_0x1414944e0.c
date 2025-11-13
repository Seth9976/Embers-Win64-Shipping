// 函数: sub_1414944e0
// 地址: 0x1414944e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10_1

if (*(arg1 + 0xd) == 0)
    r10_1 = arg6
else
    arg4 = (arg4 + 3) & 0xfffffffc
    r10_1 = (arg6 + 3) & 0xfffffffc

int64_t r11 = sx.q(*(arg1 + 0x80))
int32_t rdx = 0
void* rbx_1
void* r8

if (r11 s> 0)
    void* rax = *(arg1 + 0x78)
    rbx_1 = arg1 + 0x10
    int64_t rcx = 0
    
    if (rax != 0)
        rbx_1 = rax
    
    r8 = nullptr
    
    while (zx.d(*(r8 + rbx_1 + 8)) != arg2 || zx.d(*(r8 + rbx_1 + 0xa)) != arg3
            || zx.d(*(r8 + rbx_1 + 0xc)) != arg4 || zx.d(*(r8 + rbx_1 + 0xe)) != r10_1)
        rdx += 1
        rcx += 1
        r8 += 0x14
        
        if (rcx s>= r11)
            goto label_141494578

uint64_t result

if (r11 s<= 0 || rdx == 0xffffffff)
label_141494578:
    result.b = 0
else
    int32_t rdi_1 = 0
    *(rbx_1 + sx.q(rdx) * 0x14 + 0x10) = 0
    int64_t rsi_1 = sx.q(*(arg1 + 0x80))
    
    if (rsi_1 s<= 0)
    label_1414945e6:
        rdi_1 = -1
    else
        void* rax_1 = *(arg1 + 0x78)
        r8 = arg1 + 0x10
        int64_t rcx_2 = 0
        
        if (rax_1 != 0)
            r8 = rax_1
        
        result = 0
        
        while (true)
            if (*(result + r8) != rdx && *(result + r8 + 4) != rdx)
                rdi_1 += 1
                rcx_2 += 1
                result += 0x14
                
                if (rcx_2 s>= rsi_1)
                    goto label_1414945e6
                
                continue
            
            if (rdi_1 == 0xffffffff)
                break
            
            result, r8, arg5 = sub_141491a80(arg1, rdi_1, arg5)
            
            if (result.b != 0)
                rdi_1 = -1
            
            break
    
    int32_t r12_1 = rdi_1
    
    if (rdi_1 != 0xffffffff)
        int64_t rcx_3 = sx.q(rdi_1)
    label_141494610:
        void* rax_2 = *(arg1 + 0x78)
        void* rbx_2 = arg1 + 0x10
        
        if (rax_2 != 0)
            rbx_2 = rax_2
        
        int64_t r15_1 = rcx_3 * 0x14
        r8.b = 0
        int32_t* r14_1 = sx.q(*(r15_1 + rbx_2)) * 0x14
        int32_t rdx_1 = *(r14_1 + rbx_2)
        
        if (rdx_1 != 0xffffffff)
            result, r8, arg5 = sub_141491a80(arg1, rdx_1, arg5)
            
            if (result.b != 0)
                r8.b = 1
            else
                result, r8, arg5 = sub_141491a80(arg1, *(r14_1 + rbx_2 + 4), arg5)
                
                if (result.b != 0)
                    r8.b = 1
                else
                    r8.b = 0
        
        if (*(r14_1 + rbx_2 + 0x10) == 0 && r8.b == 0)
            int32_t* r14_2 = sx.q(*(r15_1 + rbx_2 + 4)) * 0x14
            int32_t rdx_4 = *(r14_2 + rbx_2)
            
            if (rdx_4 != 0xffffffff)
                result, r8, arg5 = sub_141491a80(arg1, rdx_4, arg5)
                
                if (result.b != 0)
                    r8.b = 1
                else
                    result, r8, arg5 = sub_141491a80(arg1, *(r14_2 + rbx_2 + 4), arg5)
                    
                    if (result.b != 0)
                        r8.b = 1
                    else
                        r8.b = 0
            
            if (*(r14_2 + rbx_2 + 0x10) == 0 && r8.b == 0)
                result = 0
                rcx_3 = 0
                r12_1 = rdi_1
                
                if (rsi_1 s> 0)
                    while (true)
                        if (*rbx_2 == rdi_1 || *(rbx_2 + 4) == rdi_1)
                            rdi_1 = result.d
                            
                            if (result.d != 0xffffffff)
                                goto label_141494610
                            
                            goto label_141494725
                        
                        result = zx.q(result.d + 1)
                        rcx_3 += 1
                        rbx_2 += 0x14
                        
                        if (rcx_3 s>= rsi_1)
                            break
                        
                        continue
        
    label_141494725:
        
        if (r12_1 != 0xffffffff)
            sub_1414942b0(arg1, r12_1)
    
    result.b = 1

return result
