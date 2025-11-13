// 函数: sub_14076eae0
// 地址: 0x14076eae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_141f20b40(arg1)
sub_141ef4e60(arg1, 0)

if (*(arg1 + 0x5b0) != 0xffffffff)
    void* rax = *(arg1 + 0xa8)
    
    if (rax == 0)
        rax = sub_141ee69e0(arg1)
    
    result = sub_140865dd0(rax)
    
    if (result != 0)
        result = sub_14086a150(result, arg1)

*(arg1 + 0x57c) &= 0xffffffef
void* rcx_4 = *(arg1 + 0x528)
*(arg1 + 0x5b0) = 0xffffffff

if (rcx_4 == 0)
    return result

sub_14084d790(rcx_4, 1)
return sub_14084d810(arg1 + 0x528) __tailcall
