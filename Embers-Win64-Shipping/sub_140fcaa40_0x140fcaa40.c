// 函数: sub_140fcaa40
// 地址: 0x140fcaa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x11] == 0)
    return 

void arg_10
int64_t* rax_1 = (*(*arg1 + 0xa0))(arg1, &arg_10)
int64_t rdx_1 = data_143e2b878
int64_t rcx = *rax_1
int64_t arg_8 = rcx
bool rcx_2

if ((-0x8000000000000000 & rdx_1) == 0 || rcx != 0)
    void arg_18
    int64_t rax_5 = *sub_140b63580(&data_143e2b878, &arg_18)
    rcx_2 = arg_8 == rax_5
else
    int64_t* rcx_1 = &arg_8
    char* rdx_2 = rdx_1 & 0x7fffffffffffffff
    
    if (data_143e2b884 != 0)
        rcx_2 = sub_140b5b9d0(rcx_1, rdx_2)
    else
        rcx_2 = sub_140b5b8c0(rcx_1, rdx_2)

int64_t rax_6 = *arg1

if (rcx_2 == 0)
    jump(*(rax_6 + 0xe8))

jump(*(rax_6 + 0xf0))
