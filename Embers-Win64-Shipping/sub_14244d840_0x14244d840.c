// 函数: sub_14244d840
// 地址: 0x14244d840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s>= 0 && arg3 s< *(arg1 + 0x40))
    int64_t r8 = sx.q(arg3)
    int64_t* rbx_1 = *(*(arg1 + 0x48) + (r8 << 3))
    void* rbp_2 = r8 * 0xb0 + *(arg1 + 0x38)
    uint8_t rcx = *(rbx_1 + 0xba)
    
    if (rcx u>> 7 != arg6 || rbx_1[0x16].d != arg7 || (rcx u>> 3 & 1) != arg5)
    label_14244d8de:
        
        if (sub_14243ade0(arg2) == 0 || *(arg2 + 0x568) != 0 || 0.0 f>= *(arg1 + 0x58))
            goto label_14244d939
        
        int64_t performanceCount[0x2]
        QueryPerformanceCounter(&performanceCount)
        int64_t zmm1 = float.d(performanceCount[0]) f* data_143d796f8 f+ 16777216.0
        
        if (not(zmm1 f- *(rbp_2 + 0xa8) f< *(arg1 + 0x58)))
            *(rbp_2 + 0xa8) = zmm1
        label_14244d939:
            *(rbx_1 + 0xba) &= 0x7f
            int64_t rax_5 = *rbx_1
            *(rbx_1 + 0xba) |= arg6 << 7
            (*(rax_5 + 0x260))(rbx_1, zx.q(arg4))
            sub_1420ee450(rbx_1, arg5)
            sub_1420ee190(rbx_1, arg7)
            return 1
    else if ((*(*rbx_1 + 0x268))(rbx_1) != arg4)
        goto label_14244d8de

return 0
