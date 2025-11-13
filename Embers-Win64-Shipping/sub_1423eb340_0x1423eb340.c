// 函数: sub_1423eb340
// 地址: 0x1423eb340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c8
int64_t* var_b0 = &var_c8
int32_t rdi = 0
var_c8 = 0
int64_t var_c0 = 0
int64_t var_a8 = 0
void arg_8
int32_t var_9c = *((*(*arg1 + 0x18))(arg4, &arg_8) + 4)
void arg_10
int32_t var_a0 = *(*(*arg1 + 0x18))(arg1, &arg_10)

if (sub_140a80f40() == 0)
    uint32_t rax_6
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_6.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_6.b == 0))
        void var_50
        int64_t* rax_7 = sub_1423d7aa0(&var_50, nullptr, 0xff)
        void* rcx_6 = *rax_7
        *(rcx_6 + 0x10) = arg1.o
        *(rcx_6 + 0x20) = var_a8.o
        *(rcx_6 + 0x30) = arg3.q
        void* rcx_7 = *rax_7
        int64_t* r15_1 = *(rcx_7 + 0x40)
        
        if (r15_1 != 0)
            r15_1[9].d += 1
        
        sub_1405e4b20(rcx_7, rax_7[1], rax_7[2].d, 1)
        
        if (r15_1 != 0)
            r15_1[9].d -= 1
            
            if (r15_1[9].d == 1)
                sub_140a2f6e0(r15_1)
    else
        uint128_t var_78 = arg1.o
        uint64_t var_58_1 = arg3.q
        int128_t var_68_1 = var_a8.o
        int128_t zmm6
        sub_1423d0940(&var_78, &data_143f02b98, zmm6)
else
    int64_t rdx_2 = *arg1
    arg4 = var_a8.o
    int64_t r8 = *(*(rdx_2 + 8))(arg1, rdx_2)
    int64_t r10_1 = *data_143f0f180
    uint128_t var_88 = arg4
    (*(r10_1 + 0x650))(arg4, &data_143f02b98, r8, &var_88, &var_c8, arg3, 0, 0)

sub_1419a21e0(0)
void arg_20
int64_t j_2 = sx.q(*(*(*arg1 + 0x18))(arg1, &arg_20))
void var_90
int32_t i_2 = *((*(*arg1 + 0x18))(arg1, &var_90) + 4)
void* result
int64_t rcx_11

if (i_2 s<= 0)
    rcx_11 = var_c8
else
    uint64_t i_1 = zx.q(i_2)
    rcx_11 = var_c8
    void* r10_2 = nullptr
    uint64_t i
    
    do
        if (j_2.d s> 0)
            int32_t r8_2 = rdi
            result = r10_2 + rcx_11 + 4
            int64_t j_1 = j_2
            int64_t j
            
            do
                int64_t rcx_12 = sx.q(r8_2)
                r8_2 += 1
                int16_t* rdx_6 = arg2 + (rcx_12 << 3)
                *rdx_6 = *(result - 4)
                rdx_6[1] = *(result - 2)
                rdx_6[2] = *result
                int16_t rcx_16 = *(result + 2)
                result += 8
                rdx_6[3] = rcx_16
                j = j_1
                j_1 -= 1
            while (j != 1)
            rcx_11 = var_c8
        
        rdi += j_2.d
        r10_2 += j_2 << 3
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

result.b = 1
return result
