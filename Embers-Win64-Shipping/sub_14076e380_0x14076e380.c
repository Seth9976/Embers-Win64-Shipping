// 函数: sub_14076e380
// 地址: 0x14076e380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x554) != 0)
    void* rax_1 = arg1[0x15]
    
    if (rax_1 != 0)
    label_14076e3b2:
        int64_t* rax_2 = sub_140865dd0(rax_1)
        
        if (rax_2 != 0)
            int64_t rdx = rax_2[0x8c]
            
            if (rdx != 0)
                sub_140756d20(&data_143cdfc18, rdx, arg1)
    else
        rax_1 = sub_141ee69e0(arg1)
        
        if (rax_1 != 0)
            goto label_14076e3b2
    
    *(arg1 + 0x554) = 0

if (arg1[0xb6].d != 0xffffffff)
    void* rax_3 = arg1[0x15]
    
    if (rax_3 == 0)
        rax_3 = sub_141ee69e0(arg1)
    
    int64_t* rax_4 = sub_140865dd0(rax_3)
    
    if (rax_4 != 0)
        sub_14086a150(rax_4, arg1)

*(arg1 + 0x57c) &= 0xffffffef
arg1[0xb6].d = 0xffffffff
return sub_141f201b0(arg1, arg2) __tailcall
