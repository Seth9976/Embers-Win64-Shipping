// 函数: sub_140fcae20
// 地址: 0x140fcae20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_18
int64_t* rax_1 = (*(*arg1 + 0xa0))(arg1, &arg_18)
int64_t rdx_1 = data_143e2b878
int64_t rcx = *rax_1
int64_t arg_8 = rcx

if ((-0x8000000000000000 & rdx_1) == 0 || rcx != 0)
    void arg_20
    int64_t rax_3 = *sub_140b63580(&data_143e2b878, &arg_20)
    rax_3.b = arg_8 == rax_3
else
    int64_t* rcx_1 = &arg_8
    char* rdx_2 = rdx_1 & 0x7fffffffffffffff
    
    if (data_143e2b884 != 0)
        sub_140b5b9d0(rcx_1, rdx_2)
    else
        sub_140b5b8c0(rcx_1, rdx_2)

uint16_t result = htons(arg2)
*(arg1 + 0xa) = result
return result
