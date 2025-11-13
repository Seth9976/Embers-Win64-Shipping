// 函数: sub_141b27890
// 地址: 0x141b27890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
float rax_2 = *(arg2 + 0x24)
int64_t* r12 = 0x10
float var_48 = arg4.d
float var_118
int64_t r8

if (rax_2 == 0x80000000)
    int64_t* r8_1 = 0x10
    
    if (*(arg2 + 0x20) != 0)
        r8_1 = 4
    
    r8 = *(r8_1 + arg2)
else
    var_118 = rax_2
    int32_t var_114_1 = 0
    r8 = var_118.q

uint128_t var_78
int512_t zmm1 = sub_141b13380(arg1 + 0x48, &var_78, r8, arg4)
int64_t var_f0
sub_141a52640(arg1, &var_f0)
TEB* gsbase

if (data_143f2c7e8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2c7e8)
    
    if (data_143f2c7e8 == 0xffffffff)
        data_143f2c7e0 = var_f0
        _Init_thread_footer(&data_143f2c7e8)

int32_t var_100

if (sub_141aefa10(sub_141a500a0(arg3, zmm1), data_143f2c7e0) == 0)
    void** var_e8
    sub_141a312f0(&var_e8)
    int64_t* rax_7 = sub_140596d10(&var_100, arg1 + 0x28)
    int64_t var_128_1 = *(arg1 + 0x40)
    int512_t zmm1_1 = sub_141a54490(&var_e8, *(arg1 + 0x20), rax_7, *(arg1 + 0x38))
    void*** rax_9 = j_sub_140a82f30(0x60)
    void*** rbx_1 = rax_9
    int64_t* var_d8
    
    if (rax_9 == 0)
        rbx_1 = nullptr
    else
        rax_9[1].d = 1
        *(rax_9 + 0xc) = 1
        *rbx_1 = &data_142d4cbc0
        __builtin_memset(&rbx_1[3], 0, 0x20)
        int64_t var_d0
        rbx_1[7] = var_d0
        rbx_1[2] = &data_143051d90
        rbx_1[8] = &data_142d4c6c0
        int64_t var_e0
        rbx_1[9] = var_e0
        rbx_1[0xa] = var_d8
        
        if (var_d8 != 0)
            var_d8[1].d += 1
        
        rbx_1[0xb] = var_d0
    
    int64_t* rdi_1 = &rbx_1[3]
    
    if (rbx_1 == -0x10)
        rdi_1 = nullptr
    
    if (rdi_1 != 0)
        void* rax_14
        
        if (*rdi_1 != 0)
            rax_14 = rdi_1[1]
        
        if (*rdi_1 == 0 || rax_14 == 0 || *(rax_14 + 8) s<= 0)
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            *rdi_1 = &rbx_1[2]
            int64_t* rcx_9 = rdi_1[1]
            
            if (rbx_1 != rcx_9)
                if (rbx_1 != 0)
                    *(rbx_1 + 0xc) += 1
                    rcx_9 = rdi_1[1]
                
                if (rcx_9 != 0)
                    int32_t temp8_1 = *(rcx_9 + 0xc)
                    *(rcx_9 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rcx_9 + 8))(rcx_9, 1)
                
                rdi_1[1] = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp7_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*rbx_1)[1](rbx_1, 1)
    
    var_118.q = &rbx_1[2]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    var_100.q = data_143f2c7e0
    sub_1405a72d0(sub_141a500a0(arg3, zmm1_1), &var_100, &var_118)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
    
    if (var_d8 != 0)
        var_d8[1].d -= 1
        
        if (var_d8[1].d == 1)
            (**var_d8)(var_d8)
            int32_t temp6_1 = *(var_d8 + 0xc)
            *(var_d8 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_d8 + 8))(var_d8, 1)

float rax_26 = *(arg2 + 0x24)
int64_t rdx_6

if (rax_26 == 0x80000000)
    int64_t* rdx_7 = 0x10
    
    if (*(arg2 + 0x20) != 0)
        rdx_7 = 4
    
    rdx_6 = *(rdx_7 + arg2)
else
    var_118 = rax_26
    int32_t var_114_2 = 0
    rdx_6 = var_118.q

float zmm0
int512_t zmm1_2
zmm0, zmm1_2 = sub_141a47d70(arg1, rdx_6)
float zmm6 = zmm0

if (((*(arg1 + 0x68c) u>> 9).b & 1) != 0)
    int32_t rax_29 = *(arg2 + 0x24)
    var_118 = 1f
    int64_t rdx_8
    
    if (rax_29 == 0x80000000)
        if (*(arg2 + 0x20) != 0)
            r12 = 4
        
        rdx_8 = *(r12 + arg2)
    else
        var_100 = rax_29
        int64_t var_fc
        var_fc.d = 0
        rdx_8 = var_100.q
    
    zmm1_2, zmm6 = sub_141a467f0(arg1 + 0x5e8, rdx_8, &var_118)
    zmm6 = zmm6 * var_118

char rbx_3 = *(arg1 + 0x688)
char var_a0
char var_a0_1 = var_a0 & 0xfc
uint128_t (* rax_30)[0x2] = sub_140a82f30(0x30, 8)
uint128_t var_c8[0x2]
var_c8[0].q = rax_30
char result_1 = var_a0_1 | 1
int128_t var_68
zmm1_2.o = var_68
uint128_t (* rcx_22)[0x2] = &var_c8
int64_t var_fc_1 = -1

if ((result_1 & 2) == 0)
    rcx_22 = rax_30

char var_f4 = 0
*(rcx_22 + 8) = var_78
*rcx_22 = &data_14305da38
*(rcx_22 + 0x18) = zmm1_2.o
int64_t var_58
*(rcx_22 + 0x28) = var_58
int32_t rax_31 = data_1439e5888
char var_80 = rbx_3
int64_t rbx_4 = data_143f2c7e0
int32_t var_98 = rax_31
var_100 = rax_31
float var_84 = zmm6
int64_t var_94 = -1
char var_8c = 0
int32_t var_88 = 0
__builtin_memset(&var_118, 0, 0x14)
void* rax_32 = sub_141a500a0(arg3, zmm1_2)
int32_t var_88_1 = *(arg2 + 0x50)
var_98.o = var_100.o
sub_141aec170(sub_1405a8fd0(rax_32 + 0x50, sub_1405be5b0(&var_118), &var_118), rbx_4, &var_c8)
char result = result_1

if ((result & 1) != 0)
    uint128_t (* rcx_28)[0x2] = &var_c8
    
    if ((result & 2) == 0)
        rcx_28 = var_c8[0].q
    
    char var_a0_3 = result & 0xfe
    result = (**rcx_28)(rcx_28, 0)
    
    if ((var_a0_3 & 2) == 0)
        result = sub_140a74f90(var_c8[0].q)

__security_check_cookie(rax_1 ^ &var_148)
return result
