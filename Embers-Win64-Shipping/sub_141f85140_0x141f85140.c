// 函数: sub_141f85140
// 地址: 0x141f85140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x294) & 1) == 0)
    return 

void* rcx = *(arg1 + 0x130)

if (rcx == 0 || *(rcx + 0xc0) == 0)
    return 

int64_t rax = sub_141f3ba40(rcx)

if (rax == 0)
    return 

void* rax_1 = sub_14255d000()
void* rdx_1 = *(rax + 0x10)
rax = sx.q(*(rax_1 + 0x38))

if (rax.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax << 3)) == rax_1 + 0x30)
    int64_t* rcx_2 = *(arg1 + 0x130)
    (*(*rcx_2 + 0x400))(rcx_2, &data_143a2de54)
