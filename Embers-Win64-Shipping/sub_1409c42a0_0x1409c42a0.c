// 函数: sub_1409c42a0
// 地址: 0x1409c42a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_94 = 1
int32_t rbx = *(arg1 + 0xa0)
void* r9 = arg1 + 0x88
int32_t rcx = 0
void* var_90 = r9
int32_t var_98 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0
int32_t r8 = 0

if (rbx != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_1409c4348:
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
        
        if (r8 - rax_9 + 0x1f s> rbx)
            var_84.d = rbx
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1409c4348
        
        var_84.d = rbx

int32_t rdx_4 = *(arg1 + 0xa0)
int32_t r15 = *(arg1 + 0xa0)
int128_t var_38 = 0xffffffff
int128_t var_48 = var_98.o
int32_t r12 = 0xffffffff << (rdx_4.b & 0x1f)
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_2 = rdx_4 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r12
var_84.d = rdx_4
int128_t var_78 = (arg1 + 0x78).o
int96_t var_68 = var_48:8.12

if (rdx_4 != r15)
    void* rax_11 = *(arg1 + 0x98)
    void* r10_1 = arg1 + 0x88
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r15 - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_8 != 0)
    label_1409c4422:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_84.d = r9_2 - r11_1 + 0x1f
        
        if (r9_2 - r11_1 + 0x1f s> r15)
            var_84.d = r15
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1409c4422
        
        var_84.d = r15

while (true)
    int64_t rcx_7 = var_68.q
    int32_t var_5c
    
    if (var_5c == (var_88_2.q u>> 0x20).d && rcx_7 == arg1 + 0x88 && var_78.q == arg1 + 0x78)
        *arg2 = data_143a1c6c4
        return arg2
    
    int32_t rdx_9 = data_143a1c6c4
    
    if (var_5c s< *(rcx_7 + 0x18))
        rdx_9 = var_5c
    
    if (*(*(arg1 + 0x78) + sx.q(rdx_9) * 0x48) == arg3)
        *arg2 = rdx_9
        return arg2
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
