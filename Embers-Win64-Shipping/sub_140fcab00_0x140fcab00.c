// 函数: sub_140fcab00
// 地址: 0x140fcab00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_20
int64_t* rax_1 = (*(*arg2 + 0xa0))(arg2, &arg_20)
int64_t rdx_1 = data_143e2b878
int64_t r8 = *rax_1
int64_t arg_10 = r8
int64_t rax_2

if ((-0x8000000000000000 & rdx_1) == 0 || r8 != 0)
    int32_t var_18[0x4]
    rax_2 = *sub_140b63580(&data_143e2b878, &var_18)
    rax_2.b = arg_10 == rax_2
else
    int64_t* rcx_1 = &arg_10
    char* rdx_2 = rdx_1 & 0x7fffffffffffffff
    
    if (data_143e2b884 != r8.b)
        rax_2 = sub_140b5b9d0(rcx_1, rdx_2)
    else
        rax_2 = sub_140b5b8c0(rcx_1, rdx_2)

int32_t level
int64_t* optval

if (rax_2.b == 0)
    int32_t arg_18
    optval = &arg_18
    arg_18 = *(arg2 + 0xc)
    level = 0
else
    arg_10.d = htonl((*(*arg2 + 0x108))(arg2))
    optval = &arg_10
    level = 0x29

int32_t result
result.b = setsockopt(*(arg1 + 0x28), level, 9, optval, 4) == 0
return result
