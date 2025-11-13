// 函数: sub_141ac9f70
// 地址: 0x141ac9f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg2 + 0x20)
void* rax = *(rbx + 0xa8)

if (rax == 0)
    rax = sub_141ee69e0(rbx)

int64_t* rax_1
int64_t zmm0
rax_1, zmm0 = sub_142437e30(rax, 0, 1)
int64_t rdx = *rax_1
(*(rdx + 0x638))(rax_1, rdx)
*(arg1 + 0x120) = zmm0.d
void* rcx_3 = *(rbx + 0xc0)

if (rcx_3 == 0 || *(rbx + 0xa0) != 0)
    *(arg1 + 0x100) = data_143dbb1f8.q
    int32_t rax_5 = data_143dbb200
    *(arg1 + 0x108) = rax_5
    return rax_5

int64_t* rcx_4 = *(rcx_3 + 0xa0)
void var_18
int64_t* rax_3 = (*(*rcx_4 + 0x2f0))(rcx_4, &var_18)
*(arg1 + 0x100) = *rax_3
int32_t rax_4 = rax_3[1].d
*(arg1 + 0x108) = rax_4
return rax_4
