// 函数: sub_141bb7370
// 地址: 0x141bb7370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t rax_2 = *(arg2 + 0x24)
void* var_120 = arg3
int64_t r13 = 0x10
int32_t var_128
int64_t rbx

if (rax_2 == 0x80000000)
    int64_t* rbx_1 = 0x10
    
    if (arg2[4].d != 0)
        rbx_1 = 4
    
    rbx = *(rbx_1 + arg2)
else
    var_128 = rax_2
    int32_t var_124_1 = 0
    rbx = var_128.q

int32_t rsi = *(arg1 + 0x4ac)
int32_t var_a4 = 0
int32_t rdi = 0
var_128 = 0
int32_t r12 = 0
int32_t var_c0
int32_t zmm6

if ((rsi.b & 1) != 0)
    char rax_3
    rax_3, arg4, zmm6 = sub_141a467f0(arg1 + 0x48, rbx, &var_128)
    
    if (rax_3 != 0)
        rdi = 1
        var_c0 = var_128
        r12 = 1
        int32_t var_a4_1 = 1

var_128 = 0

if (((rsi u>> 1).b & 1) != 0)
    char rax_6
    rax_6, arg4, zmm6 = sub_141a467f0(arg1 + 0xe8, rbx, &var_128)
    
    if (rax_6 != 0)
        rdi = r12 | 2
        int32_t var_bc_1 = var_128
        int32_t var_a4_2 = rdi

var_128 = 0

if (((rsi u>> 3).b & 1) != 0)
    char rax_9
    rax_9, arg4, zmm6 = sub_141a467f0(arg1 + 0x228, rbx, &var_128)
    
    if (rax_9 != 0)
        rdi |= 4
        int32_t var_b8_1 = var_128
        int32_t var_a4_3 = rdi

var_128 = 0

if (((rsi u>> 4).b & 1) != 0)
    char rax_12
    rax_12, arg4, zmm6 = sub_141a467f0(arg1 + 0x2c8, rbx, &var_128)
    
    if (rax_12 != 0)
        rdi |= 8
        int32_t var_b4_1 = var_128
        int32_t var_a4_4 = rdi

var_128 = 0
int32_t var_b0

if (((rsi u>> 5).b & 1) != 0)
    char rax_15
    rax_15, arg4, zmm6 = sub_141a467f0(arg1 + 0x368, rbx, &var_128)
    
    if (rax_15 != 0)
        rdi |= 0x10
        var_b0 = var_128
        int32_t var_a4_5 = rdi

var_128 = 0

if (((rsi u>> 6).b & 1) != 0)
    char rax_18
    rax_18, arg4, zmm6 = sub_141a467f0(arg1 + 0x408, rbx, &var_128)
    
    if (rax_18 != 0)
        rdi |= 0x20
        int32_t var_ac_1 = var_128
        int32_t var_a4_6 = rdi

var_128 = 0

if (((rsi u>> 2).b & 1) != 0)
    char rax_19
    rax_19, arg4, zmm6 = sub_141a467f0(arg1 + 0x188, rbx, &var_128)
    
    if (rax_19 != 0)
        rdi |= 0x40
        int32_t var_a8_1 = var_128
        int32_t var_a4_7 = rdi

int64_t var_f8
sub_141a52640(arg1, &var_f8)
TEB* gsbase

if (data_143f31588 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f31588)
    
    if (data_143f31588 == 0xffffffff)
        data_143f31580 = var_f8
        _Init_thread_footer(&data_143f31588)

void* r12_1 = var_120
int32_t* result = sub_141b716d0(sub_141a500a0(r12_1, arg4), data_143f31580)
int64_t* var_110

