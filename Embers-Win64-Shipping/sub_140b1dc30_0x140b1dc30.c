// 函数: sub_140b1dc30
// 地址: 0x140b1dc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1

if (sub_140b29ac0(&arg_8, arg2) != 0)
    int16_t* rcx_1 = arg_8
    
    if ((0xfffd & (*rcx_1 - 0x2b)) == 0)
        arg_8 = &rcx_1[1]
    
    if (sub_140b29ac0(&arg_8, arg2) != 0)
        void* rbx = arg_8
        
        if (rbx u< arg2)
            do
                if (iswdigit(*rbx) == 0)
                    break
                
                rbx += 2
            while (rbx u< arg2)
            
            arg_8 = rbx
        
        if (0x2e == *rbx)
            rbx += 2
            arg_8 = rbx
        
        if (rbx u< arg2)
            do
                if (iswdigit(*rbx) == 0)
                    break
                
                rbx += 2
            while (rbx u< arg2)
            
            arg_8 = rbx
        
        if ((0xffdf & (*rbx - 0x45)) == 0)
            int16_t rax_5 = *(rbx + 2)
            rbx += 2
            arg_8 = rbx
            
            if ((0xfffd & (rax_5 - 0x2b)) == 0)
                rbx += 2
                arg_8 = rbx
        
        if (rbx u< arg2)
            do
                if (iswdigit(*rbx) == 0)
                    break
                
                rbx += 2
            while (rbx u< arg2)
            
            arg_8 = rbx
        
        if ((0xffdf & (*rbx - 0x46)) == 0)
            arg_8 = rbx + 2
        
        return sub_140b29ac0(&arg_8, arg2) == 0

return 0
