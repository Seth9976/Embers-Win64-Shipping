// 函数: sub_141d5a360
// 地址: 0x141d5a360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141d54070(arg1)
void* r14 = *(arg1 + 0xc8)

if (arg2[1].d s> 1)
    int64_t arg_8 = 0
    void* rax_2 = sub_140cde0b0()
    
    if ((1 & sub_140b5b8a0(0, 0)) != 0)
        sub_140d19010(rax_2, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    void* rax_5 = sub_140d2dfc0(sub_141d5fa10(), rax_2, 0, 0x48, 0, 0, 0, 0, 0)
    sub_140597df0(rax_5 + 0x88, arg2)
    int64_t rdx_2 = *rax_5
    
    if ((*(rdx_2 + 0x268))(rax_5, rdx_2) != 0 && sub_141d534c0(r14, rax_5) != 0)
        return sub_141d59710(arg1) __tailcall

return 0
