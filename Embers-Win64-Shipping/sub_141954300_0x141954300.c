// 函数: sub_141954300
// 地址: 0x141954300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
void*** rax_2 = j_sub_140a82f30(0x60)
void*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    *rdi = &data_142d3ff08
    rdi[1].d = 0
    *rdi = &data_142ef2938
    *(rdi + 0xc) = 0
    rdi[2].w = 0x100
    rdi[3] = arg3
    rdi[4].d = *arg3
    *rdi = &data_142ff8b10
    int32_t rax_4 = data_143f01c4c
    rdi[5] = 0
    rdi[7].d = rax_4 + 1
    rdi[6] = 0
    __builtin_memset(&rdi[8], 0, 0x1d)
    data_143f01c4c = rax_4 + 1

int64_t var_158 = 0
int128_t* var_148 = nullptr
int64_t rcx_1 = sx.q(sub_1419552b0(*arg3))
int32_t r13 = *(data_143f00510 + (rcx_1 << 2))

if (r13 == 0)
    r13 = *arg3

void*** var_1d0 = nullptr
uint64_t r14
r14.b = arg4 u<= 1
int64_t var_1c0 = 0
char var_1d8 = r14.b
int128_t var_138

if (data_143efed00 == 0)
    int64_t* rax_16 = sub_140a82f30(0x30, 8)
    rax_16[1] = rdi
    rax_16[2].d = r13
    rax_16[3] = 0
    rax_16[4] = 0
    rax_16[5].b = r14.b
    *rax_16 = &data_142ffb070
    int128_t zmm5_1 = var_158.o
    int64_t (* var_118)(int64_t* arg1)
    int64_t (* rax_17)(int64_t* arg1) = var_118
    
    if (rax_16 != -8)
        rax_17 = j_sub_141952a50
    
    int128_t zmm4_1 = var_148.o
    int128_t var_88_1 = zmm5_1
    int128_t var_78_1 = zmm4_1
    int64_t (* var_118_1)(int64_t* arg1)
    var_118_1.o = zmm5_1
    int128_t zmm3 = var_138
    int128_t var_68_1 = zmm3
    int128_t var_128
    int128_t var_58_1 = var_128
    var_158.o = rax_17.o
    var_148.o = rax_16.o
    int128_t var_f8
    var_138 = var_f8
    int128_t var_e8
    int128_t var_128_1 = var_e8
    int64_t* var_108_1
    var_108_1.o = zmm4_1
    var_f8 = zmm3
    int128_t var_e8_1 = var_128
    
    if (zmm5_1.q != 0)
        int64_t* rcx_9 = &var_f8
        
        if (var_108_1 != 0)
            rcx_9 = var_108_1
        
        (*(*rcx_9 + 0x10))(rcx_9, j_sub_141952a50)
else
    EnterCriticalSection(&data_143f00548)
    int32_t rax_9 = data_143f01c38 + 1
    data_143f01c38 = rax_9
    int32_t var_1d4 = rax_9
    void*** rax_10 = j_sub_140a82f30(0x20)
    void*** rbx_1 = rax_10
    
    if (rax_10 == 0)
        rbx_1 = nullptr
    else
        rax_10[1].d = 0
        int32_t rdx = 0
        *rbx_1 = &data_142ff8b08
        rbx_1[2] = 0
        uint32_t r15_2 = (r13 + 3) u>> 2
        rbx_1[3] = 0
        
        if (*(rbx_1 + 0x1c) != r15_2)
            sub_1405dadb0(&rbx_1[2], r15_2)
            rdx = rbx_1[3].d
        
        int32_t rax_11 = rdx + r15_2
        rbx_1[3].d = rax_11
        
        if (rax_11 s> *(rbx_1 + 0x1c))
            sub_1405a4cf0(&rbx_1[2])
        
        r14 = zx.q(var_1d8)
    
    void*** var_1c8 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    sub_141950c40(&data_1439c78f0, &var_1d4, &var_1c8)
    LeaveCriticalSection(&data_143f00548)
    int64_t* rcx_4 = var_1d0
    void*** rbx_2 = var_1c8
    var_1d0 = rbx_2
    
    if (rcx_4 != 0)
        rcx_4[1].d -= 1
        
        if (rcx_4[1].d == 1)
            (**rcx_4)(rcx_4, 1)
        
        rbx_2 = var_1d0
    
    void*** var_168_1 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int32_t rax_13 = var_1d4
    rdi[6] = var_1c0
    rdi[5].d = rax_13
    *(rdi + 0x2c) = 0
    int64_t* rcx_6 = rdi[0xa]
    rdi[0xa] = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    if (rcx_6 != 0)
        rcx_6[1].d -= 1
        
        if (rcx_6[1].d == 1)
            (**rcx_6)(rcx_6, 1)
    
    rdi[0xb].d = r13
    *(rdi + 0x5c) = r14.b
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2, 1)

