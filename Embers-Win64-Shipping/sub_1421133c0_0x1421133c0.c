// 函数: sub_1421133c0
// 地址: 0x1421133c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)

if (((arg1[1].d u>> 4).b & 1) == 0)
    void*** rax_2 = j_sub_140a82f30(0x198)
    void*** rbx_1 = rax_2
    
    if (rax_2 == 0)
        rbx_1 = nullptr
    else
        sub_142118c70(rax_2)
        rbx_1[0x32] = arg1
        *rbx_1 = &data_1432ce258
    
    arg1[0x47] = rbx_1

CoCreateGuid(arg1 + 0x224)
return sub_142117840(arg1) __tailcall
