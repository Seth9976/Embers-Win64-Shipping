// 函数: sub_140a535b0
// 地址: 0x140a535b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140a3f800(arg1, arg3)

if (result != 0)
    if (arg1[8] != arg2)
        int32_t rdx_1 = 0
        int32_t rbx_2
        
        if (arg2 == 0 || *arg2 == 0)
            rbx_2 = 0
        else
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (arg2[rbx_1] != 0)
            
            rbx_2 = rbx_1.d + 1
        
        arg1[9].d = 0
        
        if (*(arg1 + 0x4c) != rbx_2)
            sub_1405947f0(&arg1[8], rbx_2)
            rdx_1 = arg1[9].d
        
        int32_t rax = rdx_1 + rbx_2
        arg1[9].d = rax
        
        if (rax s> *(arg1 + 0x4c))
            sub_140594770(&arg1[8])
        
        if (rbx_2 != 0)
            memcpy(arg1[8], arg2, rbx_2 * 2)
    
    result = sub_140a3f800(arg1, arg3)
    
    if (result != 0)
        sub_140a3aba0(arg1[7], &arg1[8], (arg1[3].d).b, arg3)
        return sub_140a4c3d0(arg1, zx.q(arg3))

return result
