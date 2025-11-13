// 函数: sub_14192ec90
// 地址: 0x14192ec90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = **arg1
(*(*rcx + 0x18))(rcx)
int32_t rsi = 0
int64_t* rbx = **arg1
void* arg_20

if (rbx != 0)
    (*(*rbx + 0x48))(rbx)
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    arg_20 = (*(*rbx + 0x48))(rbx)
else
    arg_20 = nullptr

int32_t* rcx_3 = arg1[1]
int32_t* rax_6 = arg1[2]
int32_t r13_1 = rcx_3[3] - rcx_3[1]
int32_t r12_1 = rcx_3[2] - *rcx_3
int32_t r14_1 = rax_6[1] - *rax_6
uint64_t* rcx_4 = arg1[3]
rcx_4[1].d = 0
uint64_t rbp_2 = zx.q(r14_1 * r13_1 * r12_1)
uint32_t rdx = (rbp_2 << 3).d

if (*(rcx_4 + 0xc) != rdx)
    sub_1405c5570(rcx_4, rdx)

int64_t* rbx_1 = arg1[3]
int64_t r15 = sx.q(rbx_1[1].d)
int32_t rax_7 = (r15 + rbp_2).d
rbx_1[1].d = rax_7

if (rax_7 s> *(rbx_1 + 0xc))
    sub_1405a4d70(rbx_1)

memset(*rbx_1 + (r15 << 3), 0, sx.q(rbp_2.d) << 3)
int32_t arg_10 = 0
data_143f00108(1, &arg_10)
data_143f000f8(0x8ca8, zx.q(arg_10))
int64_t rcx_7 = sx.q(data_1439c74c8)
int32_t arg_8 = 0
int32_t rbp_3

if (0x400 - rcx_7.d s<= 1)
    memcpy(&arg_8, &data_143efbd00 + (rcx_7 << 2), (0x400 - rcx_7.d) << 2)
    data_143effa28(0x400, &data_143efbd00)
    rbp_3 = 1 - (0x400 - rcx_7.d)
    memcpy(&(&arg_8)[sx.q(0x400 - rcx_7.d)], &data_143efbd00, rbp_3 << 2)
else
    rbp_3 = (rcx_7 + 1).d
    arg_8 = *(&data_143efbd00 + (rcx_7 << 2))

data_1439c74c8 = rbp_3
data_143effc18(0x84c0)
data_143eff988(0x806f, zx.q(arg_8))
int32_t var_58 = 0x140b
int32_t var_60 = 0x1908
int32_t var_68 = 0
int32_t var_70 = r14_1
data_143effc00(0x806f, 0, 0x881a, zx.q(r12_1), r13_1, var_70, 0, 0x1908, 0x140b, 0)
int32_t rbx_3 = 0

if (r14_1 != 0)
    do
        data_143f00160(0x8ca8, 0x8ce0, zx.q(*(arg_20 + 0x10)), 0, *arg1[2] + rbx_3, var_70, var_68, 
            var_60, var_58)
        int64_t rcx_10 = 0x8ce0
        
        if (arg_10 == 0)
            rcx_10 = 0x405
        
        data_143effae0(rcx_10)
        int32_t* rcx_11 = arg1[1]
        var_58 = r13_1
        var_60 = r12_1
        var_68 = rcx_11[1]
        var_70 = *rcx_11
        data_143effc10(0x806f, 0, 0, 0, rbx_3, var_70, var_68, var_60, var_58)
        rbx_3 += 1
    while (rbx_3 u< r14_1)

data_143effac0(0xd05, 1)
int32_t var_78
var_78.q = *arg1[3]
data_143effa68(0x806f, 0, 0x1908, 0x140b, var_78, var_70, var_68, var_60, var_58)
data_143effac0(0xd05, 4)
void* rax_18 = sub_14190d690(arg1[4], 1)
void* rax_19 = *(rax_18 + 8)

if (*(rax_19 + 0x10) == 0x806f)
    rsi = *(rax_19 + 0x14)

data_143eff988(0x806f, zx.q(rsi))
data_143effc18(zx.q(*(rax_18 + 0x3f0) + 0x84c0))
data_143f00100(1, &arg_10)
int64_t result = data_143eff9c8(1, &arg_8)
*(rax_18 + 0x188) = 0xffffffff
return result
