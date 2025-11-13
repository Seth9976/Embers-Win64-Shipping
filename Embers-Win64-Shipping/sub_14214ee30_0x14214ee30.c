// 函数: sub_14214ee30
// 地址: 0x14214ee30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x290))()
int64_t rcx = arg1[0xbc]
int32_t rax_1 = 0x135

if (rcx s> 0)
    rax_1 = 1

uint32_t result = arg2 + arg3
int32_t r8_2 = arg1[0xbd].d - rax_1 - rcx.d

if (result s> r8_2)
    result = (*(*arg1 + 0x2a8))(arg1, 0, r8_2)
    rcx = arg1[0xbc]

if (rcx == 0)
    result = *(arg1 + 0xa4) u>> 1
    
    if ((1 & result.b) == 0)
        sub_142158bf0(arg1, &arg1[0xa8], arg4)
        bool rbx_1 = arg1[0x345].b
        int64_t rbp
        rbp.b = rbx_1 == 0
        sub_140b560b0(&arg1[0xa8], rbp.b)
        
        if (rbx_1 == 0)
            arg1[0x47] = arg1[0xbc]
            char rax_5 = *(arg1 + 0x569) & 1
            int32_t arg_18 = 0
            arg1[0x46].b = rax_5
            (*(arg1[0xa8] + 0x158))(&arg1[0xa8], &arg_18, 0xa)
            int64_t* rcx_5 = arg1[0xb]
            
            if ((*(*rcx_5 + 0x368))(rcx_5) == 0)
                rbx_1 = *data_143f4cc40 s> 0
            else
                rbx_1 = arg1[0x261].b
            
            sub_140b560b0(&arg1[0xa8], rbx_1)
            
            if (rbx_1 != 0)
                int64_t* rcx_7 = arg1[0xb]
                
                if ((*(*rcx_7 + 0x368))(rcx_7) != 0)
                    int64_t* rcx_8 = arg1[0xa9]
                    char arg_10 = 0
                    char* rdx_4 = *rcx_8
                    
                    if (&rdx_4[1] u> rcx_8[1])
                        (*(arg1[0xa8] + 0x150))(&arg1[0xa8], &arg_10, 1)
                    else
                        arg_10 = *rdx_4
                        *rcx_8 += 1
        
        arg1[0x24].d += 0xe
        arg1[0x25].d += arg1[0xbc].d - 0xe
        int64_t rax_17 = *arg1
        *(arg1 + 0x229) = rbp.b
        arg1[0x4e].b = 0
        return (*(rax_17 + 0x290))(arg1)

return result
