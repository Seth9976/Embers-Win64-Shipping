// 函数: sub_14204b270
// 地址: 0x14204b270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143f0f180
int64_t* rax_1 = (*(*rcx + 0x130))(rcx, arg2, *arg1, 0, arg1[1].d, 1)
int64_t* rcx_1 = arg1[2]
int64_t* r8_1 = rax_1
int32_t i_2 = rcx_1[1].d
int64_t* rcx_2 = *rcx_1

if (i_2 != 0)
    uint64_t i_1 = zx.q(i_2)
    void* r9_2 = *arg1[3] - rcx_2
    uint64_t i
    
    do
        int64_t zmm0 = *rcx_2
        int32_t rax_2 = rcx_2[1].d
        rcx_2 += 0xc
        *r8_1 = zmm0
        r8_1[1].d = rax_2
        int32_t rax_3 = *(r9_2 + rcx_2 - 4)
        *(r8_1 + 0xc) = *(r9_2 + rcx_2 - 0xc)
        *(r8_1 + 0x14) = rax_3
        r8_1 = &r8_1[3]
        i = i_1
        i_1 -= 1
    while (i != 1)

*arg1
jump(*(*data_143f0f180 + 0x138))
