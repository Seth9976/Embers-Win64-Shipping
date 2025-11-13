// 函数: sub_142a5e420
// 地址: 0x142a5e420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x170)

if (result != 0)
    void* rcx = *result
    int32_t rdi_1
    rdi_1.b = arg2 == 0
    
    if (*(rcx + 0x1cc) != 0 || rdi_1 != *(rcx + 0x1d0))
        sub_142a5a180(arg1, arg2)
        int64_t* rax = *(arg1 + 0x170)
        int32_t arg_8 = 0
        void* rcx_2 = *rax
        *(rcx_2 + 0x1d0) = rdi_1
        *(rcx_2 + 0x1cc) = 0
        return sub_142a5f4f0(arg1, &arg_8)

return result
