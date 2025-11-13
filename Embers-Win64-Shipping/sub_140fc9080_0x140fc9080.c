// 函数: sub_140fc9080
// 地址: 0x140fc9080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10
(*(*arg1 + 0xa0))(arg1, &arg_10)
int64_t rdx_1 = data_143e2b868
int64_t rax_1 = arg_10
int64_t arg_8 = rax_1
void arg_18
int64_t rax_2

if ((-0x8000000000000000 & rdx_1) == 0 || rax_1 != 0)
    rax_2 = *sub_140b63580(&data_143e2b868, &arg_18)
    rax_2.b = arg_8 == rax_2
else
    char* rdx_2 = rdx_1 & 0x7fffffffffffffff
    int64_t* rcx = &arg_8
    
    if (data_143e2b874 != rax_1.b)
        rax_2 = sub_140b5b9d0(rcx, rdx_2)
    else
        rax_2 = sub_140b5b8c0(rcx, rdx_2)

if (rax_2.b != 0)
    uint32_t rax_4 = ntohl(*(arg1 + 0xc))
    int64_t rdx_4 = *arg1
    return zx.q((*(rdx_4 + 0x30))(arg1, rdx_4) * 0x17 + rax_4)

int64_t rdx_5 = data_143e2b878
int64_t rax_8 = arg_10
arg_8 = rax_8
int64_t rax_9
int64_t r8

if ((-0x8000000000000000 & rdx_5) == 0 || rax_8 != 0)
    int32_t* rax_10
    rax_10, r8 = sub_140b63580(&data_143e2b878, &arg_18)
    rax_9.b = arg_8 == *rax_10
else
    char* rdx_6 = rdx_5 & 0x7fffffffffffffff
    int64_t* rcx_3 = &arg_8
    
    if (data_143e2b884 != rax_8.b)
        rax_9, r8 = sub_140b5b9d0(rcx_3, rdx_6)
    else
        rax_9, r8 = sub_140b5b8c0(rcx_3, rdx_6)

if (rax_9.b == 0)
    return 0

r8.b = 1
int64_t var_28
int64_t* rax_12 = (*(*arg1 + 0x78))(arg1, &var_28, r8)
int16_t* r9

if (rax_12[1].d == 0)
    r9 = &data_142d40450
else
    r9 = *rax_12

int16_t i = *r9
int32_t rbx_1 = 0

while (i != 0)
    r9 = &r9[1]
    int32_t rax_14
    rax_14.w = sbb.w(i - 0x61, i - 0x61, zx.d(i) - 0x61 u< 0x1a)
    rax_14.w &= 0x20
    uint64_t r8_1 = zx.q(i - rax_14.w)
    i = *r9
    int32_t rdx_10 = *(&data_1439a2500 + ((zx.q(rbx_1.b) ^ zx.q(r8_1.b)) << 2)) ^ rbx_1 u>> 8
    rbx_1 = *(&data_1439a2500 + ((zx.q((r8_1 u>> 8).b) ^ zx.q(rdx_10.b)) << 2)) ^ rdx_10 u>> 8

int64_t rcx_6 = var_28

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return zx.q(rbx_1)
