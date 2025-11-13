// 函数: sub_140bcc960
// 地址: 0x140bcc960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x1a) & 1) != 0)
    void*** rax = j_sub_140a82f30(0x18)
    
    if (rax == 0)
        return rax
    
    *rax = &data_142e86898
    rax[1] = *arg1
    rax[2].d = arg1[1].d
    return rax

int64_t* rax_1 = __crt_deferred_errno_cache::get(&data_143db7b00)
int64_t var_18
int64_t* rax_2 = sub_140bc8510(arg1, &var_18)
int16_t* const rdx_1

if (rax_2[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax_2

int64_t rax_4 = (*(*rax_1 + 0x118))(rax_1, rdx_1)
int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return rax_4
