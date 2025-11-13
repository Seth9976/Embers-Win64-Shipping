// 函数: sub_141883000
// 地址: 0x141883000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_178 = 0
int64_t var_170 = 0
int64_t arg_10 = 0
void** const var_118
memset(&var_118, 0, 0x90)
sub_140b4c2a0(&var_118)
int64_t var_88 = 0
var_118 = &data_142d6ad48
int64_t* var_80 = &var_178
int64_t var_78 = 0
sub_140b552b0(&var_118, 1)
var_118[0x1b](&var_118, 0)
int32_t arg_8 = *(arg1 + 0xb0) - *(arg1 + 0xdc)
int64_t* var_110
int32_t* rdx_1 = *var_110
char var_ef

if (&rdx_1[1] u> var_110[1])
    int32_t* rdx_2 = &arg_8
    void** const* rcx_5 = &var_118
    
    if ((var_ef & 0x20) != 0)
        sub_140b54070(rcx_5, rdx_2, arg2)
    else
        var_118[0x2a](rcx_5, rdx_2, 4)
else
    arg_8 = *rdx_1
    *var_110 += 4

int32_t var_164 = 1
int32_t rbx = *(arg1 + 0xd0)
void* var_160 = arg1 + 0xb8
int32_t rcx_6 = 0
int32_t var_168 = 0
int32_t r8 = 0
int32_t var_158 = 0xffffffff
int64_t var_154 = 0

if (rbx != 0)
    void* rax_6 = *(arg1 + 0xc8)
    void* r9_1 = arg1 + 0xb8
    
    if (rax_6 != 0)
        r9_1 = rax_6
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_14188316b:
        int32_t rax_13 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
        int32_t var_164_1 = rax_13
        int32_t rax_14
        
        if (rax_13 == 0)
            rax_14 = 0x20
        else
            rax_14 = 0x1f - temp0_2
        
        var_154.d = r8 - rax_14 + 0x1f
        
        if (r8 - rax_14 + 0x1f s> rbx)
            var_154.d = rbx
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_6)
            r8 += 0x20
            rcx_6 += 1
            var_154:4.d = r8
            var_168 = rcx_6
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_158_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_14188316b
        
        var_154.d = rbx

int32_t rdx_7 = *(arg1 + 0xd0)
int128_t var_50 = 0xffffffff
int32_t r15 = 0xffffffff << (rdx_7.b & 0x1f)
int128_t var_60 = var_168.o
int32_t r8_3 = rdx_7 s>> 5
int32_t r9_3 = rdx_7 & 0xffffffe0
int64_t var_128 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_158_2 = r15
var_154.d = rdx_7
arg2.o = var_60
int128_t var_148 = (arg1 + 0xa8).o
int128_t var_138 = arg2.o

if (rdx_7 != rbx)
    void* rax_16 = *(arg1 + 0xc8)
    void* r10_1 = arg1 + 0xb8
    
    if (rax_16 != 0)
        r10_1 = rax_16
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_11 = *(r10_1 + (sx.q(r8_3) << 2)) & r15
    
    if (rdx_11 != 0)
    label_141883243:
        int32_t rax_23 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_23)
        int32_t r11_1
        
        if (rax_23 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_154.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_154.d = rbx
    else
        while (true)
            int64_t rcx_11 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_11.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r10_1 + (rcx_11 << 2) + 4)
            var_158_2 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_141883243
        
        var_154.d = rbx

while (true)
    int64_t rax_25 = sx.q(var_138:0xc.d)
    int64_t* rdx_12 = var_148.q
    
    if (rax_25.d == (var_158_2.q u>> 0x20).d && var_138.q == arg1 + 0xb8 && rdx_12 == arg1 + 0xa8)
        uint32_t count = *(arg1 + 0xa0)
        
        if (count != 0)
            int32_t rax_34 = var_170.d
            int32_t rdx_16 = rax_34 + count
            
            if (rdx_16 s> var_170:4.d)
                sub_1405c5510(&var_178, rdx_16)
                rax_34 = var_170.d
            
            memcpy(sx.q(rax_34) + var_178, *(arg1 + 0x98), count)
            var_170.d += count
        
        if (arg1 + 0x98 != &var_178)
            int64_t rcx_21 = *(arg1 + 0x98)
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            *(arg1 + 0x98) = var_178
            *(arg1 + 0xa0) = var_170.d
            *(arg1 + 0xa4) = var_170:4.d
            int64_t var_170_1 = 0
            var_178 = 0
        
        void** result = sub_140b4cb40(&var_118)
        int64_t rcx_23 = var_178
        
        if (rcx_23 == 0)
            return result
        
        return sub_140a74f90(rcx_23)
    
    void* rdx_13 = *rdx_12 + rax_25 * 0x14
    var_118[0x28](&var_118, rdx_13)
    int32_t* rdx_14 = *var_110
    
    if (&rdx_14[1] u> var_110[1])
        void** const* rcx_16 = &var_118
        
        if ((var_ef & 0x20) != 0)
            sub_140b54070(rcx_16, rdx_13 + 8, arg2)
        else
            var_118[0x2a](rcx_16, rdx_13 + 8, 4)
    else
        *(rdx_13 + 8) = *rdx_14
        *var_110 += 4
    
    var_138:8.d &= not.d(var_148:0xc.d)
    sub_14059bdd0(&var_148:8)
