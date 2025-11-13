// 函数: sub_140d357d0
// 地址: 0x140d357d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x30) = 0
*(arg2 + 0x38) = 0
int64_t* rax = *(arg2 + 0x20)
void* rbx = *rax
*(arg2 + 0x20) = &rax[1]
*(arg2 + 0x30) = rbx
void* rax_2 = sub_140cbd150(rbx)
int64_t* rcx_1 = *(rax_2 + 0x20)
int64_t r9 = *rcx_1
(*(r9 + 0x328))(rcx_1, *(arg2 + 0x18), rax_2, r9)
*(rbx + 0x4c)
char* rax_4 = *(arg2 + 0x20)
uint32_t rcx_2 = zx.d(*rax_4)
*(arg2 + 0x20) = &rax_4[1]
*(arg2 + 0x18)
jump((&data_143e1cd60)[zx.q(rcx_2)])