if (result == 0)
    void** var_e0
    sub_141a312f0(&var_e0)
    int64_t* rax_23 = sub_140596d10(&var_110, arg1 + 0x28)
    int64_t var_138_1 = *(arg1 + 0x40)
    int512_t zmm1
    zmm1, zmm6 = sub_141a54490(&var_e0, *(arg1 + 0x20), rax_23, *(arg1 + 0x38))
    void*** rax_25 = j_sub_140a82f30(0x60)
    void*** rbx_2 = rax_25
    int64_t* var_d0
    
    if (rax_25 == 0)
        rbx_2 = nullptr
    else
        rax_25[1].d = 1
        *(rax_25 + 0xc) = 1
        *rbx_2 = &data_142d4cbc0
        __builtin_memset(&rbx_2[3], 0, 0x20)
        int64_t var_c8
        rbx_2[7] = var_c8
        rbx_2[2] = &data_14306dce8
        rbx_2[8] = &data_142d4c6c0
        int64_t var_d8
        rbx_2[9] = var_d8
        rbx_2[0xa] = var_d0
        
        if (var_d0 != 0)
            var_d0[1].d += 1
        
        rbx_2[0xb] = var_c8
    
    int64_t* rsi_2 = &rbx_2[3]
    
    if (rbx_2 == -0x10)
        rsi_2 = nullptr
    
    if (rsi_2 != 0)
        void* rax_30
        
        if (*rsi_2 != 0)
            rax_30 = rsi_2[1]
        
        if (*rsi_2 == 0 || rax_30 == 0 || *(rax_30 + 8) s<= 0)
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            *rsi_2 = &rbx_2[2]
            int64_t* rcx_15 = rsi_2[1]
            
            if (rbx_2 != rcx_15)
                if (rbx_2 != 0)
                    *(rbx_2 + 0xc) += 1
                    rcx_15 = rsi_2[1]
                
                if (rcx_15 != 0)
                    int32_t temp8_1 = *(rcx_15 + 0xc)
                    *(rcx_15 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rcx_15 + 8))(rcx_15, 1)
                
                rsi_2[1] = rbx_2
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp7_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*rbx_2)[1](rbx_2, 1)
    
    void* var_f0 = &rbx_2[2]
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    var_120 = data_143f31580
    void* rax_35 = sub_141a500a0(r12_1, zmm1)
    var_110 = &var_120
    void** var_108_1 = &var_f0
    result = sub_141a29c30(rax_35, &var_128, &var_110, nullptr)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                result = (*rbx_2)[1](rbx_2, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                result = (*rbx_2)[1](rbx_2, 1)
    
    if (var_d0 != 0)
        var_d0[1].d -= 1
        
        if (var_d0[1].d == 1)
            result = (**var_d0)(var_d0)
            int32_t temp6_1 = *(var_d0 + 0xc)
            *(var_d0 + 0xc) -= 1
            
            if (temp6_1 == 1)
                result = (*(*var_d0 + 8))(var_d0, 1)
    
    r13 = 0x10

if (rdi != 0)
    int32_t rax_42 = *(arg2 + 0x24)
    int32_t var_48_1 = zmm6
    int64_t rdx_12
    
    if (rax_42 == 0x80000000)
        if (arg2[4].d != 0)
            r13 = 4
        
        rdx_12 = *(arg2 + r13)
    else
        var_128 = rax_42
        int32_t var_124_2 = 0
        rdx_12 = var_128.q
    
    int32_t zmm0_8
    int512_t zmm1_1
    zmm0_8, zmm1_1 = sub_141a47d70(arg1, rdx_12)
    char rbx_4 = *(arg1 + 0x4a8)
    char var_80
    char var_80_1 = var_80 & 0xfc
    int64_t* rax_43 = sub_140a82f30(0x28, 8)
    char result_1 = var_80_1 | 1
    int64_t* var_a0 = rax_43
    zmm1_1.o = var_b0.o
    int64_t* rcx_27 = &var_a0
    var_120 = -1
    
    if ((result_1 & 2) == 0)
        rcx_27 = rax_43
    
    *(rcx_27 + 8) = var_c0.o
    *rcx_27 = &data_1430838b0
    *(rcx_27 + 0x18) = zmm1_1.o
    int32_t rax_44 = data_1439ec468
    int32_t var_68_1 = 0
    char var_114_1 = 0
    __builtin_memset(&var_110, 0, 0x14)
    char var_60_1 = rbx_4
    int64_t rbx_5 = data_143f31580
    int32_t var_64_1 = zmm0_8
    int32_t var_78_1 = rax_44
    int64_t var_74_1 = -1
    char var_6c_1 = 0
    var_120.d = rax_44
    void* rax_45 = sub_141a500a0(r12_1, zmm1_1)
    int32_t var_68_2 = arg2[0xa].d
    var_78_1.o = var_120.o
    sub_141b6cac0(sub_1405a8fd0(rax_45 + 0x50, sub_1405be5b0(&var_110), &var_110), rbx_5, &var_a0)
    result = zx.q(result_1)
    
    if ((result.b & 1) != 0)
        int64_t* rcx_33 = &var_a0
        
        if ((result.b & 2) == 0)
            rcx_33 = var_a0
        
        result.b &= 0xfe
        char var_80_3 = result.b
        result = (**rcx_33)(rcx_33, 0)
        
        if ((var_80_3 & 2) == 0)
            result = sub_140a74f90(var_a0)

__security_check_cookie(rax_1 ^ &var_158)
return result
