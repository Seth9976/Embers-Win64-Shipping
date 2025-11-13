// 函数: sub_140fc9680
// 地址: 0x140fc9680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_20
(*(*arg1 + 0xa0))(arg1, &var_20)
int64_t rdx_1 = data_143e2b868
int64_t rax_1 = var_20
int64_t var_28 = rax_1
int32_t var_18[0x4]
int64_t rax_2

if ((-0x8000000000000000 & rdx_1) == 0 || rax_1 != 0)
    rax_2 = *sub_140b63580(&data_143e2b868, &var_18)
    rax_2.b = var_28 == rax_2
else
    char* rdx_2 = rdx_1 & 0x7fffffffffffffff
    int64_t* rcx = &var_28
    
    if (data_143e2b874 != rax_1.b)
        rax_2 = sub_140b5b9d0(rcx, rdx_2)
    else
        rax_2 = sub_140b5b8c0(rcx, rdx_2)

if (rax_2.b != 0)
    rax_2.b = *(arg1 + 0xc) != 0
    return rax_2

int64_t rdx_4 = data_143e2b878
int64_t rax_4 = var_20
var_28 = rax_4
int64_t rax_5

if ((-0x8000000000000000 & rdx_4) == 0 || rax_4 != 0)
    rax_5 = *sub_140b63580(&data_143e2b878, &var_18)
    rax_5.b = var_28 == rax_5
else
    char* rdx_5 = rdx_4 & 0x7fffffffffffffff
    int64_t* rcx_1 = &var_28
    
    if (data_143e2b884 != rax_4.b)
        rax_5 = sub_140b5b9d0(rcx_1, rdx_5)
    else
        rax_5 = sub_140b5b8c0(rcx_1, rdx_5)

if (rax_5.b == 0)
    rax_5.b = 0
    return rax_5

int64_t rax_7 = arg1[2]
int64_t rax_8 = rax_7

if (rax_7 == 0)
    rax_8 = arg1[3]

rax_8.b = rax_8 != 0
return rax_8
