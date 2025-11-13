// 函数: sub_141c3aa60
// 地址: 0x141c3aa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg1 + 0x208
void* rdi = arg1 + 0x30
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(arg2))
int64_t i_1 = 2
data_143a12b94 = arg2
data_143a12b90 = zmm6.d * 3.36010198e-05f
int64_t i

do
    int64_t rcx = *(rdi - 8)
    int32_t rax_1 = int.d(zmm6.d) + 1
    *(rdi + 0xc) = zmm6.d
    *rdi = int.d(zmm6.d) + 1
    
    if (rcx != 0)
        j_sub_140a74f90(rcx)
        rax_1 = *rdi
    
    int64_t rcx_1 = sx.q(rax_1)
    int64_t rax_2 = 4 * rcx_1
    
    if (mulu.dp.q(4, rcx_1) u>> 0x40 != zx.o(0))
        rax_2 = -1
    
    *(rdi - 8) = j_sub_140a82f30(rax_2)
    sub_141c45160(rdi - 0x10)
    void* rbx_1 = rdi + 0x58
    int64_t j_1 = 4
    int64_t j
    
    do
        int64_t rcx_4 = *(rbx_1 - 8)
        int32_t rax_4 = 1 - int.d(zmm6.d * -0.200000003f)
        *(rbx_1 + 0xc) = zmm6.d
        *rbx_1 = 1 - int.d(zmm6.d * -0.200000003f)
        
        if (rcx_4 != 0)
            j_sub_140a74f90(rcx_4)
            rax_4 = *rbx_1
        
        int64_t rcx_5 = sx.q(rax_4)
        int64_t rax_5 = 4 * rcx_5
        
        if (mulu.dp.q(4, rcx_5) u>> 0x40 != zx.o(0))
            rax_5 = -1
        
        *(rbx_1 - 8) = j_sub_140a82f30(rax_5)
        sub_141c45160(rbx_1 - 0x10)
        rbx_1 += 0x50
        j = j_1
        j_1 -= 1
    while (j != 1)
    rdi += 0x1f8
    *(r14 - 0x10) = 0
    *(r14 - 8) = 0
    *r14 = 0
    *(r14 + 8) = 0
    r14 += 0x1f8
    i = i_1
    i_1 -= 1
while (i != 1)
sub_141c46000(arg1 + 0x78, data_143a12b90 * 710f * 1000f f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d)
sub_141c46000(arg1 + 0xc8, data_143a12b90 * 535f * 1000f f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d)
sub_141c46000(arg1 + 0x118, 
    data_143a12b90 * 1895f * 1000f f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d)
sub_141c46000(arg1 + 0x168, 
    data_143a12b90 * 1385f * 1000f f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d)
sub_141c46000(arg1 + 0x270, 
    data_143a12b90 * 1395f * 1000f f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d)
sub_141c46000(arg1 + 0x2c0, 
    data_143a12b90 * 685f * 1000f f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d)
sub_141c46000(arg1 + 0x310, 
    data_143a12b90 * 1065f * 1000f f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d)
sub_141c46000(arg1 + 0x360, 
    data_143a12b90 * 1635f * 1000f f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d)
return sub_141c33a20(arg1) __tailcall
