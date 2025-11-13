// 函数: sub_140bd83c0
// 地址: 0x140bd83c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = *(arg1 + 0x1d8)

for (int64_t r14_2 = (sx.q(*(arg1 + 0x1e0)) << 4) + i; i != r14_2; i += 0x10)
    (*(*arg2 + 0x38))(arg2, i, arg1, 0)

int32_t rcx_1 = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t rdi = *(arg1 + 0x158)
int32_t r8_2 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (rdi != 0)
    void* rax_2 = *(arg1 + 0x150)
    void* r9_1 = arg1 + 0x140
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_140bd84b8:
        int32_t rax_9 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_94_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_84.d = r8_2 - rax_10 + 0x1f
        
        if (r8_2 - rax_10 + 0x1f s> rdi)
            var_84.d = rdi
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8_2 += 0x20
            rcx_1 += 1
            var_84:4.d = r8_2
            var_98 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140bd84b8
        
        var_84.d = rdi

int32_t rdx_5 = *(arg1 + 0x158)
int128_t var_38 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_5 & 0x1f).b
int128_t var_48 = var_98.o
int32_t r8_5 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r12
var_84.d = rdx_5
int128_t var_78 = (arg1 + 0x130).o
int96_t var_68 = var_48:8.12
uint64_t rcx_4

if (rdx_5 != rdi)
    void* rax_12 = *(arg1 + 0x150)
    void* r10_1 = arg1 + 0x140
    
    if (rax_12 != 0)
        r10_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_5) << 2)) & r12
    
    if (rdx_9 != 0)
    label_140bd8582:
        int32_t rax_19 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t r11_1
        
        if (rax_19 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rdi)
            var_84.d = rdi
    else
        while (true)
            rcx_4 = sx.q(r8_5)
            r9_3 += 0x20
            r8_5 += 1
            
            if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_4 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140bd8582
        
        var_84.d = rdi

int64_t r10_2

while (true)
    int32_t var_5c
    int64_t r8_6 = sx.q(var_5c)
    int64_t* rdx_10 = var_78.q
    
    if (r8_6.d != (var_88_2.q u>> 0x20).d || var_68.q != arg1 + 0x140 || rdx_10 != arg1 + 0x130)
        rcx_4.b = 1
    else
        rcx_4.b = 0
    
    r10_2 = *(*arg2 + 0x38)
    
    if (rcx_4.b == 0)
        break
    
    r10_2(arg2, *rdx_10 + ((r8_6 * 3 + 1) << 3), arg1, 0, var_98, arg1 + 0x140, var_88_2)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)

r10_2(arg2, arg1 + 0xd8, arg1, 0, var_98, arg1 + 0x140, var_88_2)
(*(*arg2 + 0x38))(arg2, arg1 + 0xe0, arg1, 0)

if ((*(*arg2 + 8))(arg2) != 0)
    int64_t rcx_13 = *(arg1 + 0x118)
    
    if (rcx_13 != 0)
        (*(arg1 + 0xc0))(rcx_13, arg2)
else
    (*(*arg2 + 0x38))(arg2, arg1 + 0x118, arg1, 0)

return sub_140594850() __tailcall
