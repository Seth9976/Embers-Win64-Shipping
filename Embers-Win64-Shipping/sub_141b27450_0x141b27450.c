// 函数: sub_141b27450
// 地址: 0x141b27450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t rax_2 = *(arg2 + 0x24)
void* var_f8 = arg3
void* rsi = arg3
int64_t* r15 = 0x10
int32_t var_f0
int32_t var_ec
int64_t r8

if (rax_2 == 0x80000000)
    int64_t* r8_1 = 0x10
    
    if (*(arg2 + 0x20) != 0)
        r8_1 = 4
    
    r8 = *(r8_1 + arg2)
else
    var_f0 = rax_2
    var_ec = 0
    r8 = var_f0.q

uint128_t var_78
char result
int512_t zmm1
uint128_t zmm6
float zmm6_1
result, zmm1, zmm6_1 = sub_141b13380(arg1 + 0x20, &var_78, r8, zmm6)
int32_t var_54

if (var_54 != 0)
    float var_48_1 = zmm6_1
    TEB* gsbase
    
    if (data_143f2c638
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f2c638)
        
        if (data_143f2c638 == 0xffffffff)
            int64_t rax_27 = data_143f2c630
            
            if (rax_27 == 0)
                rax_27 = sub_141a54240(&data_143f2c630, 0)
            
            data_143f2c628 = rax_27
            _Init_thread_footer(&data_143f2c638)
    
    int64_t rbx_1 = data_143f2c628
    void* var_e0
    
    if (sub_141aef6b0(sub_141a500a0(rsi, zmm1), rbx_1) == 0)
        void*** rax_7 = sub_141af2a00()
        void** rsi_1 = &rax_7[3]
        
        if (rax_7 == -0x10)
            rsi_1 = nullptr
        
        if (rsi_1 != 0)
            void* rax_8
            
            if (*rsi_1 != 0)
                rax_8 = rsi_1[1]
            
            if (*rsi_1 == 0 || rax_8 == 0 || *(rax_8 + 8) s<= 0)
                if (rax_7 != 0)
                    rax_7[1].d += 1
                
                *rsi_1 = &rax_7[2]
                int64_t* rcx_5 = rsi_1[1]
                
                if (rax_7 != rcx_5)
                    if (rax_7 != 0)
                        *(rax_7 + 0xc) += 1
                        rcx_5 = rsi_1[1]
                    
                    if (rcx_5 != 0)
                        int32_t temp6_1 = *(rcx_5 + 0xc)
                        *(rcx_5 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rcx_5 + 8))(rcx_5, 1)
                    
                    rsi_1[1] = rax_7
                
                if (rax_7 != 0)
                    rax_7[1].d -= 1
                    
                    if (rax_7[1].d == 1)
                        (**rax_7)(rax_7)
                        int32_t temp5_1 = *(rax_7 + 0xc)
                        *(rax_7 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*rax_7)[1](rax_7, 1)
        
        var_e0 = &rax_7[2]
        
        if (rax_7 != 0)
            rax_7[1].d += 1
        
        var_f0.q = rbx_1
        sub_1405a72d0(sub_141a500a0(var_f8, zmm1), &var_f0, &var_e0)
        
        if (rax_7 != 0)
            rax_7[1].d -= 1
            
            if (rax_7[1].d == 1)
                (**rax_7)(rax_7)
                int32_t temp2_1 = *(rax_7 + 0xc)
                *(rax_7 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*rax_7)[1](rax_7, 1)
        
        if (rax_7 != 0)
            rax_7[1].d -= 1
            
            if (rax_7[1].d == 1)
                (**rax_7)(rax_7)
                int32_t temp3_1 = *(rax_7 + 0xc)
                *(rax_7 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*rax_7)[1](rax_7, 1)
        
        rsi = var_f8
    
    int32_t rax_17 = *(arg2 + 0x24)
    int64_t rdx_3
    
    if (rax_17 == 0x80000000)
        int64_t* rdx_4 = 0x10
        
        if (*(arg2 + 0x20) != 0)
            rdx_4 = 4
        
        rdx_3 = *(rdx_4 + arg2)
    else
        var_f0 = rax_17
        var_ec = 0
        rdx_3 = var_f0.q
    
    float zmm0_1
    int512_t zmm1_1
    zmm0_1, zmm1_1 = sub_141a47d70(arg1, rdx_3)
    float zmm6_2 = zmm0_1
    
    if (((*(arg1 + 0x664) u>> 9).b & 1) != 0)
        int32_t rax_20 = *(arg2 + 0x24)
        var_f8.d = 0x3f800000
        int64_t rdx_5
        
        if (rax_20 == 0x80000000)
            if (*(arg2 + 0x20) != 0)
                r15 = 4
            
            rdx_5 = *(r15 + arg2)
        else
            var_f0 = rax_20
            var_ec = 0
            rdx_5 = var_f0.q
        
        zmm1_1, zmm6_2 = sub_141a467f0(arg1 + 0x5c0, rdx_5, &var_f8)
        zmm6_2 = zmm6_2 f* var_f8.d
    
    char rdi_2 = *(arg1 + 0x660)
    char var_a0
    char var_a0_1 = var_a0 & 0xfc
    uint128_t (* rax_21)[0x2] = sub_140a82f30(0x30, 8)
    uint128_t var_c8[0x2]
    var_c8[0].q = rax_21
    char result_1 = var_a0_1 | 1
    int128_t var_68
    zmm1_1.o = var_68
    uint128_t (* rcx_16)[0x2] = &var_c8
    var_ec.q = -1
    
    if ((result_1 & 2) == 0)
        rcx_16 = rax_21
    
    char var_e4_1 = 0
    *(rcx_16 + 8) = var_78
    *rcx_16 = &data_14305d9d8
    *(rcx_16 + 0x18) = zmm1_1.o
    int64_t var_58
    *(rcx_16 + 0x28) = var_58
    int32_t rax_22 = data_1439e5888
    int32_t var_98_1 = rax_22
    var_f0 = rax_22
    float var_84_1 = zmm6_2
    int64_t var_94_1 = -1
    char var_8c_1 = 0
    int32_t var_88_1 = 0
    char var_80_1 = rdi_2
    __builtin_memset(&var_e0, 0, 0x14)
    void* rax_23 = sub_141a500a0(rsi, zmm1_1)
    int32_t var_88_2 = *(arg2 + 0x50)
    var_98_1.o = var_f0.o
    sub_141aebb80(sub_1405a8fd0(rax_23 + 0x50, sub_1405be5b0(&var_e0), &var_e0), rbx_1, &var_c8)
    result = result_1
    
    if ((result & 1) != 0)
        uint128_t (* rcx_22)[0x2] = &var_c8
        
        if ((result & 2) == 0)
            rcx_22 = var_c8[0].q
        
        char var_a0_3 = result & 0xfe
        result = (**rcx_22)(rcx_22, 0)
        
        if ((var_a0_3 & 2) == 0)
            result = sub_140a74f90(var_c8[0].q)

__security_check_cookie(rax_1 ^ &var_118)
return result
