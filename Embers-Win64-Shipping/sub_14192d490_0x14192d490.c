// 函数: sub_14192d490
// 地址: 0x14192d490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = **arg1
void* rsi

if (rdi != 0)
    (*(*rdi + 0x48))(rdi)
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    rsi = (*(*rdi + 0x48))(rdi)
else
    rsi = nullptr

int32_t r14 = *(rsi + 0x14)
int32_t* rcx_2 = arg1[1]
int32_t rdi_1 = 1
void* arg_20 = rsi

if (r14 == 0x9009)
    rdi_1 = 6

int32_t r15 = 0x8ce0
int32_t* rax_4 = arg1[3]
int32_t rbp = *rcx_2
int32_t arg_10 = rbp
int32_t rdi_3 = rdi_1 * *rax_4 + *arg1[2]
int32_t arg_18 = rdi_3
int32_t arg_8 = 0

if (r14 != 0x9009)
    arg_8 = sub_14193c970(arg1[4], 1, &arg_20, &arg_18, &arg_10, nullptr)
else
    data_143f00108(1, &arg_8)
    data_143f000f8(0x8ca8, zx.q(arg_8))
    int32_t* var_58
    var_58.d = rdi_3
    data_143f00160(0x8ca8, 0x8ce0, zx.q(*(rsi + 0x10)), zx.q(rbp), var_58)

int32_t* rax_7 = arg1[5]
uint64_t* rcx_4 = arg1[6]
int32_t rbp_2 = rax_7[3] - rax_7[1]
int32_t rsi_2 = rax_7[2] - *rax_7
int32_t rdi_5 = rbp_2 * rsi_2
rcx_4[1].d = 0

if (*(rcx_4 + 0xc) != rdi_5)
    sub_1405c5570(rcx_4, rdi_5)

int64_t* rcx_5 = arg1[6]
int32_t rax_8 = rcx_5[1].d + rdi_5
rcx_5[1].d = rax_8

if (rax_8 s> *(rcx_5 + 0xc))
    sub_1405a4d70(rcx_5)

data_143f000f8(0x8ca8, zx.q(arg_8))

if (arg_8 == 0)
    r15 = 0x405

data_143effae0(zx.q(r15))
data_143effac0(0xd05, 1)
int32_t* rcx_7 = arg1[5]
data_143effae8(zx.q(*rcx_7), zx.q(rcx_7[1]), zx.q(rsi_2), zx.q(rbp_2), 0x1908, 0x140b, *arg1[6])
data_143effac0(0xd05, 4)

if (r14 == 0x9009)
    data_143f00100(1, &arg_8)

void* result = sub_14190d690(arg1[4], 1)
*(result + 0x188) = 0xffffffff
return result
