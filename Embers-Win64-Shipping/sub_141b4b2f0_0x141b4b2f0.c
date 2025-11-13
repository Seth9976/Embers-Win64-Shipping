// 函数: sub_141b4b2f0
// 地址: 0x141b4b2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg1[2]
int64_t* rcx = data_143f0f180
uint64_t rbx = zx.q(*(r14 + 0x48))
uint32_t count = *(r14 + 0x38) * 0x28
int64_t rax_2 = (*(*rcx + 0x130))(rcx, arg3, *arg1, 0, count, 1)
int64_t* rcx_1 = data_143f0f180
uint32_t count_1 = (rbx << 2).d
int64_t rax_3 = (*(*rcx_1 + 0x110))(rcx_1, arg2, arg1[1], 0, count_1, 1)
memcpy(rax_2, *(r14 + 0x30), count)
memcpy(rax_3, *(r14 + 0x40), count_1)
int64_t* rcx_4 = data_143f0f180
(*(*rcx_4 + 0x138))(rcx_4, arg2, *arg1)
arg1[1]
jump(*(*data_143f0f180 + 0x118))
