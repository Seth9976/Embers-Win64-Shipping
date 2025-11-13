// 函数: sub_140de65b0
// 地址: 0x140de65b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_2 = *(arg2 + 8) - *(arg2 + 0x34) + arg1[1].d

if (rdx_2 s> *(arg1 + 0xc))
    sub_140888ba0(arg1, rdx_2)

int32_t rbx = *(arg2 + 0x28)
int32_t rcx = 0
int32_t var_74 = 1
int32_t var_78 = 0
void* var_70 = arg2 + 0x10
int32_t r8 = 0
int32_t var_68 = 0xffffffff
int64_t var_64 = 0

if (rbx != 0)
    void* rax_1 = *(arg2 + 0x20)
    void* r9_1 = arg2 + 0x10
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_140de6665:
        int32_t rax_8 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_64.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> rbx)
            var_64.d = rbx
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_64:4.d = r8
            var_78 = rcx
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_68_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_140de6665
        
        var_64.d = rbx

int32_t r14 = *(arg2 + 0x28)
void* r10 = arg2
int32_t r8_3 = r14 s>> 5
int32_t r9_3 = r14 & 0xffffffe0
int128_t var_50 = var_78.o
int64_t var_40 = 0xffffffff

if (r14 != rbx)
    void* rax_11 = *(arg2 + 0x20)
    void* rbx_1 = arg2 + 0x10
    
    if (rax_11 != 0)
        rbx_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_10 = *(rbx_1 + (sx.q(r8_3) << 2)) & 0xffffffff << (r14.b & 0x1f)
    
    if (rdx_10 != 0)
    label_140de670c:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r12_1
        
        if (rax_18 == 0)
            r12_1 = 0x20
        else
            r12_1 = 0x1f - temp0_3
        
        int32_t rax_19 = *(arg2 + 0x28)
        r14 = r9_3 - r12_1 + 0x1f
        
        if (r14 s> rax_19)
            r14 = rax_19
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(rbx_1 + (rcx_6 << 2) + 4)
            
            if (rdx_10 != 0)
                goto label_140de670c
        
        r14 = *(arg2 + 0x28)

while (true)
    int64_t result = sx.q(var_40:4.d)
    
    if (result.d == r14 && var_50:8.q == arg2 + 0x10 && r10 == arg2)
        return result
    
    int64_t rsi_1 = sx.q(arg1[1].d)
    int128_t* rbx_4 = (result << 7) + *r10
    int32_t rax_20 = (rsi_1 + 1).d
    arg1[1].d = rax_20
    
    if (rax_20 s> *(arg1 + 0xc))
        sub_1408888d0(arg1)
    
    uint64_t rax_21 = *arg1
    int64_t rcx_10 = rsi_1 << 7
    *(rcx_10 + rax_21) = *rbx_4
    *(rcx_10 + rax_21 + 0x10) = rbx_4[1]
    *(rcx_10 + rax_21 + 0x20) = rbx_4[2]
    *(rcx_10 + rax_21 + 0x30) = rbx_4[3]
    *(rcx_10 + rax_21 + 0x40) = rbx_4[4]
    *(rcx_10 + rax_21 + 0x50) = rbx_4[5]
    *(rcx_10 + rax_21 + 0x60) = rbx_4[6]
    *(rcx_10 + rax_21 + 0x70) = rbx_4[7]
    var_40.d &= not.d(var_50:4.d)
    sub_14059bdd0(&var_50)
    r10 = arg2
