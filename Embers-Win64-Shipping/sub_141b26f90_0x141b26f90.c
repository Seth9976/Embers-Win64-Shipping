// 函数: sub_141b26f90
// 地址: 0x141b26f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t rax_2 = *(arg2 + 0x24)
void* var_c0 = arg3
int32_t var_d8
int64_t rbx

if (rax_2 == 0x80000000)
    int64_t* rbx_1 = 0x10
    
    if (*(arg2 + 0x20) != 0)
        rbx_1 = 4
    
    rbx = *(rbx_1 + arg2)
else
    var_d8 = rax_2
    int32_t var_d4_1 = 0
    rbx = var_d8.q

int32_t rsi = 0
int128_t var_70
int128_t* r14 = &var_70
int32_t var_60 = 0
void* r15 = arg1 + 0x48
int64_t rdi
rdi.b = 0
int512_t zmm1_1
int32_t zmm6_1

do
    var_d8 = 0
    char rax_3
    rax_3, zmm1_1, zmm6_1 = sub_141a467f0(r15, rbx, &var_d8)
    
    if (rax_3 != 0)
        *r14 = var_d8
        rsi = var_60 | 1 << rdi.b
        var_60 = rsi
    
    rdi.b += 1
    r15 += 0xa0
    r14 += 4
while (rdi.b u< 4)

int64_t var_b0
sub_141a52640(arg1, &var_b0)
TEB* gsbase

if (data_143f2c720 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2c720)
    
    if (data_143f2c720 == 0xffffffff)
        data_143f2c718 = var_b0
        _Init_thread_footer(&data_143f2c720)

void* r15_1 = var_c0
uint64_t result = sub_141aefae0(sub_141a500a0(r15_1, zmm1_1), data_143f2c718)
int64_t* var_a8
int64_t* var_98
int64_t var_90

if (result == 0)
    sub_141a312f0(&var_a8)
    int64_t* rax_8 = sub_140596d10(&var_c0, arg1 + 0x28)
    int64_t var_e8_1 = *(arg1 + 0x40)
    int512_t zmm1_2
    zmm1_2, zmm6_1 = sub_141a54490(&var_a8, *(arg1 + 0x20), rax_8, *(arg1 + 0x38))
    void*** rax_10 = j_sub_140a82f30(0x60)
    void*** rbx_2 = rax_10
    
    if (rax_10 == 0)
        rbx_2 = nullptr
    else
        rax_10[1].d = 1
        *(rax_10 + 0xc) = 1
        *rbx_2 = &data_142d4cbc0
        __builtin_memset(&rbx_2[3], 0, 0x20)
        rbx_2[7] = var_90
        rbx_2[2] = &data_143054170
        rbx_2[8] = &data_142d4c6c0
        int64_t var_a0
        rbx_2[9] = var_a0
        rbx_2[0xa] = var_98
        
        if (var_98 != 0)
            var_98[1].d += 1
        
        rbx_2[0xb] = var_90
    
    int64_t* rdi_1 = &rbx_2[3]
    
    if (rbx_2 == -0x10)
        rdi_1 = nullptr
    
    if (rdi_1 != 0)
        void* rax_15
        
        if (*rdi_1 != 0)
            rax_15 = rdi_1[1]
        
        if (*rdi_1 == 0 || rax_15 == 0 || *(rax_15 + 8) s<= 0)
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            *rdi_1 = &rbx_2[2]
            int64_t* rcx_10 = rdi_1[1]
            
            if (rbx_2 != rcx_10)
                if (rbx_2 != 0)
                    *(rbx_2 + 0xc) += 1
                    rcx_10 = rdi_1[1]
                
                if (rcx_10 != 0)
                    int32_t temp8_1 = *(rcx_10 + 0xc)
                    *(rcx_10 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rcx_10 + 8))(rcx_10, 1)
                
                rdi_1[1] = rbx_2
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp7_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*rbx_2)[1](rbx_2, 1)
    
    var_d8.q = &rbx_2[2]
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    var_c0 = data_143f2c718
    result = sub_1405a72d0(sub_141a500a0(r15_1, zmm1_2), &var_c0, &var_d8)
    
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
    
    if (var_98 != 0)
        var_98[1].d -= 1
        
        if (var_98[1].d == 1)
            result = (**var_98)(var_98)
            int32_t temp6_1 = *(var_98 + 0xc)
            *(var_98 + 0xc) -= 1
            
            if (temp6_1 == 1)
                result = (*(*var_98 + 8))(var_98, 1)

if (rsi != 0)
    int32_t rax_27 = *(arg2 + 0x24)
    int32_t var_48_1 = zmm6_1
    int64_t rdx_6
    
    if (rax_27 == 0x80000000)
        int64_t* rax_28 = 0x10
        
        if (*(arg2 + 0x20) != 0)
            rax_28 = 4
        
        rdx_6 = *(rax_28 + arg2)
    else
        var_d8 = rax_27
        int32_t var_d4_2 = 0
        rdx_6 = var_d8.q
    
    int32_t zmm0_2
    int512_t zmm1_3
    zmm0_2, zmm1_3 = sub_141a47d70(arg1, rdx_6)
    char rbx_4 = *(arg1 + 0x2c8)
    var_98.b &= 0xfc
    int64_t* rax_29 = sub_140a82f30(0x20, 8)
    int128_t zmm0_3 = var_70
    char rcx_22 = var_98.b | 1
    var_a8 = rax_29
    var_98.b = rcx_22
    int64_t* rcx_23 = &var_a8
    var_c0 = -1
    
    if ((rcx_22 & 2) == 0)
        rcx_23 = rax_29
    
    *(rcx_23 + 8) = zmm0_3
    rcx_23[3].d = rsi
    *rcx_23 = &data_14305da08
    int32_t rax_30 = data_1439e5888
    int32_t var_80_1 = 0
    char var_b4_1 = 0
    __builtin_memset(&var_d8, 0, 0x14)
    char var_78_1 = rbx_4
    int64_t rbx_5 = data_143f2c718
    int32_t var_7c_1 = zmm0_2
    var_90.d = rax_30
    var_90 = -1
    char var_84_1 = 0
    var_c0.d = rax_30
    void* rax_31 = sub_141a500a0(r15_1, zmm1_3)
    int32_t var_80_2 = *(arg2 + 0x50)
    var_90.o = var_c0.o
    sub_141aec330(sub_1405a8fd0(rax_31 + 0x50, sub_1405be5b0(&var_d8), &var_d8), rbx_5, &var_a8)
    result = zx.q(var_98.b)
    
    if ((result.b & 1) != 0)
        int64_t* rcx_29 = &var_a8
        
        if ((result.b & 2) == 0)
            rcx_29 = var_a8
        
        result.b &= 0xfe
        var_98.b = result.b
        result = (**rcx_29)(rcx_29, 0)
        
        if ((var_98.b & 2) == 0)
            result = sub_140a74f90(var_a8)

__security_check_cookie(rax_1 ^ &var_108)
return result
