// 函数: sub_140dd98b0
// 地址: 0x140dd98b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142ecccb8
arg1[3] = *arg2
void* rax_1 = arg2[1]
arg1[4] = rax_1

if (rax_1 != 0)
    *(rax_1 + 0xc) += 1

int32_t rax_2 = data_143e2911c
arg1[5].b = arg3
__builtin_memset(&arg1[6], 0, 0x30)
arg1[0xc].d = 0xffffffff

if (rax_2 == 0x7fffffff)
    rax_2 = -0x80000000
else if (rax_2 == 0xffffffff)
    rax_2 = 0

*(arg1 + 0x64) = rax_2
int64_t* rcx = arg2[1]
data_143e2911c = rax_2 + 1

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

return arg1
