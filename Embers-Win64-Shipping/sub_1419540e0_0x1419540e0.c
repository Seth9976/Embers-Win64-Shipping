// 函数: sub_1419540e0
// 地址: 0x1419540e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x50)
uint64_t rdi = zx.q(arg4)

if (rbx != 0)
    rbx[1].d += 1

int64_t rcx = *(arg2 + 0x30)

if (rbx != 0)
    int64_t (* result)(int32_t* arg1) = memcpy(rbx[2], arg3, rdi.d)
    rbx[1].d -= 1
    
    if (rbx[1].d != 1)
        return result
    
    return (**rbx)(rbx, 1)

if (rcx != 0)
    return memcpy(rcx, arg3, rdi.d)

if (arg1 != 0)
    return data_143effd08(0x8a11, 0, rdi, arg3)

int64_t rbx_3 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
int64_t r14_1 = sx.q(rdi.d)
int64_t rax_2 = r14_1 + rbx_3

if (rax_2 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, (rdi + 0x10).d)
    rbx_3 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
    rax_2 = r14_1 + rbx_3

data_143f02bc8 = rax_2
memcpy(rbx_3, arg3, rdi.d)
void*** rcx_6 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
void* rax_3 = &rcx_6[0xa]

if (rax_3 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x60)
    rcx_6 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
    rax_3 = &rcx_6[0xa]

data_143f02bac += 1
data_143f02bc8 = rax_3
int64_t var_60_1 = rbx_3
*data_143f02ba0 = rcx_6
void** const var_28 = &data_142e345d8
data_143f02ba0 = &rcx_6[1]
int128_t var_20_1 = rdi.d.o
void* var_10_1 = arg2
rcx_6[1] = 0
*rcx_6 = &data_142ff4958
rcx_6[2] = sub_141953ec0
rcx_6[4] = 0

if (rcx_6[2] != 0)
    void** const* rcx_9 = &var_28
    (**rcx_9)(rcx_9)

void** const* rcx_10 = &var_28
return (*rcx_10)[2](rcx_10)
