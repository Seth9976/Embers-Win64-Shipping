// 函数: sub_1409285f0
// 地址: 0x1409285f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_14092d020(arg1) != 0 && *(arg1 + 0x80) != *(arg1 + 0xac))
    int32_t arg_20
    sub_140926d10(arg1 + 0x78, &arg_20, arg2)
    int64_t rax_2 = sx.q(arg_20)
    void* rax_4
    
    if (rax_2.d == 0xffffffff)
        rax_4 = nullptr
    else
        rax_4 = rax_2 * 0x70 + *(arg1 + 0x78)
    
    int64_t* rbx_1 = rax_4 + 0x10
    
    if (rax_4 == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        sub_14065da90(arg3, rbx_1)
        sub_14065da90(arg3 + 0x18, &rbx_1[3])
        sub_14065da90(&arg3[3], &rbx_1[6])
        *(arg3 + 0x48) = rbx_1[9].b
        arg3[5].q = rbx_1[0xa]
        return 0

return 1
