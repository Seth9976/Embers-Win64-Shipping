// 函数: sub_142b9d700
// 地址: 0x142b9d700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0

if (arg1 == 0 || arg2 == 0)
    return 6

int32_t rax_1 = *arg2 - arg1[2]
int32_t rcx_1 = arg2[1] - arg1[3]
int32_t arg_8 = rax_1
int32_t arg_c = rcx_1

if (rax_1 != 0 || rcx_1 != 0)
    int32_t rax_2 = sub_142b97240(&arg_8)
    int32_t rax_3 = sub_142b915d0(arg_8, arg_c)
    int32_t r9_1 = sub_142b97220(&arg_8, arg1[0xf], rax_3 + 0x5a0000)
    int32_t rax_4
    
    if (arg1[5].b == 0)
        arg1[1] = rax_3
        rax_4 = sub_142b9ea00(arg1, rax_2)
    else
        rax_4 = sub_142b9ea70(arg1, rax_3, rax_2, r9_1)
    
    r8 = rax_4
    
    if (rax_4 == 0)
        int32_t rdx_4 = arg_c
        int32_t rcx_6 = arg_8
        void* rsi_1 = &arg1[0x10]
        int32_t rdi_1 = 1
        
        while (true)
            r8.b = 1
            int32_t arg_18 = rcx_6 + *arg2
            int32_t arg_1c = arg2[1] + rdx_4
            int32_t rax_5 = sub_142b9e3b0(rsi_1, &arg_18, r8.b)
            r8 = rax_5
            
            if (rax_5 != 0)
                break
            
            rsi_1 += 0x30
            rcx_6 = neg.d(arg_8)
            rdx_4 = neg.d(arg_c)
            arg_8 = rcx_6
            int32_t temp0_1 = rdi_1
            rdi_1 -= 1
            arg_c = rdx_4
            
            if (temp0_1 - 1 s< 0)
                *arg1 = rax_3
                *(arg1 + 8) = *arg2
                arg1[4] = rax_2
                break

return zx.q(r8)
