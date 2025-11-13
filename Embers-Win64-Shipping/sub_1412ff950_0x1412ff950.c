// 函数: sub_1412ff950
// 地址: 0x1412ff950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[3] = 0
arg1[4] = 0
arg1[1] = arg3
arg1[2] = arg4
arg1[5] = 0
arg1[6].d = 0
void*** (* var_38)()
char arg_8

if (sub_14139fc70(&data_143ec4c60) != 0)
    arg_8 = 0
    char* var_30_1 = &arg_8
    var_38 = j_sub_140597fc0
    void*** rax_2 = sub_14081d830(0xc0, sub_140a756e0(&var_38, &data_143958018) + 0x10, 1, 0)
    void*** rbp_1
    
    if (rax_2 == 0)
        rbp_1 = nullptr
    else
        rbp_1 = sub_141346640(rax_2, sub_14139d440(&data_143ec4c60))
    
    int64_t* rdi_2 = arg1[1]
    int64_t rsi_1 = sx.q(rdi_2[1].d)
    int32_t rax_5 = (rsi_1 + 1).d
    rdi_2[1].d = rax_5
    
    if (rax_5 s> *(rdi_2 + 0xc))
        sub_1405a4d70(rdi_2)
    
    *(*rdi_2 + (rsi_1 << 3)) = rbp_1
    arg1[3] = rbp_1

arg_8 = 0
char* var_30_2 = &arg_8
var_38 = j_sub_140597fc0
void*** rax_8 = sub_14081d830(0xc0, sub_140a756e0(&var_38, &data_143958018) + 0x10, 1, 0)
void*** rbp_2

if (rax_8 == 0)
    rbp_2 = nullptr
else
    rbp_2 = sub_141346640(rax_8, &data_143ec4ca0)

int64_t* rdi_3 = arg1[1]
int64_t rsi_2 = sx.q(rdi_3[1].d)
int32_t rax_10 = (rsi_2 + 1).d
rdi_3[1].d = rax_10

if (rax_10 s> *(rdi_3 + 0xc))
    sub_1405a4d70(rdi_3)

var_30_2.d = 0
*(*rdi_3 + (rsi_2 << 3)) = rbp_2
var_38 = arg1[3]
int128_t zmm0 = var_38.o
arg1[4] = rbp_2
*(arg1 + 0x28) = zmm0
return arg1
