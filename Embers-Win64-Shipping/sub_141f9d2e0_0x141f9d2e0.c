// 函数: sub_141f9d2e0
// 地址: 0x141f9d2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_3 = 0
int32_t r8 = data_143f3c550
int32_t rdx_2 = data_143f3c540 + r8 + data_143f3c530
bool cond:0 = data_143f3c524 == rdx_2
int128_t zmm8 = arg2
data_143f3c520 = 0

if (not(cond:0))
    sub_1405c5660(&data_143f3c518, rdx_2)
    r8 = data_143f3c550

uint64_t result = zx.q(data_143f3c530)
uint32_t zmm6[0x4] = 0x44a00000
uint32_t zmm7[0x4] = 0x44beae39
int64_t r12
r12.b = result.d s> 1

if (result.d s> 0)
    result = data_143f3c528
    zmm7 = *(result + 0x10)
    zmm6 = *(result + 0xc)
else if (data_143f3c540 s> 0)
    result = data_143f3c538
    zmm7 = *(result + 0x10)
    zmm6 = *(result + 0xc)

char r15 = data_143f3bc60
int32_t i = 0
data_143f3bc60 = 0

if (r8 s> 0)
    int64_t rsi_1 = 0
    
    do
        int128_t* rbx_2 = data_143f3c548 + rsi_1
        int32_t* arg_18
        sub_140d3a3a0(&arg_18, nullptr)
        result, zmm6, zmm7, zmm8 = sub_141f80710(arg1, rbx_2, zmm6, zmm7, *(rbx_2 + 0xc), 
            *(rbx_2 + 0x14), rbx_2[1].d, arg_18)
        i += 1
        rsi_1 += 0x18
    while (i s< data_143f3c550)

zmm6 = 0x3f800000
data_143f3bc60 = r15

if (r12.b != 0)
    int64_t* rcx_2 = data_143f5b298
    result = (*(*rcx_2 + 0x348))(rcx_2, 0)
    
    if (result.b != 0)
        zmm6 = 0x3f400000

int32_t i_1 = 0
float zmm0

if (data_143f3c540 s> 0)
    int64_t rsi_2 = 0
    
    do
        int128_t* rdx_5 = data_143f3c538 + rsi_2
        
        if (*(rdx_5 + 0x1c) == 0)
            int32_t* rax_3 = rdx_5[2].q
            zmm0 = *(rdx_5 + 0x18)
            arg2 = *(rdx_5 + 0x14)
            zmm6[0] = zmm6[0] f* *(rdx_5 + 0xc)
            result, zmm6, zmm8 =
                sub_141f80550(&data_143f3c518, rdx_5, zmm6, rdx_5[1].d, arg2.d, 0, zmm0, rax_3)
        
        i_1 += 1
        rsi_2 += 0x28
    while (i_1 s< data_143f3c540)

int32_t i_2 = 0

if (data_143f3c530 s> 0)
    int64_t rsi_3 = 0
    
    do
        int128_t* rdx_7 = data_143f3c528 + rsi_3
        
        if (*(rdx_7 + 0x1c) == 0)
            int32_t* rax_4 = rdx_7[2].q
            zmm0 = *(rdx_7 + 0x18)
            arg2 = *(rdx_7 + 0x14)
            zmm6[0] = zmm6[0] f* *(rdx_7 + 0xc)
            result, zmm6, zmm8 =
                sub_141f80550(&data_143f3c518, rdx_7, zmm6, rdx_7[1].d, arg2.d, 0, zmm0, rax_4)
        
        i_2 += 1
        rsi_3 += 0x28
    while (i_2 s< data_143f3c530)

if (data_143f3c540 s> 0)
    int64_t rbx_3 = 0
    
    do
        result = data_143f3c538
        zmm0 = *(rbx_3 + result + 0x18) f- zmm8.d
        *(rbx_3 + result + 0x18) = zmm0
        
        if (not(zmm0 > 0f))
            int32_t rdx_8 = data_143f3c540
            int32_t rcx_5 = rdx_8 - i_3 - 1
            
            if (rcx_5 s>= 1)
                rcx_5 = 1
            
            if (rcx_5 != 0)
                int64_t r9_1 = data_143f3c538
                memcpy(r9_1 + sx.q(i_3) * 0x28, r9_1 + sx.q(rdx_8 - rcx_5) * 0x28, rcx_5 * 0x28)
                rdx_8 = data_143f3c540
            
            data_143f3c540 = rdx_8 - 1
            result = sub_1409da680(&data_143f3c538)
            i_3 -= 1
            rbx_3 -= 0x28
        
        i_3 += 1
        rbx_3 += 0x28
    while (i_3 s< data_143f3c540)

return result
