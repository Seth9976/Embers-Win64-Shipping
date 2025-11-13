// 函数: sub_1422afa30
// 地址: 0x1422afa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = data_143f0f1a0
char result = sub_14076f990(rdi)

if (result == 0)
    return result

if (*(arg1 + 0x10) s< 0x31)
    rdi = *(arg1 + 0x10)

char rax = sub_1419a2670(rdi)
int64_t* rcx_2 = data_143f0f180
int64_t rax_1 = *rcx_2
char var_18
char var_10
int128_t zmm0_1

if (rax != 0)
    var_10 = 1
    var_18 = 0
    int32_t var_28_1 = 1
    void arg_10
    int128_t* rax_4 =
        (*(rax_1 + 0x510))(rcx_2, &data_143f02b98, *(arg1 + 0x350), 0, 1, &arg_10, 0, 1)
    void* rcx_5 = arg1 + 0x20
    int64_t i_3 = 4
    int64_t i
    
    do
        rax_4 = &rax_4[8]
        zmm0_1 = *rcx_5
        rcx_5 += 0x80
        rax_4[-8] = zmm0_1
        rax_4[-7] = *(rcx_5 - 0x70)
        rax_4[-6] = *(rcx_5 - 0x60)
        rax_4[-5] = *(rcx_5 - 0x50)
        rax_4[-4] = *(rcx_5 - 0x40)
        rax_4[-3] = *(rcx_5 - 0x30)
        rax_4[-2] = *(rcx_5 - 0x20)
        rax_4[-1] = *(rcx_5 - 0x10)
        i = i_3
        i_3 -= 1
    while (i != 1)
    void* var_20
    var_20.b = 1
    var_28_1.b = i_3.b
    *rax_4 = *rcx_5
    rax_4[1] = *(rcx_5 + 0x10)
    rax_4[2] = *(rcx_5 + 0x20)
    int64_t* rcx_6 = data_143f0f180
    (*(*rcx_6 + 0x518))(rcx_6, &data_143f02b98, *(arg1 + 0x350), 0, var_28_1, var_20)
else
    int128_t* rax_2 = (*(rax_1 + 0x158))(rcx_2, &data_143f02b98, *(arg1 + 0x340), 0, 0x230, 1)
    void* rcx_3 = arg1 + 0x20
    int64_t i_2 = 4
    int64_t i_1
    
    do
        rax_2 = &rax_2[8]
        zmm0_1 = *rcx_3
        rcx_3 += 0x80
        rax_2[-8] = zmm0_1
        rax_2[-7] = *(rcx_3 - 0x70)
        rax_2[-6] = *(rcx_3 - 0x60)
        rax_2[-5] = *(rcx_3 - 0x50)
        rax_2[-4] = *(rcx_3 - 0x40)
        rax_2[-3] = *(rcx_3 - 0x30)
        rax_2[-2] = *(rcx_3 - 0x20)
        rax_2[-1] = *(rcx_3 - 0x10)
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    *rax_2 = *rcx_3
    rax_2[1] = *(rcx_3 + 0x10)
    rax_2[2] = *(rcx_3 + 0x20)
    int64_t* rcx_4 = data_143f0f180
    (*(*rcx_4 + 0x160))(rcx_4, &data_143f02b98, *(arg1 + 0x340))
int64_t* rcx_7 = data_143f0f180
int128_t* rax_7 =
    (*(*rcx_7 + 0x158))(rcx_7, &data_143f02b98, *(arg1 + 0x360), 0, 0xf0, 1, var_18, var_10)
*rax_7 = *(arg1 + 0x250)
rax_7[1] = *(arg1 + 0x260)
rax_7[2] = *(arg1 + 0x270)
rax_7[3] = *(arg1 + 0x280)
rax_7[4] = *(arg1 + 0x290)
rax_7[5] = *(arg1 + 0x2a0)
rax_7[6] = *(arg1 + 0x2b0)
rax_7[7] = *(arg1 + 0x2c0)
*(rax_7 + 0x80) = *(arg1 + 0x2d0)
rax_7[9] = *(arg1 + 0x2e0)
rax_7[0xa] = *(arg1 + 0x2f0)
rax_7[0xb] = *(arg1 + 0x300)
rax_7[0xc] = *(arg1 + 0x310)
rax_7[0xd] = *(arg1 + 0x320)
rax_7[0xe] = *(arg1 + 0x330)
int64_t* rcx_10 = data_143f0f180
return (*(*rcx_10 + 0x160))(rcx_10, &data_143f02b98, *(arg1 + 0x360))
