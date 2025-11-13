// 函数: sub_141993ad0
// 地址: 0x141993ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[5].d
int32_t r8 = 0
int32_t var_84 = 1
int32_t var_88 = 0
void* var_80 = &arg1[2]
int32_t r9 = 0
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (rbx != 0)
    void* rax_1 = arg1[4]
    void* r10_1 = &arg1[2]
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_141993b7a:
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
        
        var_74.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> rbx)
            var_74.d = rbx
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_74:4.d = r9
            var_88 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_141993b7a
        
        var_74.d = rbx

int32_t rdx_3 = arg1[5].d
int128_t var_28 = 0xffffffff
int32_t r15 = 0xffffffff << (rdx_3.b & 0x1f)
int128_t var_38 = var_88.o
int32_t r8_2 = rdx_3 s>> 5
int32_t r9_3 = rdx_3 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = r15
var_74.d = rdx_3
int128_t var_68 = arg1.o
int128_t var_58 = var_38

if (rdx_3 != rbx)
    void* rax_11 = arg1[4]
    void* r10_2 = &arg1[2]
    
    if (rax_11 != 0)
        r10_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_7 = *(r10_2 + (sx.q(r8_2) << 2)) & r15
    
    if (rdx_7 != 0)
    label_141993c42:
        int32_t rax_18 = neg.d(rdx_7) & rdx_7
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_74.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_74.d = rbx
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_7 = *(r10_2 + (rcx_6 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_141993c42
        
        var_74.d = rbx

while (true)
    int64_t rax_20 = sx.q(var_58:0xc.d)
    int64_t* rdx_8 = var_68.q
    
    if (rax_20.d == (var_78_2.q u>> 0x20).d && var_58.q == &arg1[2] && rdx_8 == arg1)
        return sub_1405ae080(arg1) __tailcall
    
    int64_t* rcx_9 = *(*rdx_8 + rax_20 * 0x18 + 8)
    
    if (rcx_9 != 0)
        (**rcx_9)(rcx_9, 1)
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
