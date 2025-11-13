// 函数: sub_141ddaf30
// 地址: 0x141ddaf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
*(arg1 + 0x198) = 0

if (*(arg1 + 0x19c) s<= 0xffffffff)
    sub_1405c5570(arg1 + 0x190, 0)

int32_t var_88 = 0
int32_t r10 = *(arg1 + 0x1c8)
int32_t var_84 = 1
int32_t rcx_1 = 0
void* var_80 = arg1 + 0x1b0
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int32_t var_70 = 0

if (r10 != 0)
    void* rax_1 = *(arg1 + 0x1c0)
    void* r8_1 = arg1 + 0x1b0
    
    if (rax_1 != 0)
        r8_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r8_1
    int32_t var_74_2
    
    if (rdx_3 != 0)
    label_141ddaff6:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_74_1 = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r10)
            var_74_2 = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rdi)
            rcx_1 += 0x20
            rdi += 1
            int32_t var_70_1 = rcx_1
            var_88 = rdi
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r8_1 + (rdx_4 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141ddaff6
        
        var_74_2 = r10

int32_t rdx_6 = *(arg1 + 0x1c8)
int128_t var_28 = 0xffffffff
int32_t r14 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_38 = var_88.o
int32_t r8_3 = rdx_6 s>> 5
int32_t r9_1 = rdx_6 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = r14
int32_t var_74_3 = rdx_6
int128_t var_68 = (arg1 + 0x1a0).o
int128_t var_58 = var_38

if (rdx_6 != r10)
    void* rax_11 = *(arg1 + 0x1c0)
    void* r10_1 = arg1 + 0x1b0
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    int32_t var_74_5
    
    if (rdx_10 != 0)
    label_141ddb0c2:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        int32_t var_74_4 = r9_1 - r11_1 + 0x1f
        
        if (r9_1 - r11_1 + 0x1f s> r10)
            var_74_5 = r10
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_1 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_6 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141ddb0c2
        
        var_74_5 = r10

while (true)
    int64_t rcx_8 = sx.q(var_58:0xc.d)
    int64_t* result = var_68.q
    
    if (rcx_8.d == (var_78_2.q u>> 0x20).d && var_58.q == arg1 + 0x1b0 && result == arg1 + 0x1a0)
        return result
    
    void* rdi_1 = *(*result + rcx_8 * 0x10)
    
    if (rdi_1 != 0 && (*(rdi_1 + 0x88) & 0x10) != 0)
        int64_t rsi_2 = sx.q(*(arg1 + 0x198))
        int32_t rax_21 = (rsi_2 + 1).d
        *(arg1 + 0x198) = rax_21
        
        if (rax_21 s> *(arg1 + 0x19c))
            sub_1405a4d70(arg1 + 0x190)
        
        *(*(arg1 + 0x190) + (rsi_2 << 3)) = rdi_1
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
