// 函数: sub_1417f3710
// 地址: 0x1417f3710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 9) == 0)
    int64_t rdi_1 = sx.q(data_143f13788)
    int32_t rax_2 = (rdi_1 + 1).d
    bool cond:1 = rax_2 s<= data_143f1378c
    data_143f13788 = rax_2
    
    if (not(cond:1))
        sub_1405a4d70(&data_143f13780)
    
    int64_t rax_3 = data_143f13780
    *(rax_3 + (rdi_1 << 3)) = arg1
    *(arg1 + 8) = 1
    return rax_3

int64_t rdi = sx.q(data_143f13798)
int32_t rax = (rdi + 1).d
bool cond:2 = rax s<= data_143f1379c
data_143f13798 = rax

if (not(cond:2))
    sub_1405a4d70(&data_143f13790)

int64_t rax_1 = data_143f13790
*(rax_1 + (rdi << 3)) = arg1
*(arg1 + 8) = 1
return rax_1
