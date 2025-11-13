// 函数: sub_14282a994
// 地址: 0x14282a994
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg1[0xa] u< arg1[9])
label_14282a9f9:
    char* rcx_3 = arg1[0xa]
    result.b = rcx_3[arg1[8]]
    arg1[0xa] = &rcx_3[1]
else
    int64_t* r8_1 = *arg1
    int64_t rax_2 = std::streambuf::sgetn(*(sx.q(*(*r8_1 + 4)) + r8_1 + 0x48), arg1[8], 0x800)
    arg1[0xa] = 0
    arg1[9] = rax_2
    
    if (rax_2 != 0)
        goto label_14282a9f9
    
    int64_t* rdx_3 = *arg1
    std::ios::setstate(sx.q(*(*rdx_3 + 4)) + rdx_3, 1, 0)
    
    if (arg1[9] != 0)
        goto label_14282a9f9
    
    result.b = 0

return result
