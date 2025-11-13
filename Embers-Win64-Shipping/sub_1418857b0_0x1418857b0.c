// 函数: sub_1418857b0
// 地址: 0x1418857b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
*arg2 = 0
arg2[1] = 0
EnterCriticalSection(arg1 + 0x98)
sub_14185c850(arg1 + 0xc0, arg2)
int32_t rcx_2 = 0
int64_t var_d4 = 0
int32_t var_e8 = 0
int32_t var_e4 = 1
int32_t r8 = 0
int32_t* var_e0 = arg1 + 0x158
int32_t rsi = *(arg1 + 0x170)
int32_t var_d8 = 0xffffffff

if (rsi != 0)
    int32_t* rax_2 = *(arg1 + 0x168)
    int32_t* r9_1 = arg1 + 0x158
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rsi - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_14188589a:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_e4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_d4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> rsi)
            var_d4.d = rsi
    else
        while (true)
            int64_t rax_5 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_d4:4.d = r8
            var_e8 = rcx_2
            
            if (rax_5.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_3 = r9_1[rax_5 + 1]
            int32_t var_d8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14188589a
        
        var_d4.d = rsi

int32_t rdx_4 = *(arg1 + 0x170)
void* var_98 = arg1 + 0x148
var_d4.d = rdx_4
int32_t r14 = 0xffffffff << (rdx_4.b & 0x1f)
int128_t var_90 = var_e8.o
int32_t r8_3 = rdx_4 s>> 5
int128_t zmm0 = var_98.o
int32_t rcx_7 = rdx_4 & 0xffffffe0
int32_t var_d8_2 = r14
int128_t var_80 = 0xffffffff
int64_t var_a8 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t zmm1 = var_90
int128_t var_c8 = zmm0
int128_t var_b8 = zmm1

if (rdx_4 != rsi)
    int32_t* rax_11 = *(arg1 + 0x168)
    int32_t* r9_2 = arg1 + 0x158
    
    if (rax_11 != 0)
        r9_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rsi - 1)
    int32_t rdx_8 = r9_2[sx.q(r8_3)] & r14
    
    if (rdx_8 != 0)
    label_141885964:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_d4.d = rcx_7 - r11_1 + 0x1f
        
        if (rcx_7 - r11_1 + 0x1f s> rsi)
            var_d4.d = rsi
    else
        while (true)
            int64_t rax_15 = sx.q(r8_3)
            rcx_7 += 0x20
            r8_3 += 1
            
            if (rax_15.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_8 = r9_2[rax_15 + 1]
            var_d8_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141885964
        
        var_d4.d = rsi

while (true)
    int64_t rax_20 = sx.q(var_b8:0xc.d)
    int64_t* rdx_10 = var_c8.q
    
    if (rax_20.d == (var_d8_2.q u>> 0x20).d && var_b8.q == arg1 + 0x158 && rdx_10 == arg1 + 0x148)
        if (arg1 != -0x98)
            LeaveCriticalSection(arg1 + 0x98)
        
        __security_check_cookie(rax_1 ^ &var_108)
        return arg2
    
    sub_140596d10(&var_98, *rdx_10 + rax_20 * 0x18)
    __builtin_memset(&var_90:8, 0, 0x25)
    int64_t var_58_1 = 0
    int64_t var_60_1 = 0
    sub_140b3da80(arg1 + 0x198, &var_80:8)
    int64_t rsi_1 = sx.q(arg2[1].d)
    int32_t rax_22 = (rsi_1 + 1).d
    arg2[1].d = rax_22
    
    if (rax_22 s> *(arg2 + 0xc))
        sub_140775520(arg2)
    
    int64_t rax_23 = *arg2
    int64_t rcx_13 = rsi_1 * 9
    *(rax_23 + (rcx_13 << 3)) = 0
    void** rdx_14 = rax_23 + (rcx_13 << 3)
    *rdx_14 = var_98
    int32_t rax_25 = var_90.d
    var_98 = nullptr
    rdx_14[1].d = rax_25
    *(rdx_14 + 0xc) = var_90:4.d
    var_90.q = 0
    rdx_14[2] = var_90:8.q
    rdx_14[3] = var_80.q
    *(rdx_14 + 0x20) = var_80
    int32_t var_68
    rdx_14[6].d = var_68
    char var_64
    *(rdx_14 + 0x34) = var_64
    rdx_14[7] = 0
    rdx_14[7] = var_60_1
    int64_t var_60_2 = 0
    rdx_14[8].d = var_58_1.d
    *(rdx_14 + 0x44) = var_58_1:4.d
    int64_t var_58_2 = 0
    
    if (var_60_2 != 0)
        sub_140a74f90(var_60_2)
    
    void* rcx_15 = var_98
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    var_b8:8.d &= not.d(var_c8:0xc.d)
    sub_14059bdd0(&var_c8:8)
