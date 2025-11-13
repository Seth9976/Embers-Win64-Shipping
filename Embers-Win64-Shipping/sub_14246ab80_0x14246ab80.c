// 函数: sub_14246ab80
// 地址: 0x14246ab80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1

if (arg1 != arg2)
    int32_t r8_1 = *(arg1 + 0xc)
    int64_t* rbx_1 = *arg2
    int32_t i_1 = arg2[1].d
    arg1[1].d = i_1
    
    if (i_1 == 0 && r8_1 == 0)
        *(arg1 + 0xc) = i_1
        return arg1
    
    sub_1405a4be0(arg1, i_1, r8_1)
    int64_t* rcx = *rdi
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rax_2 = *rbx_1
            rbx_1 = &rbx_1[2]
            *rcx = rax_2
            rcx = &rcx[2]
            rcx[-1] = rbx_1[-1]
            i = i_1
            i_1 -= 1
        while (i != 1)

return rdi
