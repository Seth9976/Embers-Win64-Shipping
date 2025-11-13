// 函数: sub_14189ce60
// 地址: 0x14189ce60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
*arg1 = &data_142fe8620
arg1[1] = &data_142fe8658
sub_14077e140(&arg1[2], arg2)
arg1[0xc].d = arg2[0xa].d
void* rcx_1 = &arg1[0x1e]
*(arg1 + 0x64) = *(arg2 + 0x54)
arg1[0xe] = arg4
arg1[0xd] = arg3
arg1[0xf] = arg5
arg1[0x10] = arg6
arg1[0x11] = arg7
arg1[0x12].d = 0
*(arg1 + 0x94) = 0
arg1[0x14] = 0
arg1[0x16] = 0
arg1[0x1c] = 0
arg1[0x1d] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_7 = *(rcx_1 + 0x10)

if (rax_7 != 0)
    rcx_1 = rax_7

*rcx_1 = 0
*(rcx_1 + 8) = 0
void* rcx_2 = &arg1[0x28]
arg1[0x22].d = 0xffffffff
*(arg1 + 0x114) = 0
arg1[0x24] = 0
arg1[0x25].d = 0
arg1[0x26] = 0
arg1[0x27] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_8 = *(rcx_2 + 0x10)

if (rax_8 != 0)
    rcx_2 = rax_8

*rcx_2 = 0
*(rcx_2 + 8) = 0
void* rcx_3 = &arg1[0x32]
arg1[0x2c].d = 0xffffffff
*(arg1 + 0x164) = 0
arg1[0x2e] = 0
arg1[0x2f].d = 0
arg1[0x30] = 0
arg1[0x31] = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_9 = *(rcx_3 + 0x10)

if (rax_9 != 0)
    rcx_3 = rax_9

__builtin_memset(rcx_3, 0, 0x1c)
arg1[0x36].d = 0xffffffff
*(arg1 + 0x1b4) = 0
arg1[0x38] = 0
arg1[0x39].d = 0
__builtin_memset(&arg1[0x3a], 0, 0x20)
void* rcx_4 = &arg1[0x3e]
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_10 = *(rcx_4 + 0x10)

if (rax_10 != 0)
    rcx_4 = rax_10

*rcx_4 = 0
*(rcx_4 + 8) = 0
void* rcx_5 = &arg1[0x48]
arg1[0x42].d = 0xffffffff
*(arg1 + 0x214) = 0
arg1[0x44] = 0
arg1[0x45].d = 0
arg1[0x46] = 0
arg1[0x47] = 0
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax_11 = *(rcx_5 + 0x10)

if (rax_11 != 0)
    rcx_5 = rax_11

*rcx_5 = 0
*(rcx_5 + 8) = 0
arg1[0x4c].d = 0xffffffff
*(arg1 + 0x264) = 0
arg1[0x4e] = 0
arg1[0x4f].d = 0
int64_t rax_12 = j_sub_140a82f30(0x18)

if (rax_12 == 0)
    rax_12 = 0
else
    __builtin_memset(rax_12, 0, 0x18)

arg1[0x51] = rax_12
arg1[0x50] = rax_12
int64_t rax_13 = *arg9
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
(*(rax_13 + 0x18))(arg9, &var_98)
int32_t rcx_7 = 0
int32_t var_148 = 0
int64_t var_134 = 0
int32_t r8 = 0
int32_t rbx = *(arg8 + 0x28)
int32_t var_144 = 1
int32_t var_138 = 0xffffffff

