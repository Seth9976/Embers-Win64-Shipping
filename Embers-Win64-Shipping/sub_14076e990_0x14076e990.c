// 函数: sub_14076e990
// 地址: 0x14076e990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x340))(arg1, 0)
sub_141ef4e60(arg1, 0)
sub_141ee8470(arg1)
int64_t* arg_8 = arg1
sub_1405a9f90(&arg1[0xab], &arg_8)
char rax_1 = *(arg1 + 0x554)

if (rax_1 == 1)
    goto label_14076e9e2

char result

if (rax_1 != 3)
    result = (*(arg1 + 0x54c)).b
    
    if ((result & 1) != 0)
        result = (*(*arg1 + 0x3a0))(arg1, 0)
    else if ((result & 4) != 0 && arg1[0xb6].d == 0xffffffff)
        result = sub_14074c820(arg1, 1)
else
    *(arg1 + 0x554) = 2
label_14076e9e2:
    void* rax_2 = arg1[0x15]
    
    if (rax_2 == 0)
        rax_2 = sub_141ee69e0(arg1)
    
    result = sub_140771920(sub_140865dd0(rax_2)[0x8c], arg1)

if ((*(arg1 + 0x57c) & 0x10) != 0 || arg1[0xb6].d == 0xffffffff)
    return result

sub_1405f7040(arg1[0x81])
return sub_1407796f0(arg1) __tailcall
