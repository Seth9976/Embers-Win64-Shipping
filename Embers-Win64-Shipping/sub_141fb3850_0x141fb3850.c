// 函数: sub_141fb3850
// 地址: 0x141fb3850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
void* rcx = *(arg1 + 0x88)

if (*(arg1 + 0x98) s> 0)
    rcx = **(arg1 + 0x90)

if (rcx == 0)
    return 0

int64_t* rcx_1 = *(rcx + 0x68)
int64_t r8
r8.b = 1
void* result = (*(*rcx_1 + 0x2c0))(rcx_1, &arg_10, r8)

if (result != 0)
    void* rax_4 = sub_142452380()
    void* rcx_2 = *(result + 0x10)
    int64_t rdx_1 = sx.q(*(rax_4 + 0x38))
    
    if (rdx_1.d s<= *(rcx_2 + 0x38) && *(*(rcx_2 + 0x30) + (rdx_1 << 3)) == rax_4 + 0x30)
        return result

return nullptr
