// 函数: sub_141f58d20
// 地址: 0x141f58d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0xb6]
int64_t rax_1

if (rax == 0)
    void* rax_2 = arg1[0x86]
    
    if (rax_2 != 0)
        rax_1 = *(rax_2 + 0x58)
        goto label_141f58d51
else
    rax_1 = *(rax + 0x40)
label_141f58d51:
    
    if (rax_1 != 0)
        char r9 = 0
        int32_t i = 0
        
        if (arg1[0xaf].d s> 0)
            int64_t r8_1 = 0
            
            do
                int64_t rcx = arg1[0xae]
                r8_1 += 0x28
                bool cond:0_1 = *(rcx + r8_1 - 8) != 0
                *(rcx + r8_1 - 8) = 0
                rax_1.b = cond:0_1
                i += 1
                r9 |= rax_1.b
            while (i s< arg1[0xaf].d)
            
            if (r9 != 0)
                *(arg1 + 0x5a9) |= 2
                sub_141ee8470(arg1)
                int64_t* rcx_2 = arg1[0xb6]
                
                if (rcx_2 != 0)
                    (*(*rcx_2 + 0x58))(rcx_2, arg1)
*(arg1 + 0x5a6) &= 0xfd
arg1[0xb7] = 0
int64_t arg_8 = 0
return 0
