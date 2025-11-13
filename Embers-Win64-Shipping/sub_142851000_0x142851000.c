// 函数: sub_142851000
// 地址: 0x142851000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rdi = 0
void** r14 = arg1

if (*arg1 == 0)
    void* rax_1 = sub_142898ba0()
    *r14 = rax_1
    
    if (rax_1 == 0)
        sub_1428a5670(0x14, 0x159, 0x41, "ssl\ssl_lib.c", 0x11e7)
        return 0xffffffff

void* i_2 = sub_142898c80(arg2)
void* i_1 = i_2

if (i_2 != 0)
    void* i
    
    do
        sub_1428ad650(i_1, arg3)
        
        if (sub_142898d50(*r14, i_1) s<= 0)
            if (i_1 != 0)
                sub_142898d50(arg2, i_1)
            
            return 0xffffffff
        
        rdi += 1
        i = sub_142898c80(arg2)
        i_1 = i
    while (i != 0)

return zx.q(rdi)