if (rbx != 0)
    int32_t* rax_14 = *(arg8 + 0x20)
    int32_t* r9 = arg8 + 0x10
    
    if (rax_14 != 0)
        r9 = rax_14
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_4 = *r9
    
    if (rdx_4 != 0)
    label_14189d1ee:
        int32_t rax_20 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_20)
        int32_t var_144_1 = rax_20
        int32_t var_108_1 = temp0_2
        int32_t rax_21
        
        if (rax_20 == 0)
            rax_21 = 0x20
        else
            rax_21 = 0x1f - temp0_2
        
        var_134.d = r8 - rax_21 + 0x1f
        
        if (r8 - rax_21 + 0x1f s> rbx)
            var_134.d = rbx
    else
        while (true)
            int64_t rax_17 = sx.q(rcx_7)
            r8 += 0x20
            rcx_7 += 1
            var_134:4.d = r8
            var_148 = rcx_7
            
            if (rax_17.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_4 = r9[rax_17 + 1]
            var_138 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_14189d1ee
        
        var_134.d = rbx

int32_t rdx_5 = *(arg8 + 0x28)
int32_t var_114 = rdx_5
int32_t rdi_1 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_b8 = var_148.o
int32_t r8_3 = rdx_5 s>> 5
int32_t rcx_12 = rdx_5 & 0xffffffe0
int32_t var_128 = r8_3
int32_t var_118 = rdi_1
int32_t var_110 = rcx_12
int128_t var_a8 = 0xffffffff
int64_t var_c8 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_e8 = arg8.o
int128_t var_d8 = var_b8

if (rdx_5 != rbx)
    int32_t* rax_23 = *(arg8 + 0x20)
    int32_t* r9_1 = arg8 + 0x10
    
    if (rax_23 != 0)
        r9_1 = rax_23
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_9 = r9_1[sx.q(r8_3)] & rdi_1
    int32_t var_114_2
    
    if (rdx_9 != 0)
    label_14189d2dc:
        int32_t rax_30 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_30)
        int32_t var_104_1 = temp0_4
        int32_t r10_1
        
        if (rax_30 == 0)
            r10_1 = 0x20
        else
            r10_1 = 0x1f - temp0_4
        
        int32_t var_114_1 = rcx_12 - r10_1 + 0x1f
        
        if (rcx_12 - r10_1 + 0x1f s> rbx)
            var_114_2 = rbx
    else
        while (true)
            int64_t rax_27 = sx.q(r8_3)
            rcx_12 += 0x20
            r8_3 += 1
            int32_t var_110_1 = rcx_12
            int32_t var_128_1 = r8_3
            
            if (rax_27.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_9 = r9_1[rax_27 + 1]
            var_118 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_14189d2dc
        
        var_114_2 = rbx

while (true)
    int64_t rax_32 = sx.q(var_d8:0xc.d)
    int64_t* rdx_11 = var_e8.q
    
    if (rax_32.d == (var_118.q u>> 0x20).d && var_d8.q == arg8 + 0x10 && rdx_11 == arg8)
        int32_t var_50_1 = 0
        
        if (var_58 != 0)
            sub_140a74f90(var_58)
        
        int64_t var_90
        var_90.d = 0
        int32_t var_68_1 = 0xffffffff
        int32_t var_64_1 = 0
        int64_t var_88
        sub_14059a8e0(&var_88, 0)
        int64_t var_78
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        int64_t rcx_23 = var_98
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        sub_1405ae080(arg2)
        __security_check_cookie(rax_1 ^ &var_168)
        return arg1
    
    int64_t rcx_14 = rax_32 * 5
    int64_t rax_33 = *rdx_11
    int64_t* rbx_1 = rax_33 + (rcx_14 << 3)
    int64_t* rcx_15 = *(rax_33 + (rcx_14 << 3) + 0x10)
    
    if ((*(*rcx_15 + 0x210))(rcx_15, rbx_1, &var_98, &arg1[0x30], var_148, arg8 + 0x10, var_138)
            s> 0)
        int64_t rdi_2 = sx.q(arg1[0x3b].d)
        int32_t rax_36 = (rdi_2 + 1).d
        arg1[0x3b].d = rax_36
        
        if (rax_36 s> *(arg1 + 0x1dc))
            sub_1405c4e40(&arg1[0x3a])
        
        int64_t* rdi_4 = &arg1[0x3a][rdi_2 * 4]
        sub_140596d10(rdi_4, rbx_1)
        rdi_4[2] = rbx_1[2]
        void* rax_38 = rbx_1[3]
        rdi_4[3] = rax_38
        
        if (rax_38 != 0)
            *(rax_38 + 8) += 1
    
    var_d8:8.d &= not.d(var_e8:0xc.d)
    sub_14059bdd0(&var_e8:8)
