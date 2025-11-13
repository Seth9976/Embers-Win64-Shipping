// 函数: sub_1413b8f90
// 地址: 0x1413b8f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t* r9 = arg1 + 0x10
int32_t var_5c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t rcx = 0
int64_t r10 = 0
int32_t r8 = 0
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int32_t r11 = r9[6]
int32_t var_e8 = 0
int32_t var_e4 = 1
int32_t* var_e0 = r9
int32_t var_d8 = 0xffffffff
int64_t var_d4 = 0

if (r11 != 0)
    int32_t* rax_2 = *(r9 + 0x10)
    
    if (rax_2 != 0)
        r9 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_1413b9079:
        int32_t rax_9 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_e4_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_d4.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r11)
            var_d4.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_d4:4.d = r8
            var_e8 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r9[rdx_3 + 1]
            var_d8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1413b9079
        
        var_d4.d = r11

int128_t var_a0 = 0xffffffff
double var_b0[0x2] = var_e8.o
var_e8.o = arg1.o
int64_t var_c8 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_d8.o = var_b0

if (0 s< r11)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* r14_1 = var_e8.q
        int64_t* r15_1 = *r14_1
        void var_c0
        
        if (*sub_1408296b0(&var_88, &var_c0, r15_1[sx.q(i) * 3]) == 0xffffffff)
            int64_t rdi_1 = sx.q(arg2[1].d)
            int32_t rax_14 = (rdi_1 + 1).d
            arg2[1].d = rax_14
            
            if (rax_14 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            *(*arg2 + (rdi_1 << 3)) = r15_1[sx.q(i) * 3]
            void var_bc
            sub_140812a70(&var_88, &var_bc, *r14_1 + sx.q(i) * 0x18, nullptr)
        
        var_d4:4.d &= not.d(var_e0:4.d)
        sub_14059bdd0(&var_e0)
        i = i_1
    while (i s< *(var_d8.q + 0x18))
    
    r10 = var_48

int32_t rbx_1 = arg2[1].d
int32_t var_40_1 = 0

if (r10 != 0)
    sub_140a74f90(r10)

int64_t var_80
var_80.d = 0
int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
int64_t var_78
sub_14059a8e0(&var_78, 0)
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t rcx_12 = var_88

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

__security_check_cookie(rax_1 ^ &var_108)
return zx.q(rbx_1)
