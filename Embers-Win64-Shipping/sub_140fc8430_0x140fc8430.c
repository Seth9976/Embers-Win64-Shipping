// 函数: sub_140fc8430
// 地址: 0x140fc8430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_10
int64_t* rax_1 = (*(*arg1 + 0xa0))(arg1, &arg_10)
int64_t rdx_1 = data_143e2b878
int64_t rcx = *rax_1
int64_t arg_8 = rcx

if ((-0x8000000000000000 & rdx_1) == 0 || rcx != 0)
    void arg_18
    int32_t* rax_6 = sub_140b63580(&data_143e2b878, &arg_18)
    int64_t rax_7
    rax_7.b = arg_8 == *rax_6
    return zx.q(ntohs(*(arg1 + 0xa)))

int64_t* rcx_1 = &arg_8
char* rdx_2 = rdx_1 & 0x7fffffffffffffff

if (data_143e2b884 != 0)
    sub_140b5b9d0(rcx_1, rdx_2)
    return zx.q(ntohs(*(arg1 + 0xa)))

sub_140b5b8c0(rcx_1, rdx_2)
return zx.q(ntohs(*(arg1 + 0xa)))
