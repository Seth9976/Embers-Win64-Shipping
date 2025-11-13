// 函数: sub_1426b2870
// 地址: 0x1426b2870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg2
uint64_t rbx = zx.q(*(rsi + 0x260))
void* rdi_1 = zx.q(*(arg1 + 0x52)) + *(rbx * 0x58 + *(rsi + 0x110) + 0x30)
uint64_t result

if (arg3 != 0xffffffff)
label_1426b2978:
    char rax_5 = *(rdi_1 + 1)
    
    if (rax_5 == 0xff)
        return (*(*arg1 + 0x2f0))(arg1, arg2, zx.q(arg3))
    
    if (*(rsi + 0x190) != 0 && (*(rsi + 0x19b) & 1) == 0)
        return (*(*arg1 + 0x2f0))(arg1, arg2, zx.q(arg3))
    
    result = zx.q(sx.d(rax_5))
    *(rdi_1 + 1) = 0xff
else
    int16_t rcx = *(arg2 + 0x2c)
    
    if (rcx u>= 0xffff)
        goto label_1426b2978
    
    int16_t r8 = arg1[0xa].w
    bool c_1 = rbx.w u< rcx
    
    if (rbx.w == rcx)
        c_1 = r8 u< *(arg2 + 0x2e)
    
    if (c_1 == 0)
        goto label_1426b2978
    
    int64_t rax_2 = sx.q(arg1[0xc].d)
    int32_t rdi_2 = (rax_2 - 1).d
    
    if (rbx.w != rcx)
        result = 0xfffffffe
        
        if (rbx.w u> rcx)
            return zx.q(rdi_2)
    else
        int16_t r10_1 = *(arg2 + 0x2e)
        
        if (r8 u> r10_1)
            return 0xfffffffe
        
        int32_t rdx = 0
        
        if (rax_2.d s<= 0)
            return zx.q(rdi_2)
        
        int64_t rcx_1 = 0
        int64_t r9_1 = 0
        
        while (true)
            int16_t rax_4
            
            if (rcx_1 s< 0 || rdx s>= arg1[0xc].d)
                rax_4 = *(arg1 + 0x8c) + 1
            else
                int64_t* r8_1 = arg1[0xb]
                void* rax_3 = *(r8_1 + r9_1)
                
                if (rax_3 != 0)
                    rax_4 = *(rax_3 + 0x50) - *(r8_1 + r9_1 + 0x18)
                else
                    rax_3 = *(r8_1 + r9_1 + 8)
                    
                    if (rax_3 == 0)
                        rax_4 = *(arg1 + 0x8c) + 1
                    else
                        rax_4 = *(rax_3 + 0x50) - *(r8_1 + r9_1 + 0x18)
            
            if (rax_4 u> r10_1)
                break
            
            rdx += 1
            rcx_1 += 1
            r9_1 += 0x30
            
            if (rcx_1 s>= rax_2)
                return zx.q(rdi_2)
        
        result = zx.q(rdx - 1)
        
        if (rdx == 0)
            return 0

return result
