// 函数: sub_142823288
// 地址: 0x142823288
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_3 = j_sub_140a82f30(0x28)
int64_t* result_2 = result_3
int64_t* result_1

if (result_3 == 0)
    result_1 = nullptr
else
    result_1 = sub_142822b30(result_3)

result_2 = result_1
struct std::_Ref_count_base::std::_Ref_count<class YAML::detail::node>::VTable** rax_1 =
    j_sub_140a82f30(0x18)
struct std::_Ref_count_base::std::_Ref_count<class YAML::detail::node>::VTable** arg_10 = rax_1

if (rax_1 != 0)
    *rax_1 = zx.o(0)
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rax_1 = &std::_Ref_count<class YAML::detail::node>::`vftable'{for `std::_Ref_count_base'}
    rax_1[2] = result_1

int64_t* result = result_1
void** var_18
sub_142822980(arg1, &var_18, &result)

if (rax_1 != 0)
    rax_1[1].d -= 1
    
    if (rax_1[1].d == 1)
        (*rax_1)->__offset(0x0).q(rax_1)
        int32_t rax_5 = *(rax_1 + 0xc)
        *(rax_1 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*rax_1)->__offset(0x8).q(rax_1)

return result
