// 函数: sub_1411d0910
// 地址: 0x1411d0910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_438
int64_t rax_1 = __security_cookie ^ &var_438
int64_t result = sx.q(arg6)
char var_418 = arg3

if (result.d u< *(arg7 + 0x20) && *(arg7 + 0x38) != 0)
    void* rsi_2 = result * 0x58 + *(arg7 + 0x18)
    
    if (*(rsi_2 + 0x18) != 0 && *(rsi_2 + 0x20) != 0 && *(rsi_2 + 0x28) != 0
            && *(rsi_2 + 0x30) != 0)
        int64_t rbx_2 = *(arg8 + 0x44)
        int32_t* rax_2
        int512_t zmm6_1
        rax_2, zmm6_1 = sub_14081d830(0xd0, *(arg1 + 8), 1, 0)
        int32_t* rdi_1 = rax_2
        
        if (rax_2 == 0)
            rdi_1 = nullptr
        else
            __builtin_memset(&rax_2[6], 0, 0x28)
            sub_14117af20(&rax_2[0x10])
        
        memset(rdi_1, 0, 0xd0)
        void* rax_3 = *(rsi_2 + 0x20)
        uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(rbx_2.d))
        *(rdi_1 + 0x18) = *(rax_3 + 0x10)
        *(rdi_1 + 0x20) = *(*(rsi_2 + 0x28) + 0x10)
        *(rdi_1 + 0x28) = *(*(rsi_2 + 0x30) + 0x10)
        *(rdi_1 + 0x30) = *(*(rsi_2 + 0x18) + 0x10)
        int32_t rcx_6 = 3
        *rdi_1 = zmm1_1.d
        
        if (arg5 u<= 3)
            rcx_6 = arg5
        
        rdi_1[1] = _mm_cvtepi32_ps(zx.o((rbx_2 u>> 0x20).d)).d
        rdi_1[2] = *(arg7 + 0x38)
        rdi_1[3] = rcx_6
        int32_t rax_10
        
        if (arg4 u>= 2)
            rax_10 = 0xc8
            
            if (arg4 u< 0xc8)
                rax_10 = arg4
        else
            rax_10 = 2
        
        rdi_1[4] = rax_10
        int32_t* var_408 = arg8
        int16_t var_3ff_1 = 0
        char var_400_1 = var_418 + 1
        int32_t var_3fc_1 = 0xffffffff
        *(rdi_1 + 0x40) = var_408.o
        sub_1419a2ec0(arg2, &var_408, &data_143e76390, 0)
        int128_t zmm7 = var_408.o
        sub_1419a2ec0(arg2, &var_408, &data_143e76290, 0)
        zmm6_1.o = var_408.o
        int64_t var_120
        __builtin_memset(&var_120, 0, 0x28)
        void var_f8
        sub_14117af20(&var_f8)
        int64_t var_1f0
        __builtin_memset(&var_1f0, 0, 0x28)
        void var_1c8
        sub_14117af20(&var_1c8)
        void var_138
        sub_1411c9200(&var_138, rdi_1)
        void var_208
        int128_t zmm6_2 = sub_1411c9200(&var_208, rdi_1)
        void var_3d8
        sub_1411c80c0(&var_3d8, &var_138)
        void var_308
        sub_1411c80c0(&var_308, &var_208)
        void*** rax_13
        char rcx_15
        rax_13, rcx_15 = sub_14081d830(0x220, *(arg1 + 8), 1, 0)
        void*** rbx_3 = rax_13
        
        if (rax_13 == 0)
            rbx_3 = nullptr
        else
            var_408 = rdi_1
            sub_1411e12f0(rcx_15)
            var_400_1.q = &data_143e7ae90
            var_408.o = var_408.o
            sub_141992bd0(rbx_3, &var_418, &var_408, 1)
            *rbx_3 = &data_142f388f8
            rbx_3[8] = rdi_1
            sub_1411c8000(&rbx_3[0xa], &var_3d8)
            sub_1411c8000(&rbx_3[0x24], &var_308)
            *(rbx_3 + 0x1f0) = zmm7
            rbx_3[0x42] = rbx_2
            *(rbx_3 + 0x200) = zmm6_2
        
        sub_1419968d0(arg1, rbx_3)
        void var_2d0
        sub_1405d1550(&var_2d0)
        void var_3a0
        sub_1405d1550(&var_3a0)
        int128_t var_1d8
        sub_1405d1550(&var_1d8:8)
        int128_t var_108
        result = sub_1405d1550(&var_108:8)

__security_check_cookie(rax_1 ^ &var_438)
return result
