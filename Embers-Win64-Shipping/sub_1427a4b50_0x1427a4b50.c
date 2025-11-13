// 函数: sub_1427a4b50
// 地址: 0x1427a4b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(*(arg1[0x16] + 0x28) + 8) = arg2
void* result = (*(*arg1 + 0x280))(arg5, &data_143f88ad0, arg4, arg3)

if (result != 0)
    void* rax_2 = sub_1427c0910()
    void* rcx = *(result + 0x10)
    int64_t rdx = sx.q(*(rax_2 + 0x38))
    
    if (rdx.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rdx << 3)) == rax_2 + 0x30)
        return result

return 0
