// 函数: sub_141b31340
// 地址: 0x141b31340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_142452380()
void* rcx = arg2[2]
int64_t rax_1 = sx.q(*(rax + 0x38))

if (rax_1.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rax_1 << 3)) == rax + 0x30)
    *(arg1 + 8)
    jump(*(*arg2 + 0x2f8))

void* rax_4 = sub_1425881f0()
void* rdx_2 = arg2[2]
int64_t result = sx.q(*(rax_4 + 0x38))

if (result.d s<= *(rdx_2 + 0x38))
    int64_t result_1 = result
    result = *(rdx_2 + 0x30)
    
    if (*(result + (result_1 << 3)) == rax_4 + 0x30)
        void* r8_2
        r8_2.b = 1
        return sub_141f479b0(arg2, *(arg1 + 8), r8_2.b)

return result
