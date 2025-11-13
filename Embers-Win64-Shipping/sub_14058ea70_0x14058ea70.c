// 函数: sub_14058ea70
// 地址: 0x14058ea70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
struct std::exception::VTable** var_98 = arg1
void var_90
int64_t* rax_2 = sub_140592d30(&var_90, arg3)
int64_t* var_98_1 = rax_2
int72_t zmm0 = (*arg2).9
struct __std_exception_data from
from._What = zmm0.q
from._DoFree = zmm0:8.b
int64_t rcx_1 = rax_2[2]

if (rcx_1 != 0)
    int64_t rdx_1 = rax_2[3]
    
    if (rdx_1 - rcx_1 u< 2)
        sub_14058c670(rax_2, 2, 0, &data_1437020a8, 2)
    else
        rax_2[2] = rcx_1 + 2
        int64_t* rax_6 = rax_2
        
        if (rdx_1 u>= 0x10)
            rax_6 = *rax_2
        
        *(rax_6 + rcx_1) = 0x203a
        *(rax_6 + rcx_1 + 2) = 0

int64_t* rcx_3 = from._DoFree.q
(*(*rcx_3 + 0x10))(rcx_3, &from, zx.q(from._What.d))
struct __std_exception_data* _What_1 = &from
int64_t var_50

if (var_50 u>= 0x10)
    _What_1 = from._What

int64_t var_58
sub_14058c1d0(rax_2, _What_1, var_58)

if (var_50 u>= 0x10)
    char const* _What = from._What
    char const* _What_2 = _What
    
    if (var_50 + 1 u>= 0x1000)
        _What = *(_What - 8)
        
        if (_What_2 - _What - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(_What)

int128_t var_48 = *rax_2
int128_t zmm1 = *(rax_2 + 0x10)
rax_2[2] = 0
rax_2[3] = 0xf
*rax_2 = 0
int128_t* rax_10 = &var_48

if (zmm1:8.q u>= 0x10)
    rax_10 = var_48.q

*arg1 = &std::exception::`vftable'
*(arg1 + 8) = zx.o(0)
from._What = rax_10
from._DoFree = 1
__std_exception_copy(&from, &arg1[1])
*arg1 = &std::runtime_error::`vftable'{for `std::exception'}
int64_t rdx_6 = zmm1:8.q

if (rdx_6 u>= 0x10)
    void* rcx_6 = var_48.q
    void* rax_11 = rcx_6
    
    if (rdx_6 + 1 u>= 0x1000)
        rcx_6 = *(rcx_6 - 8)
        
        if (rax_11 - rcx_6 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_6)

*arg1 = &std::_System_error::`vftable'{for `std::runtime_error'}
*(arg1 + 0x18) = *arg2
__security_check_cookie(rax_1 ^ &var_c8)
return arg1
