// 函数: sub_14074a310
// 地址: 0x14074a310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x554) != 0)
    void* rax_1 = arg1[0x15]
    
    if (rax_1 != 0)
    label_14074a33b:
        int64_t* rax_2 = sub_140865dd0(rax_1)
        
        if (rax_2 != 0)
            int64_t rdx_1 = rax_2[0x8c]
            
            if (rdx_1 != 0)
                sub_140756d20(&data_143cdfc18, rdx_1, arg1)
    else
        rax_1 = sub_141ee69e0(arg1)
        
        if (rax_1 != 0)
            goto label_14074a33b
    
    *(arg1 + 0x554) = 0

arg1[0xb6].d = 0xffffffff
sub_140752510(arg1)
return sub_141f08a30(arg1) __tailcall
