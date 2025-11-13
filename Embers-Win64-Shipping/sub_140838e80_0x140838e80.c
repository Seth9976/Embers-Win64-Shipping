// 函数: sub_140838e80
// 地址: 0x140838e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg2 + 0x28)
void* r15 = arg2 + 0x10
int32_t rcx = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t r8 = 0
void* var_90 = r15
int32_t var_88 = 0xffffffff
void* r12 = arg2
int64_t var_84 = 0

if (rdi != 0)
    void* rax_1 = *(r15 + 0x10)
    void* r9_1 = r15
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_140838f28:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> rdi)
            var_84.d = rdi
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140838f28
        
        var_84.d = rdi

int32_t rdx_4 = *(r12 + 0x28)
int32_t r14 = 0xffffffff << (rdx_4.b & 0x1f)
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int128_t var_60 = 0xffffffff
int64_t var_30 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_70
var_70:8.d = r14
var_70:0xc.d = rdx_4
int128_t var_50 = r12.o
int128_t var_40 = var_98.o

if (rdx_4 != rdi)
    void* rax_11 = *(r15 + 0x10)
    void* r10_1 = r15
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_8 != 0)
    label_140838ff2:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_70:0xc.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rdi)
            var_70:0xc.d = rdi
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
            var_70:8.d = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_140838ff2
        
        var_70:0xc.d = rdi

while (true)
    int64_t result = sx.q(var_40:0xc.d)
    int64_t* rdx_9 = var_50.q
    
    if (result.d == (var_70:8.q u>> 0x20).d && var_40.q == r15 && rdx_9 == r12)
        return result
    
    int64_t rcx_7 = result * 5
    int32_t i = 0
    int64_t rax_20 = *rdx_9
    void* r15_1 = rax_20 + (rcx_7 << 3)
    
    if (*(rax_20 + (rcx_7 << 3) + 8) s> 0)
        int64_t rsi_1 = 0
        
        do
            int64_t rdi_1 = sx.q(arg3[1].d)
            int64_t r12_1 = *(*(r15_1 + 0x10) + rsi_1 + 0x10)
            int32_t rax_22 = (rdi_1 + 1).d
            arg3[1].d = rax_22
            
            if (rax_22 s> *(arg3 + 0xc))
                sub_1405a4d70(arg3)
            
            i += 1
            rsi_1 += 0x18
            *(*arg3 + (rdi_1 << 3)) = r12_1
        while (i s< *(r15_1 + 8))
        
        r12 = arg2
    
    int32_t rax_25 = not.d(var_50:0xc.d)
    *(r15_1 + 8) = 0
    var_40:8.d &= rax_25
    sub_14059bdd0(&var_50:8)
    r15 = var_90
