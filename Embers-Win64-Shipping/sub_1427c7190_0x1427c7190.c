// 函数: sub_1427c7190
// 地址: 0x1427c7190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = &arg1[arg2]
uint32_t rax

if (arg1 u< r10)
    rax = zx.d(*arg1)
    void* rdx = &arg1[1]
    int32_t r9_2 = rax & 0x7f
    
    if (rax u< 0x80)
    label_1427c7224:
        
        if (rdx != 0)
            *arg3 = zx.q(r9_2)
            uint64_t rax_8
            rax_8.b = 1
            return rax_8
    else if (rdx u< r10)
        uint32_t rcx = zx.d(*rdx)
        rdx += 1
        r9_2 |= (rcx & 0x7f) << 7
        
        if (rcx u< 0x80)
            goto label_1427c7224
        
        if (rdx u< r10)
            uint32_t rcx_1 = zx.d(*rdx)
            rdx += 1
            r9_2 |= (rcx_1 & 0x7f) << 0xe
            
            if (rcx_1 u< 0x80)
                goto label_1427c7224
            
            if (rdx u< r10)
                uint32_t rcx_2 = zx.d(*rdx)
                rdx += 1
                r9_2 |= (rcx_2 & 0x7f) << 0x15
                
                if (rcx_2 u< 0x80)
                    goto label_1427c7224
                
                if (rdx u< r10)
                    uint32_t rcx_3 = zx.d(*rdx)
                    rdx += 1
                    r9_2 |= rcx_3 << 0x1c
                    
                    if (rcx_3 u< 0x10)
                        goto label_1427c7224

rax.b = 0
return rax
