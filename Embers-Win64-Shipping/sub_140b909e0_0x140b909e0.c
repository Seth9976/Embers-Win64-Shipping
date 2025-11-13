// 函数: sub_140b909e0
// 地址: 0x140b909e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg2 + 0x28)
int32_t r10 = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0
int32_t r8 = 0

if (r11 != 0)
    void* rax_1 = *(arg2 + 0x20)
    void* r9 = arg2 + 0x10
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r9
    
    if (rcx != 0)
    label_140b90a9a:
        int32_t rax_8 = neg.d(rcx) & rcx
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
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r10)
            r8 += 0x20
            r10 += 1
            var_84:4.d = r8
            var_98 = r10
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r9 + (rcx_1 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_140b90a9a
        
        var_84.d = r11

int32_t rdx_2 = *(arg2 + 0x28)
int128_t var_38 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_2.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_2 s>> 5
int32_t r9_2 = rdx_2 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r12
var_84.d = rdx_2
int128_t result = arg2.o
int128_t result_1 = result
int96_t var_68 = var_48:8.12

if (rdx_2 != r11)
    void* rax_11 = *(arg2 + 0x20)
    void* r10_1 = arg2 + 0x10
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_6 = *(r10_1 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_6 != 0)
    label_140b90b62:
        int32_t rax_18 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_84.d = r9_2 - rbx_1 + 0x1f
        
        if (r9_2 - rbx_1 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r10_1 + (rcx_6 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_140b90b62
        
        var_84.d = r11

while (true)
    int32_t var_5c
    int64_t rdx_7 = sx.q(var_5c)
    int64_t rcx_8 = result_1.q
    
    if (rdx_7.d == (var_88_2.q u>> 0x20).d && var_68.q == arg2 + 0x10 && rcx_8 == arg2)
        return result
    
    (*(*arg1 + 0x38))(arg1, (rdx_7 << 4) + *rcx_8, arg3, arg4, var_98, arg2 + 0x10, var_88_2)
    var_68:8.d &= not.d(result_1:0xc.d)
    sub_14059bdd0(&result_1:8)
