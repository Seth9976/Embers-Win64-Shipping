// 函数: sub_141c46440
// 地址: 0x141c46440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg4)
bool cond:0 = arg5.d f!= 0f
int32_t var_98 = arg2
int32_t var_94 = arg3
int32_t var_90 = r14.d

if (cond:0)
    int32_t* var_88 = &var_98
    int32_t* var_80 = &arg5
    void arg_10
    sub_141c2d460(arg1 + 0x78, &arg_10, &var_88, nullptr)
    int64_t rax_25 = *(arg1 + 0xc8)
    *(r14 + rax_25) = 0
    return rax_25

sub_141c44d40(arg1 + 0x78, &var_98)
int32_t rcx_1 = 0
int32_t var_b4 = 1
int32_t var_b8 = 0
int32_t r8 = 0
int32_t* var_b0 = arg1 + 0x88
*(r14 + *(arg1 + 0xc8)) = 1
int32_t r11 = *(arg1 + 0xa0)
int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0

if (r11 != 0)
    int32_t* rax_1 = *(arg1 + 0x98)
    int32_t* r9 = arg1 + 0x88
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_141c46518:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_a4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_a4:4.d = r8
            var_b8 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r9[rdx_4 + 1]
            int32_t var_a8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141c46518
        
        var_a4.d = r11

int32_t rdx_5 = *(arg1 + 0xa0)
int128_t var_38 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_5.b & 0x1f)
uint128_t var_48 = var_b8.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_2 = rdx_5 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_a8_2 = r12
var_a4.d = rdx_5
uint128_t var_78 = (arg1 + 0x78).o
uint128_t var_68 = var_48

if (rdx_5 != r11)
    int32_t* rax_11 = *(arg1 + 0x98)
    int32_t* r10_1 = arg1 + 0x88
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = r10_1[sx.q(r8_3)] & r12
    
    if (rdx_9 != 0)
    label_141c465e2:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_a4.d = r9_2 - rbx_1 + 0x1f
        
        if (r9_2 - rbx_1 + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = r10_1[rcx_6 + 1]
            var_a8_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141c465e2
        
        var_a4.d = r11

while (true)
    int64_t rax_24 = sx.q(var_68:0xc.d)
    int64_t* rdx_10 = var_78.q
    
    if (rax_24.d == (var_a8_2.q u>> 0x20).d && var_68.q == arg1 + 0x88 && rdx_10 == arg1 + 0x78)
        return rax_24
    
    if (_mm_bsrli_si128(*(*rdx_10 + rax_24 * 0x18), 8).d == r14.d)
        rax_24 = *(arg1 + 0xc8)
        *(r14 + rax_24) = 0
        return rax_24
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
