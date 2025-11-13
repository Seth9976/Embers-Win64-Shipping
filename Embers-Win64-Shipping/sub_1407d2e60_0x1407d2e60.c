// 函数: sub_1407d2e60
// 地址: 0x1407d2e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t r9 = 0
int32_t* rsi = arg1 + 0x10
int64_t var_88 = 0
int32_t rbx = 0
int32_t var_80 = 0
void* r10 = nullptr
int32_t r14 = 0
int32_t rcx = 0
int32_t var_5c = 0x80
int32_t r8 = 0
int64_t var_78
__builtin_memset(&var_78, 0, 0x1c)
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
void* var_48 = nullptr
int32_t var_40 = 0
int32_t r13 = rsi[6]
int32_t r11 = 0
int32_t var_e8 = 0
int32_t var_e4 = 1
int32_t* var_e0 = rsi
int32_t var_d8 = 0xffffffff
int64_t var_d4 = 0

if (r13 != 0)
    int32_t* rax_2 = *(rsi + 0x10)
    
    if (rax_2 != 0)
        rsi = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r13 - 1)
    int32_t rdx_2 = *rsi
    
    if (rdx_2 != 0)
    label_1407d2f58:
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
        
        if (r8 - rax_10 + 0x1f s> r13)
            var_d4.d = r13
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_d4:4.d = r8
            var_e8 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = rsi[rdx_3 + 1]
            var_d8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1407d2f58
        
        var_d4.d = r13

int128_t var_a0 = 0xffffffff
double var_b0[0x2] = var_e8.o
var_e8.o = arg1.o
int64_t var_c8 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_d8.o = var_b0

if (0 s< r13)
    int32_t var_cc
    int32_t rcx_2 = var_cc
    
    while (true)
        int64_t* r15_1 = var_e8.q
        int64_t* r12_1 = *r15_1
        int64_t r8_2 = r12_1[sx.q(rcx_2) * 3]
        
        if (r11 == rbx)
        label_1407d304d:
            int64_t rbx_1 = sx.q(arg2[1].d)
            int32_t rax_18 = (rbx_1 + 1).d
            arg2[1].d = rax_18
            
            if (rax_18 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            *(*arg2 + (rbx_1 << 3)) = r12_1[sx.q(rcx_2) * 3]
            void var_c0
            sub_1407d1070(&var_88, &var_c0, *r15_1 + sx.q(rcx_2) * 0x18, nullptr)
        else
            void var_50
            void* rax_16 = &var_50
            
            if (r10 != 0)
                rax_16 = r10
            
            int32_t rax_17 =
                *(rax_16 + ((sx.q((r8_2 u>> 0x20).d * 0x17 + r8_2.d) & sx.q(r14 - 1)) << 2))
            
            if (rax_17 == 0xffffffff)
                goto label_1407d304d
            
            while (true)
                int64_t rcx_8 = sx.q(rax_17) * 2
                
                if (*(r9 + (rcx_8 << 3)) == r8_2)
                    break
                
                rax_17 = *(r9 + (rcx_8 << 3) + 8)
                
                if (rax_17 == 0xffffffff)
                    goto label_1407d304d
            
            if (rax_17 == 0xffffffff)
                goto label_1407d304d
        
        var_d4:4.d &= not.d(var_e0:4.d)
        sub_14059bdd0(&var_e0)
        rcx_2 = var_cc
        r10 = var_48
        
        if (rcx_2 s>= *(var_d8.q + 0x18))
            break
        
        r14 = var_40
        rbx = var_54
        r11 = var_80
        r9 = var_88

int32_t rbx_2 = arg2[1].d
int32_t var_40_1 = 0

if (r10 != 0)
    sub_140a74f90(r10)

var_80 = 0
int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
sub_14059a8e0(&var_78, 0)
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t rcx_17 = var_88

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

__security_check_cookie(rax_1 ^ &var_108)
return zx.q(rbx_2)
