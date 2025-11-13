// 函数: sub_140833e60
// 地址: 0x140833e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f21f == 0)
    return 

uint64_t rcx = zx.q(data_143f0f1a0)

if (((*(&data_143f025fc + sx.q(rcx.d) * 0x14) u>> 0x13).b & 1) == 0
        || not(test_bit(data_143f13cd8, rcx)))
    return 

if (*(arg1 + 0x20) != 0)
    *(arg1 + 0x60) = arg1 + 0x10

uint64_t i = *(arg1 + 0x50)
int64_t rdx_1
rdx_1.b = 1

if ((1 & i.b) != 0)
    i = (i s>> 1) + arg1 + 0x50

for (int64_t rcx_4 = (sx.q(*(arg1 + 0x58)) << 5) + i; i != rcx_4; i += 0x20)
    if (*i == 0)
        rdx_1.b = 0
        break

if (*(arg1 + 0x38) == 0 || rdx_1.b == 0)
    return 

int64_t* rcx_5 = data_143f0f180
uint64_t arg_18
(*(*rcx_5 + 0x6f0))(rcx_5, &arg_18)

if (arg1 + 0x30 == &arg_18)
label_140833fc1:
    uint64_t rbx_2 = arg_18
    
    if (rbx_2 != 0)
        int32_t rsi_1 = *(rbx_2 + 8)
        *(rbx_2 + 8) -= 1
        
        if (rsi_1 == 1)
            char rax_7
            
            if (*(rbx_2 + 0x10) == 0 && data_143f0f1d0 == 0)
                rax_7 = sub_1405949a0()
            
            if (*(rbx_2 + 0x10) != 0 || (data_143f0f1d0 == 0 && rax_7 != 0))
                (**rbx_2)(rbx_2, 1)
            else
                bool z_2
                
                if (0 == *(rbx_2 + 0xc))
                    *(rbx_2 + 0xc) = 1
                    z_2 = true
                else
                    *(rbx_2 + 0xc)
                    z_2 = false
                
                if (z_2)
                    sub_1405dcc10(&data_143f02390, rbx_2)
else
    int64_t* rbx_1 = *(arg1 + 0x30)
    *(arg1 + 0x30) = arg_18
    arg_18 = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_5
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_5 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_5 != 0))
                (**rbx_1)(rbx_1, 1)
            else
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, rbx_1)
        
        goto label_140833fc1

if (*(arg1 + 0x60) != 0)
    return 

void* rax_9 = *(arg1 + 0x30)
int64_t var_38_1 = 0
int32_t var_30_1 = 0
void* var_48 = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

int32_t var_40_1 = 0
void*** rbx_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_10 = &rbx_5[4]

if (rax_10 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x28)
    rbx_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_10 = &rbx_5[4]

data_143f02bac += 1
data_143f02bc8 = rax_10
*data_143f02ba0 = rbx_5
int64_t rcx_9 = data_143f02bc8 + 7
data_143f02ba0 = &rbx_5[1]
int128_t* rcx_10 = rcx_9 & 0xfffffffffffffff8
void* rax_12 = &rcx_10[2]

if (rax_12 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x28)
    rcx_10 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_12 = &rcx_10[2]

int128_t zmm0 = var_48.o
data_143f02bc8 = rax_12
*rcx_10 = zmm0
int32_t var_50_1 = 1
rcx_10[1] = var_38_1.o
rbx_5[1] = 0
*rbx_5 = &data_142dd5b60
*(rbx_5 + 0x10) = rcx_10.o
sub_14081c9d0(&var_48)
