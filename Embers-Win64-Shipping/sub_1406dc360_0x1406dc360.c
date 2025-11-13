// 函数: sub_1406dc360
// 地址: 0x1406dc360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t rcx = 0
int16_t* r14 = nullptr
uint64_t var_f8 = 0
*arg1 = 0
arg1[1] = 0
int32_t r12 = arg3[1].d
int64_t rbx = *arg3
int16_t* rdi

if (r12 != 0)
    sub_1405a4c70(&var_f8, r12, 0)
    r14 = var_f8
    memcpy(r14, rbx, r12 * 2)
    rcx = 0
    rdi = r14
else
    rdi = nullptr

int64_t var_108 = 0
int16_t* const rsi = &data_142d40450
int64_t var_100 = 0
int32_t rdx_2 = 0

if (r12 == 0)
    rdi = &data_142d40450
label_1406dc410:
    
    if (*rdi != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rdi[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_108, rbx_1.d + 1)
            rcx = var_100:4.d
            rdx_2 = var_100.d
        
        int32_t rax_2 = rdx_2 + rbx_1.d + 1
        var_100.d = rax_2
        
        if (rax_2 s> rcx)
            sub_140594770(&var_108)
        
        UnDecorator::getReferenceType(var_108, rdi, (rbx_1.d + 1) * 2)
else if (rdi != 0)
    goto label_1406dc410

void var_c8
int512_t zmm1 = sub_140a61360(&var_c8, &var_108)
int64_t rcx_7 = var_108

if (rcx_7 != 0)
    zmm1 = sub_140a74f90(rcx_7)

int32_t rdx_7 = 0
var_108 = 0
int32_t rcx_8 = 0
int64_t var_100_1 = 0

if (arg2[1].d != 0)
    rsi = *arg2

if ((arg2[1].d == 0 || rsi != 0) && *rsi != 0)
    int64_t rbx_3 = -1
    
    do
        rbx_3 += 1
    while (rsi[rbx_3] != 0)
    
    if (rbx_3.d + 1 s> 0)
        sub_1405947f0(&var_108, rbx_3.d + 1)
        rcx_8 = var_100_1:4.d
        rdx_7 = var_100_1.d
    
    int32_t rax_3 = rdx_7 + rbx_3.d + 1
    var_100_1.d = rax_3
    
    if (rax_3 s> rcx_8)
        sub_140594770(&var_108)
    
    UnDecorator::getReferenceType(var_108, rsi, (rbx_3.d + 1) * 2)

void var_e8
int512_t zmm0 = sub_140a61110(&var_e8, &var_c8, &var_108, zmm1)
int64_t rcx_13 = var_108

if (rcx_13 != 0)
    zmm0 = sub_140a74f90(rcx_13)

int32_t rsi_1 = 0
uint64_t var_b8
uint64_t var_a8
int64_t var_98

while (sub_140a73e30(&var_e8, zmm0) != 0)
    var_b8 = 0
    int32_t var_b0_1 = 0
    var_a8 = 0
    int32_t r8_7 = 0
    int64_t var_a0_1
    __builtin_memset(&var_a0_1, 0, 0x34)
    int32_t var_6c_1 = 0x80
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    
    if (&var_b8 != arg2)
        int32_t rbx_5 = arg2[1].d
        int16_t* rdi_1 = *arg2
        var_b0_1 = rbx_5
        
        if (rbx_5 != 0)
            sub_1405a4c70(&var_b8, rbx_5, 0)
            memcpy(var_b8, rdi_1, rbx_5 * 2)
            r8_7 = var_a0_1:4.d
        else
            var_b0_1 = 0
    
    var_a0_1.d = r12
    
    if (r12 != 0 || r8_7 != 0)
        sub_1405a4c70(&var_a8, r12, r8_7)
        memcpy(var_a8, r14, r12 * 2)
    else
        var_a0_1:4.d = 0
    
    int32_t rbx_6 = 0
    int128_t* var_78
    
    if (sub_140a7a1a0(&var_e8) s> 0)
        int32_t rax_17
        
        do
            int64_t* rax_6 = sub_140a77b70(&var_e8, &var_108, rbx_6)
            int128_t var_88
            int64_t rbx_7
            
            if (var_64_1 == 0)
                int64_t var_90_1
                rbx_7 = zx.q(var_90_1.d)
                int32_t rax_9 = (rbx_7 + 1).d
                var_90_1.d = rax_9
                
                if (rax_9 s> var_90_1:4.d)
                    sub_1405c4e40(&var_98)
                
                sub_1405b2ba0(&var_88, 0)
            else
                rbx_7 = sx.q(var_68_1)
                int64_t r8_13 = var_98
                bool cond:0_1 = var_64_1 == 1
                int64_t r9_1 = sx.q(*((rbx_7 << 5) + r8_13 + 4))
                var_68_1 = r9_1.d
                var_64_1 -= 1
                
                if (not(cond:0_1))
                    *((r9_1 << 5) + r8_13) = 0xffffffff
            
            int128_t* rcx_25 = &var_88
            
            if (var_78 != 0)
                rcx_25 = var_78
            
            int32_t rax_11 = rbx_7.d
            
            if (rbx_7.d s< 0)
                rax_11 = (rbx_7 + 0x1f).d
            
            void* r8_14 = rcx_25 + (sx.q(rax_11 s>> 5) << 2)
            *r8_14 |= 1 << (rbx_7.b & 0x1f)
            int64_t rdx_20 = sx.q(rbx_7.d) << 5
            int32_t* rdx_21 = rdx_20 + var_98
            
            if (rdx_20 == neg.q(var_98))
                rdx_21 = nullptr
            else
                *(rdx_21 + 8) = 0
                *rdx_21 = rsi_1
                *(rdx_21 + 8) = *rax_6
                *rax_6 = 0
                rdx_21[4] = rax_6[1].d
                rdx_21[5] = *(rax_6 + 0xc)
                rax_6[1] = 0
                rdx_21[6] = 0xffffffff
            
            void var_d8
            sub_140619c60(&var_98, &var_d8, *rdx_21, rdx_21, rbx_7.d, nullptr)
            int64_t rcx_29 = var_108
            
            if (rcx_29 != 0)
                sub_140a74f90(rcx_29)
            
            rbx_6 = rsi_1 + 1
            rsi_1 = rbx_6
            rax_17 = sub_140a7a1a0(&var_e8)
        while (rbx_6 s< rax_17)
    
    int64_t rbx_8 = sx.q(arg1[1].d)
    int32_t rax_18 = (rbx_8 + 1).d
    arg1[1].d = rax_18
    
    if (rax_18 s> *(arg1 + 0xc))
        sub_1406d1af0(arg1)
    
    int64_t* rbx_10 = rbx_8 * 0x70 + *arg1
    *rbx_10 = 0
    uint64_t rsi_2 = var_b8
    rbx_10[1].d = var_b0_1
    
    if (var_b0_1 != 0)
        sub_1405a4c70(rbx_10, var_b0_1, 0)
        memcpy(*rbx_10, rsi_2, var_b0_1 * 2)
    else
        *(rbx_10 + 0xc) = 0
    
    rbx_10[2] = 0
    int32_t rsi_3 = var_a0_1.d
    uint64_t r14_1 = var_a8
    rbx_10[3].d = rsi_3
    
    if (rsi_3 != 0)
        sub_1405a4c70(&rbx_10[2], rsi_3, 0)
        memcpy(rbx_10[2], r14_1, rsi_3 * 2)
        rsi_1 = 0
    else
        rsi_1 = 0
        __builtin_memset(rbx_10 + 0x1c, 0, 0x30)
    
    *(rbx_10 + 0x4c) = 0x80
    rbx_10[0xa].d = 0xffffffff
    *(rbx_10 + 0x54) = 0
    rbx_10[0xc] = 0
    rbx_10[0xd].d = 0
    sub_1406da2c0(&rbx_10[4], &var_98)
    int32_t var_50_2 = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    zmm0 = sub_14062ca00(&var_98, 0)
    
    if (var_78 != 0)
        zmm0 = sub_140a74f90(var_78)
    
    int64_t rcx_40 = var_98
    
    if (rcx_40 != 0)
        zmm0 = sub_140a74f90(rcx_40)
    
    uint64_t rcx_41 = var_a8
    
    if (rcx_41 != 0)
        zmm0 = sub_140a74f90(rcx_41)
    
    uint64_t rcx_42 = var_b8
    r14 = var_f8
    
    if (rcx_42 != 0)
        zmm0 = sub_140a74f90(rcx_42)

if (arg1[1].d == 0)
    var_b8 = 0
    int32_t var_b0_2 = 0
    var_a8 = 0
    int32_t r8_20 = 0
    int64_t var_a0_2
    __builtin_memset(&var_a0_2, 0, 0x34)
    int32_t var_6c_2 = 0x80
    int32_t var_68_2 = 0xffffffff
    int32_t var_64_2 = 0
    int64_t var_58_2 = 0
    int32_t var_50_3 = 0
    
    if (&var_b8 != arg2)
        int32_t rbx_11 = arg2[1].d
        int16_t* rdi_4 = *arg2
        var_b0_2 = rbx_11
        
        if (rbx_11 != 0)
            sub_1405a4c70(&var_b8, rbx_11, 0)
            memcpy(var_b8, rdi_4, rbx_11 * 2)
            r8_20 = var_a0_2:4.d
        else
            var_b0_2 = 0
    
    var_a0_2.d = r12
    
    if (r12 != 0 || r8_20 != 0)
        sub_1405a4c70(&var_a8, r12, r8_20)
        memcpy(var_a8, r14, r12 * 2)
    else
        var_a0_2:4.d = 0
    
    int64_t rbx_12 = sx.q(arg1[1].d)
    int32_t rax_19 = (rbx_12 + 1).d
    arg1[1].d = rax_19
    
    if (rax_19 s> *(arg1 + 0xc))
        sub_1406d1af0(arg1)
    
    int64_t* rbx_14 = rbx_12 * 0x70 + *arg1
    *rbx_14 = 0
    uint64_t rsi_4 = var_b8
    rbx_14[1].d = var_b0_2
    
    if (var_b0_2 != 0)
        sub_1405a4c70(rbx_14, var_b0_2, 0)
        memcpy(*rbx_14, rsi_4, var_b0_2 * 2)
    else
        *(rbx_14 + 0xc) = 0
    
    rbx_14[2] = 0
    int32_t rsi_5 = var_a0_2.d
    uint64_t r14_2 = var_a8
    rbx_14[3].d = rsi_5
    
    if (rsi_5 != 0)
        sub_1405a4c70(&rbx_14[2], rsi_5, 0)
        memcpy(rbx_14[2], r14_2, rsi_5 * 2)
    else
        __builtin_memset(rbx_14 + 0x1c, 0, 0x30)
    
    *(rbx_14 + 0x4c) = 0x80
    rbx_14[0xa].d = 0xffffffff
    *(rbx_14 + 0x54) = 0
    rbx_14[0xc] = 0
    rbx_14[0xd].d = 0
    sub_1406da2c0(&rbx_14[4], &var_98)
    int32_t var_50_4 = 0
    
    if (var_58_2 != 0)
        sub_140a74f90(var_58_2)
    
    sub_14062ca00(&var_98, 0)
    int64_t var_78_1
    
    if (var_78_1 != 0)
        sub_140a74f90(var_78_1)
    
    int64_t rcx_56 = var_98
    
    if (rcx_56 != 0)
        sub_140a74f90(rcx_56)
    
    uint64_t rcx_57 = var_a8
    
    if (rcx_57 != 0)
        sub_140a74f90(rcx_57)
    
    uint64_t rcx_58 = var_b8
    
    if (rcx_58 != 0)
        sub_140a74f90(rcx_58)

int64_t* var_e0

if (var_e0 != 0)
    var_e0[1].d -= 1
    
    if (var_e0[1].d == 1)
        (**var_e0)(var_e0)
        int32_t temp2_1 = *(var_e0 + 0xc)
        *(var_e0 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_e0 + 8))(var_e0, 1)

int64_t* var_c0

if (var_c0 != 0)
    var_c0[1].d -= 1
    
    if (var_c0[1].d == 1)
        (**var_c0)(var_c0)
        int32_t temp3_1 = *(var_c0 + 0xc)
        *(var_c0 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_c0 + 8))(var_c0, 1)

uint64_t rcx_63 = var_f8

if (rcx_63 != 0)
    sub_140a74f90(rcx_63)

int16_t* rcx_64 = *arg2

if (rcx_64 != 0)
    sub_140a74f90(rcx_64)

int64_t rcx_66 = *arg3

if (rcx_66 != 0)
    sub_140a74f90(rcx_66)

__security_check_cookie(rax_1 ^ &var_138)
return arg1
