// 函数: sub_142079b30
// 地址: 0x142079b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg1[3].d)
*arg1 = &data_1432acf28
sub_14208b650()
EnterCriticalSection(&data_143f479b8)
int64_t* r9 = &data_143f47990

if (data_143f479b4 != 0)
    *(data_143f47980 + (sx.q(data_143f479b0) << 3)) = rbp.d

int32_t* rcx_2 = data_143f47980 + (rbp << 3)
int32_t rax_3 = -1
*rcx_2 = 0xffffffff

if (data_143f479b4 s> 0)
    rax_3 = data_143f479b0

rcx_2[1] = rax_3
data_143f479b4 += 1
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rbp.d)
data_143f479b0 = rbp.d
int64_t* rcx_3 = data_143f479a0

if (rcx_3 != 0)
    r9 = rcx_3

int64_t rcx_4 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
*(r9 + (rcx_4 << 2)) &= not.d(rol.d(1, rbp.b))
LeaveCriticalSection(&data_143f479b8)
*arg1 = &data_142d5a028
return &data_142d5a028
