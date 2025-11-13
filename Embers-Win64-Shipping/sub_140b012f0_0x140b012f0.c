// 函数: sub_140b012f0
// 地址: 0x140b012f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_244 = 1
void* var_218 = nullptr
int32_t r11 = *(arg1 + 0x30)
void* r9 = arg1 + 0x18
int32_t i_5 = 0
int32_t r12 = 0
int32_t var_20c = 0
int32_t r14 = 0
int32_t var_248 = 0
int32_t r15 = 0
void* var_240 = r9
void* rsi = nullptr
int32_t var_238 = 0xffffffff
int32_t i_4 = 0
int64_t var_234 = 0
int32_t r8 = 0
int32_t rcx = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_140b013bb:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_244_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_234.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_234.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_234:4.d = rcx
            var_248 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_238 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140b013bb
        
        var_234.d = r11

int128_t zmm3 = var_238.o
void* var_190 = arg1 + 8
int128_t zmm0 = var_248.o
int128_t var_1a0 = zmm3
int16_t var_1c0 = 0
void* rax_11 = zmm0.q
int128_t var_1e8 = zmm0
int512_t zmm1
zmm1.o = zmm3
int128_t var_1f8 = (arg1 + 8).o
zmm1.o = _mm_unpackhi_pd(zmm1.o, zmm3.q)
zmm0.q = (zmm1.o).q
int128_t var_1d8 = zmm0
int64_t arg_20

if ((zmm3.q u>> 0x20).d s< *(rax_11 + 0x18))
    int32_t i = var_1e8:0xc.d
    
    do
        int64_t* r13_1 = var_1f8.q
        int64_t* rsi_1 = sx.q(i) * 0x158
        int64_t rax_13 = *r13_1
        uint64_t var_258 = 0
        int32_t rbx_1 = *(rsi_1 + rax_13 + 8)
        i_5.q = *(rsi_1 + rax_13)
        
        if (rbx_1 != 0)
            sub_1405a4c70(&var_258, rbx_1, 0)
            memcpy(var_258, i_5.q, rbx_1 * 2)
        else
            int32_t var_24c_1 = 0
        
        void* rbx_2 = *r13_1
        void** const var_e8
        sub_140b4c2a0(&var_e8)
        char var_be = var_be | 0x80
        var_e8 = &data_142e716f8
        int64_t var_58_1 = 0
        int64_t var_50_1 = 0
        sub_140ae8b40(&var_e8, rbx_2 + 0x10 + rsi_1, sub_140a1d9d0(&var_e8, &var_258, zmm1))
        arg_20 = var_58_1
        int32_t rax_16
        
        if (rbx_1 == 0)
            rax_16 = 0
        else
            rax_16 = rbx_1 - 1
        
        int64_t var_208 = 0
        int32_t var_200_1 = 0
        
        if (r12 s>= rax_16)
            rax_16 = r12
        
        r12 = rax_16
        sub_140a20c40(&var_208, var_58_1.d)
        int32_t rax_18
        
        if (var_200_1 == 0)
            rax_18 = 0
        else
            rax_18 = var_200_1 - 1
        
        int64_t rcx_11 = var_208
        
        if (r14 s>= rax_18)
            rax_18 = r14
        
        r14 = rax_18
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        var_248.q = 0
        int32_t var_240_1 = 0
        sub_140a20c40(&var_248, var_50_1.d)
        int32_t rax_20
        
        if (var_240_1 == 0)
            rax_20 = 0
        else
            rax_20 = var_240_1 - 1
        
        int64_t rcx_13 = var_248.q
        
        if (r15 s>= rax_20)
            rax_20 = r15
        
        r15 = rax_20
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        int64_t i_6 = sx.q(i_4)
        i_4 = (i_6 + 1).d
        
        if (i_4 s> var_20c)
            sub_1405c4e40(&var_218)
            r15 = rax_20
            r14 = rax_18
            r12 = rax_16
        
        rsi = var_218
        int64_t rbx_3 = i_6 << 5
        int64_t* rbx_4 = rbx_3 + rsi
        
        if (rbx_3 != neg.q(rsi))
            *rbx_4 = 0
            i_5.q = var_258
            rbx_4[1].d = rbx_1
            
            if (rbx_1 != 0)
                sub_1405a4c70(rbx_4, rbx_1, 0)
                memcpy(*rbx_4, i_5.q, rbx_1 * 2)
            else
                __builtin_memset(rbx_4 + 0xc, 0, 0x14)
            
            rsi = var_218
        
        zmm1 = sub_140b4cb40(&var_e8)
        uint64_t rcx_18 = var_258
        
        if (rcx_18 != 0)
            zmm1 = sub_140a74f90(rcx_18)
        
        var_1e8:8.d &= not.d(var_1f8:0xc.d)
        sub_14059bdd0(&var_1f8:8)
        i = var_1e8:0xc.d
    while (i s< *(var_1e8.q + 0x18))
    
    i_5 = i_4
    
    if (var_1c0.b != 0 && var_1c0:1.b != 0)
        sub_140aed150(arg1 + 8, *(arg1 + 0x10) - *(arg1 + 0x3c), 1)

