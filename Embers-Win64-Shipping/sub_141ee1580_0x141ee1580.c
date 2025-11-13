// 函数: sub_141ee1580
// 地址: 0x141ee1580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t rax_2 = arg4[1].d
int32_t rsi = 0
*arg2 = *arg4
arg2[1].d = rax_2
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rcx = zx.q(data_14401b1a0)
int64_t* r15 = arg4
int64_t var_100 = 0
int32_t var_f8 = 0

if (data_143f3ad10 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f3ad10)
    
    if (data_143f3ad10 == 0xffffffff)
        sub_140b58170(&data_143f3ad08, "FindWaterLine", 1)
        _Init_thread_footer(&data_143f3ad10)

int64_t* rbx = arg1[0x16]
arg4.b = 1
void var_108
void var_e8
int64_t* rax_5 = sub_141eb54c0(&var_e8, data_143f3ad08, &var_108, arg4.b, arg1[0x29])
void* var_128
var_128.d = (*(*rbx + 0x4d8))(rbx)
uint128_t zmm6
uint128_t zmm7
uint128_t zmm8
zmm6, zmm7, zmm8 =
    sub_141ec6850(sub_1405be820(arg1), &var_100, r15, arg3, var_128.b, rax_5, &data_143f3a660)
int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t var_a8

if (var_a8 != 0)
    sub_140a74f90(var_a8)

if (var_f8 s> 0)
    do
        void* rbx_3 = sx.q(rsi) * 0x88 + var_100
        int64_t rax_10 = sub_140d3c6e0(rbx_3 + 0x68)
        void* rcx_9 = arg1[0x29]
        
        if (rcx_9 == 0)
        label_141ee16d9:
            int64_t* rax_11 = sub_140d3c6e0(rbx_3 + 0x70)
            int64_t rdx_2 = *rax_11
            
            if ((*(rdx_2 + 0x4c0))(rax_11, rdx_2) == 0)
                void* rax_13 = sub_140d3c6e0(rbx_3 + 0x68)
                
                if (rax_13 != 0)
                    void* rax_14 = sub_142565770()
                    void* rdx_3 = *(rax_13 + 0x10)
                    int64_t rax_15 = sx.q(*(rax_14 + 0x38))
                    
                    if (rax_15.d s<= *(rdx_3 + 0x38)
                            && *(*(rdx_3 + 0x30) + (rax_15 << 3)) == rax_14 + 0x30
                            && (*(rax_13 + 0x264) & 1) != 0)
                        uint128_t var_48_1 = zmm6
                        zmm6.d = arg3[1].d.d f- r15[1].d
                        uint128_t var_58_1 = zmm7
                        zmm7.d = (*arg3).d f- *r15
                        uint128_t var_68_1 = zmm8
                        zmm8.d = (*(arg3 + 4)).d f- *(r15 + 4)
                        uint128_t zmm1_1
                        zmm1_1.d = zmm6.d f* zmm6.d
                        uint128_t zmm0_1
                        zmm0_1.d = zmm7.d f* zmm7.d
                        uint128_t zmm2_1
                        zmm2_1.d = zmm8.d f* zmm8.d
                        zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                        zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                        
                        if (not(zmm2_1.d f== 1f))
                            if (zmm2_1.d f>= 9.99999994e-09f)
                                uint128_t zmm5_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
                                uint128_t zmm3_1
                                zmm3_1.d = zmm2_1.d f* 0.5f
                                zmm0_1.d = zmm5_1.d f* zmm5_1.d
                                zmm1_1.d = zmm3_1.d f* zmm0_1.d
                                zmm2_1.d = 0.5f f- zmm1_1.d
                                zmm0_1.d = zmm5_1.d f* zmm2_1.d
                                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                zmm1_1.d = zmm5_1.d f* zmm5_1.d
                                zmm3_1.d = zmm3_1.d f* zmm1_1.d
                                zmm0_1.d = zmm5_1.d f* (0.5f f- zmm3_1.d)
                                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                zmm6.d = zmm6.d f* zmm5_1.d
                                zmm0_1.d = zmm5_1.d f* zmm7.d
                                zmm1_1.d = zmm5_1.d f* zmm8.d
                                zmm7 = zmm0_1
                                zmm8 = zmm1_1
                            else
                                zmm7 = data_143dbb1f8
                                zmm8 = data_143dbb1fc
                                zmm6 = data_143dbb200
                        
                        *arg2 = *(rbx_3 + 0x10)
                        arg2[1].d = *(rbx_3 + 0x18)
                        int64_t rax_19 = (*(*arg1 + 0x430))(arg1, zmm1_1, zmm2_1)
                        zmm1_1 = *arg2
                        zmm2_1 = arg2[1].d
                        zmm7.d = zmm7.d f* 0.100000001f
                        zmm8.d = zmm8.d f* 0.100000001f
                        zmm6.d = zmm6.d f* 0.100000001f
                        zmm0_1 = *(arg2 + 4)
                        
                        if (rax_13 != rax_19)
                            zmm1_1.d = zmm1_1.d f- zmm7.d
                            zmm0_1.d = zmm0_1.d f- zmm8.d
                            zmm2_1.d = zmm2_1.d f- zmm6.d
                        else
                            zmm1_1.d = zmm1_1.d f+ zmm7.d
                            zmm0_1.d = zmm0_1.d f+ zmm8.d
                            zmm2_1.d = zmm2_1.d f+ zmm6.d
                        
                        arg2[1].d = zmm2_1.d
                        *(arg2 + 4) = zmm0_1.d
                        *arg2 = zmm1_1.d
                        break
        else
            while (rcx_9 != rax_10)
                rcx_9 = *(rcx_9 + 0xe0)
                
                if (rcx_9 == 0)
                    goto label_141ee16d9
        
        rsi += 1
    while (rsi s< var_f8)

int64_t rcx_15 = var_100

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

__security_check_cookie(rax_1 ^ &var_148)
return arg2
