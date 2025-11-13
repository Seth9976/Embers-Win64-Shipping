// 函数: sub_1418f7610
// 地址: 0x1418f7610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void*** result_1 = nullptr
int32_t var_c4 = 3
int64_t var_d8 = 0
int32_t var_d0 = 0
int64_t* rax_2 = j_sub_140a82f30(0x80)
int64_t* rax_5

if (rax_2 == 0)
    rax_5 = nullptr
else
    rax_5 = sub_1418d1400(rax_2, *(*(arg1 + 0x178) + 0x20), *(arg1 + 0x18), *(arg1 + 0x1a0), 
        arg1 + 0x18c, *(arg1 + 0x180), *(arg1 + 0x184), *(arg1 + 0x188), &var_c4, &var_d8, 
        *(arg1 + 0x1ac), arg2)

*(arg1 + 0x198) = rax_5
int64_t rbx_1 = sx.q(*(arg1 + 0x58))
int32_t rax_6 = var_d0

if (rax_6 s> rbx_1.d)
    *(arg1 + 0x58) = rax_6
    
    if (rax_6 s> *(arg1 + 0x5c))
        sub_141902e10(arg1 + 0x20, rbx_1.d)
    
    void* rax_7 = *(arg1 + 0x50)
    void* rcx_4 = arg1 + 0x20
    
    if (rax_7 != 0)
        rcx_4 = rax_7
    
    memset(rcx_4 + (rbx_1 << 3), 0, sx.q(rax_6 - rbx_1.d) << 3)
    rax_6 = var_d0
else if (rax_6 s< rbx_1.d)
    int32_t rcx_6 = rbx_1.d
    
    if (rcx_6 != rax_6)
        *(arg1 + 0x58) = rbx_1.d - (rcx_6 - rax_6)
        sub_141902f40(arg1 + 0x20)
        rax_6 = var_d0

void* rbx_3 = arg1 + 0x60
int64_t r14_3 = sx.q(*(rbx_3 + 0x38))

if (rax_6 s> r14_3.d)
    *(rbx_3 + 0x38) = rax_6
    
    if (rax_6 s> *(rbx_3 + 0x3c))
        sub_141902e10(rbx_3, r14_3.d)
    
    void* rax_8 = *(rbx_3 + 0x30)
    
    if (rax_8 != 0)
        rbx_3 = rax_8
    
    memset(rbx_3 + (r14_3 << 3), 0, sx.q(rax_6 - r14_3.d) << 3)
    rax_6 = var_d0
else if (rax_6 s< r14_3.d)
    int32_t rcx_11 = r14_3.d
    
    if (rcx_11 != rax_6)
        *(rbx_3 + 0x38) = r14_3.d - (rcx_11 - rax_6)
        sub_141902f40(rbx_3)
        rax_6 = var_d0

int64_t r14_5 = sx.q(*(arg1 + 0x138))

if (rax_6 s> r14_5.d)
    *(arg1 + 0x138) = rax_6
    int32_t i_1 = rax_6 - r14_5.d
    
    if (rax_6 s> *(arg1 + 0x13c))
        sub_141902ea0(arg1 + 0xa0, r14_5.d)
    
    void* rax_9 = *(arg1 + 0x130)
    void* rdx_5 = arg1 + 0xa0
    
    if (rax_9 != 0)
        rdx_5 = rax_9
    
    void* rax_10 = rdx_5 + r14_5 * 0x18
    
    if (i_1 != 0)
        int32_t i
        
        do
            __builtin_memset(rax_10, 0, 0x14)
            rax_10 += 0x18
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (rax_6 s< r14_5.d)
    int32_t rcx_16 = r14_5.d
    
    if (rcx_16 != rax_6)
        *(arg1 + 0x138) = r14_5.d - (rcx_16 - rax_6)
        sub_141902fd0(arg1 + 0xa0)

void*** rax_12 = sub_1418c0d30(*(*(*(arg1 + 0x18) + 0x1a50) + 0x240))
int32_t var_c8 = 0
void* var_118
char var_100

