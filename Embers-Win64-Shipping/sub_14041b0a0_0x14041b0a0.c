// 函数: sub_14041b0a0
// 地址: 0x14041b0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -0x7ffffffebd29c998
int32_t var_10 = sub_140b61230(u"Midi", 4)
char var_c = 1
void*** rax_1 = sub_140a84c80(0, 0x30, 0)

if (rax_1 != 0)
    *rax_1 = &data_142d63678
    rax_1[1] = &data_143cda930
    rax_1[2] = sub_14060f980
    rax_1[4] = sub_140a387b0()

j_sub_140b3db50()
void* rdi = &data_143de7dd0
int64_t rsi = sx.q(data_143de7fd8)
int32_t rax_3 = (rsi + 1).d
data_143de7fd8 = rax_3

if (rax_3 s> data_143de7fdc)
    sub_1405a4e80(&data_143de7dd0, rsi.d)

void* rax_4 = data_143de7fd0

if (rax_4 != 0)
    rdi = rax_4

int64_t rax_6 = rsi << 5
*(rdi + rax_6) = var_18.o
void* rdx_3 = rax_6 + 0x10 + rdi
*rdx_3 = 0
*(rdx_3 + 8) = 0
int64_t* result = &var_18

if (&var_18 == rdx_3)
    goto label_14041b191

if (rax_1 != 0)
    result = (*rax_1)[8](rax_1)
label_14041b191:
    
    if (rax_1 != 0)
        (*rax_1)[7](rax_1, 0)
        result = sub_140a84c80(rax_1, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result)

return result
