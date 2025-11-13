// 函数: sub_1423cc420
// 地址: 0x1423cc420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x48)

if (rdi == 0)
    return 

int32_t rbp_1 = 0
int32_t rdi_1

if (rdi[0x1a] == 0)
    rdi_1 = 0
else
    char rax_2 = (*(*rdi + 0x318))(rdi)
    void* rcx_1 = rdi[0x1a]
    
    if (rax_2 == 0)
        rdi_1 = *(rcx_1 + 0x20)
    else
        rdi_1 = *(*(rcx_1 + 0x28) + 4)

int32_t rdx = *(arg1 + 0x60)

if (rdx != arg3)
    arg4 = zx.o(*(arg1 + 0x28))
    int32_t rcx_3 = rdi_1 - arg3
    
    if (rcx_3 s>= rdi_1 - rdx)
        rdx = arg3
    
    arg5 = _mm_cvtepi32_ps(zx.o(rcx_3))
    arg5, arg4 =
        sub_1419ab9c0(arg1 + 0x30, _mm_cvtepi32_ps(zx.o(rdi_1 - rdx)), arg5, arg4.q, *(arg1 + 0x5c))

if (data_143f0f1d1 != 0)
    *(*(arg1 + 0x10) + 0x10) = 1

sub_1408c8cf0(arg1 + 0x10, *arg2)
sub_1405d16e0(arg1 + 0xe8, *arg2)
void* rcx_7 = *(arg1 + 0x48)
void* rax_10 = *(rcx_7 + 0xd0)

if (rax_10 != 0)
    rbp_1 = *(rax_10 + 0x14)

int32_t rax_12 = rdi_1 - rbp_1

if (arg3 s<= rax_12)
    rax_12 = arg3

rdi_1.b -= arg3.b
*(arg1 + 0x60) = rax_12
*(rcx_7 + 0x3c) = rdi_1.b
sub_14198ac20(&data_143f02b98, *(*(arg1 + 0x48) + 0x90), *(arg1 + 0x10), arg4, arg5)
