// 函数: sub_141b286a0
// 地址: 0x141b286a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
float rax_2 = *(arg2 + 0x24)
int64_t* r12 = 0x10
float var_48 = arg4.d
float var_128
int64_t r8

if (rax_2 == 0x80000000)
    int64_t* r8_1 = 0x10
    
    if (*(arg2 + 0x20) != 0)
        r8_1 = 4
    
    r8 = *(r8_1 + arg2)
else
    var_128 = rax_2
    int32_t var_124_1 = 0
    r8 = var_128.q

uint128_t var_80
int512_t zmm1 = sub_141b13380(arg1 + 0x48, &var_80, r8, arg4)
int64_t var_100
sub_141a52640(arg1, &var_100)
TEB* gsbase

if (data_143f2c7d8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2c7d8)
    
    if (data_143f2c7d8 == 0xffffffff)
        data_143f2c7d0 = var_100
        _Init_thread_footer(&data_143f2c7d8)

int32_t var_110

if (sub_141aefbb0(sub_141a500a0(arg3, zmm1), data_143f2c7d0) == 0)
    void** var_f8
    sub_141a312f0(&var_f8)
    int64_t* rax_7 = sub_140596d10(&var_110, arg1 + 0x28)
    int64_t var_138_1 = *(arg1 + 0x40)
    int512_t zmm1_1 = sub_141a54490(&var_f8, *(arg1 + 0x20), rax_7, *(arg1 + 0x38))
    void*** rax_9 = j_sub_140a82f30(0x60)
    void*** rbx_1 = rax_9
    int64_t* var_e8
    
    if (rax_9 == 0)
        rbx_1 = nullptr
    else
        rax_9[1].d = 1
        *(rax_9 + 0xc) = 1
        *rbx_1 = &data_142d4cbc0
        __builtin_memset(&rbx_1[3], 0, 0x20)
        int64_t var_e0
        rbx_1[7] = var_e0
        rbx_1[2] = &data_143051dc0
        rbx_1[8] = &data_142d4c6c0
        int64_t var_f0
        rbx_1[9] = var_f0
        rbx_1[0xa] = var_e8
        
        if (var_e8 != 0)
            var_e8[1].d += 1
        
        rbx_1[0xb] = var_e0
    
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
    
    var_128.q = &rbx_1[2]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    var_110.q = data_143f2c7d0
    sub_1405a72d0(sub_141a500a0(arg3, zmm1_1), &var_110, &var_128)
    
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
    
    if (var_e8 != 0)
        var_e8[1].d -= 1
        
        if (var_e8[1].d == 1)
            (**var_e8)(var_e8)
            int32_t temp6_1 = *(var_e8 + 0xc)
            *(var_e8 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_e8 + 8))(var_e8, 1)

float rax_26 = *(arg2 + 0x24)
int64_t rdx_6

if (rax_26 == 0x80000000)
    int64_t* rdx_7 = 0x10
    
    if (*(arg2 + 0x20) != 0)
        rdx_7 = 4
    
    rdx_6 = *(rdx_7 + arg2)
else
    var_128 = rax_26
    int32_t var_124_2 = 0
    rdx_6 = var_128.q

uint128_t zmm0
int512_t zmm1_2
zmm0, zmm1_2 = sub_141a47d70(arg1, rdx_6)
float zmm6 = zmm0.d

if (((*(arg1 + 0x68c) u>> 9).b & 1) != 0)
    int32_t rax_29 = *(arg2 + 0x24)
    var_128 = 1f
    int64_t rdx_8
    
    if (rax_29 == 0x80000000)
        if (*(arg2 + 0x20) != 0)
            r12 = 4
        
        rdx_8 = *(r12 + arg2)
    else
        var_110 = rax_29
        int64_t var_10c
        var_10c.d = 0
        rdx_8 = var_110.q
    
    zmm1_2, zmm6 = sub_141a467f0(arg1 + 0x5e8, rdx_8, &var_128)
    zmm6 = zmm6 * var_128

char rdx_9 = *(arg1 + 0x688)
char var_a8
char result_1 = var_a8 | 3
zmm0 = var_80
void** const var_d8 = &data_14305da28
int128_t var_70
zmm1_2.o = var_70
int64_t var_10c_1 = -1
uint128_t var_d0 = zmm0
char var_104 = 0
int128_t var_c0 = zmm1_2.o
int64_t var_60
uint64_t var_b0 = var_60
int32_t rax_30 = data_1439e5888
int64_t rbx_3 = data_143f2c7d0
int32_t var_a0 = rax_30
var_110 = rax_30
float var_8c = zmm6
int64_t var_9c = -1
char var_94 = 0
int32_t var_90 = 0
char var_88 = rdx_9
__builtin_memset(&var_128, 0, 0x14)
void* rax_31 = sub_141a500a0(arg3, zmm1_2)
int32_t var_90_1 = *(arg2 + 0x50)
var_a0.o = var_110.o
sub_141aec600(sub_1405a8fd0(rax_31 + 0x50, sub_1405be5b0(&var_128), &var_128), rbx_3, &var_d8)
char result = result_1

if ((result & 1) != 0)
    void** const rcx_27 = &var_d8
    
    if ((result & 2) == 0)
        rcx_27 = var_d8
    
    char var_a8_1 = result & 0xfe
    result = (**rcx_27)(rcx_27, 0)
    
    if ((var_a8_1 & 2) == 0)
        result = sub_140a74f90(var_d8)

__security_check_cookie(rax_1 ^ &var_158)
return result