if (var_d0 s> 0)
    int64_t* r14_7 = nullptr
    int64_t var_c0_1 = 0
    int64_t r9_2 = 0
    int32_t rax_20
    
    do
        void* rax_13 = *(arg1 + 0x50)
        void* rdx_6 = arg1 + 0x20
        int32_t* var_e0_2 = nullptr
        char var_e8_2 = 0
        void* r12_1 = arg1 + 0xa0
        
        if (rax_13 != 0)
            rdx_6 = rax_13
        
        int64_t* var_f0
        var_f0.d = 1
        int32_t* var_f8
        var_f8.d = 0
        var_100.d = 1
        int32_t var_108_2 = 0
        *(rdx_6 + r14_7) = *(r14_7 + var_d8)
        int64_t r8_7 = sx.q(*(arg1 + 0x18c))
        void* rcx_23 = *(arg1 + 0x130)
        int64_t rbx_5 = *(r14_7 + var_d8)
        
        if (rcx_23 != 0)
            r12_1 = rcx_23
        
        var_118.d = r8_7.d
        void* r12_2 = r12_1 + r9_2
        *r12_2 = sub_141903390(*(arg1 + 0x18), rbx_5, 1, 1, var_118.d, 
            (&data_1439c85fc)[r8_7 * 0xa], var_108_2, var_100, var_f8.d, var_f0.d, var_e8_2, 
            var_e0_2)
        *(r12_2 + 8) = rbx_5
        
        if (data_1439c7a08 s<= 1)
            int32_t rax_17 = (data_143efb4e0).d
            data_143efb4e0 += 1
            *(r12_2 + 0x10) = rax_17 + 1
        
        int64_t rdx_9 = var_d8
        int64_t var_50 = 0
        int64_t var_48_1 = 0
        int64_t var_68
        __builtin_memcpy(&var_68, 
            "\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00", 
            0x14)
        sub_1418c0f40(rax_12[8], *(r14_7 + rdx_9), 0, 1, &var_68)
        int32_t var_110_2
        var_110_2.q = &var_68
        int64_t* var_118_1
        var_118_1.d = 1
        data_143efba28(rax_12[8], *(r14_7 + var_d8), 7, &var_50, var_118_1, var_110_2)
        sub_1418c0f40(rax_12[8], *(r14_7 + var_d8), 1, 2, &var_68)
        rax_20 = var_c8 + 1
        r9_2 = var_c0_1 + 0x18
        var_c8 = rax_20
        r14_7 = &r14_7[1]
        var_c0_1 = r9_2
    while (rax_20 s< var_d0)

sub_1418c86c0(*(*(*(arg1 + 0x18) + 0x1a50) + 0x240), 0, 0)
void*** rax_22 = j_sub_140a82f30(0x118)
void*** result

if (rax_22 == 0)
    result = nullptr
else
    var_118.d = *(arg1 + 0x180)
    result =
        sub_1418f12d0(rax_22, *(arg1 + 0x18), arg1, *(arg1 + 0x18c), var_118.d, *(arg1 + 0x184), 9)

void* rcx_33 = *(arg1 + 0x140)
*(arg1 + 0x140) = result

if (result != 0)
    result[1].d += 1

if (rcx_33 != 0)
    result = sub_1419028c0(rcx_33 + 0x68)

int64_t rcx_35 = var_d8

if (rcx_35 != 0)
    result = sub_140a74f90(rcx_35)

if (data_1439c7188 == 1)
    result = j_sub_140a82f30(0x110)
    
    if (result != 0)
        int128_t zmm1_1 = data_143dbb1e0
        int32_t r9_6 = *(arg1 + 0x180)
        int32_t r8_9 = *(arg1 + 0x18c)
        void* rdx_16 = *(arg1 + 0x18)
        int32_t rax_24 = (1 << (data_1439c7a34).b) - 1
        int128_t var_a8 = zx.o(0)
        int32_t var_84_1 = rax_24
        var_100.d = 9
        var_118.d = *(arg1 + 0x184)
        int32_t var_98_1 = 1
        int128_t var_94_1 = zmm1_1
        char var_80_1 = 0
        int64_t var_78_1 = 0
        int32_t var_70_1 = 0
        result = sub_1418f27f0(result, rdx_16, r8_9, r9_6, var_118.d, 1, 1, var_100, &var_a8)
        result_1 = result
    
    void* rcx_38 = *(arg1 + 0x148)
    *(arg1 + 0x148) = result_1
    
    if (result_1 != 0)
        result_1[1].d += 1
    
    if (rcx_38 != 0)
        result = sub_1419028c0(rcx_38 + 0x68)

*(arg1 + 0x190) = 0xffffffff
__security_check_cookie(rax_1 ^ &var_138)
return result
