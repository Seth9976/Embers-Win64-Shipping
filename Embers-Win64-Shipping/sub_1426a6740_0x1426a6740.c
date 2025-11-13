// 函数: sub_1426a6740
// 地址: 0x1426a6740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
sub_1423ba590(&arg1[5])
*arg1 = &data_1434641a8
arg1[5] = &data_143464408

if (((arg1[1].d u>> 4).b & 1) == 0)
    void* const rbx_1 = arg1[4]
    void* rax_2
    int64_t rax_3
    void* rdx
    
    if (rbx_1 != 0)
        rax_2 = sub_14272b250()
        rdx = *(rbx_1 + 0x10)
        rax_3 = sx.q(*(rax_2 + 0x38))
    
    if (rbx_1 == 0 || rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
        rbx_1 = nullptr
    
    arg1[6] = rbx_1

return arg1
