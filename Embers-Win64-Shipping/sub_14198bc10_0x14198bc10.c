// 函数: sub_14198bc10
// 地址: 0x14198bc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != 0xffffffff)
    return 

sub_1419a2e50()
sub_1419a2b60()
bool z_1

if (data_143f1afb8 s> 0)
    if (0 == data_143f10908)
        data_143f10908 = 0
        z_1 = true
    else
        data_143f10908
        z_1 = false

int64_t rsi_1

if (data_143f1afb8 s<= 0 || not(z_1))
    rsi_1 = sx.q(data_143f1afd0)
    int32_t rax_4 = (rsi_1 + 1).d
    data_143f1afd0 = rax_4
    
    if (rax_4 s> data_143f1afd4)
        sub_1405a4d70(&data_143f1afc8)
else
    int64_t rax_2 = sx.q(data_143f1afb8)
    rsi_1 = sx.q(*(data_143f1afb0 + (rax_2 << 2) - 4))
    data_143f1afb8 = rax_2.d - 1
    sub_1405dac90(&data_143f1afb0)

*(data_143f1afc8 + (rsi_1 << 3)) = arg1

if (data_143f0f19c != 0)
    sub_140b33630("InitRenderResource")
    (*(*arg1 + 8))(arg1)
    (*(*arg1 + 0x18))(arg1)
    sub_140b37f60("InitRenderResource")

arg1[1].d = rsi_1.d
