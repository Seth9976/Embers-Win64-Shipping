// 函数: sub_141e156f0
// 地址: 0x141e156f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e14000(arg1, arg2 + 0x10, arg1 + 0x10)
int32_t rbx = *(arg2 + 0x48)
int32_t r8_1 = 0
int32_t var_84 = 1
int32_t var_88 = 0
int32_t rcx = 0
void* var_80 = arg2 + 0x30
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int32_t var_70 = 0

if (rbx != 0)
    void* rax_1 = *(arg2 + 0x40)
    void* r9_1 = arg2 + 0x30
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_3 = *r9_1
    int32_t var_74_2
    
    if (rdx_3 != 0)
    label_141e157a8:
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
        
        int32_t var_74_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> rbx)
            var_74_2 = rbx
    else
        while (true)
            int64_t rdx_4 = sx.q(r8_1)
            rcx += 0x20
            r8_1 += 1
            int32_t var_70_1 = rcx
            var_88 = r8_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141e157a8
        
        var_74_2 = rbx

int32_t rdx_6 = *(arg2 + 0x48)
int128_t var_28 = 0xffffffff
int32_t rsi = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_38 = var_88.o
int32_t r8_3 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = rsi
int32_t var_74_3 = rdx_6
int128_t var_68 = (arg2 + 0x20).o
int128_t var_58 = var_38

if (rdx_6 != rbx)
    void* rax_11 = *(arg2 + 0x40)
    void* r10_1 = arg2 + 0x30
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi
    int32_t var_74_5
    
    if (rdx_10 != 0)
    label_141e15872:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        int32_t var_74_4 = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_74_5 = rbx
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_5 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141e15872
        
        var_74_5 = rbx

while (true)
    int64_t rcx_7 = sx.q(var_58:0xc.d)
    int64_t result = var_68.q
    
    if (rcx_7.d == (var_78_2.q u>> 0x20).d && var_58.q == arg2 + 0x30 && result == arg2 + 0x20)
        return result
    
    int64_t* rdi_3 = (rcx_7 << 5) + *result
    int64_t rbx_1 = *rdi_3
    sub_141e14000(arg1, &rdi_3[1], 
        sub_141e107a0(arg1 + 0x20, sub_140b5ead0(rbx_1.d) + (rbx_1 u>> 0x20).d, rdi_3))
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
