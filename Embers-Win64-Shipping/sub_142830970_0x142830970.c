// 函数: sub_142830970
// 地址: 0x142830970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r10 = nullptr
int32_t* arg_8 = nullptr
int32_t rax_2
int32_t arg_18

if (arg3 s<= 0)
    rax_2 = arg_18
else
    int64_t rbx_1 = 0
    
    while (true)
        if (arg1 != 0 && sub_142833d48(arg1, *(arg2 + (rbx_1 << 3)), &arg_8, &arg_18) != 0)
            rax_2 = arg_18
            arg1 = nullptr
            r10 = arg_8
            
            if (rax_2 == 3)
                arg1 = r10
            
            rbx_1 += 1
            
            if (rbx_1 s>= sx.q(arg3))
                break
            
            continue
        
        return 0

if (arg4 != 0)
    *arg4 = r10

if (arg5 != 0)
    *arg5 = rax_2

return 1
