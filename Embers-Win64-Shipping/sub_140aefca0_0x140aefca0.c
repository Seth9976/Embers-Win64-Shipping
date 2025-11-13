// 函数: sub_140aefca0
// 地址: 0x140aefca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x30)
void* r9 = arg1 + 0x18
int32_t rcx = 0
int32_t var_84 = 1
int32_t var_88 = 0
void* var_80 = r9
int32_t r8 = 0
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_140aefd48:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
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
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_74.d = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_74:4.d = r8
            var_88 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140aefd48
        
        var_74.d = r10

int32_t rdx_4 = *(arg1 + 0x30)
int128_t var_28 = 0xffffffff
int128_t var_38 = var_88.o
int32_t r12 = 0xffffffff << (rdx_4.b & 0x1f)
int32_t r9_2 = rdx_4 & 0xffffffe0
int32_t r8_3 = rdx_4 s>> 5
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = r12
var_74.d = rdx_4
int128_t var_68 = (arg1 + 8).o
int128_t var_58 = var_38

if (rdx_4 != r10)
    void* rax_11 = *(arg1 + 0x28)
    void* r11_1 = arg1 + 0x18
    
    if (rax_11 != 0)
        r11_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_8 = *(r11_1 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_8 != 0)
    label_140aefe22:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rdi_1
        
        if (rax_18 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_74.d = r9_2 - rdi_1 + 0x1f
        
        if (r9_2 - rdi_1 + 0x1f s> r10)
            var_74.d = r10
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r11_1 + (rcx_5 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_140aefe22
        
        var_74.d = r10

void* rax_22

while (true)
    int64_t rax_20 = sx.q(var_58:0xc.d)
    int64_t rcx_7 = var_68.q
    
    if (rax_20.d == (var_78_2.q u>> 0x20).d && var_58.q == arg1 + 0x18 && rcx_7 == arg1 + 8)
        return nullptr
    
    rax_22 = rax_20 * 0x158 + *rcx_7
    
    if (*(rax_22 + 0x64) == arg2)
        break
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)

return rax_22 + 0x10
