// 函数: sub_1427a59c0
// 地址: 0x1427a59c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x60)

if ((*(*rcx + 0x290))(rcx, 1) != 0)
    int64_t* rcx_1 = *(arg1 + 0x60)
    char rax_3
    int32_t r8_1
    rax_3, r8_1 = (*(*rcx_1 + 0x2b8))(rcx_1, 1)
    int64_t* rcx_2 = *(arg1 + 0x60)
    (*(*rcx_2 + 0x2c8))(rcx_2, 1, zx.q(sbb.d(r8_1, r8_1, rax_3 != 0) + 2))

int64_t* rcx_3 = *(arg1 + 0x60)
char result = (*(*rcx_3 + 0x290))(rcx_3, 2)

if (result == 0)
    return result

int64_t* rcx_4 = *(arg1 + 0x60)
char rax_7
int32_t r8_4
rax_7, r8_4 = (*(*rcx_4 + 0x2b8))(rcx_4, 2)
jump(*(**(arg1 + 0x60) + 0x2c8))
