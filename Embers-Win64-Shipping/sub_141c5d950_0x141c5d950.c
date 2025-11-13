// 函数: sub_141c5d950
// 地址: 0x141c5d950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* result

if (arg1 == -0x7f8)
    result = nullptr
else
    TEB* gsbase
    
    if (arg2 == 1)
        if (data_143f34fc4
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f34fc4)
            
            if (data_143f34fc4 == 0xffffffff)
                int32_t var_8c_1 = 0x3f800000
                int64_t var_98_1 = 2
                int32_t var_90_1 = 0
                sub_1405a4be0(&data_143a13ca0, 1, 0)
                *data_143a13ca0 = var_98_1.o
                atexit(sub_142cf7150)
                _Init_thread_footer(&data_143f34fc4)
        
        result = &data_143a13ca0
    else
        int64_t var_98
        int128_t zmm1
        
        if (arg2 == 2)
            if (data_143f34fd8 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f34fd8)
            
            if (data_143f34fd8 s<=
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))
                    || data_143f34fd8 != 0xffffffff)
                result = &data_143f34fc8
            else
                int128_t zmm0_8 = *(arg1 + 0x7f8)
                zmm1 = *(arg1 + 0x808)
                data_143f34fc8 = 0
                var_98.o = zmm0_8
                data_143f34fd0 = 2
                sub_1405a4be0(&data_143f34fc8, 2, 0)
                int128_t* rdx_13 = data_143f34fc8
                *rdx_13 = var_98.o
                rdx_13[1] = zmm1
                atexit(sub_142cf7210)
                _Init_thread_footer(&data_143f34fd8)
                result = &data_143f34fc8
        else if (arg2 == 4)
            if (data_143f34ff0 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f34ff0)
            
            if (data_143f34ff0 s<=
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))
                    || data_143f34ff0 != 0xffffffff)
                result = &data_143f34fe0
            else
                var_98.o = *(arg1 + 0x7f8)
                int128_t zmm0_6 = *(arg1 + 0x888)
                int128_t var_88_3 = *(arg1 + 0x808)
                zmm1 = *(arg1 + 0x898)
                data_143f34fe0 = 0
                data_143f34fe8 = 4
                sub_1405a4be0(&data_143f34fe0, 4, 0)
                int128_t* rdx_12 = data_143f34fe0
                *rdx_12 = var_98.o
                rdx_12[1] = var_88_3
                rdx_12[2] = zmm0_6
                rdx_12[3] = zmm1
                atexit(sub_142cf7170)
                _Init_thread_footer(&data_143f34ff0)
                result = &data_143f34fe0
        else if (arg2 == 6)
            if (data_143f35008 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f35008)
            
            if (data_143f35008 s<=
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))
                    || data_143f35008 != 0xffffffff)
                result = &data_143f34ff8
            else
                var_98.o = *(arg1 + 0x7f8)
                int128_t var_88_2 = *(arg1 + 0x808)
                int128_t var_78_2 = *(arg1 + 0x818)
                int128_t zmm0_4 = *(arg1 + 0x888)
                int128_t var_68_2 = *(arg1 + 0x828)
                zmm1 = *(arg1 + 0x898)
                data_143f34ff8 = 0
                data_143f35000 = 6
                sub_1405a4be0(&data_143f34ff8, 6, 0)
                int128_t* rdx_11 = data_143f34ff8
                *rdx_11 = var_98.o
                rdx_11[1] = var_88_2
                rdx_11[2] = var_78_2
                rdx_11[3] = var_68_2
                rdx_11[4] = zmm0_4
                rdx_11[5] = zmm1
                atexit(sub_142cf7110)
                _Init_thread_footer(&data_143f35008)
                result = &data_143f34ff8
        else if (arg2 != 8)
            result = nullptr
        else
            if (data_143f35020 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f35020)
            
            if (data_143f35020 s<=
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))
                    || data_143f35020 != 0xffffffff)
                result = &data_143f35010
            else
                var_98.o = *(arg1 + 0x7f8)
                int128_t var_88_1 = *(arg1 + 0x808)
                int128_t var_78_1 = *(arg1 + 0x818)
                int128_t var_68_1 = *(arg1 + 0x828)
                int128_t var_58_1 = *(arg1 + 0x838)
                int128_t zmm0_2 = *(arg1 + 0x888)
                int128_t var_48_1 = *(arg1 + 0x848)
                zmm1 = *(arg1 + 0x898)
                data_143f35010 = 0
                data_143f35018 = 8
                sub_1405a4be0(&data_143f35010, 8, 0)
                int128_t* rdx_10 = data_143f35010
                *rdx_10 = var_98.o
                rdx_10[1] = var_88_1
                rdx_10[2] = var_78_1
                rdx_10[3] = var_68_1
                rdx_10[4] = var_58_1
                rdx_10[5] = var_48_1
                rdx_10[6] = zmm0_2
                rdx_10[7] = zmm1
                atexit(sub_142cf71d0)
                _Init_thread_footer(&data_143f35020)
                result = &data_143f35010

__security_check_cookie(rax_1 ^ &var_b8)
return result
