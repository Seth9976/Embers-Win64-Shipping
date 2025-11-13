// 函数: sub_141c9ca70
// 地址: 0x141c9ca70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x28)
int32_t r9 = 0
int32_t var_84 = 1
int32_t var_88 = 0
void* var_80 = arg1 + 0x10
int32_t var_78 = 0xffffffff
int64_t var_74 = 0
void* r10 = arg1
int32_t r8 = 0

if (rbx != 0)
    void* rax_1 = *(arg1 + 0x20)
    void* r10_1 = arg1 + 0x10
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_141c9cb17:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> rbx)
            var_74.d = rbx
    else
        while (true)
            int64_t rcx_1 = sx.q(r9)
            r8 += 0x20
            r9 += 1
            var_74:4.d = r8
            var_88 = r9
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            var_78 = 0xffffffff
            
            if (rcx != 0)
                goto label_141c9cb17
        
        var_74.d = rbx
    
    r10 = arg1

int32_t r14 = *(r10 + 0x28)
int128_t var_58 = var_88.o
int32_t r8_3 = r14 s>> 5
int32_t r9_2 = r14 & 0xffffffe0
int128_t var_48 = 0xffffffff
int64_t var_68 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_88.o = r10.o
var_78.o = var_58

if (r14 != rbx)
    void* rax_11 = *(arg1 + 0x20)
    void* r10_2 = arg1 + 0x10
    
    if (rax_11 != 0)
        r10_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_5 = *(r10_2 + (sx.q(r8_3) << 2)) & 0xffffffff << (r14.b & 0x1f)
    
    if (rdx_5 != 0)
    label_141c9cbcd:
        int32_t rax_18 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rdi_1
        
        if (rax_18 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        r14 = r9_2 - rdi_1 + 0x1f
        
        if (r14 s<= rbx)
            goto label_141c9cbec
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r10_2 + (rcx_6 << 2) + 4)
            
            if (rdx_5 != 0)
                goto label_141c9cbcd
    
    r14 = rbx
    goto label_141c9cbec

while (true)
    int32_t result_1
    int64_t result = sx.q(result_1)
    int64_t* rdx_6 = var_88.q
    
    if (result.d == r14 && var_78.q == arg1 + 0x10 && rdx_6 == r10)
        result.b = 1
        return result
    
    void* rdi_2 = *(*rdx_6 + result * 0x18 + 8)
    
    if (rdi_2 != 0)
        int64_t rbx_1 = *(rdi_2 + 8)
        
        if (arg2[1].d == *(arg2 + 0x34))
        label_141c9cc84:
            
            if ((*arg3)(*(arg3 + 8), rdi_2).b == 0)
                result.b = 1
                return result
        else
            int32_t rax_22 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
            void* r8_4 = &arg2[7]
            void* rcx_10 = *(r8_4 + 8)
            
            if (rcx_10 != 0)
                r8_4 = rcx_10
            
            int32_t rax_24 = *(r8_4 + (((sx.q(arg2[9].d) - 1) & sx.q(rax_22)) << 2))
            
            if (rax_24 == 0xffffffff)
                goto label_141c9cc84
            
            int64_t rdx_10 = *arg2
            
            while (true)
                int64_t rcx_12 = sx.q(rax_24) * 2
                
                if (*(rdx_10 + (rcx_12 << 3)) == rbx_1)
                    break
                
                rax_24 = *(rdx_10 + (rcx_12 << 3) + 8)
                
                if (rax_24 == 0xffffffff)
                    goto label_141c9cc84
            
            if (rax_24 == 0xffffffff)
                goto label_141c9cc84
    
    var_74:4.d &= not.d(var_80:4.d)
    sub_14059bdd0(&var_80)
label_141c9cbec:
    r10 = arg1
