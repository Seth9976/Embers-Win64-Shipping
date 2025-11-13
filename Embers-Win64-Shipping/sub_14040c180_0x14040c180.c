// 函数: sub_14040c180
// 地址: 0x14040c180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s>= 4)
    *arg1 = 0x552b622
    arg1[1] = 0xaa4fada
    arg1[2] = 0x552b622
    *arg2 = 0x36bdf0a021da4ed
    return 0x36bdf0a021da4ed

if (arg4 s<= 0)
    int64_t rdx_20 = sx.q(arg3)
    *arg1 = *(&data_1436fc950 + rdx_20 * 0xc)
    arg1[1] = *(rdx_20 * 0xc + 0x1436fc954)
    arg1[2] = *(rdx_20 * 0xc + 0x1436fc958)
    int64_t rax_24 = *(&data_1436fc990 + (rdx_20 << 3))
    *arg2 = rax_24
    return rax_24

int64_t rdi = sx.q(arg3)
int32_t rbx = sx.d(arg4.w)
int64_t rax_1 = rdi * 0xc
int64_t i_4 = 3
void* r8 = rax_1 + &data_1436fc950

if (arg4 s>= 0x8000)
    int64_t i
    
    do
        int32_t rdx_10 = *(r8 + 0xc)
        r8 += 4
        int32_t rdx_11 = rdx_10 - *(r8 - 4)
        *(arg1 - rax_1 - &data_1436fc950 + r8 - 4) =
            (rdx_11 s>> 0x10) * rbx + ((zx.d(rdx_11.w) * rbx) s>> 0x10) + *(r8 + 8)
        i = i_4
        i_4 -= 1
    while (i != 1)
    int64_t rax_15 = rdi << 3
    int64_t i_6 = 2
    void* r8_2 = rax_15 + &data_1436fc990
    int32_t rax_19
    int64_t i_1
    
    do
        int32_t rdx_15 = *(r8_2 + 8)
        r8_2 += 4
        int32_t rdx_16 = rdx_15 - *(r8_2 - 4)
        rax_19 = ((zx.d(rdx_16.w) * rbx) s>> 0x10) + *(r8_2 + 4)
        *(r8_2 + arg2 - rax_15 - &data_1436fc990 - 4) = (rdx_16 s>> 0x10) * rbx + rax_19
        i_1 = i_6
        i_6 -= 1
    while (i_1 != 1)
    return rax_19

int64_t i_2

do
    int32_t rdx = *(r8 + 0xc)
    r8 += 4
    int32_t rdx_1 = rdx - *(r8 - 4)
    *(arg1 - rax_1 - &data_1436fc950 + r8 - 4) =
        (rdx_1 s>> 0x10) * rbx + ((zx.d(rdx_1.w) * rbx) s>> 0x10) + *(r8 - 4)
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
int64_t rax_6 = rdi << 3
int64_t i_5 = 2
void* r8_1 = rax_6 + &data_1436fc990
int32_t rax_10
int64_t i_3

do
    int32_t rdx_5 = *(r8_1 + 8)
    r8_1 += 4
    int32_t rdx_6 = rdx_5 - *(r8_1 - 4)
    rax_10 = ((zx.d(rdx_6.w) * rbx) s>> 0x10) + *(r8_1 - 4)
    *(r8_1 + arg2 - rax_6 - &data_1436fc990 - 4) = (rdx_6 s>> 0x10) * rbx + rax_10
    i_3 = i_5
    i_5 -= 1
while (i_3 != 1)
return rax_10
