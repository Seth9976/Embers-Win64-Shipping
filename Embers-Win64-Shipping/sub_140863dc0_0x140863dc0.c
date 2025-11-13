// 函数: sub_140863dc0
// 地址: 0x140863dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140862820(arg2, arg1 + 0x168, 0, 0)
(*(*arg2 + 0x38))(arg2, arg1 + 0x460, 0, 0)
int32_t rcx_2 = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t r11 = *(arg1 + 0x4f8)
int32_t r8 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x4f0)
    void* r9_1 = arg1 + 0x4e0
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_4 = *r9_1
    
    if (rdx_4 != 0)
    label_140863e98:
        int32_t rax_8 = neg.d(rdx_4) & rdx_4
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
            int64_t rdx_5 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_84:4.d = r8
            var_98 = rcx_2
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_140863e98
        
        var_84.d = r11

int32_t rdx_6 = *(arg1 + 0x4f8)
int128_t var_38 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r12
var_84.d = rdx_6
int128_t var_78 = (arg1 + 0x4d0).o
int96_t var_68 = var_48:8.12

if (rdx_6 != r11)
    void* rax_11 = *(arg1 + 0x4f0)
    void* r10_1 = arg1 + 0x4e0
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_10 != 0)
    label_140863f62:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_7 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_7 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_140863f62
        
        var_84.d = r11

while (true)
    int32_t result_1
    int64_t result = sx.q(result_1)
    int64_t rcx_9 = var_78.q
    
    if (result.d == (var_88_2.q u>> 0x20).d && var_68.q == arg1 + 0x4e0 && rcx_9 == arg1 + 0x4d0)
        return result
    
    int64_t* rbx_4 = result * 0x50 + *rcx_9
    int64_t arg_8 = *rbx_4
    (*(*arg2 + 0x38))(arg2, &arg_8, 0, 0, var_98, arg1 + 0x4e0, var_88_2)
    sub_140849680(&rbx_4[1], arg2)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
