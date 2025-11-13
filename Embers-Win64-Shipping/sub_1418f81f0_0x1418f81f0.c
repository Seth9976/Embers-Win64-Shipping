// 函数: sub_1418f81f0
// 地址: 0x1418f81f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x5c) == 0)
    return 

if (sub_140a80f40() == 0 || data_143f01c92 == 0)
    sub_1418c2cb0(*(arg1 + 8), *(arg1 + 0x10))
else
    void*** r8_3 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_2 = &r8_3[4]
    
    if (rax_2 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x28)
        r8_3 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_2 = &r8_3[4]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_2
    *data_143f02ba0 = r8_3
    data_143f02ba0 = &r8_3[1]
    int64_t rdx_1 = *(arg1 + 8)
    int64_t rax_4 = *(arg1 + 0x10)
    r8_3[1] = 0
    *r8_3 = &data_142ff1e08
    r8_3[2] = rax_4
    r8_3[3] = rdx_1

int64_t r8_6 = *(arg1 + 0x10)
uint64_t rdi_1 = 0
*(arg1 + 0x5c) = 0

if (r8_6 != 0)
    rdi_1 = zx.q(*(arg1 + 0x38))
    sub_1418be030(*(arg1 + 8) + 0x3b0, 3, r8_6)
    void* rax_5 = *(arg1 + 0x60)
    void* arg_8 = rax_5
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1
    
    sub_1418be110(*(arg1 + 8) + 0x3b0, &arg_8)
    *(arg1 + 0x10) = 0

int64_t rax_7
int32_t rdx_4
rdx_4:rax_7 = sx.o(rdi_1 + 0x3ff)
int32_t rax_10 = (neg.q((rax_7 + (zx.q(rdx_4) & 0x3ff)) s>> 0xa)).d

if ((*(arg1 + 0x30) & 7) == 0)
    data_143f0f1f8
    data_143f0f1f8 += rax_10
    return 

data_143f0f1fc
data_143f0f1fc += rax_10
