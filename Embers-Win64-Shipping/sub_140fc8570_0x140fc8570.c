// 函数: sub_140fc8570
// 地址: 0x140fc8570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
int64_t rdx = data_143e2b878
int64_t arg_10 = rax
int32_t arg_18
int64_t rax_1

if ((-0x8000000000000000 & rdx) == 0 || rax != 0)
    rax_1 = *sub_140b63580(&data_143e2b878, &arg_18)
    rax_1.b = arg_10 == rax_1
else
    char* rdx_1 = rdx & 0x7fffffffffffffff
    int64_t* rcx = &arg_10
    
    if (data_143e2b884 != rax.b)
        rax_1 = sub_140b5b9d0(rcx, rdx_1)
    else
        rax_1 = sub_140b5b8c0(rcx, rdx_1)

if (rax_1.b != 0)
    rax_1.b = 2
    return rax_1

int64_t rdx_3 = data_143e2b868
int64_t rax_3 = *arg2
arg_10 = rax_3
int64_t rax_4

if ((-0x8000000000000000 & rdx_3) == 0 || rax_3 != 0)
    rax_4 = *sub_140b63580(&data_143e2b868, &arg_18)
    rax_4.b = arg_10 == rax_4
else
    char* rdx_4 = rdx_3 & 0x7fffffffffffffff
    int64_t* rcx_1 = &arg_10
    
    if (data_143e2b874 != rax_3.b)
        rax_4 = sub_140b5b9d0(rcx_1, rdx_4)
    else
        rax_4 = sub_140b5b8c0(rcx_1, rdx_4)

rax_4.b = rax_4.b != 0
return rax_4
