// 函数: sub_141ca24e0
// 地址: 0x141ca24e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int32_t var_cc = 0x80
int32_t var_c8 = 0xffffffff
int32_t rcx = 0
int32_t var_7c = 0x80
int64_t var_138
__builtin_memset(&var_138, 0, 0x6c)
int32_t r8 = 0
int32_t var_c4 = 0
int64_t var_b8 = 0
int32_t var_b0 = 0
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x2c)
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int16_t var_58 = 0
char var_56 = 0
int32_t var_78 = 0xffffffff
int32_t r11 = *(arg2 + 0x28)
int32_t var_158 = 0
int32_t var_154 = 1
int32_t* var_150 = arg2 + 0x10
int32_t var_148 = 0xffffffff
int64_t var_144 = 0

if (r11 != 0)
    int32_t* rax_2 = *(arg2 + 0x20)
    int32_t* r9_1 = arg2 + 0x10
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141ca2619:
        int32_t rax_9 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_154_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_144.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r11)
            var_144.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_144:4.d = r8
            var_158 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r9_1[rdx_3 + 1]
            var_148 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141ca2619
        
        var_144.d = r11

int32_t rdx_4 = *(arg2 + 0x28)
double zmm2[0x2] = var_148.o
double var_168[0x2] = zmm2
int32_t r15 = 0xffffffff << (rdx_4.b & 0x1f)
int128_t var_178 = var_158.o
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_188 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_148_1 = r15
var_144.d = rdx_4
int128_t var_1a8 = arg2.o
int128_t var_198 = var_178

if (rdx_4 != r11)
    int32_t* rax_12 = *(arg2 + 0x20)
    int32_t* r10_1 = arg2 + 0x10
    
    if (rax_12 != 0)
        r10_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_8 = r10_1[sx.q(r8_3)] & r15
    
    if (rdx_8 != 0)
    label_141ca26f2:
        int32_t rax_19 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t rbx_1
        
        if (rax_19 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_144.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r11)
            var_144.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = r10_1[rcx_5 + 1]
            var_148_1 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141ca26f2
        
        var_144.d = r11

uint32_t rdi_1 = (var_148_1.q u>> 0x20).d

while (true)
    int64_t rcx_7 = sx.q(var_198:0xc.d)
    int64_t rax_21 = var_1a8.q
    
    if (rcx_7.d == rdi_1 && var_198.q == arg2 + 0x10 && rax_21 == arg2)
        char rax_25 = (*(*arg1 + 0x40))(arg1, &var_138, arg3)
        sub_141c941c0(&var_138)
        __security_check_cookie(rax_1 ^ &var_1c8)
        return zx.q(rax_25)
    
    int64_t* rbx_4 = (rcx_7 << 5) + *rax_21
    sub_140596d10(&var_158, &rbx_4[1])
    var_148_1.b = 1
    int64_t var_f8
    sub_141c8f820(&var_f8, rbx_4, &var_158)
    
    if (var_148_1.b != 0)
        int64_t rcx_10 = var_158.q
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
    
    var_198:8.d &= not.d(var_1a8:0xc.d)
    sub_14059bdd0(&var_1a8:8)
