// 函数: sub_142a85850
// 地址: 0x142a85850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18 = 0
struct std::_Ref_count_base::std::_Ref_count_obj<class std::mutex>::VTable** rax =
    j_sub_140a82f30(0x60)
struct std::_Ref_count_base::std::_Ref_count_obj<class std::mutex>::VTable** arg_8 = rax
struct std::_Ref_count_base::std::_Ref_count_obj<class std::mutex>::VTable** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 1
    *(rax + 0xc) = 1
    *rbx = &std::_Ref_count_obj<class std::mutex>::`vftable'{for `std::_Ref_count_base'}
    
    if (rbx != -0x10)
        _Mtx_init_in_situ(&rbx[2], 2)

*arg1 = 0
arg1[1] = 0
sub_142a85c50(arg1, &rbx[2], rbx)
return arg1
