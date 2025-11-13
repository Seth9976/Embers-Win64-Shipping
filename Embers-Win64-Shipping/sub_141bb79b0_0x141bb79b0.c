// 函数: sub_141bb79b0
// 地址: 0x141bb79b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t rax_2 = *(arg2 + 0x24)
int32_t* var_c0 = arg3
int32_t* r13 = arg3
int64_t* r12 = 0x10
int32_t var_f0
int64_t rbx

if (rax_2 == 0x80000000)
    int64_t* rbx_1 = 0x10
    
    if (*(arg2 + 0x20) != 0)
        rbx_1 = 4
    
    rbx = *(rbx_1 + arg2)
else
    var_f0 = rax_2
    int32_t var_ec_1 = 0
    rbx = var_f0.q

int32_t rdi = 0
int32_t var_f8 = 0
int32_t rsi = 0
int32_t var_70

if (sub_141a467f0(arg1 + 0xe8, rbx, &var_f8) != 0)
    rdi = 1
    var_70 = var_f8
    rsi = 1

if (sub_141a467f0(arg1 + 0x48, rbx, &var_f8) != 0)
    rdi = rsi | 2
    int32_t var_6c_1 = var_f8
    rsi = rdi

if (sub_141a467f0(arg1 + 0x188, rbx, &var_f8) != 0)
    rdi = rsi | 4
    int32_t var_68_1 = var_f8
    rsi = rdi

char rax_6
int512_t zmm1
int32_t zmm6
rax_6, zmm1, zmm6 = sub_141a467f0(arg1 + 0x228, rbx, &var_f8)

if (rax_6 != 0)
    int32_t var_64_1 = var_f8
    rdi = rsi | 8

int64_t var_b0
sub_141a52640(arg1, &var_b0)
TEB* gsbase

if (data_143f315b8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f315b8)
    
    if (data_143f315b8 == 0xffffffff)
        data_143f315b0 = var_b0
        _Init_thread_footer(&data_143f315b8)

int32_t* result = sub_141b715b0(sub_141a500a0(r13, zmm1), data_143f315b0)
void* var_e8
int32_t var_d0
int64_t* var_a8
int64_t* var_98
int64_t var_90

if (result == 0)
    sub_141a312f0(&var_a8)
    int64_t* rax_10 = sub_140596d10(&var_e8, arg1 + 0x28)
    int64_t var_108_1 = *(arg1 + 0x40)
    int512_t zmm1_1
    zmm1_1, zmm6 = sub_141a54490(&var_a8, *(arg1 + 0x20), rax_10, *(arg1 + 0x38))
    void*** rax_12 = j_sub_140a82f30(0x60)
    void*** rbx_2 = rax_12
    
    if (rax_12 == 0)
        rbx_2 = nullptr
    else
        rax_12[1].d = 1
        *(rax_12 + 0xc) = 1
        *rbx_2 = &data_142d4cbc0
        __builtin_memset(&rbx_2[3], 0, 0x20)
        rbx_2[7] = var_90
        rbx_2[2] = &data_14306e368
        rbx_2[8] = &data_142d4c6c0
        int64_t var_a0
        rbx_2[9] = var_a0
        rbx_2[0xa] = var_98
        
        if (var_98 != 0)
            var_98[1].d += 1
        
        rbx_2[0xb] = var_90
    
    int64_t* rsi_1 = &rbx_2[3]
    
    if (rbx_2 == -0x10)
        rsi_1 = nullptr
    
    if (rsi_1 != 0)
        void* rax_17
        
        if (*rsi_1 != 0)
            rax_17 = rsi_1[1]
        
        if (*rsi_1 == 0 || rax_17 == 0 || *(rax_17 + 8) s<= 0)
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            *rsi_1 = &rbx_2[2]
            int64_t* rcx_12 = rsi_1[1]
            
            if (rbx_2 != rcx_12)
                if (rbx_2 != 0)
                    *(rbx_2 + 0xc) += 1
                    rcx_12 = rsi_1[1]
                
                if (rcx_12 != 0)
                    int32_t temp8_1 = *(rcx_12 + 0xc)
                    *(rcx_12 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rcx_12 + 8))(rcx_12, 1)
                
                rsi_1[1] = rbx_2
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp7_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*rbx_2)[1](rbx_2, 1)
    
    var_e8 = &rbx_2[2]
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    r13 = var_c0
    var_d0.q = data_143f315b0
    void* rax_22 = sub_141a500a0(r13, zmm1_1)
    var_c0 = &var_d0
    void** var_b8_1 = &var_e8
    result = sub_141a29c30(rax_22, &var_f0, &var_c0, nullptr)
    
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

if (rdi != 0)
    int32_t rax_29 = *(arg2 + 0x24)
    int32_t var_48_1 = zmm6
    int64_t rdx_9
    
    if (rax_29 == 0x80000000)
        if (*(arg2 + 0x20) != 0)
            r12 = 4
        
        rdx_9 = *(r12 + arg2)
    else
        var_f0 = rax_29
        int32_t var_ec_2 = 0
        rdx_9 = var_f0.q
    
    int32_t zmm0_5
    int512_t zmm1_2
    zmm0_5, zmm1_2 = sub_141a47d70(arg1, rdx_9)
    char rbx_4 = *(arg1 + 0x2c8)
    var_98.b &= 0xfc
    int64_t* rax_30 = sub_140a82f30(0x20, 8)
    char rcx_24 = var_98.b | 1
    var_a8 = rax_30
    var_98.b = rcx_24
    int64_t* rcx_25 = &var_a8
    int64_t var_cc_1 = -1
    
    if ((rcx_24 & 2) == 0)
        rcx_25 = rax_30
    
    *(rcx_25 + 8) = var_70.o
    rcx_25[3].d = rdi
    *rcx_25 = &data_1430838c0
    int32_t rax_31 = data_1439ec468
    int32_t var_80_1 = 0
    char var_c4_1 = 0
    __builtin_memset(&var_e8, 0, 0x14)
    char var_78_1 = rbx_4
    int64_t rbx_5 = data_143f315b0
    int32_t var_7c_1 = zmm0_5
    var_90.d = rax_31
    var_90 = -1
    char var_84_1 = 0
    var_d0 = rax_31
    void* rax_32 = sub_141a500a0(r13, zmm1_2)
    int32_t var_80_2 = *(arg2 + 0x50)
    var_90.o = var_d0.o
    sub_141b6c8d0(sub_1405a8fd0(rax_32 + 0x50, sub_1405be5b0(&var_e8), &var_e8), rbx_5, &var_a8)
    result = zx.q(var_98.b)
    
    if ((result.b & 1) != 0)
        int64_t* rcx_31 = &var_a8
        
        if ((result.b & 2) == 0)
            rcx_31 = var_a8
        
        result.b &= 0xfe
        var_98.b = result.b
        result = (**rcx_31)(rcx_31, 0)
        
        if ((var_98.b & 2) == 0)
            result = sub_140a74f90(var_a8)

__security_check_cookie(rax_1 ^ &var_128)
return result
