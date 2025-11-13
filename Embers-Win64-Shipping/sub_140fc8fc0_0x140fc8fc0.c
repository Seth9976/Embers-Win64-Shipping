// 函数: sub_140fc8fc0
// 地址: 0x140fc8fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_10
int64_t* rax_1 = (*(*arg1 + 0xa0))(arg1, &arg_10)
int64_t rdx_1 = data_143e2b868
int64_t rcx = *rax_1
int64_t arg_8 = rcx

if ((-0x8000000000000000 & rdx_1) == 0 || rcx != 0)
    void arg_18
    int64_t rax_7 = *sub_140b63580(&data_143e2b868, &arg_18)
    
    if (arg_8 == rax_7)
        return 0x10
    
    return 0x1c

int64_t* rcx_1 = &arg_8
char* rdx_2 = rdx_1 & 0x7fffffffffffffff

if (data_143e2b874 != 0)
    if (sub_140b5b9d0(rcx_1, rdx_2) != 0)
        return 0x10
    
    return 0x1c

if (sub_140b5b8c0(rcx_1, rdx_2) != 0)
    return 0x10

return 0x1c
