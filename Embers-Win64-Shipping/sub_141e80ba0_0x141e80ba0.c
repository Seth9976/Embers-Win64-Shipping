// 函数: sub_141e80ba0
// 地址: 0x141e80ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xf0)
int32_t r11 = *(arg1 + 0xc8)
int32_t rcx_1 = 0
int32_t var_a4 = 1
int32_t var_a8 = 0
int32_t r8 = 0
void* var_a0 = arg1 + 0xb0
int32_t var_98 = 0xffffffff
int64_t var_94 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0xc0)
    void* r9_1 = arg1 + 0xb0
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141e80c58:
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
        
        var_94.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_94:4.d = r8
            var_a8 = rcx_1
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141e80c58
        
        var_94.d = r11

int32_t rdx_4 = *(arg1 + 0xc8)
int128_t var_38 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_4.b & 0x1f)
int128_t var_48 = var_a8.o
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_98_2 = r12
var_94.d = rdx_4
int128_t var_78 = (arg1 + 0xa0).o
int96_t var_68 = var_48:8.12

if (rdx_4 != r11)
    void* rax_11 = *(arg1 + 0xc0)
    void* r10_1 = arg1 + 0xb0
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_8 != 0)
    label_141e80d22:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rdi_1
        
        if (rax_18 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_94.d = r9_3 - rdi_1 + 0x1f
        
        if (r9_3 - rdi_1 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_6 << 2) + 4)
            var_98_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141e80d22
        
        var_94.d = r11

while (true)
    int32_t var_5c
    int64_t rcx_8 = sx.q(var_5c)
    int64_t result = var_78.q
    
    if (rcx_8.d == (var_98_2.q u>> 0x20).d && var_68.q == arg1 + 0xb0 && result == arg1 + 0xa0)
        if (arg1 != -0xf0)
            result = LeaveCriticalSection(arg1 + 0xf0)
        
        if (*arg2 == 0)
            return result
        
        void* rax_27 = arg2[2]
        void* rcx_15 = &arg2[4]
        
        if (rax_27 != 0)
            rcx_15 = rax_27
        
        return (*(*rcx_15 + 0x10))(rcx_15)
    
    int32_t* rcx_10 = (rcx_8 << 6) + *result
    int64_t var_80 = *(rcx_10 + 8)
    int64_t* rcx_11 = &arg2[4]
    int32_t var_88 = *rcx_10
    int64_t* rax_22 = arg2[2]
    
    if (rax_22 != 0)
        rcx_11 = rax_22
    
    (*arg2)((*(*rcx_11 + 8))(rcx_11), &var_88, &var_80)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
