// 函数: sub_140752390
// 地址: 0x140752390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141edf050(arg1)

if (arg2 == 0)
    if (arg1[0xb6].d != 0xffffffff)
        void* rax = arg1[0x15]
        
        if (rax == 0)
            rax = sub_141ee69e0(arg1)
        
        result = sub_140865dd0(rax)
        
        if (result != 0)
            result = sub_14086a150(result, arg1)
    
    *(arg1 + 0x57c) &= 0xffffffef
    arg1[0xb6].d = 0xffffffff
else
    *(arg1 + 0x57c) |= 0x10

sub_141ef4e60(arg1, 0)
void* rcx_4 = arg1[0xa5]

if (rcx_4 == 0)
    return result

return sub_14084d790(rcx_4, 1)
