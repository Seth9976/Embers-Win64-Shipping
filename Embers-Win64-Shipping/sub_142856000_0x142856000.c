// 函数: sub_142856000
// 地址: 0x142856000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int64_t r10 = 0
int32_t r11 = 2
void* rcx = *(arg1 + 0x488)

if ((arg2 & 0x180) != 0)
    r11.b = arg1[0xe] != 0

int16_t* rbx = *(rcx + 0x1e8)
int64_t rcx_1 = *(rcx + 0x1f0)

if (rcx_1 != 0)
    do
        if (arg3 == zx.d(*rbx))
            int32_t rax_2
            
            if (r11 != 2)
                rax_2 = *(rbx + 4)
            
            if (r11 == 2 || r11 == rax_2 || rax_2 == 2)
                if (sub_142875330(arg1, *(rbx + 8), arg2) != 0)
                    if ((arg2 & 0x700) != 0 && (rbx[6].b & 2) == 0)
                        sub_142856580(arg1, 0x6e, 0x22b, 0x6e, "ssl\statem\extensions_cust.c", 0x8f)
                        return 0
                    
                    if (arg2.b s< 0)
                        *(rbx + 0xc) |= 1
                    
                    int64_t r10_1 = *(rbx + 0x28)
                    
                    if (r10_1 != 0)
                        int32_t var_40
                        var_40.q = arg6
                        int32_t arg_10
                        
                        if (r10_1(arg1, zx.q(arg3), zx.q(arg2), arg4, arg5, var_40, arg7, &arg_10, 
                                *(rbx + 0x30)) s<= 0)
                            sub_142856580(arg1, arg_10, 0x22b, 0x6e, 
                                "ssl\statem\extensions_cust.c", 0xa2)
                            return 0
                
                break
        
        r10 += 1
        rbx = &rbx[0x1c]
    while (r10 u< rcx_1)

return 1
