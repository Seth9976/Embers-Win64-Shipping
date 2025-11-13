// 函数: sub_1419870b0
// 地址: 0x1419870b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_141972130(arg1, arg2, arg3)
void*** result_1 = result

if (result != 0 && (result[3] != 0 || arg2[0xa].w s>= 0))
    *(arg1 + 0x180) = *arg2
    *(arg1 + 0x190) = arg2[1]
    *(arg1 + 0x1a0) = arg2[2]
    void*** rcx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax = &rcx_2[3]
    
    if (rax u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x20)
        rcx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax = &rcx_2[3]
    
    *(arg1 + 0x30) = rax
    void**** rax_1 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_1 = rcx_2
    *(arg1 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    result = &data_143000cc8
    *rcx_2 = &data_143000cc8
    rcx_2[2] = result_1

return result
