// 函数: sub_1427436b0
// 地址: 0x1427436b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(*arg1 + 0x680)
uint64_t i_1 = zx.q((*(*rcx + 0xa0))(rcx))
int64_t* rcx_1 = *(*arg1 + 0x680)
int64_t rdx_1 = *rcx_1
int16_t* result = (*(rdx_1 + 0xa8))(rcx_1, rdx_1)
int16_t* result_1 = result

if (i_1.d != 0)
    uint64_t i
    
    do
        int64_t* rcx_3 = *(*arg1 + 0x680)
        int64_t r8_1 = *rcx_3
        int64_t* rax_3
        int64_t r8_2
        rax_3, r8_2 = (*(r8_1 + 0xd0))(rcx_3, zx.q(*result_1), r8_1)
        int64_t r9_1 = *rax_3
        r8_2.b = *arg1[1] == 0
        result = (*(r9_1 + 0x50))(rax_3, 2, r8_2, r9_1)
        result_1 = &result_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
