// 函数: sub_141f70fe0
// 地址: 0x141f70fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2
char result

if (arg3.b == 0)
    result = sub_1405a6730(rbx, &arg1[0x87], arg3)

if (arg3.b != 0 || result == 0)
    int64_t* rax_1 = sub_140d3c6e0(&arg1[0x87])
    
    if (rbx != 0)
        int64_t* rdi_1 = rbx
        
        if (sub_140d3e110(&rbx[0x87]) != 0)
            char i
            
            do
                int64_t* rax_3 = sub_140d3c6e0(&rdi_1[0x87])
                rbx = rax_3
                rdi_1 = rax_3
                
                if (rax_3 == arg1)
                    rbx = nullptr
                    break
                
                i = sub_140d3e110(&rax_3[0x87])
            while (i != 0)
    
    sub_140d3a3a0(&arg1[0x87], rbx)
    void* rdi_3
    
    if (rbx == 0)
        rdi_3 = &arg1[6]
    else
        int32_t i_1 = 0
        uint64_t r15
        r15.b = 1
        int32_t rbp_1 = 1
        
        while (i_1 s>= 0)
            if (i_1 s>= rbx[0x95].d)
                break
            
            int64_t r12_1 = sx.q(i_1) << 3
            int64_t arg_20 = *(r12_1 + rbx[0x94])
            
            if (sub_140d3e110(&arg_20) != 0)
                r15 = zx.q(r15.b)
                
                if (sub_140d3c6e0(&arg_20) == arg1)
                    r15 = 0
                
                i_1 += 1
                rbp_1 += 1
            else
                int32_t rcx_8 = rbx[0x95].d
                int32_t rax_8 = rcx_8 - i_1
                
                if (rax_8 != 1)
                    int64_t rcx_9 = rbx[0x94]
                    memmove(rcx_9 + r12_1, rcx_9 + (sx.q(rbp_1) << 3), (rax_8 - 1) << 3)
                    rcx_8 = rbx[0x95].d
                
                rbx[0x95].d = rcx_8 - 1
                sub_1405c53d0(&rbx[0x94])
        
        if (r15.b != 0)
            (*(*rbx + 0x930))(rbx, arg1)
        
        rdi_3 = &arg1[6]
        sub_1423bc410(rdi_3, rbx, &rbx[6])
    
    if (rax_1 != 0 && rax_1 != rbx)
        (*(*rax_1 + 0x938))(rax_1, arg1)
        sub_1423c7420(rdi_3, rax_1, &rax_1[6])
    
    (*(*arg1 + 0x920))(arg1)
    sub_141ef1240(arg1)
    result = sub_141f75f40(arg1)
    
    if (rbx != 0)
        int32_t rdi_4 = arg1[0x95].d
        
        if (rdi_4 s> 0)
            int32_t rdi_5 = rdi_4 - 1
            
            if (rdi_4 - 1 s>= 0)
                int64_t rbp_4 = sx.q(rdi_5) << 3
                int32_t temp2_1
                
                do
                    int64_t rax_16 = sub_140d3c6e0(arg1[0x94] + rbp_4)
                    
                    if (rax_16 != 0)
                        sub_141f70fe0(rax_16, rbx, 0)
                    
                    rbp_4 -= 8
                    temp2_1 = rdi_5
                    rdi_5 -= 1
                while (temp2_1 - 1 s>= 0)
        
        return (*(*arg1 + 0x8f0))(arg1)

return result
