// 函数: sub_14279b1e0
// 地址: 0x14279b1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x28)
int32_t r8 = 0
int32_t var_a4 = 1
int32_t var_a8 = 0
void* var_a0 = arg1 + 0x10
int32_t rcx = 0
int32_t var_98 = 0xffffffff
int32_t var_94 = 0
int32_t var_90 = 0

if (rbx != 0)
    void* rax_1 = *(arg1 + 0x20)
    void* r9_1 = arg1 + 0x10
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_2 = *r9_1
    int32_t var_94_2
    
    if (rdx_2 != 0)
    label_14279b288:
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
        
        int32_t var_94_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> rbx)
            var_94_2 = rbx
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_90_1 = rcx
            var_a8 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_14279b288
        
        var_94_2 = rbx

int32_t rdx_5 = *(arg1 + 0x28)
int128_t var_40 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_50 = var_a8.o
int32_t r8_2 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_60 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_98_2 = r12
int32_t var_94_3 = rdx_5
int128_t var_80 = arg1.o
int128_t var_70 = var_50

if (rdx_5 != rbx)
    void* rax_11 = *(arg1 + 0x20)
    void* r10_1 = arg1 + 0x10
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_2) << 2)) & r12
    int32_t var_94_5
    
    if (rdx_9 != 0)
    label_14279b352:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        int32_t var_94_4 = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_94_5 = rbx
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
            var_98_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_14279b352
        
        var_94_5 = rbx

int64_t* result

while (true)
    int64_t rcx_7 = sx.q(var_70:0xc.d)
    int64_t rax_20 = var_80.q
    
    if (rcx_7.d == (var_98_2.q u>> 0x20).d && var_70.q == arg1 + 0x10 && rax_20 == arg1)
        if (*arg2 != 0)
            void* rax_28 = arg2[2]
            void* rcx_11 = &arg2[4]
            
            if (rax_28 != 0)
                rcx_11 = rax_28
            
            (*(*rcx_11 + 0x10))(rcx_11)
        
        return nullptr
    
    int64_t* rcx_8 = &arg2[4]
    result = (rcx_7 << 4) + *rax_20
    int64_t var_88 = *result
    int64_t* rax_22 = arg2[2]
    
    if (rax_22 != 0)
        rcx_8 = rax_22
    
    if ((*arg2)((*(*rcx_8 + 8))(rcx_8), &var_88) != 0)
        break
    
    var_70:8.d &= not.d(var_80:0xc.d)
    sub_14059bdd0(&var_80:8)

if (*arg2 != 0)
    void* rdx_11 = arg2[2]
    void* rcx_12 = &arg2[4]
    
    if (rdx_11 != 0)
        rcx_12 = rdx_11
    
    int64_t rdx_12 = *rcx_12
    (*(rdx_12 + 0x10))(rcx_12, rdx_12)

return result
