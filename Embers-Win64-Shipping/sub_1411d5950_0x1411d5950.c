// 函数: sub_1411d5950
// 地址: 0x1411d5950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
TEB* gsbase
int128_t zmm6

if (data_143e7d428 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    arg5 = _Init_thread_header(&data_143e7d428)
    
    if (data_143e7d428 == 0xffffffff)
        zmm6 = sub_140b4c820(&arg_8, u"FHairStrandsVertexFactory")
        data_143e7d420 = sub_1419cfe40(&arg_8)
        arg5 = _Init_thread_footer(&data_143e7d428)

int64_t* rcx = *(arg2 + 0x80)
uint64_t rdx = zx.q(*(arg1 + 0x10))
int64_t arg_20 = 0
int64_t* rax_3 = (*(*rcx + 0x40))(rcx, rdx, &arg_20)
int64_t r12

if (*(arg1 + 0x10) != 3 || rax_3 == 0)
    r12.b = 0
else
    int64_t rdx_1 = *rax_3
    
    if ((*(rdx_1 + 0x158))(rax_3, rdx_1) == 0)
        r12.b = 0
    else
        int64_t r8_1 = *rax_3
        
        if ((*(*(r8_1 + 0x1e8))(rax_3, &arg_8, r8_1) u>> 7 & 1) == 0)
            r12.b = 0
        else
            int32_t rax_7 = (*(*rax_3 + 0x1d8))(rax_3)
            int32_t rax_9
            
            if (rax_7 != 0)
                rax_9 = (*(*rax_3 + 0x1d8))(rax_3)
            
            if (rax_7 != 0 && rax_9 != 1)
                r12.b = 0
            else
                r12.b = 1

int64_t* rcx_6 = *(arg2 + 0x78)
void* rbx = data_143e7d420
int64_t rcx_7 = *((*(*rcx_6 + 0x40))(rcx_6) + 0x20)
uint64_t result

if (arg4 != 0)
    if (*(arg4 + 0x37) s>= 0)
        result.b = 0
    else
        result.b = 1
else if (*(arg2 + 0x70) s> arg4.d)
    result.b = 1
else
    result.b = 0

int32_t r13

if (arg4 == 0 || *(arg4 + 0x3f) == 0)
    r13 = 0
else
    r13 = 1

if (r12.b != 0 && rcx_7 == *(rbx + 0x20) && result.b != 0)
    result = (*(*rax_3 + 0x20))(rax_3)
    
    if (result.d != 3)
        int64_t r12_1 = arg_20
        
        if (r12_1 == 0)
            r12_1 = *(arg2 + 0x80)
        
        int128_t var_58_1 = zmm6
        int128_t zmm7
        int128_t var_68_1 = zmm7
        int128_t zmm8
        int128_t var_78_1 = zmm8
        int128_t zmm9
        int128_t var_88_1 = zmm9
        int128_t zmm10
        int128_t var_98_1 = zmm10
        int128_t zmm11
        int128_t var_a8_1 = zmm11
        int128_t zmm12
        int128_t var_b8_1 = zmm12
        int64_t var_c8 = sub_141261c60(arg2)
        int32_t rax_13 = sub_141261c10(arg2, rax_3, &var_c8)
        result = sub_141261bd0(arg2, rax_3, &var_c8)
        int32_t rcx_12 = *(arg1 + 0x28)
        arg_8 = result.d
        int128_t var_1a8
        int64_t var_188
        void* var_148
        int128_t var_138
        
        if (rcx_12 == 3)
            int64_t* rcx_13 = *(arg2 + 0x78)
            void* rax_15 = (*(*rcx_13 + 0x40))(rcx_13)
            void** rdx_5 = &var_148
            char var_200_1 = 1
            int32_t var_208_1 = 0
            
            if (arg9 == 0)
                void** rax_32
                int512_t zmm0_1
                rax_32, zmm0_1 = sub_142127800(rax_3, rdx_5, &data_143e7c500, rax_15, arg5)
                char var_200_4 = 1
                int32_t var_208_4 = 0
                int64_t var_1b0_3 = rax_32[1]
                zmm7 = (*rax_32).o
                void** rax_33 = sub_142127800(rax_3, &var_148, &data_143e7cd40, rax_15, zmm0_1)
                void* rdx_10 = *(arg1 + 0x18)
                char var_200_5 = 0
                void* rcx_24 = *rax_33
                int64_t var_1b0_4 = rax_33[1]
                var_188 = *(arg1 + 0x30)
                int64_t var_180_2 = *(arg1 + 0x38)
                int32_t var_178_2 = *(arg1 + 0x40)
                int64_t var_170_2 = *(arg1 + 0x48)
                int64_t var_168_2 = *(arg1 + 0x50)
                int64_t var_160_2 = *(arg1 + 0x58)
                int64_t var_158_2 = *(arg1 + 0x60)
                int32_t var_150_2 = *(arg1 + 0x68)
                int32_t var_198_2 = arg7
                int32_t var_194_2 = arg8
                var_1a8 = zx.o(0)
                int32_t var_190_2 = r13
                sub_141458e70(&var_1a8, rdx_10, arg4, arg2, arg6, 0)
                int32_t rax_46 = arg_8
                var_200_5.q = rax_3
                int32_t var_208_5
                var_208_5.q = r12_1
                var_138 = zmm7
                int128_t var_128_1
                __builtin_memset(&var_128_1, 0, 0x20)
                int128_t var_108_2 = rcx_24.o
                int128_t var_f8_1
                __builtin_memset(&var_f8_1, 0, 0x30)
                result = sub_1411b3ae0(arg1, arg2, arg3, arg4, var_208_5, var_200_5, &var_188, 
                    &var_138, rax_13, rax_46, 0, 0, &var_1a8)
            else
                void** rax_16
                int512_t zmm0
                rax_16, zmm0 = sub_142127800(rax_3, rdx_5, &data_143e7c660, rax_15, arg5)
                char var_200_2 = 1
                int32_t var_208_2 = 0
                int64_t var_1b0_1 = rax_16[1]
                zmm7 = (*rax_16).o
                void** rax_17 = sub_142127800(rax_3, &var_148, &data_143e7cd40, rax_15, zmm0)
                void* rdx_7 = *(arg1 + 0x18)
                char var_200_3 = 0
                void* rcx_18 = *rax_17
                int64_t var_1b0_2 = rax_17[1]
                var_188 = *(arg1 + 0x30)
                int64_t var_180_1 = *(arg1 + 0x38)
                int32_t var_178_1 = *(arg1 + 0x40)
                int64_t var_170_1 = *(arg1 + 0x48)
                int64_t var_168_1 = *(arg1 + 0x50)
                int64_t var_160_1 = *(arg1 + 0x58)
                int64_t var_158_1 = *(arg1 + 0x60)
                int32_t var_150_1 = *(arg1 + 0x68)
                int32_t var_198_1 = arg7
                int32_t var_194_1 = arg8
                var_1a8 = zx.o(0)
                int32_t var_190_1 = r13
                sub_141458e70(&var_1a8, rdx_7, arg4, arg2, arg6, 0)
                int32_t rax_30 = arg_8
                var_200_3.q = rax_3
                int32_t var_208_3
                var_208_3.q = r12_1
                var_138 = zmm7
                int128_t var_128
                __builtin_memset(&var_128, 0, 0x20)
                int128_t var_108_1 = rcx_18.o
                int128_t var_f8
                __builtin_memset(&var_f8, 0, 0x30)
                result = sub_1411b3ae0(arg1, arg2, arg3, arg4, var_208_3, var_200_3, &var_188, 
                    &var_138, rax_13, rax_30, 0, 0, &var_1a8)
        else if (rcx_12 == 0)
            int64_t* rcx_27 = *(arg2 + 0x78)
            void* rax_49 = (*(*rcx_27 + 0x40))(rcx_27)
            char var_200_6 = 1
            int32_t var_208_6 = 0
            void** rax_50
            int512_t zmm0_2
            rax_50, zmm0_2 = sub_142127800(rax_3, &var_148, &data_143e7c7c0, rax_49, arg5)
            char var_200_7 = 1
            int32_t var_208_7 = 0
            int64_t var_1b0_5 = rax_50[1]
            zmm7 = (*rax_50).o
            void** rax_51 = sub_142127800(rax_3, &var_148, &data_143e7cea0, rax_49, zmm0_2)
            void* rdx_14 = *(arg1 + 0x18)
            char var_200_8 = 0
            void* rcx_32 = *rax_51
            int64_t var_1b0_6 = rax_51[1]
            var_188 = *(arg1 + 0x30)
            int64_t var_180_3 = *(arg1 + 0x38)
            int32_t var_178_3 = *(arg1 + 0x40)
            int64_t var_170_3 = *(arg1 + 0x48)
            int64_t var_168_3 = *(arg1 + 0x50)
            int64_t var_160_3 = *(arg1 + 0x58)
            int64_t var_158_3 = *(arg1 + 0x60)
            int32_t var_150_3 = *(arg1 + 0x68)
            int32_t var_198_3 = arg7
            int32_t var_194_3 = arg8
            var_1a8 = zx.o(0)
            int32_t var_190_3 = r13
            sub_141458e70(&var_1a8, rdx_14, arg4, arg2, arg6, 0)
            var_138 = zmm7
            int32_t rax_64 = arg_8
            int128_t var_128_2
            __builtin_memset(&var_128_2, 0, 0x20)
            int128_t var_108_3 = rcx_32.o
            int128_t var_f8_2
            __builtin_memset(&var_f8_2, 0, 0x30)
            var_200_8.q = rax_3
            int32_t var_208_8
            var_208_8.q = r12_1
            result = sub_1411b2ca0(arg1, arg2, arg3, arg4, var_208_8, nullptr, &var_188, &var_138, 
                rax_13, rax_64, 0, 0, &var_1a8)
        else if (rcx_12 == 1)
            int64_t* rcx_35 = *(arg2 + 0x78)
            void* rax_67 = (*(*rcx_35 + 0x40))(rcx_35)
            char var_200_9 = 1
            int32_t var_208_9 = 0
            void** rax_68
            int512_t zmm0_3
            rax_68, zmm0_3 = sub_142127800(rax_3, &var_148, &data_143e7c920, rax_67, arg5)
            char var_200_10 = 1
            int32_t var_208_10 = 0
            int64_t var_1b0_7 = rax_68[1]
            zmm7 = (*rax_68).o
            void** rax_69 = sub_142127800(rax_3, &var_148, &data_143e7d000, rax_67, zmm0_3)
            void* rdx_18 = *(arg1 + 0x18)
            char var_200_11 = 0
            void* rcx_40 = *rax_69
            int64_t var_1b0_8 = rax_69[1]
            var_188 = *(arg1 + 0x30)
            int64_t var_180_4 = *(arg1 + 0x38)
            int32_t var_178_4 = *(arg1 + 0x40)
            int64_t var_170_4 = *(arg1 + 0x48)
            int64_t var_168_4 = *(arg1 + 0x50)
            int64_t var_160_4 = *(arg1 + 0x58)
            int64_t var_158_4 = *(arg1 + 0x60)
            int32_t var_150_4 = *(arg1 + 0x68)
            int32_t var_198_4 = arg7
            int32_t var_194_4 = arg8
            var_1a8 = zx.o(0)
            int32_t var_190_4 = r13
            sub_141458e70(&var_1a8, rdx_18, arg4, arg2, arg6, 0)
            var_138 = zmm7
            int32_t rax_82 = arg_8
            int128_t var_128_3
            __builtin_memset(&var_128_3, 0, 0x20)
            int128_t var_108_4 = rcx_40.o
            int128_t var_f8_3
            __builtin_memset(&var_f8_3, 0, 0x30)
            var_200_11.q = rax_3
            int32_t var_208_11
            var_208_11.q = r12_1
            result = sub_1411b2ca0(arg1, arg2, arg3, arg4, var_208_11, nullptr, &var_188, &var_138, 
                rax_13, rax_82, 0, 0, &var_1a8)
        else if (rcx_12 == 4)
            int64_t* rcx_43 = *(arg2 + 0x78)
            void* rax_85 = (*(*rcx_43 + 0x40))(rcx_43)
            char var_200_12 = 1
            int32_t var_208_12 = 0
            void** rax_86
            int512_t zmm0_4
            rax_86, zmm0_4 = sub_142127800(rax_3, &var_148, &data_143e7ca80, rax_85, arg5)
            char var_200_13 = 1
            int32_t var_208_13 = 0
            int64_t var_1b0_9 = rax_86[1]
            zmm7 = (*rax_86).o
            void** rax_87 = sub_142127800(rax_3, &var_148, &data_143e7d160, rax_85, zmm0_4)
            void* rdx_22 = *(arg1 + 0x18)
            char var_200_14 = 0
            void* rcx_48 = *rax_87
            int64_t var_1b0_10 = rax_87[1]
            var_188 = *(arg1 + 0x30)
            int64_t var_180_5 = *(arg1 + 0x38)
            int32_t var_178_5 = *(arg1 + 0x40)
            int64_t var_170_5 = *(arg1 + 0x48)
            int64_t var_168_5 = *(arg1 + 0x50)
            int64_t var_160_5 = *(arg1 + 0x58)
            int64_t var_158_5 = *(arg1 + 0x60)
            int32_t var_150_5 = *(arg1 + 0x68)
            int32_t var_198_5 = arg7
            int32_t var_194_5 = arg8
            var_1a8 = zx.o(0)
            int32_t var_190_5 = r13
            sub_141458e70(&var_1a8, rdx_22, arg4, arg2, arg6, 0)
            var_138 = zmm7
            int32_t rax_100 = arg_8
            int128_t var_128_4
            __builtin_memset(&var_128_4, 0, 0x20)
            int128_t var_108_5 = rcx_48.o
            int128_t var_f8_4
            __builtin_memset(&var_f8_4, 0, 0x30)
            var_200_14.q = rax_3
            int32_t var_208_14
            var_208_14.q = r12_1
            result = sub_1411b2ca0(arg1, arg2, arg3, arg4, var_208_14, nullptr, &var_188, &var_138, 
                rax_13, rax_100, 0, 0, &var_1a8)
        else if (rcx_12 == 2)
            int64_t* rcx_51 = *(arg2 + 0x78)
            void* rax_103 = (*(*rcx_51 + 0x40))(rcx_51)
            char var_200_15 = 1
            int32_t var_208_15 = 0
            void** rax_104
            int512_t zmm0_5
            rax_104, zmm0_5 = sub_142127800(rax_3, &var_148, &data_143e7cbe0, rax_103, arg5)
            char var_200_16 = 1
            int32_t var_208_16 = 0
            int64_t var_1b0_11 = rax_104[1]
            zmm7 = (*rax_104).o
            void** rax_105 = sub_142127800(rax_3, &var_148, &data_143e7d2c0, rax_103, zmm0_5)
            void* rdx_26 = *(arg1 + 0x18)
            char var_200_17 = 0
            void* rcx_56 = *rax_105
            int64_t var_1b0_12 = rax_105[1]
            var_188 = *(arg1 + 0x30)
            int64_t var_180_6 = *(arg1 + 0x38)
            int32_t var_178_6 = *(arg1 + 0x40)
            int64_t var_170_6 = *(arg1 + 0x48)
            int64_t var_168_6 = *(arg1 + 0x50)
            int64_t var_160_6 = *(arg1 + 0x58)
            int64_t var_158_6 = *(arg1 + 0x60)
            int32_t var_150_6 = *(arg1 + 0x68)
            int32_t var_198_6 = arg7
            int32_t var_194_6 = arg8
            var_1a8 = zx.o(0)
            int32_t var_190_6 = r13
            sub_141458e70(&var_1a8, rdx_26, arg4, arg2, arg6, 0)
            var_138 = zmm7
            int32_t rax_118 = arg_8
            int128_t var_128_5
            __builtin_memset(&var_128_5, 0, 0x20)
            int128_t var_108_6 = rcx_56.o
            int128_t var_f8_5
            __builtin_memset(&var_f8_5, 0, 0x30)
            var_200_17.q = rax_3
            int32_t var_208_17
            var_208_17.q = r12_1
            result = sub_1411b2ca0(arg1, arg2, arg3, arg4, var_208_17, nullptr, &var_188, &var_138, 
                rax_13, rax_118, 0, 0, &var_1a8)

return result
