// 函数: sub_140752510
// 地址: 0x140752510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ef4e60(arg1, 0)
void* rcx = arg1[0xa5]

if (rcx != 0)
    sub_14084d790(rcx, 1)

if (arg1[0xb6].d != 0xffffffff)
    void* rax_1 = arg1[0x15]
    
    if (rax_1 == 0)
        rax_1 = sub_141ee69e0(arg1)
    
    int64_t* rax_2 = sub_140865dd0(rax_1)
    
    if (rax_2 != 0)
        sub_14086a150(rax_2, arg1)

*(arg1 + 0x57c) &= 0xffffffef
arg1[0xb6].d = 0xffffffff
sub_14084d810(&arg1[0xa5])
return sub_141ee8490(arg1) __tailcall
