// 函数: sub_142771ed0
// 地址: 0x142771ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg1[5].d
int32_t var_64 = 1
int32_t var_68 = 0
void* var_60 = &arg1[2]
int32_t var_58 = 0xffffffff
int32_t rdi = 0
int64_t var_54 = 0
int32_t r8 = 0

if (r9 != 0)
    void* rax_1 = arg1[4]
    void* r10_1 = &arg1[2]
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_142771f78:
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
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            int32_t var_58_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_142771f78
        
        var_54.d = r9

int64_t* rdx_2 = arg1
int64_t* var_48 = rdx_2
int128_t var_40 = var_68.o
int64_t var_30 = 0xffffffff

if (0 s< r9)
    int32_t rcx_3 = 0
    
    while (true)
        int64_t* rdi_2 = sx.q(rcx_3) * 0x38 + *rdx_2
        int64_t rcx_4 = rdi_2[2]
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *rdi_2
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        var_30.d &= not.d(var_40:4.d)
        sub_14059bdd0(&var_40)
        rcx_3 = var_30:4.d
        
        if (rcx_3 s>= *(var_40:8.q + 0x18))
            break
        
        rdx_2 = var_48

arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_140679b80(arg1, arg2)

arg1[6].d = 0xffffffff
int32_t rax_16 = (arg2 + 0x1f) & 0xffffffe0
*(arg1 + 0x34) = 0
int32_t rdx_4 = *(arg1 + 0x2c)
int32_t rcx_8 = 0x80
void* result

if (rax_16 s> rdx_4 || rdx_4 s> 0x80)
    if (rax_16 s>= 0x80)
        rcx_8 = rax_16
    
    *(arg1 + 0x2c) = rcx_8
    result = sub_1405a4410(&arg1[2], 0)
else
    result = arg1[4]
    void* result_1 = &arg1[2]
    uint32_t rdx_7 = (arg1[5].d + 0x1f) u>> 5
    
    if (result != 0)
        result_1 = result
    
    if (rdx_7 u> 8)
        result = memset(result_1, 0, zx.q(rdx_7) << 2)
    else if (rdx_7 != 0)
        result = nullptr
        __builtin_memset(result_1, 0, zx.q(rdx_7) << 2)

arg1[5].d = 0
return result
