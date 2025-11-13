// 函数: sub_1408e5ee0
// 地址: 0x1408e5ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg1[1].d
int64_t rax

if (r10 != 0)
    int32_t* r8 = *arg1
    int32_t r9_1 = 0
    int32_t r10_1 = r10 - 1
    int32_t rcx_1 = r8[sx.q(r10_1)]
    int32_t rbx
    
    if (arg2 s>= rcx_1)
        rbx.b = arg3 s>= rcx_1
    label_1408e5f2b:
        
        if (r8 != 0)
            sub_140a74f90(r8)
        
        return zx.q(rbx.b)
    
    int32_t rax_4 = *r8
    
    if (arg2 s< rax_4)
        rbx.b = arg3 s< rax_4
        goto label_1408e5f2b
    
    if (r10_1 != 0)
        while (r10_1 u> r9_1)
            uint32_t rax_7 = (r9_1 + 1 + r10_1) u>> 1
            uint64_t rdx = zx.q(rax_7)
            int32_t rax_8 = rax_7 - 1
            int32_t temp0_1 = r8[rdx]
            
            if (arg2 s>= temp0_1)
                rax_8 = r10_1
            
            if (arg2 s>= temp0_1)
                r9_1 = rdx.d
            
            r10_1 = rax_8
            
            if (rax_8 == 0)
                break
    
    rax = sx.q(r9_1)
    
    if (arg3 s< r8[rax] || arg3 s>= r8[rax + 1])
        if (r8 != 0)
            sub_140a74f90(r8)
        
        rax.b = 0
        return rax
    
    if (r8 != 0)
        sub_140a74f90(r8)
else
    int64_t rcx = *arg1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
        int64_t rax_1
        rax_1.b = 1
        return rax_1

rax.b = 1
return rax
