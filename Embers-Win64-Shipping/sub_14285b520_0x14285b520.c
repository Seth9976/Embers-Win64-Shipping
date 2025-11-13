// 函数: sub_14285b520
// 地址: 0x14285b520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int128_t* rax = sub_142898900(*arg1)

if (rax != 0)
    if (sub_142898c70(rax) s> 0)
        int32_t i
        
        do
            if (*(sub_142898ea0(rax, 0) + 0x2c) != 0x304)
                break
            
            sub_142898840(rax, 0)
            i = sub_142898c70(rax)
        while (i s> 0)
    
    int32_t rdi_1 = 0
    
    if (sub_142898c70(arg3) s> 0)
        int32_t rax_5
        
        do
            sub_142898a60(rax, sub_142898ea0(arg3, rdi_1), rdi_1)
            rdi_1 += 1
            rax_5 = sub_142898c70(arg3)
        while (rdi_1 s< rax_5)
    
    int128_t* rax_6 = sub_142898900(rax)
    
    if (rax_6 != 0)
        sub_142898a10(*arg2)
        *arg2 = rax_6
        sub_142898e00(rax_6, sub_142851c00)
        sub_142898e50(*arg2)
        sub_142898a10(*arg1)
        *arg1 = rax
        return 1

return 0
