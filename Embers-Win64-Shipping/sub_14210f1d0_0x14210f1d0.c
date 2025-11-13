// 函数: sub_14210f1d0
// 地址: 0x14210f1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
void* r14_2 = (sx.q(arg2) << 6) + arg1
int64_t i_2 = sx.q(*(r14_2 + 8))

if (arg3 != 0)
    arg4[1].d = 0
    
    if (*(arg4 + 0xc) != i_2.d)
        sub_1405a5410(arg4, i_2.d)
    
    arg5[1].d = 0
    
    if (*(arg5 + 0xc) != i_2.d)
        sub_1405a5410(arg5, i_2.d)

int64_t i_1 = i_2

if (i_2.d s<= 0)
    return 

int64_t i

do
    int64_t rsi = sx.q(arg4[1].d)
    int128_t* r12_1 = *(r14_2 + 0x10)
    int32_t rax_1 = (rsi + 1).d
    arg4[1].d = rax_1
    
    if (rax_1 s> *(arg4 + 0xc))
        sub_1405a4f90(arg4)
    
    *(*arg4 + rsi * 0x10) = *(r12_1 + rbp)
    int64_t rsi_1 = sx.q(arg5[1].d)
    int128_t* r12_2 = *(r14_2 + 0x20)
    int32_t rax_3 = (rsi_1 + 1).d
    arg5[1].d = rax_3
    
    if (rax_3 s> *(arg5 + 0xc))
        sub_1405a4f90(arg5)
    
    int128_t zmm0 = *(r12_2 + rbp)
    rbp += 0x10
    *(*arg5 + rsi_1 * 0x10) = zmm0
    i = i_1
    i_1 -= 1
while (i != 1)
