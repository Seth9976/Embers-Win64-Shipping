// 函数: sub_1411b9cf0
// 地址: 0x1411b9cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3

if (arg1[1] u> 0)
    void*** r10_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    uint32_t r15_1 = zx.d(*arg1)
    void* rax_1 = &r10_3[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        r10_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &r10_3[5]
    
    *(arg2 + 0x30) = rax_1
    void** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = r10_3
    *(arg2 + 8) = &r10_3[1]
    r10_3[1] = 0
    r10_3[3].d = r15_1
    *r10_3 = &data_142d5ebf8
    r10_3[2] = arg3
    r10_3[4] = arg4

void arg_28
return sub_1405eb490(arg2, &arg_18, &arg1[2], &arg_28, 0)