char rax_21

if (data_143f01c92 == 0)
    rax_21 = sub_140a80f40()

char rax_22

if (data_143f01c92 != 0 || rax_21 == 0)
    rax_22 = sub_140a80f10()

if ((data_143f01c92 == 0 && rax_21 != 0) || rax_22 != 0)
    r14.b = 1
else
    r14.b = 0

if (data_143efed00 == 0)
    if (r14.b == 0)
        void*** rbx_5 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        void* rax_26 = &rbx_5[0xa]
        
        if (rax_26 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x60)
            rbx_5 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
            rax_26 = &rbx_5[0xa]
        
        data_143f02bac += 1
        data_143f02bc8 = rax_26
        *data_143f02ba0 = rbx_5
        data_143f02ba0 = &rbx_5[1]
        int128_t* var_c8 = nullptr
        
        if (var_158 != 0)
            int128_t* rcx_12 = &var_138
            
            if (var_148 != 0)
                rcx_12 = var_148
            
            (**rcx_12)(rcx_12, &var_c8)
        
        int64_t* rax_31 = sub_140a82f30(0x60, 0x10)
        *rax_31 = &data_142d577c0
        rax_31[2] = var_158
        rax_31[4] = var_c8
        int128_t var_b8
        int128_t zmm0_2 = var_b8
        var_c8 = nullptr
        *(rax_31 + 0x30) = zmm0_2
        int128_t var_a8
        *(rax_31 + 0x40) = var_a8
        int64_t rax_34 = var_158
        
        if (rax_31[2] != 0)
            rax_34 = 0
        
        rax_31[0xa] = rdi
        *rax_31 = &data_142ffb090
        int64_t (* var_1a8)(int64_t* arg1)
        int64_t (* rax_36)(int64_t* arg1) = var_1a8
        
        if (rax_31 != -0x10)
            rax_36 = sub_14106bb20
        
        *rbx_5 = &data_142ff4958
        rbx_5[1] = 0
        rbx_5[2] = rax_36
        rbx_5[4] = 0
        void var_188
        
        if (rbx_5[2] != 0)
            int64_t* rcx_14 = &var_188
            
            if (rax_31 != 0)
                rcx_14 = rax_31
            
            (**rcx_14)(rcx_14, &rbx_5[4])
        
        if (rax_36 != 0)
            int64_t* rcx_15 = &var_188
            
            if (rax_31 != 0)
                rcx_15 = rax_31
            
            (*(*rcx_15 + 0x10))(rcx_15)
        
        if (rax_34 != 0)
            int128_t* rax_42 = var_c8
            int128_t* rcx_16 = &var_b8
            
            if (rax_42 != 0)
                rcx_16 = rax_42
            
            (*(*rcx_16 + 0x10))(rcx_16)
    else
        int128_t* rcx_10 = &var_138
        
        if (var_148 != 0)
            rcx_10 = var_148
        
        var_158((*(*rcx_10 + 8))(rcx_10))

sub_1419540e0(r14.b, rdi, arg2, *arg3)
sub_14195b160(rdi, arg2, arg3)
*arg1 = rdi

if (rdi != 0)
    rdi[1].d += 1

if (var_1d0 != 0)
    var_1d0[1].d -= 1
    
    if (var_1d0[1].d == 1)
        (**var_1d0)(var_1d0, 1)

if (var_158 != 0)
    int128_t* rcx_20 = &var_138
    
    if (var_148 != 0)
        rcx_20 = var_148
    
    int64_t rdx_9 = *rcx_20
    (*(rdx_9 + 0x10))(rcx_20, rdx_9)

__security_check_cookie(rax_1 ^ &var_1f8)
return arg1
