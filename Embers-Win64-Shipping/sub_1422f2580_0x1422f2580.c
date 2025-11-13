// 函数: sub_1422f2580
// 地址: 0x1422f2580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = sub_1422e5930(arg2, 0)
int64_t* rcx_1 = data_143f553c0
int32_t rax_2 = (*(*rcx_1 + 0x90))(rcx_1) - 1

if (arg2 s< 0)
    rax_2 = 0
else if (arg2 s< rax_2)
    rax_2 = arg2

arg1[1] = rax_2
int64_t* rcx_2 = data_143f553d8
int32_t rax_5 = (*(*rcx_2 + 0x90))(rcx_2) - 1

if (arg2 s< 0)
    rax_5 = 0
else if (arg2 s< rax_5)
    rax_5 = arg2

arg1[2] = rax_5
int64_t* rcx_3 = data_143f553f0
int32_t rax_8 = (*(*rcx_3 + 0x90))(rcx_3) - 1

if (arg2 s< 0)
    rax_8 = 0
else if (arg2 s< rax_8)
    rax_8 = arg2

arg1[3] = rax_8
int64_t* rcx_4 = data_143f55408
int32_t rax_11 = (*(*rcx_4 + 0x90))(rcx_4) - 1

if (arg2 s< 0)
    rax_11 = 0
else if (arg2 s< rax_11)
    rax_11 = arg2

arg1[4] = rax_11
int64_t* rcx_5 = data_143f55420
int32_t rax_14 = (*(*rcx_5 + 0x90))(rcx_5) - 1

if (arg2 s< 0)
    rax_14 = 0
else if (arg2 s< rax_14)
    rax_14 = arg2

arg1[5] = rax_14
int64_t* rcx_6 = data_143f55438
int32_t rax_17 = (*(*rcx_6 + 0x90))(rcx_6) - 1

if (arg2 s< 0)
    rax_17 = 0
else if (arg2 s< rax_17)
    rax_17 = arg2

arg1[6] = rax_17
int64_t* rcx_7 = data_143f55450
int32_t rax_20 = (*(*rcx_7 + 0x90))(rcx_7) - 1

if (arg2 s< 0)
    rax_20 = 0
else if (arg2 s< rax_20)
    rax_20 = arg2

arg1[7] = rax_20
int64_t* rcx_8 = data_143f55468
int32_t result = (*(*rcx_8 + 0x90))(rcx_8) - 1

if (arg2 s< 0)
    arg1[8] = 0
    return result

if (arg2 s< result)
    result = arg2

arg1[8] = result
return result
