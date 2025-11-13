// 函数: sub_140bcbc10
// 地址: 0x140bcbc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    int32_t rax_1 = *(arg2 + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    *(rax_8 + 8) |= 0x8000000

char arg_18 = 0
char* var_10 = &arg_18
void*** (* var_18)() = sub_140884c50
int64_t** rbx_1 = *(sub_140a756e0(&var_18, &data_14397f5f0) + 0x40) + 0xb8
int64_t* i

if (arg3 == 0)
    int64_t rsi_2 = sx.q(rbx_1[1].d)
    int32_t rax_12 = (rsi_2 + 1).d
    rbx_1[1].d = rax_12
    
    if (rax_12 s> *(rbx_1 + 0xc))
        sub_1405a4d70(rbx_1)
    
    i = *rbx_1
    i[rsi_2] = arg2
    return i

i = *rbx_1
int64_t rdx_3 = sx.q(rbx_1[1].d)

for (; i != &i[rdx_3]; i = &i[1])
    if (*i == arg2)
        return i

int32_t rax_10 = (rdx_3 + 1).d
rbx_1[1].d = rax_10

if (rax_10 s> *(rbx_1 + 0xc))
    sub_1405a4d70(rbx_1)

int64_t* rax_11 = *rbx_1
rax_11[rdx_3] = arg2
return rax_11
