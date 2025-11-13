// 函数: sub_14095a4f0
// 地址: 0x14095a4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x4c].b = 1
sub_141dd7200(arg1, 0)

if ((*(*arg1 + 0x150))(arg1) != 0)
    void* rax_2 = sub_141dcc7f0(arg1)
    
    if (sub_1423dce10(rax_2, &arg1[0x4f]) != 0)
        sub_1423e60e0(rax_2, arg1[0x4f])
    
    arg1[0x4f] = 0

sub_1405c2d80(data_143f5b298 + 0x9f0, arg1[0x48])

if (arg1[0x46] != 0)
    int64_t rax_5 = (*(*arg1 + 0x150))(arg1)
    sub_1423d84f0(data_143f5b298, rax_5, arg1[0x1d])
    arg1[0x46] = 0

return sub_141dbe590(arg1, 0, 1) __tailcall
