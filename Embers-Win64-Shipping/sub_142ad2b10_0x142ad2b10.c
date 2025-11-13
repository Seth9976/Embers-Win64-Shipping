// 函数: sub_142ad2b10
// 地址: 0x142ad2b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
TEB* gsbase

if (data_1440166f0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_1440166f0)
    
    if (data_1440166f0 == 0xffffffff)
        memset(&data_1440166a0, 0, 0x50)
        _Mtx_init_in_situ(&data_1440166a0, 2)
        atexit(sub_142d16110)
        _Init_thread_footer(&data_1440166f0)

sub_142a860a0(&data_1440166a0)
int64_t* rcx_1 = data_144016690

if (rcx_1 != 0)
    goto label_142ad2c06

int64_t* result
int512_t zmm0
result, zmm0 = j_sub_142a7dd00(0x88)
int64_t* result_1 = result

if (result != 0)
    result, zmm0 = sub_142b541c0(result)

data_144016690 = result

if (result != 0)
    sub_142aa75d0(7, sub_142ad2e70)
    rcx_1 = data_144016690
label_142ad2c06:
    sub_142b54c50(rcx_1, arg1.q)
    int128_t zmm0_1 = sub_142b546f0(data_144016690)
    int512_t zmm0_2
    result, zmm0_2 = sub_142a860d0(&data_1440166a0)
    int128_t zmm6_1
    zmm6_1.q = zmm0_1.q f* 180.0
    zmm6_1.q = zmm6_1.q f/ 3.1415926535897931
    
    if (not(zmm6_1.q f<= 180.0))
        zmm6_1.q = zmm6_1.q f+ -360.0
    
    zmm0_2.o = zmm6_1
else
    *arg2 = 7
    zmm0.o = zx.o(0)

return result
