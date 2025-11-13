// 函数: sub_141fb3570
// 地址: 0x141fb3570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((arg1[1].d u>> 4).b & 1) == 0)
    void* rcx
    
    if (arg1[0x13].d s> 0)
        rcx = *arg1[0x12]
    
    if (arg1[0x13].d s> 0 && rcx != 0)
        if (*(rcx + 0x134) == 1 && *(arg1 + 0xb0c) == 0)
            goto label_141fb35ad
        
        sub_141fca380(arg1)
    else if (*(arg1 + 0xb0c) != 0)
        sub_141fca380(arg1)
    else
    label_141fb35ad:
        void* rax_3 = arg1[0x11]
        
        if (rax_3 != 0 && *(rax_3 + 0x134) != 1)
            sub_141fca380(arg1)

sub_141faa960(arg1, 1)
sub_1405a46b0(&data_1439aa970, arg1)
return sub_142167a50(arg1) __tailcall
