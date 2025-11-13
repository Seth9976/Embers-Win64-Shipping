// 函数: sub_140a531d0
// 地址: 0x140a531d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140a3f800(arg1, arg3)

if (result.b != 0)
    int64_t* r14_1 = nullptr
    
    if (arg1[7] != arg2)
        int32_t rbx_2
        
        if (arg2 == 0 || *arg2 == 0)
            rbx_2 = 0
        else
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (arg2[rbx_1] != 0)
            
            rbx_2 = rbx_1.d + 1
        
        int32_t rdx_1 = 0
        arg1[8].d = 0
        
        if (*(arg1 + 0x44) != rbx_2)
            sub_1405947f0(&arg1[7], rbx_2)
            rdx_1 = arg1[8].d
        
        int32_t rax = rdx_1 + rbx_2
        arg1[8].d = rax
        
        if (rax s> *(arg1 + 0x44))
            sub_140594770(&arg1[7])
        
        if (rbx_2 != 0)
            memcpy(arg1[7], arg2, rbx_2 * 2)
    
    sub_140a3aba0(&arg1[9], &arg1[7], (arg1[3].d).b, arg3)
    result = (zx.d(arg1[3].w) | arg3) & 0xff00ffff
    arg1[3].d = result
    
    if (arg1[5].d != 0)
        int64_t* rcx_4 = arg1[4]
        
        if (rcx_4 != 0)
            result = (*(*rcx_4 + 0x28))(rcx_4)
            
            if (result.b != 0)
                if (arg1[5].d != 0)
                    r14_1 = arg1[4]
                
                return (*(*r14_1 + 0x50))(r14_1, arg1)

return result
