// 函数: sub_1421cb320
// 地址: 0x1421cb320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x28)
int64_t r10 = sx.q(arg2)
void* result

if (rax == 0)
label_1421cb396:
    result = *(arg1 + 0x18)
    
    if (result != 0 && r10.d s>= 0 && r10.d s< *(result + 0x418))
        result = *(result + 0x410)
        int64_t rdx_2 = *(result + (r10 << 3))
        
        if (rdx_2 != 0)
            *(arg1 + 0x1a0) = rdx_2
else
    void* rax_1 = *(rax + 0x30)
    
    if (rax_1 == 0)
        goto label_1421cb396
    
    void* r9_1 = *(arg1 + 0x18)
    
    if (r9_1 == 0)
        goto label_1421cb396
    
    void* rdx = *(r9_1 + 0x408)
    
    if (rdx == 0 || *(rax_1 + 0x110) s<= 0)
        goto label_1421cb396
    
    int64_t rbx_1 = sx.q(*(rdx + 0x100))
    int32_t rcx = 0
    
    if (rbx_1.d s<= 0)
        goto label_1421cb396
    
    int64_t* rdi_1 = *(rdx + 0xf8)
    int64_t rdx_1 = 0
    int64_t* rax_3 = rdi_1
    
    while (true)
        if (**(rax_1 + 0x108) == *rax_3)
            int64_t rdx_3 = sx.q(rcx)
            result = rdi_1[rdx_3 * 2 + 1]
            *(arg1 + 0x1a0) = result
            
            if (rcx s>= 0 && rcx s< *(r9_1 + 0x418))
                result = *(r9_1 + 0x410)
                int64_t rcx_1 = *(result + (rdx_3 << 3))
                
                if (rcx_1 != 0)
                    *(arg1 + 0x1a0) = rcx_1
                    return result
            
            break
        
        rcx += 1
        rdx_1 += 1
        rax_3 = &rax_3[2]
        
        if (rdx_1 s>= rbx_1)
            goto label_1421cb396

return result
