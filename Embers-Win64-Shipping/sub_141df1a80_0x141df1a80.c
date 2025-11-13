// 函数: sub_141df1a80
// 地址: 0x141df1a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t r8 = 0
int32_t r10 = 0
int64_t var_88 = 0
int32_t* r11 = arg1 + 0x10
int32_t var_80 = 0
int32_t rcx = 0
void* rsi = nullptr
int32_t var_5c = 0x80
int32_t r9 = 0
int64_t var_78
__builtin_memset(&var_78, 0, 0x1c)
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
void* var_48 = nullptr
int32_t var_40 = 0
int32_t rbx = r11[6]
int32_t var_e8 = 0
int32_t var_e4 = 1
int32_t* var_e0 = r11
int32_t var_d8 = 0xffffffff
int64_t var_d4 = 0

if (rbx != 0)
    int32_t* rax_2 = *(r11 + 0x10)
    
    if (rax_2 != 0)
        r11 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_2 = *r11
    
    if (rdx_2 != 0)
    label_141df1b6b:
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
        
        var_d4.d = r9 - rax_10 + 0x1f
        
        if (r9 - rax_10 + 0x1f s> rbx)
            var_d4.d = rbx
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r9 += 0x20
            rcx += 1
            var_d4:4.d = r9
            var_e8 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r11[rdx_3 + 1]
            var_d8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141df1b6b
        
        var_d4.d = rbx

int128_t var_98 = 0xffffffff
double var_a8[0x2] = var_e8.o
var_e8.o = arg1.o
int64_t var_c8 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_d8.o = var_a8

if (0 s< rbx)
    int32_t var_cc
    int32_t rcx_2 = var_cc
    
    while (true)
        int64_t* rsi_1 = var_e8.q
        int64_t r14_1 = sx.q(rcx_2) * 0x14
        int64_t rbx_2 = *(r14_1 + *rsi_1)
        
        if (r8 == r10)
        label_141df1c5c:
            int64_t rbx_3 = sx.q(arg2[1].d)
            int64_t* r15_1 = *rsi_1
            int32_t rax_18 = (rbx_3 + 1).d
            arg2[1].d = rax_18
            
            if (rax_18 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            *(*arg2 + (rbx_3 << 3)) = *(r15_1 + r14_1)
            void var_c0
            sub_1407d1800(&var_88, &var_c0, *rsi_1 + r14_1, nullptr)
        else
            void var_50
            void* rcx_7 = &var_50
            int64_t rdx_5 = sx.q(var_40 - 1) & sx.q(sub_140b5ead0(rbx_2.d) + rbx_2:4.d)
            
            if (var_48 != 0)
                rcx_7 = var_48
            
            int32_t rax_17 = *(rcx_7 + (rdx_5 << 2))
            
            if (rax_17 == 0xffffffff)
                goto label_141df1c5c
            
            int64_t rdx_6 = var_88
            
            while (true)
                int64_t rcx_9 = sx.q(rax_17) * 2
                
                if (*(rdx_6 + (rcx_9 << 3)) == rbx_2)
                    break
                
                rax_17 = *(rdx_6 + (rcx_9 << 3) + 8)
                
                if (rax_17 == 0xffffffff)
                    goto label_141df1c5c
            
            if (rax_17 == 0xffffffff)
                goto label_141df1c5c
        
        var_d4:4.d &= not.d(var_e0:4.d)
        sub_14059bdd0(&var_e0)
        rcx_2 = var_cc
        
        if (rcx_2 s>= *(var_d8.q + 0x18))
            break
        
        r10 = var_54
        r8 = var_80
    
    rsi = var_48

int32_t rbx_4 = arg2[1].d
int32_t var_40_1 = 0

if (rsi != 0)
    sub_140a74f90(rsi)

var_80 = 0
int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
sub_14059a8e0(&var_78, 0)
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t rcx_18 = var_88

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

__security_check_cookie(rax_1 ^ &var_108)
return zx.q(rbx_4)
