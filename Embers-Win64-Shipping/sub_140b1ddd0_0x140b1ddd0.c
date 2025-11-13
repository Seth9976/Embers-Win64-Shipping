// 函数: sub_140b1ddd0
// 地址: 0x140b1ddd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int64_t rbp
rbp.b = 0
int64_t rsi
rsi.b = 0

if (sub_140b29ac0(&arg_8, arg2) != 0)
    int16_t* rcx_1 = arg_8
    
    if ((0xfffd & (*rcx_1 - 0x2b)) == 0)
        arg_8 = &rcx_1[1]
    
    if (sub_140b29ac0(&arg_8, arg2) != 0)
        void* rbx_1 = arg_8
        
        if (0x30 != *rbx_1)
            *arg3 = 0xa
        label_140b1deb7:
            
            if (rbx_1 u< arg2)
                do
                    if (iswdigit(*rbx_1) == 0)
                        break
                    
                    rbx_1 += 2
                    rsi.b = 1
                while (rbx_1 u< arg2)
                
                arg_8 = rbx_1
        else
            int16_t rax_2 = *(rbx_1 + 2)
            rbx_1 += 2
            arg_8 = rbx_1
            rsi.b = 1
            int32_t rax_3
            
            if ((0xffdf & (rax_2 - 0x58)) == 0)
                rbx_1 += 2
                rbp.b = 1
                arg_8 = rbx_1
                rsi.b = 0
                rax_3 = 0x10
            else
                rax_3 = 8
            
            *arg3 = rax_3
            
            if (rbp.b == 0)
                goto label_140b1deb7
            
            while (rbx_1 u< arg2)
                if (iswxdigit(*rbx_1) == 0)
                    break
                
                rbx_1 += 2
                rsi.b = 1
                arg_8 = rbx_1
        
        if (sub_140b29ac0(&arg_8, arg2) == 0 && rsi.b != 0)
            return 1

return 0
