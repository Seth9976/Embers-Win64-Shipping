// 函数: sub_1417fe470
// 地址: 0x1417fe470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe1860
arg1[1] = &data_142fe18a8
arg1[2].d = 0
int64_t* rax = j_sub_140a82f30(0x10)

if (rax == 0)
    rax = nullptr
else
    *rax = 0

arg1[9] = rax
arg1[8] = rax
int64_t* rax_1 = j_sub_140a82f30(0x10)

if (rax_1 == 0)
    rax_1 = nullptr
else
    *rax_1 = 0

arg1[0xb] = rax_1
arg1[0xa] = rax_1
arg1[0xc] = 0
arg1[0xd] = 0
int64_t* rax_2 = j_sub_140a82f30(0x10)

if (rax_2 == 0)
    rax_2 = nullptr
else
    *rax_2 = 0

arg1[0xf] = rax_2
arg1[0xe] = rax_2
arg1[0x10] = 0
void* rax_3 = data_143ef9cf8

if (rax_3 == 0)
    void arg_8
    int64_t rbx_1 = *sub_140b58170(&arg_8, "HTTP", (rax_3 + 1).d)
    j_sub_140b3db50()
    j_sub_140b407e0(&data_143de7d78, rbx_1)
    rax_3 = data_143ef9cf8

arg1[3] = _mm_cvtps_pd(*(rax_3 + 0x2c))
void* rax_5 = data_143ef9cf8

if (rax_5 == 0)
    void arg_10
    int64_t rbx_2 = *sub_140b58170(&arg_10, "HTTP", (rax_5 + 1).d)
    j_sub_140b3db50()
    j_sub_140b407e0(&data_143de7d78, rbx_2)
    rax_5 = data_143ef9cf8

arg1[4] = _mm_cvtps_pd(*(rax_5 + 0x30))
void* rax_7 = data_143ef9cf8

if (rax_7 == 0)
    void arg_18
    int64_t rbx_3 = *sub_140b58170(&arg_18, "HTTP", (rax_7 + 1).d)
    j_sub_140b3db50()
    j_sub_140b407e0(&data_143de7d78, rbx_3)
    rax_7 = data_143ef9cf8

arg1[5] = _mm_cvtps_pd(*(rax_7 + 0x34))
void* rax_9 = data_143ef9cf8

if (rax_9 == 0)
    void arg_20
    int64_t rbx_4 = *sub_140b58170(&arg_20, "HTTP", (rax_9 + 1).d)
    j_sub_140b3db50()
    j_sub_140b407e0(&data_143de7d78, rbx_4)
    rax_9 = data_143ef9cf8

arg1[6] = _mm_cvtps_pd(*(rax_9 + 0x38))
return arg1
