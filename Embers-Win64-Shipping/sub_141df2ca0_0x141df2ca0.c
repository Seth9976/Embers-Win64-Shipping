// 函数: sub_141df2ca0
// 地址: 0x141df2ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_54 = 1
int32_t var_58 = 0
int32_t r10 = *(arg1 + 0x120)
int32_t r9 = 0
int32_t* var_50 = arg1 + 0x110
int32_t var_48 = 0xffffffff
int64_t var_44 = 0

if (r10 != 0)
    int32_t* rax_1 = *(arg1 + 0x118)
    int32_t* r11_1 = arg1 + 0x110
    
    if (rax_1 != 0)
        r11_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rcx = *r11_1
    
    if (rcx != 0)
    label_141df2d3a:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_54_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_44.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> r10)
            var_44.d = r10
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_44:4.d = r9
            var_58 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = r11_1[rcx_1 + 1]
            int32_t var_48_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_141df2d3a
        
        var_44.d = r10

void* rax_11 = arg1
int128_t var_30 = var_58.o
int64_t var_20 = 0xffffffff

if (0 s< r10)
    int32_t rdx_3 = 0
    
    while (true)
        void* rcx_3 = *(rax_11 + 0x100)
        
        if (rcx_3 != 0)
            rax_11 = rcx_3
        
        int64_t rcx_6 = *(rax_11 + (sx.q(rdx_3) << 6) + 0x28)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        var_20.d &= not.d(var_30:4.d)
        sub_140b4fe60(&var_30)
        rdx_3 = var_20:4.d
        
        if (rdx_3 s>= *(var_30:8.q + 0x10))
            break
        
        rax_11 = arg1

bool cond:0 = *(arg1 + 0x10c) == 0
*(arg1 + 0x108) = 0

if (not(cond:0))
    sub_141e0be30(arg1, 0)

*(arg1 + 0x128) = 0xffffffff
*(arg1 + 0x12c) = 0
void* result = sub_141df7e10(arg1 + 0x110, 0)
int64_t rcx_10 = *(arg1 + 0x118)

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = *(arg1 + 0x100)

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
