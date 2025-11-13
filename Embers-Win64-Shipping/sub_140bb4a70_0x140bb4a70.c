// 函数: sub_140bb4a70
// 地址: 0x140bb4a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(data_143e1a3d8)
int32_t rax = (rdi + 1).d
bool cond:0 = rax s<= data_143e1a3dc
data_143e1a3d8 = rax

if (not(cond:0))
    sub_1405c4e40(&data_143e1a3d0)

int64_t* rdx_4 = (rdi << 5) + data_143e1a3d0
*rdx_4 = *arg1
rdx_4[1] = arg1[1]
void* rax_3 = arg1[2]
rdx_4[2] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

int32_t result = arg1[3].d
rdx_4[3].d = result
return result
