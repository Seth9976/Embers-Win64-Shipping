// 函数: sub_140835260
// 地址: 0x140835260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
uint8_t rax_1 = (*(arg1 + 8) u>> 4).b

if ((rax_1 & 1) != 0)
    return rax_1

int64_t arg_8
int64_t* rax_2
int512_t zmm1_1
rax_2, zmm1_1 = sub_140b58170(&arg_8, "Niagara", 1)
j_sub_140b3db50()

if (sub_140b404d0(&data_143de7d78, *rax_2, zmm1_1) != 0)
    return sub_140832b40(arg1)

sub_140d3a3a0(&arg_8, arg1)
int64_t rbx_2 = sx.q(data_143ce3a50)
int32_t rax_4 = (rbx_2 + 1).d
bool cond:0 = rax_4 s<= data_143ce3a54
data_143ce3a50 = rax_4

if (not(cond:0))
    sub_1405a4d70(&data_143ce3a48)

int64_t rax_5 = data_143ce3a48
*(rax_5 + (rbx_2 << 3)) = arg_8
return rax_5
