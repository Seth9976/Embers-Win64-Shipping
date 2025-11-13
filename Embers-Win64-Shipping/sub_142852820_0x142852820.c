// 函数: sub_142852820
// 地址: 0x142852820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = *(arg1 + 0x508)
int32_t rsi = 0
void* const r14

if (rax == 0)
    r14 = nullptr
else
    r14 = *(rax + 0xf8)

if (*(arg1 + 0x718) != 0 && r14 != 0 && *(arg1 + 0x5a8) == 0)
    int32_t* rcx = *(arg1 + 0x5a0)
    
    if (rcx != 0 && sub_142898c70(rcx) s> 1)
        if (arg1 == -0xd8)
        label_1428528cf:
            int64_t* rax_5 = sub_1428ad0e0()
            
            if (rax_5 != 0)
                void* rax_6 = sub_142898ea0(*(arg1 + 0x5a0), 1)
                sub_1428ad160(rax_5, r14)
                sub_1428ad1b0(rax_5, rax_6)
                sub_14280d070(rax_5, *(*(arg1 + 0x598) + 0x1a0))
                sub_1428ad200(rax_5, sx.q(sub_1428576b0(sub_142857980(arg1))) * 0x3e8)
                int32_t* rax_9 = sub_14284f800(arg1)
                
                if (sub_1428ad230(rax_9, rax_5) s>= 0)
                    int32_t rax_11 = (*(arg1 + 0x718))(rax_5, rax_9, *(arg1 + 0x720))
                    rsi = rax_11
                    
                    if (rax_11 s< 0)
                        rsi = 0
                    label_14285299b:
                        sub_142856580(arg1, 0x28, 0x190, 0xea, "ssl\ssl_lib.c", 0x1311)
                    else if (rax_11 == 0)
                        goto label_14285299b
                else
                    sub_142856580(arg1, 0x28, 0x190, 0xd0, "ssl\ssl_lib.c", 0x1308)
            else
                sub_142856580(arg1, (&rax_5[0xa]).d, 0x190, (rax_5 + 0x41).d, "ssl\ssl_lib.c", 
                    0x12eb)
            
            sub_1428ad090(rax_5)
            
            if (rsi s<= 0)
                *(arg1 + 0x5a8) = 0x47
            
            return zx.q(rsi)
        
        if (sub_142898c70(*(arg1 + 0xe0)) s<= 0)
            goto label_1428528cf
        
        char* rax_3 = *(arg1 + 0xf0)
        
        if (rax_3 == 0 || *rax_3 - 2 u> 1)
            goto label_1428528cf

return 1
