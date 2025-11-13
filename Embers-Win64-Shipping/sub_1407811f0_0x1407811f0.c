// 函数: sub_1407811f0
// 地址: 0x1407811f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
*(rdx + 0x60) = (*(rdx + 0x60) - 1) & 1
void* rdx_1 = *arg1
*(rdx_1 + 0x62) = *(rdx_1 + 0x61)
*(*arg1 + 0x61) = 1
void* rcx = *arg1
int64_t* r10 = data_143f0f180
int32_t count = arg1[2].d << 4
memcpy(
    (*(*r10 + 0x130))(r10, &data_143f02b98, *((((zx.q(*(rcx + 0x60)) & 1) + 1) << 5) + rcx), 0, 
        count, 1), 
    arg1[1], count)
void* rax_8 = *arg1
int64_t* rcx_3 = data_143f0f180
int64_t r9 = *rcx_3
(*(r9 + 0x138))(rcx_3, &data_143f02b98, *((((zx.q(*(rax_8 + 0x60)) & 1) + 1) << 5) + rax_8), r9)
void* rcx_4 = *arg1
int64_t* r10_1 = data_143f0f180
int32_t count_1 = arg1[4].d << 4
memcpy(
    (*(*r10_1 + 0x130))(r10_1, &data_143f02b98, 
        *(((zx.q(*(rcx_4 + 0x60)) & 1) << 5) + rcx_4 + 0x30), 0, count_1, 1), 
    arg1[3], count_1)
void* rax_13 = *arg1
*(((zx.q(*(rax_13 + 0x60)) & 1) << 5) + rax_13 + 0x30)
jump(*(*data_143f0f180 + 0x138))
