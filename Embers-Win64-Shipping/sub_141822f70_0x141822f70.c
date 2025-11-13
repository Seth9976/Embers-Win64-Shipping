// 函数: sub_141822f70
// 地址: 0x141822f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe55f0
EnterCriticalSection(&arg1[1])
int32_t r8 = 0
int32_t var_94 = 1
int32_t rcx_1 = 0
int32_t var_98 = 0
int32_t var_88 = 0xffffffff
int32_t r11 = arg1[0xb].d
void* var_90 = &arg1[8]
int64_t var_84 = 0

if (r11 != 0)
    void* rax_1 = arg1[0xa]
    void* r9_1 = &arg1[8]
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141823038:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx_1 += 0x20
            r8 += 1
            var_84:4.d = rcx_1
            var_98 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141823038
        
        var_84.d = r11

int32_t rdx_6 = arg1[0xb].d
int128_t var_38 = 0xffffffff
int32_t r13 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_2 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r13
var_84.d = rdx_6
int128_t var_78 = (&arg1[6]).o
int96_t var_68 = var_48:8.12

if (rdx_6 != r11)
    void* rax_11 = arg1[0xa]
    void* r10_1 = &arg1[8]
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_2) << 2)) & r13
    
    if (rdx_10 != 0)
    label_141823102:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rsi_1
        
        if (rax_18 == 0)
            rsi_1 = 0x20
        else
            rsi_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - rsi_1 + 0x1f
        
        if (r9_3 - rsi_1 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_6 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141823102
        
        var_84.d = r11

while (true)
    int32_t var_5c
    int64_t rax_20 = sx.q(var_5c)
    int64_t* rcx_8 = var_78.q
    
    if (rax_20.d == (var_88_2.q u>> 0x20).d && var_68.q == &arg1[8] && rcx_8 == &arg1[6])
        sub_140aee920(&arg1[6], 0)
        sub_141837120(&arg1[0x10], 0)
        sub_140865470(&arg1[0x1a], 0)
        
        if (arg1 != -8)
            LeaveCriticalSection(&arg1[1])
        
        sub_1405ae080(&arg1[0x1a])
        arg1[0x19].d = 0
        int64_t rcx_17 = arg1[0x18]
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        sub_1407547c0(&arg1[0x10], 0)
        int64_t rcx_19 = arg1[0x14]
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        int64_t rcx_20 = arg1[0x10]
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        arg1[0xf].d = 0
        int64_t rcx_21 = arg1[0xe]
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        sub_140aeeb60(&arg1[6], 0)
        int64_t rcx_23 = arg1[0xa]
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        int64_t rcx_24 = arg1[6]
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        DeleteCriticalSection(&arg1[1])
        *arg1 = &data_142d56fa0
        return &data_142d56fa0
    
    j_sub_140a74f90(*((rax_20 << 5) + *rcx_8 + 0x10))
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
