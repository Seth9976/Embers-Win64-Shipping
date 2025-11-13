// 函数: sub_1411b8f20
// 地址: 0x1411b8f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x78)
TEB* gsbase

if (data_143e803e0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    arg5 = _Init_thread_header(&data_143e803e0)
    
    if (data_143e803e0 == 0xffffffff)
        void arg_10
        arg6 = sub_140b4c820(&arg_10, u"FHairStrandsVertexFactory")
        data_143e803d8 = sub_1419cfe40(&arg_10)
        arg5 = _Init_thread_footer(&data_143e803e0)

(*(*arg9 + 0x168))(arg9)
void* rax_4 = (*(*rbx + 0x40))(rbx)
int64_t* rcx_2 = *(arg2 + 0x78)
void* rbx_1 = data_143e803d8
int64_t rdx = *rcx_2
void* result = (*(rdx + 0x40))(rcx_2, rdx)

if (*(result + 0x20) == *(rbx_1 + 0x20))
    char var_1c0_1 = 1
    int32_t var_1c8_1 = 0
    void* var_118
    void** rax_5
    int512_t zmm0
    rax_5, zmm0 = sub_142127800(arg9, &var_118, &data_143e766d0, rax_4, arg5)
    char var_1c0_2 = 1
    int32_t var_1c8_2 = 0
    int64_t var_170_1 = rax_5[1]
    int128_t zmm7 = (*rax_5).o
    void** rax_7 = sub_142127800(arg9, &var_118, &data_143e768d0, rax_4, zmm0)
    void* rdx_3 = *(arg1 + 0x18)
    char var_1c0_3 = 0
    void* rcx_7 = *rax_7
    int64_t var_170_2 = rax_7[1]
    int64_t var_158 = *(arg1 + 0x30)
    int64_t var_150_1 = *(arg1 + 0x38)
    int32_t var_148_1 = *(arg1 + 0x40)
    int64_t var_140_1 = *(arg1 + 0x48)
    int64_t var_138_1 = *(arg1 + 0x50)
    int64_t var_130_1 = *(arg1 + 0x58)
    int64_t var_128_1 = *(arg1 + 0x60)
    int32_t var_120_1 = *(arg1 + 0x68)
    int128_t var_168 = zx.o(0)
    sub_141458e70(&var_168, rdx_3, arg4, arg2, arg7, 0)
    int128_t var_108 = zmm7
    var_1c0_3.q = arg9
    int32_t var_1c8_3
    var_1c8_3.q = arg8
    int128_t var_f8
    __builtin_memset(&var_f8, 0, 0x20)
    int128_t var_d8_1 = rcx_7.o
    int128_t var_c8
    __builtin_memset(&var_c8, 0, 0x30)
    int512_t zmm6_1
    result, zmm6_1 = sub_1411b48b0(arg1, arg2, arg3, arg4, var_1c8_3, nullptr, &var_158, &var_108, 
        arg10, arg11, 0, 0, &var_168)
    zmm6_1.o = arg6

return result
