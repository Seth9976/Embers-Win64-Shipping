// 函数: sub_141d256e0
// 地址: 0x141d256e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x60) != *(arg1 + 0x8c))
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8 = arg1 + 0x90
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t i = *(r8 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t rdx_3 = *(arg1 + 0x58)
        
        do
            int64_t rax_4 = sx.q(i) * 5
            
            if (*(rdx_3 + (rax_4 << 2)) == arg2)
                break
            
            i = *(rdx_3 + (rax_4 << 2) + 0xc)
        while (i != 0xffffffff)

int32_t rcx_3 = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t rdi_1 = *(arg1 + 0x30)
void* var_90 = arg1 + 0x18
int32_t r8_1 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (rdi_1 != 0)
    void* rax_5 = *(arg1 + 0x28)
    void* r9_1 = arg1 + 0x18
    
    if (rax_5 != 0)
        r9_1 = rax_5
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1 - 1)
    int32_t rdx_6 = *r9_1
    
    if (rdx_6 != 0)
    label_141d257f8:
        int32_t rax_12 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
        int32_t var_94_1 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_2
        
        var_84.d = r8_1 - rax_13 + 0x1f
        
        if (r8_1 - rax_13 + 0x1f s> rdi_1)
            var_84.d = rdi_1
    else
        while (true)
            int64_t rdx_7 = sx.q(rcx_3)
            r8_1 += 0x20
            rcx_3 += 1
            var_84:4.d = r8_1
            var_98 = rcx_3
            
            if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r9_1 + (rdx_7 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_141d257f8
        
        var_84.d = rdi_1

int32_t rdx_8 = *(arg1 + 0x30)
int128_t var_38 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_8.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_4 = rdx_8 s>> 5
int32_t r9_3 = rdx_8 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r12
var_84.d = rdx_8
int128_t var_78 = (arg1 + 8).o
int96_t var_68 = var_48:8.12

if (rdx_8 != rdi_1)
    void* rax_15 = *(arg1 + 0x28)
    void* r10_1 = arg1 + 0x18
    
    if (rax_15 != 0)
        r10_1 = rax_15
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi_1 - 1)
    int32_t rdx_12 = *(r10_1 + (sx.q(r8_4) << 2)) & r12
    
    if (rdx_12 != 0)
    label_141d258c2:
        int32_t rax_22 = neg.d(rdx_12) & rdx_12
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
        int32_t r11_1
        
        if (rax_22 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rdi_1)
            var_84.d = rdi_1
    else
        while (true)
            int64_t rcx_8 = sx.q(r8_4)
            r9_3 += 0x20
            r8_4 += 1
            
            if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_12 = *(r10_1 + (rcx_8 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_12 != 0)
                goto label_141d258c2
        
        var_84.d = rdi_1

while (true)
    int32_t result_1
    int64_t result = sx.q(result_1)
    int64_t rcx_10 = var_78.q
    
    if (result.d == (var_88_2.q u>> 0x20).d && var_68.q == arg1 + 0x18 && rcx_10 == arg1 + 8)
        return result
    
    void* rdi_4 = result * 0x30 + *rcx_10
    
    if (*(rdi_4 + 0x14) == arg2)
        int64_t* rcx_11 = *(rdi_4 + 0x20)
        (*(*rcx_11 + 0x18))(rcx_11, arg3)
    
    if (*(rdi_4 + 8) == arg2)
        int64_t* rcx_12 = *(rdi_4 + 0x20)
        (*(*rcx_12 + 0x10))(rcx_12, arg3)
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
