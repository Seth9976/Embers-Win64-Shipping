// 函数: sub_142826b14
// 地址: 0x142826b14
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10_1 = arg2[1] + 0x18
void* var_18 = r10_1
int64_t r8_1 = *arg2 + *(r10_1 + 0x18)
uint64_t r9_1 = r8_1 u>> 4
uint64_t r8_2 = zx.q(r8_1.d) & 0xf
int64_t rax_1
rax_1.b = *(r8_2 + *(*(r10_1 + 8) + (((*(r10_1 + 0x10) - 1) & r9_1) << 3)))

if (*(arg1 + 4) s<= rax_1.b)
    void* var_18_1 = r10_1
    int64_t rcx_5
    rcx_5.b = *(r8_2 + *(*(r10_1 + 8) + (((*(r10_1 + 0x10) - 1) & r9_1) << 3)))
    
    if (*(arg1 + 5) s>= rcx_5.b)
        return 1

return 0xffffffff
