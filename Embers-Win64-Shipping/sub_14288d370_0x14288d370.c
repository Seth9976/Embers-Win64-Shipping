// 函数: sub_14288d370
// 地址: 0x14288d370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rcx = arg2[1]

if (rcx u>= 2)
    char* r8_1 = *arg2
    uint32_t r9_2 = zx.d(r8_1[1]) | zx.d(*r8_1) << 8
    *arg2 = &r8_1[2]
    arg2[1] = rcx - 2
    
    if (r9_2 == 2 && rcx - 2 u>= 2)
        uint32_t rbp_2 = zx.d(r8_1[3]) | zx.d(r8_1[2]) << 8
        *arg2 = &r8_1[4]
        arg2[1] = rcx - 4
        
        if (rcx != 4)
            char r8_3 = r8_1[4]
            *arg2 = &r8_1[5]
            arg2[1] = rcx - 5
            
            if (rcx == 5)
                if (r8_3 != 0)
                    sub_142856580(arg1, r9_2 + 0x2d, 0x1be, 0x160, "ssl\statem\extensions_clnt.c", 
                        0x6a1)
                    return 0
                
                int32_t* rax_9 = sub_14288f970(arg1)
                
                if (rax_9 == 0)
                    sub_142856580(arg1, (rax_9 + 0x32).d, 0x1be, 0x167, 
                        "ssl\statem\extensions_clnt.c", 0x6a9)
                    return 0
                
                int32_t rbx = 0
                
                if (sub_142898c70(rax_9) s> 0)
                    int32_t rax_13
                    
                    do
                        void* rax_12 = sub_142898ea0(rax_9, rbx)
                        
                        if (*(rax_12 + 8) == rbp_2)
                            *(arg1 + 0x748) = rax_12
                            return 1
                        
                        rbx += 1
                        rax_13 = sub_142898c70(rax_9)
                    while (rbx s< rax_13)
                
                sub_142856580(arg1, 0x32, 0x1be, 0x161, "ssl\statem\extensions_clnt.c", 0x6bb)
                return 0

sub_142856580(arg1, 0x32, 0x1be, 0x161, "ssl\statem\extensions_clnt.c", 0x69a)
return 0
