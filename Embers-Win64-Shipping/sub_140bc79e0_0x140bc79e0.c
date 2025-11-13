// 函数: sub_140bc79e0
// 地址: 0x140bc79e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1)
int32_t* rdi_2 = (rsi << 4) + arg2
int64_t result = sub_140bc8740(rdi_2)
int64_t result_1 = result

if (result == 0)
    int32_t rcx_1 = *(arg3 + (rsi << 2))
    
    if (rcx_1 != 0)
        int64_t rax_1 = sub_140bc79e0(zx.q(not.d(rcx_1)), arg2, arg3, arg4)
        
        if (rax_1 != 0)
            int32_t var_28_2 = 0
            int32_t var_30_2 = 0
            result_1 = sub_140d2f0c0(sub_140d41340(), rax_1, *(arg4 + (rsi << 3)), 0, 1, 0)
    else
        void* rax
        int64_t r9
        rax, r9 = sub_140cddea0()
        r9.b = 1
        int32_t var_28_1 = 0
        int32_t var_30_1 = 0
        result_1 = sub_140d2f0c0(rax, 0, *(arg4 + (rsi << 3)), r9, 0, 0)
    
    *rdi_2 = result_1
    result = result_1
    rdi_2[3].b = 0

return result
