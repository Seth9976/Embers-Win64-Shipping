// 函数: sub_140d9a060
// 地址: 0x140d9a060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1 = *arg3 | 0x100000
*arg3 = r8_1
uint64_t result = *arg1

if ((*(result + 8) & 1) != 0)
    r8_1 |= 8
    *arg3 = r8_1

if (data_1439ae500 == 0)
    *arg3 = r8_1 | 0x20020
else
    void* rdi_1 = *(arg2 + 0x18)
    
    if (rdi_1 == 0)
        result = zx.q(*(arg2 + 0x10))
    else
        void* rax_1 = sub_140d21950(rdi_1, sub_140e28000())
        int64_t rdx_1 = *rax_1
        result = (*(rdx_1 + 0x18))(rax_1, rdx_1)
    
    uint32_t rcx_2 = zx.d(result.b)
    
    if (rcx_2 == 1)
        *arg3 |= 0x20
        return result
    
    if (rcx_2 == 2)
        *arg3 |= 0x10000
        return result
    
    if (rcx_2 == 3)
        *arg3 |= 0x20020
        return result
    
    if (rcx_2 == 4)
        *arg3 |= 0x8002

return result
