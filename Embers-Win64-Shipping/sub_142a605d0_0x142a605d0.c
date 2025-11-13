// 函数: sub_142a605d0
// 地址: 0x142a605d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 8)
int64_t i_1 = 0
int32_t arg_8 = 0xffffffff
*arg4 = 0xffffffff
int32_t rbp = 0

if (rbx != 0)
    if (rbx[0xe].d == 0)
        *arg4 = sub_142ac3d30(&rbx[5], rbx[9].d, &arg_8, arg2)
        rbp = 1
    
    if (*(arg1 + 0xb0) == 1)
        while (*arg4 == 0xffffffff)
            int64_t* rax_2 = rbx[2]
            
            if (rax_2 == 0)
                goto label_142a60670
            
            rbx = rax_2
            
            if (rax_2[0xe].d == 0)
                rbp += 1
                *arg4 = sub_142ac3d30(&rax_2[5], rax_2[9].d, &arg_8, arg2)
        
        goto label_142a60678
    
label_142a60670:
    
    if (*arg4 != 0xffffffff)
    label_142a60678:
        
        if (rbp s> 1)
            char* rsi_1 = *rbx
            char* rcx_2 = rsi_1
            void* rax_5 = j_sub_142a46ef0() - rsi_1
            uint32_t i
            uint32_t r8_2
            
            do
                r8_2 = zx.d(*rcx_2)
                i = zx.d(*(rcx_2 + rax_5))
                
                if (r8_2 != i)
                    break
                
                rcx_2 = &rcx_2[1]
            while (i != 0)
            
            if (r8_2 - i != 0)
                do
                    char rax_6 = rsi_1[i_1]
                    i_1 += 1
                    
                    if (rax_6 != *(i_1 + 0x143613e9b))
                        *arg5 = 0xffffff80
                        *arg3 = rbx
                        return &rbx[5]
                while (i_1 != 5)
            
            *arg5 = 0xffffff81
        
        *arg3 = rbx
        return &rbx[5]

*arg5 = 2
return nullptr
