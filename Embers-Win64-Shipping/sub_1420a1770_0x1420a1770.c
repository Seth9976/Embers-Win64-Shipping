// 函数: sub_1420a1770
// 地址: 0x1420a1770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f70130(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9428)
(*(*arg2 + 0x1d8))(arg2, &data_1439a94d8)
(*(*arg2 + 0x1d8))(arg2, &data_1439a93f8)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9478)
int64_t rbp = arg2[0xe]
int64_t rsi
rsi.b = rbp != 0
int32_t rax_4
int512_t zmm1
rax_4, zmm1 = sub_140b4e7c0(arg2, &data_1439a94d8)
int32_t rax_5

if (rax_4 s< 0xb)
    rax_5, zmm1 = sub_140b4e7c0(arg2, &data_1439a93f8)

if (rax_4 s>= 0xb || rax_5 s>= 0x18)
    int64_t* rcx_6 = arg2[1]
    int64_t rdx = *rcx_6
    bool cond:2_1
    
    if (rdx + 4 u> rcx_6[1])
        int32_t rax_8
        rax_8.b = rbp != 0
        int32_t arg_8 = rax_8
        (*(*arg2 + 0x150))(arg2, &arg_8, 4)
        cond:2_1 = arg_8 != 0
    else
        cond:2_1 = *rdx != 0
        *rcx_6 = rdx + 4
    
    rsi.b = cond:2_1

int512_t zmm1_1 = sub_142081a60(&arg1[0x93], arg2, 0, zmm1)
int32_t result

if ((arg2[5].b & 1) != 0)
    result, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a9478)

if ((arg2[5].b & 1) == 0 || result s>= 0x28)
    result = sub_1409b1850(&arg1[0x96], arg2, 0, zmm1_1)

if (rsi.b != 0)
    int32_t rax_10
    int512_t zmm1_2
    rax_10, zmm1_2 = sub_140b4e7c0(arg2, &data_1439a94d8)
    
    if (rax_10 s< 0xb)
        result, zmm1_2 = sub_140b4e7c0(arg2, &data_1439a93f8)
    
    if (rax_10 s>= 0xb || result s>= 0x18)
        return sub_1420a1a10(arg1, arg2, zmm1_2)

return result
