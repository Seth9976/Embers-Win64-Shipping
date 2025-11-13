// 函数: sub_141dc1c70
// 地址: 0x141dc1c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_64 = 1
int32_t var_68 = 0
int32_t r9 = *(arg1 + 0x1a0)
int32_t* var_60 = arg1 + 0x190
int32_t var_58 = 0xffffffff
int32_t r14 = 0x20
int64_t var_54 = 0
int32_t rdi = 0
int32_t r8 = 0

if (r9 != 0)
    int32_t* rax_1 = *(arg1 + 0x198)
    int32_t* r10_1 = arg1 + 0x190
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_141dc1d17:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_64_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_54.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r9)
            var_54.d = r9
    else
        while (true)
            int64_t rcx_1 = sx.q(rdi)
            r8 += 0x20
            rdi += 1
            var_54:4.d = r8
            var_68 = rdi
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = r10_1[rcx_1 + 1]
            int32_t var_58_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_141dc1d17
        
        var_54.d = r9

void* rdx_2 = arg1
void* var_48 = rdx_2
int128_t var_40 = var_68.o
int64_t var_30 = 0xffffffff

if (0 s< r9)
    int32_t rcx_3 = 0
    
    while (true)
        void* rax_11 = *(rdx_2 + 0x180)
        
        if (rax_11 != 0)
            rdx_2 = rax_11
        
        sub_1405ae080(sx.q(rcx_3) * 0x60 + rdx_2 + 8)
        var_30.d &= not.d(var_40:4.d)
        sub_140b4fe60(&var_40)
        rcx_3 = var_30:4.d
        
        if (rcx_3 s>= *(var_40:8.q + 0x10))
            break
        
        rdx_2 = var_48

*(arg1 + 0x188) = 0

if (*(arg1 + 0x18c) != arg2)
    sub_141dd5f90(arg1, arg2)

*(arg1 + 0x1a8) = 0xffffffff
int32_t rax_17 = (arg2 + 0x1f) & 0xffffffe0
*(arg1 + 0x1ac) = 0
int32_t rcx_9 = *(arg1 + 0x1a4)
int32_t* result

if (rax_17 s> rcx_9 || rcx_9 s> 0x20)
    if (rax_17 s>= 0x20)
        r14 = rax_17
    
    *(arg1 + 0x1a4) = r14
    result = sub_141dd36e0(arg1 + 0x190, 0)
else
    result = *(arg1 + 0x198)
    int32_t* result_1 = arg1 + 0x190
    uint32_t rdx_7 = (*(arg1 + 0x1a0) + 0x1f) u>> 5
    
    if (result != 0)
        result_1 = result
    
    if (rdx_7 u> 8)
        result = memset(result_1, 0, zx.q(rdx_7) << 2)
    else if (rdx_7 != 0)
        result = nullptr
        __builtin_memset(result_1, 0, zx.q(rdx_7) << 2)

*(arg1 + 0x1a0) = 0
return result
