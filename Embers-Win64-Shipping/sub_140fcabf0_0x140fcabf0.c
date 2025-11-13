// 函数: sub_140fcabf0
// 地址: 0x140fcabf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char optval_1 = arg2
int64_t optval_2 = *(arg1 + 0x20)
int64_t rdx = data_143e2b878
int64_t optval = optval_2
int64_t rax

if ((-0x8000000000000000 & rdx) == 0 || optval_2 != 0)
    void arg_18
    rax = *sub_140b63580(&data_143e2b878, &arg_18)
    rax.b = optval == rax
else
    int64_t* rcx = &optval
    char* rdx_1 = rdx & 0x7fffffffffffffff
    
    if (data_143e2b884 != 0)
        rax = sub_140b5b9d0(rcx, rdx_1)
    else
        rax = sub_140b5b8c0(rcx, rdx_1)

SOCKET s = *(arg1 + 0x28)

if (rax.b == 0)
    int32_t rax_4
    rax_4.b = setsockopt(s, 0, 0xb, &optval_1, 1) == 0
    return rax_4

int32_t rax_2
rax_2.b = optval_1 != 0
optval.d = rax_2
int32_t rax_3
rax_3.b = setsockopt(s, 0x29, 0xb, &optval, 4) == 0
return rax_3
