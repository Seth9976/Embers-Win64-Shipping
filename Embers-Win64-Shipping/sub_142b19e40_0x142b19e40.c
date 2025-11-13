// 函数: sub_142b19e40
// 地址: 0x142b19e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi_1 = arg2.d - arg1.d
uint8_t arg_8
int32_t rbx_1

if (rdi_1 != 1)
    int32_t r9_1 = zx.d(*(arg2 - 1)) + arg3
    int32_t rbx_2
    
    if (r9_1 - 0x80 u> 0x3f)
        int32_t rdx_1 = arg3 + sub_142b1a160(arg1, arg2)
        
        if (rdx_1 u> 0x7f)
            if (rdx_1 u> 0x7ff)
                int32_t rbx_3
                
                if (rdx_1 u> 0xffff)
                    rbx_3 = 2
                    arg_8 = (rdx_1 u>> 0x12).b | 0xf0
                    uint8_t arg_9 = ((rdx_1 u>> 0xc).b & 0x3f) | 0x80
                else
                    rbx_3 = 1
                    arg_8 = (rdx_1 u>> 0xc).b | 0xe0
                
                (&arg_8)[zx.q(rbx_3)] = ((rdx_1 u>> 6).b & 0x3f) | 0x80
                rbx_2 = rbx_3 + 1
            else
                rbx_2 = 1
                arg_8 = (rdx_1 u>> 6).b | 0xc0
            
            rdx_1.b &= 0x3f
            rdx_1.b |= 0x80
            (&arg_8)[zx.q(rbx_2)] = rdx_1.b
            rbx_1 = rbx_2 + 1
        else
            arg_8 = rdx_1.b
            rbx_1 = 1
    else
        rbx_2 = 0
        char* rdx = &arg_8 - arg1
        
        do
            rbx_2 += 1
            *(rdx + arg1) = *arg1
            arg1 = &arg1[1]
        while (arg1 u< arg2 - 1)
        
        (&arg_8)[sx.q(rbx_2)] = r9_1.b
        rbx_1 = rbx_2 + 1
else
    rbx_1 = rdi_1
    arg_8 = *arg1 + arg3.b

if (arg5 != 0)
    sub_142afcad0(arg5, rdi_1, rbx_1)

return (*(*arg4 + 8))(arg4, &arg_8, zx.q(rbx_1))
