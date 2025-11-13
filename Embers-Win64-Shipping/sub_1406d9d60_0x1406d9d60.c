// 函数: sub_1406d9d60
// 地址: 0x1406d9d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t rbx = 0
int32_t* rdi = arg1 + 0x10
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t rcx = 0
int32_t r10 = 0
void* r9 = nullptr
int32_t var_5c = 0x80
int32_t r8 = 0
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
void* var_48 = nullptr
int32_t var_40 = 0
int32_t r14 = rdi[6]
int32_t r11 = 0
int32_t var_e8 = 0
int32_t var_e4 = 1
int32_t* var_e0 = rdi
int32_t var_d8 = 0xffffffff
int64_t var_d4 = 0

if (r14 != 0)
    int32_t* rax_2 = *(rdi + 0x10)
    
    if (rax_2 != 0)
        rdi = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r14 - 1)
    int32_t rdx_2 = *rdi
    
    if (rdx_2 != 0)
    label_1406d9e5a:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
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
        
        if (r8 - rax_9 + 0x1f s> r14)
            var_d4.d = r14
    else
        while (true)
            rcx += 1
            r8 += 0x20
            var_e8 = rcx
            var_d4:4.d = r8
            
            if (rcx s> ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            var_d8 = 0xffffffff
            rdx_2 = rdi[sx.q(rcx)]
            
            if (rdx_2 != 0)
                goto label_1406d9e5a
        
        var_d4.d = r14

double var_b0[0x2] = var_e8.o
int128_t var_a0 = 0xffffffff
var_e8.o = arg1.o
int64_t var_c8 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_d8.o = var_b0
int64_t var_80_1
int128_t var_78
int128_t* var_68

if (0 s< r14)
    int32_t var_cc
    int32_t rcx_2 = var_cc
    
    while (true)
        int64_t* r14_1 = var_e8.q
        int32_t* r15_3 = *r14_1
        int64_t r8_2 = sx.q(r15_3[sx.q(rcx_2) * 8])
        int32_t rax_13
        
        if (r10 != r11)
            void var_50
            void* rax_12 = &var_50
            
            if (r9 != 0)
                rax_12 = r9
            
            rax_13 = *(rax_12 + ((sx.q(rbx - 1) & r8_2) << 2))
        
        if (r10 == r11 || rax_13 == 0xffffffff)
        label_1406d9f3e:
            int64_t rbx_1 = sx.q(arg2[1].d)
            int32_t rax_15 = (rbx_1 + 1).d
            arg2[1].d = rax_15
            
            if (rax_15 s> *(arg2 + 0xc))
                sub_1405a4cf0(arg2)
            
            *(*arg2 + (rbx_1 << 2)) = r15_3[sx.q(rcx_2) * 8]
            int32_t* rdi_3 = (sx.q(rcx_2) << 5) + *r14_1
            int64_t rbx_2
            
            if (var_54 == 0)
                rbx_2 = zx.q(var_80_1.d)
                int32_t rax_18 = (rbx_2 + 1).d
                var_80_1.d = rax_18
                
                if (rax_18 s> var_80_1:4.d)
                    sub_140638a00(&var_88)
                
                sub_1405b2ba0(&var_78, 0)
            else
                rbx_2 = sx.q(var_58)
                bool cond:2_1 = var_54 == 1
                int64_t r8_3 = var_88
                int64_t rax_17 = sx.q(*(r8_3 + rbx_2 * 0xc + 4))
                var_58 = rax_17.d
                var_54 -= 1
                
                if (not(cond:2_1))
                    *(r8_3 + rax_17 * 0xc) = 0xffffffff
            
            int128_t* rcx_12 = &var_78
            
            if (var_68 != 0)
                rcx_12 = var_68
            
            int32_t rax_20 = rbx_2.d
            
            if (rbx_2.d s< 0)
                rax_20 = (rbx_2 + 0x1f).d
            
            void* r8_4 = rcx_12 + (sx.q(rax_20 s>> 5) << 2)
            *r8_4 |= 1 << (rbx_2.b & 0x1f)
            int32_t* rdx_9 = var_88 + sx.q(rbx_2.d) * 0xc
            
            if (rdx_9 == 0)
                rdx_9 = nullptr
            else
                *rdx_9 = *rdi_3
                rdx_9[1] = 0xffffffff
            
            void var_c0
            sub_1406da850(&var_88, &var_c0, *rdx_9, rdx_9, rbx_2.d, nullptr)
        else
            while (true)
                int64_t rax_14 = var_88
                int64_t rdx_3 = sx.q(rax_13) * 3
                
                if (*(rax_14 + (rdx_3 << 2)) == r8_2.d)
                    break
                
                rax_13 = *(rax_14 + (rdx_3 << 2) + 4)
                
                if (rax_13 == 0xffffffff)
                    goto label_1406d9f3e
        
        var_d4:4.d &= not.d(var_e0:4.d)
        sub_14059bdd0(&var_e0)
        rcx_2 = var_cc
        r9 = var_48
        
        if (rcx_2 s>= *(var_d8.q + 0x18))
            break
        
        rbx = var_40
        r11 = var_54
        r10 = var_80_1.d

int32_t rbx_3 = arg2[1].d
int32_t var_40_1 = 0

if (r9 != 0)
    sub_140a74f90(r9)

var_80_1.d = 0

if (var_80_1:4.d != 0)
    sub_140638cc0(&var_88, 0)

int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0

if (var_5c u> 0x80)
    int32_t var_5c_1 = 0x80
    sub_1405a4410(&var_78, 0)
else
    int128_t* r9_2 = &var_78
    int32_t var_60
    uint32_t rax_31 = (var_60 + 0x1f) u>> 5
    
    if (var_68 != 0)
        r9_2 = var_68
    
    if (rax_31 u> 8)
        memset(r9_2, 0, zx.q(rax_31) << 2)
    else if (rax_31 != 0)
        memset(r9_2, 0, zx.q(rax_31) << 2)

int32_t var_60_1 = 0

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t rcx_25 = var_88

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

__security_check_cookie(rax_1 ^ &var_118)
return zx.q(rbx_3)