void** var_188
sub_140b4c2a0(&var_188)
char var_15e
char var_15e_1 = var_15e | 0x80
var_188 = &data_142e716f8
int64_t var_f8 = 0
int64_t var_f0 = 0
sub_1409563f0(&var_188, sx.q(*(arg1 + 0x10)) * 0x158, sx.q(*(arg1 + 0x14)) * 0x158)
var_188[1](&var_188, zx.q(*(arg1 + 0x30) + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0x34) + 0x1f) u>> 5 << 2)
int64_t rdx_23 = sx.q(*(arg1 + 0x50)) << 2
var_188[1](&var_188, rdx_23, rdx_23)
int64_t* rbx_6 = arg2
int64_t r13_3 = var_f8
arg_20 = var_f0
sub_140b1f640(rbx_6, u"Config cache memory usage:")
wchar16 const* const var_260 = u"MaxBytes"
int32_t var_268 = r15 + 0xa
wchar16 const* const var_270 = u"NumBytes"
int32_t var_278 = r14 + 0xa
sub_140b1f700(rbx_6, u"%*s %*s %*s", zx.q(r12))
sub_140ae5b50(rsi, i_4, arg1.b)
int64_t rax_33

if (i_4 s<= 0)
    rax_33 = arg_20
else
    void* rbx_7 = rsi + 0x10
    uint64_t i_3 = zx.q(i_4)
    uint64_t i_1
    
    do
        if (*(rbx_7 - 8) != 0)
            *(rbx_7 - 0x10)
        
        var_260.d = *(rbx_7 + 8)
        int32_t var_268_1 = r15 + 0xa
        var_270.d = *rbx_7
        int32_t var_278_1 = r14 + 0xa
        sub_140b1f700(arg2, u"%*s %*u %*u", zx.q(r12))
        rax_33 = arg_20 + *(rbx_7 + 8)
        r13_3 += *rbx_7
        rbx_7 += 0x20
        arg_20 = rax_33
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    i_4 = i_5
    rsi = var_218
    rbx_6 = arg2

var_260.d = rax_33.d
int32_t var_268_2 = r15 + 0xa
var_270.d = r13_3.d
int32_t var_278_2 = r14 + 0xa
sub_140b1f700(rbx_6, u"%*s %*u %*u", zx.q(r12))
void** result = sub_140b4cb40(&var_188)
void* rbx_8 = rsi

if (i_4 != 0)
    int32_t i_2
    
    do
        int64_t rcx_31 = *rbx_8
        
        if (rcx_31 != 0)
            result = sub_140a74f90(rcx_31)
        
        rbx_8 += 0x20
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
