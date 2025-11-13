// 函数: sub_14150d2f0
// 地址: 0x14150d2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x78)
int128_t var_d8 = zx.o(0)
int64_t rdx = *(*rbx + 0x40)
int128_t var_138
void* var_118
void** rax_10
void* rdi
void* r14
int128_t zmm6_2

if (rbx == data_143eef5c8)
    r14 = arg7
    char var_180_3 = 1
    int32_t var_188_3 = 0
    void** rax_12
    int512_t zmm0_2
    rax_12, zmm0_2 = sub_142127800(r14, &var_138, &data_143eeff50, rdx(rbx), arg5)
    rdi = *rax_12
    int64_t rax_13 = sx.q(*(arg1 + 0x10))
    int64_t var_110_1 = rax_12[1]
    var_118 = rdi
    
    if (sub_14122e130((*U"1111")[rax_13]) != 0)
        char var_180_4 = 1
        int32_t var_188_4 = 0
        void** rax_17
        int512_t zmm6_3
        rax_17, zmm0_2, zmm6_3 =
            sub_142127800(r14, &var_138, &data_143ef02b0, (*(*rbx + 0x40))(rbx), zmm0_2)
        var_d8.q = *rax_17
        var_d8:8.q = rax_17[1]
        zmm6_3.o = var_d8
    
    char var_180_5 = 1
    int32_t var_188_5 = 0
    rax_10, zmm6_2 = sub_142127800(r14, &var_138, &data_143ef05e0, (*(*rbx + 0x40))(rbx), zmm0_2)
    int64_t var_e0_1 = rax_10[1]
else
    r14 = arg7
    char var_180 = 1
    int32_t var_188 = 0
    void** rax_2
    int512_t zmm0
    rax_2, zmm0 = sub_142127800(r14, &var_138, &data_143eefdf0, rdx(rbx), arg5)
    rdi = *rax_2
    int64_t rax_3 = sx.q(*(arg1 + 0x10))
    int64_t var_110 = rax_2[1]
    var_118 = rdi
    
    if (sub_14122e130((*U"1111")[rax_3]) != 0)
        char var_180_1 = 1
        int32_t var_188_1 = 0
        void** rax_7
        int512_t zmm6_1
        rax_7, zmm0, zmm6_1 =
            sub_142127800(r14, &var_138, &data_143ef0150, (*(*rbx + 0x40))(rbx), zmm0)
        var_d8.q = *rax_7
        var_d8:8.q = rax_7[1]
        zmm6_1.o = var_d8
    
    char var_180_2 = 1
    int32_t var_188_2 = 0
    rax_10, zmm6_2 = sub_142127800(r14, &var_138, &data_143ef0480, (*(*rbx + 0x40))(rbx), zmm0)
    int64_t var_e0 = rax_10[1]

void* rdx_10 = *rax_10
int64_t result = sub_141260e50(rdi, rdx_10)
int64_t result_1 = result
int32_t rdi_1 = 0

if (arg8 s> 0)
    result = zx.q(data_1439b72c4)
    int128_t zmm8 = var_118.o
    
    do
        if (result.d s< 0 || result.d == rdi_1)
            void* rdx_11 = *(arg1 + 0x18)
            char var_180_6 = 1
            var_138 = zx.o(0)
            int32_t var_128_1 = rdi_1
            int32_t var_188_6 = 0xffffffff
            sub_141458e70(&var_138, rdx_11, arg4, arg2, 0xffffffff, 1)
            var_180_6.q = r14
            var_188_6.q = arg6
            var_118.o = zmm8
            int128_t var_108
            __builtin_memset(&var_108, 0, 0x20)
            void* var_e8
            var_e8.o = rdx_10.o
            int128_t var_d8_1 = zmm6_2
            int128_t var_c8
            __builtin_memset(&var_c8, 0, 0x20)
            zmm6_2 = sub_1414ee910(arg1, arg2, arg3, arg4, 0xffffffff, 1, arg1 + 0x28, &var_118, 
                arg9, arg10, result_1, 0, &var_138)
            result = zx.q(data_1439b72c4)
        
        rdi_1 += 1
    while (rdi_1 s< arg8)

return result
