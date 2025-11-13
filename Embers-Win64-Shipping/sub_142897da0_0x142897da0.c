// 函数: sub_142897da0
// 地址: 0x142897da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
CRITICAL_SECTION* rax = sub_1428a5be0()
data_143feb000 = rax

if (rax != 0)
    CRITICAL_SECTION* rax_1 = sub_1428a5be0()
    data_143feb008 = rax_1
    
    if (rax_1 != 0)
        CRITICAL_SECTION* rax_2
        void (* rcx_1)()
        rax_2, rcx_1 = sub_1428a5be0()
        data_143feb020 = rax_2
        
        if (rax_2 != 0)
            if (data_143feb028 == 0)
                rax_2 = sub_1406bcb90()
            
            data_143feb02c = 1
            return rax_2
        
        sub_1428a5ba0(data_143feb008)
        data_143feb008 = 0
    
    rax = sub_1428a5ba0(data_143feb000)
    data_143feb000 = 0

data_143feb02c = 0
return rax
