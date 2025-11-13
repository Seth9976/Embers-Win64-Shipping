// 函数: sub_1426906e0
// 地址: 0x1426906e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t* rdi = *arg2
int64_t rax_3 = sx.q(arg2[1].d)
int32_t rdx = 0
int32_t rcx_2 = 0
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
void* rbx_1 = &rdi[rax_3 * 2]
int32_t var_5c = 0x80
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int32_t var_108
int32_t var_e8
int32_t var_80

if (rdi != rbx_1)
    do
        var_108 = *rdi
        int32_t var_104_1 = rdi[1]
        int64_t var_100
        var_100.d = 0x7f7fffff
        int32_t var_f8
        var_f8.q = 0
        int64_t var_f4 = 0
        var_100:4.b = 1
        sub_14266e6f0(&var_88, &var_e8, &var_108, nullptr)
        int64_t rcx_4 = var_f8.q
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rdi = &rdi[2]
    while (rdi != rbx_1)
    
    rcx_2 = var_54
    rdx = var_80

void* rdi_1 = arg1[0x1e]
int32_t r13_1 = rdx - rcx_2
void* r15_2 = (sx.q(arg1[0x1f].d) << 5) + rdi_1

if (rdi_1 != r15_2)
    do
        sub_1426816a0(&var_88, &var_e8, rdi_1)
        int64_t rax_6 = sx.q(var_e8)
        void* rbx_2
        
        if (rax_6.d != 0xffffffff)
            rbx_2 = var_88 + rax_6 * 0x28
        
        void var_e4
        
        if (rax_6.d == 0xffffffff || rbx_2 == 0)
            sub_14266e6f0(&var_88, &var_e4, rdi_1, nullptr)
        else
            char temp2_1 = *(rbx_2 + 0xc) | *(rdi_1 + 0xc)
            *(rbx_2 + 0xc) = temp2_1
            
            if (temp2_1 != 0)
                bool cond:2_1 = *(rbx_2 + 0x1c) == 0
                *(rbx_2 + 0x18) = 0
                
                if (not(cond:2_1))
                    sub_1413f6f70(rbx_2 + 0x10, 0)
            else
                int32_t rsi_1 = *(rdi_1 + 0x18)
                
                if (rsi_1 != 0)
                    int32_t rcx_6 = *(rbx_2 + 0x18)
                    int32_t rdx_4 = rsi_1 + rcx_6
                    
                    if (rdx_4 s> *(rbx_2 + 0x1c))
                        sub_1413f6f70(rbx_2 + 0x10, rdx_4)
                        rcx_6 = *(rbx_2 + 0x18)
                    
                    memcpy(sx.q(rcx_6) * 0x1c + *(rbx_2 + 0x10), *(rdi_1 + 0x10), rsi_1 * 0x1c)
                    *(rbx_2 + 0x18) += rsi_1
        rdi_1 += 0x20
    while (rdi_1 != r15_2)
    
    rcx_2 = var_54
    rdx = var_80

sub_1426794e0(&arg1[0x1e], rdx - rcx_2)
int64_t var_7c
void* var_100_1 = &var_7c:4
int32_t rcx_11 = 0
var_108 = 0
int32_t var_f8_1 = 0xffffffff
int32_t r8_4 = 0
int32_t var_104_2 = 1
int64_t var_f4_1 = 0
int32_t var_60

if (var_60 != 0)
    void* r9_1 = &var_7c:4
    void* var_68
    
    if (var_68 != 0)
        r9_1 = var_68
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_60 - 1)
    int32_t rdx_9 = *r9_1
    
    if (rdx_9 != 0)
    label_142690928:
        int32_t rax_17 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_17)
        int32_t var_104_3 = rax_17
        int32_t rax_18
        
        if (rax_17 == 0)
            rax_18 = 0x20
        else
            rax_18 = 0x1f - temp0_2
        
        int32_t rax_19 = r8_4 - rax_18 + 0x1f
        
        if (rax_19 s> var_60)
            rax_19 = var_60
        
        var_f4_1.d = rax_19
    else
        while (true)
            int64_t rdx_10 = sx.q(rcx_11)
            r8_4 += 0x20
            rcx_11 += 1
            var_f4_1:4.d = r8_4
            var_108 = rcx_11
            
            if (rdx_10.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_f4_1.d = var_60
                break
            
            rdx_9 = *(r9_1 + (rdx_10 << 2) + 4)
            var_f8_1 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_142690928

double zmm2[0x2] = var_f8_1.o
double var_a0[0x2] = zmm2
int128_t var_b0 = var_108.o
var_f4_1.d = var_60
double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
int128_t var_e0 = (&var_88).o
int128_t var_d0 = var_b0
int64_t var_c0 = temp0_3.q

while (true)
    int64_t rax_20 = sx.q(var_d0:0xc.d)
    int64_t* rdx_12 = var_e0.q
    
    if (rax_20.d == ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d && var_d0.q == &var_7c:4
            && rdx_12 == &var_88)
        if (r13_1 s> 0)
            (*(*arg1 + 0x68))(arg1)
        
        int32_t var_40_1 = 0
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        void* result = sub_1408ffc10(&var_88)
        __security_check_cookie(rax_1 ^ &var_128)
        return result
    
    int64_t rbx_4 = sx.q(arg1[0x1f].d)
    int64_t* rdi_2 = *rdx_12 + rax_20 * 0x28
    int32_t rax_22 = (rbx_4 + 1).d
    arg1[0x1f].d = rax_22
    
    if (rax_22 s> *(arg1 + 0xfc))
        sub_1405c4e40(&arg1[0x1e])
    
    sub_1426706a0((rbx_4 << 5) + arg1[0x1e], rdi_2)
    var_d0:8.d &= not.d(var_e0:0xc.d)
    sub_14059bdd0(&var_e0:8)
