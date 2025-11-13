// 函数: sub_141c8c030
// 地址: 0x141c8c030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
arg3[1].d = 0

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1405a5410(arg3, 0)

CRITICAL_SECTION* lpCriticalSection = *arg1
EnterCriticalSection(lpCriticalSection)
int32_t var_a8 = 0
int32_t r10 = arg1[6].d
int32_t var_a4 = 1
int32_t rcx_2 = 0
void* var_a0 = &arg1[3]
int32_t var_98 = 0xffffffff
int32_t var_94 = 0
int32_t var_90 = 0

if (r10 != 0)
    void* rax_1 = arg1[5]
    void* r8 = &arg1[3]
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r8
    int32_t var_94_2
    
    if (rdx_2 != 0)
    label_141c8c106:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_94_1 = rcx_2 - rax_9 + 0x1f
        
        if (rcx_2 - rax_9 + 0x1f s> r10)
            var_94_2 = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(rdi)
            rcx_2 += 0x20
            rdi += 1
            int32_t var_90_1 = rcx_2
            var_a8 = rdi
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r8 + (rdx_3 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141c8c106
        
        var_94_2 = r10

int32_t rdx_5 = arg1[6].d
int128_t var_48 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_58 = var_a8.o
int32_t r8_2 = rdx_5 s>> 5
int32_t r9_1 = rdx_5 & 0xffffffe0
int64_t var_68 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_98_2 = r12
int32_t var_94_3 = rdx_5
int128_t var_88 = (&arg1[1]).o
int128_t var_78 = var_58

if (rdx_5 != r10)
    void* rax_11 = arg1[5]
    void* r10_1 = &arg1[3]
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_2) << 2)) & r12
    int32_t var_94_5
    
    if (rdx_9 != 0)
    label_141c8c1d2:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r14_1
        
        if (rax_18 == 0)
            r14_1 = 0x20
        else
            r14_1 = 0x1f - temp0_4
        
        int32_t var_94_4 = r9_1 - r14_1 + 0x1f
        
        if (r9_1 - r14_1 + 0x1f s> r10)
            var_94_5 = r10
    else
        while (true)
            int64_t rcx_7 = sx.q(r8_2)
            r9_1 += 0x20
            r8_2 += 1
            
            if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_7 << 2) + 4)
            var_98_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141c8c1d2
        
        var_94_5 = r10

while (true)
    uint64_t result = sx.q(var_78:0xc.d)
    int64_t* rdx_10 = var_88.q
    
    if (result.d == (var_98_2.q u>> 0x20).d && var_78.q == &arg1[3] && rdx_10 == &arg1[1])
        uint64_t i = *arg3
        
        for (int64_t rsi_3 = (sx.q(arg3[1].d) << 4) + i; i != rsi_3; i += 0x10)
            result = sub_141c8b9c0(&arg1[1], i)
        
        if (lpCriticalSection == 0)
            return result
        
        return LeaveCriticalSection(lpCriticalSection)
    
    uint64_t rcx_9 = result * 5
    int64_t rax_20 = *rdx_10
    int128_t* r14_2 = rax_20 + (rcx_9 << 3)
    int32_t rcx_13 = (*(rax_20 + (rcx_9 << 3) + 0x1c) ^ *(arg2 + 0xc))
        | (*(r14_2 + 0x18) ^ *(arg2 + 8)) | (*(r14_2 + 0x14) ^ *(arg2 + 4))
    
    if ((rcx_13 | (r14_2[1].d ^ *arg2)) == 0)
        int64_t rdi_2 = sx.q(arg3[1].d)
        int32_t rax_27 = (rdi_2 + 1).d
        arg3[1].d = rax_27
        
        if (rax_27 s> *(arg3 + 0xc))
            sub_1405a4f90(arg3)
        
        *(*arg3 + rdi_2 * 0x10) = *r14_2
    
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)
