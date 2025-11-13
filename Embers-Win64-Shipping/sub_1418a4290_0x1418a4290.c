// 函数: sub_1418a4290
// 地址: 0x1418a4290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int32_t var_94 = 1
__builtin_memset(arg2, 0, 0x1c)
int64_t* r8 = &arg2[2]
*(r8 + 0x1c) = 0x80
int32_t rcx = 0
int64_t* rax = r8[2]
int32_t var_98 = 0
int32_t* var_90 = arg1 + 0x58

if (rax != 0)
    r8 = rax

int32_t var_88 = 0xffffffff
int32_t var_84 = 0
int32_t var_80 = 0
*r8 = 0
r8[1] = 0
arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
arg2[8] = 0
arg2[9].d = 0
int32_t r11 = *(arg1 + 0x70)

if (r11 != 0)
    int32_t* rax_1 = *(arg1 + 0x68)
    int32_t* r8_1 = arg1 + 0x58
    
    if (rax_1 != 0)
        r8_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r8_1
    int32_t var_84_2
    
    if (rdx_2 != 0)
    label_1418a4378:
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
        
        int32_t var_84_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_84_2 = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r9)
            rcx += 0x20
            r9 += 1
            int32_t var_80_1 = rcx
            var_98 = r9
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r8_1[rdx_3 + 1]
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1418a4378
        
        var_84_2 = r11

int32_t rdx_5 = *(arg1 + 0x70)
int32_t r12 = 0xffffffff << (rdx_5.b & 0x1f)
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_2 = rdx_5 & 0xffffffe0
int128_t var_60 = 0xffffffff
int64_t var_30 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_70
var_70:8.d = r12
var_70:0xc.d = rdx_5
int128_t var_50 = (arg1 + 0x48).o
int128_t var_40 = var_98.o

if (rdx_5 != r11)
    int32_t* rax_11 = *(arg1 + 0x68)
    int32_t* r10_1 = arg1 + 0x58
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = r10_1[sx.q(r8_3)] & r12
    
    if (rdx_9 != 0)
    label_1418a4442:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_70:0xc.d = r9_2 - rbx_1 + 0x1f
        
        if (r9_2 - rbx_1 + 0x1f s> r11)
            var_70:0xc.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = r10_1[rcx_5 + 1]
            var_70:8.d = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_1418a4442
        
        var_70:0xc.d = r11

while (true)
    int64_t rax_20 = sx.q(var_40:0xc.d)
    int64_t* rdx_10 = var_50.q
    
    if (rax_20.d == (var_70:8.q u>> 0x20).d && var_40.q == arg1 + 0x58 && rdx_10 == arg1 + 0x48)
        return arg2
    
    int64_t rcx_7 = rax_20 * 3
    int64_t rax_21 = *rdx_10
    int32_t* rdx_11 = rax_21 + (rcx_7 << 3)
    
    if (*(rax_21 + (rcx_7 << 3) + 8) s> 0)
        int32_t arg_8 = (*(rdx_11 + 8)).d
        sub_1409fa280(arg2, rdx_11, &arg_8)
    
    var_40:8.d &= not.d(var_50:0xc.d)
    sub_14059bdd0(&var_50:8)
