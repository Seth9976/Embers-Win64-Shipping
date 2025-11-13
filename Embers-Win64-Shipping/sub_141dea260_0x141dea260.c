// 函数: sub_141dea260
// 地址: 0x141dea260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 0x81)
int64_t arg_8 = *(arg1 + 0x18)
sub_140b5c770(&arg_8, arg2)

for (void* i = *(arg1 + 0x20); i != 0; i = *(i + 0x20))
    void* rax_1 = sub_14245ce90()
    void* rdx_1 = *(i + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        break
    
    sub_140a20ba0(arg2, &data_142d404c4, 1)
    arg_8 = *(i + 0x18)
    sub_140b5c770(&arg_8, arg2)

return arg2
