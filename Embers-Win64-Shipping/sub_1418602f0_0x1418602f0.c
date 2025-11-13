// 函数: sub_1418602f0
// 地址: 0x1418602f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
*arg1 = &data_142fe7ef0
int64_t* r14 = arg2
arg1[2] = 0
arg1[9] = 0
arg1[0xa] = 0
void* rcx = &arg1[3]
__builtin_memset(&arg1[1], 0, 0x4c)
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

__builtin_memset(rcx, 0, 0x1c)
arg1[7].d = 0xffffffff
arg1[0xb] = 0
arg1[0xc] = 0
InitializeCriticalSection(&arg1[0xd])
SetCriticalSectionSpinCount(&arg1[0xd], 0xfa0)
int32_t r10 = *(arg3 + 0x28)
int32_t var_c0 = 0
int32_t var_bc = 1
int32_t rcx_3 = 0
void* var_b8 = arg3 + 0x10
int32_t var_b0 = 0xffffffff
int32_t var_ac = 0
int32_t var_a8 = 0

if (r10 != 0)
    void* rax_1 = *(arg3 + 0x20)
    void* r8 = arg3 + 0x10
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r8
    int32_t var_ac_2
    
    if (rdx_3 != 0)
    label_141860437:
        int32_t rax_7 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_bc_1 = rax_7
        int32_t var_68_1 = temp0_2
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        int32_t var_ac_1 = rcx_3 - rax_8 + 0x1f
        
        if (rcx_3 - rax_8 + 0x1f s> r10)
            var_ac_2 = r10
    else
        while (true)
            int64_t rax_4 = sx.q(rsi)
            rcx_3 += 0x20
            rsi += 1
            int32_t var_a8_1 = rcx_3
            var_c0 = rsi
            
            if (rax_4.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_3 = *(r8 + (rax_4 << 2) + 4)
            int32_t var_b0_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141860437
        
        var_ac_2 = r10

void* r10_1 = arg3
int32_t rbx_1 = *(arg3 + 0x28)
int32_t rdx_5 = *(r10_1 + 0x28)
int32_t r8_2 = rdx_5 s>> 5
int32_t rsi_1 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_78 = 0xffffffff
int32_t rcx_8 = rdx_5 & 0xffffffe0
void* var_90
var_90.d = r8_2
int64_t var_40 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_88
var_88:8.d = rsi_1
var_88:0xc.d = rdx_5
var_78.d = rcx_8
int64_t* var_60 = r10_1.o.q
int128_t var_50 = var_c0.o

if (rdx_5 != rbx_1)
    void* rax_10 = *(arg3 + 0x20)
    void* r9_3 = arg3 + 0x10
    
    if (rax_10 != 0)
        r9_3 = rax_10
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx_1 - 1)
    int32_t rdx_9 = *(r9_3 + (sx.q(r8_2) << 2)) & rsi_1
    
    if (rdx_9 != 0)
    label_141860519:
        int32_t rax_17 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
        int32_t var_64_1 = temp0_4
        int32_t r11_1
        
        if (rax_17 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_88:0xc.d = rcx_8 - r11_1 + 0x1f
        
        if (rcx_8 - r11_1 + 0x1f s> rbx_1)
            var_88:0xc.d = rbx_1
    else
        while (true)
            int64_t rax_14 = sx.q(r8_2)
            rcx_8 += 0x20
            r8_2 += 1
            var_78.d = rcx_8
            var_90.d = r8_2
            
            if (rax_14.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_9 = *(r9_3 + (rax_14 << 2) + 4)
            var_88:8.d = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141860519
        
        var_88:0xc.d = rbx_1
    
    r10_1 = arg3

while (true)
    int64_t rax_19 = sx.q(var_50:0xc.d)
    
    if (rax_19.d == (var_88:8.q u>> 0x20).d && var_50.q == arg3 + 0x10 && var_60 == r10_1)
        int32_t rax_28 = arg1[0xc].d
        int128_t* r10_4 = arg1[0xb]
        int32_t r8_5 = rax_28 - 1
        int32_t temp4
        int32_t temp5
        temp4:temp5 = sx.q(rax_28)
        int32_t i_2 = (temp5 - temp4) s>> 1
        
        if (i_2 s> 0)
            int128_t* rdx_17 = r10_4
            uint64_t i_1 = zx.q(i_2)
            uint64_t i
            
            do
                int128_t* rcx_21 = &r10_4[sx.q(r8_5)]
                
                if (rdx_17 != rcx_21)
                    int128_t zmm1 = *rdx_17
                    *rdx_17 = *rcx_21
                    *rcx_21 = zmm1
                
                rdx_17 = &rdx_17[1]
                r8_5 -= 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        return arg1
    
    int64_t r8_3 = *r14
    void* rax_20 = (*(r8_3 + 0x68))(r14, *var_60 + rax_19 * 0x18, r8_3)
    
    if (rax_20 != 0)
        int128_t* rbx_2 = *(rax_20 + 0x48)
        void* r14_1 = rbx_2 + sx.q(*(rax_20 + 0x50)) * 0x18
        
        while (rbx_2 != r14_1)
            int32_t* rax_23 = sub_14185c600(&arg1[1], sub_140a6b260(rbx_2, 0x10), rbx_2)
            *rax_23 += 1
            int64_t rsi_2 = sx.q(arg1[0xc].d)
            int32_t rax_24 = (rsi_2 + 1).d
            arg1[0xc].d = rax_24
            
            if (rax_24 s> *(arg1 + 0x64))
                sub_1405a4f90(&arg1[0xb])
            
            int128_t zmm0 = *rbx_2
            rbx_2 += 0x18
            *(arg1[0xb] + rsi_2 * 0x10) = zmm0
        
        r14 = arg2
    
    int32_t var_54
    var_50:8.d &= not.d(var_54)
    void var_58
    sub_14059bdd0(&var_58)
    r10_1 = arg3
