// 函数: sub_141b72c00
// 地址: 0x141b72c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const var_28

if (sub_141b46520(arg2) == 0)
    int64_t var_20_1 = arg3
    var_28 = &data_143084c10
    void** var_18_1 = arg4
    return sub_141b46700(arg1, arg2, &var_28)

if (sub_14082fb80(arg2) != 0)
    return sub_141b97980(arg1, sub_14082fb80(arg2), arg3)

void* result = sub_1405948b0(arg2)

if (result != 0)
    void* rax_3 = sub_141b46500(arg2)
    int128_t* rax_4 = sub_141b464f0(rax_3, &var_28)
    void* const rbx_1
    
    if (*(rax_4 + 8) != 0)
        rbx_1 = nullptr
    else
        rbx_1 = *rax_4
    
    *arg4 = rbx_1
    int32_t rax_6
    
    if (rbx_1 != 0 && ((zx.q(*(*(rbx_1 + 8) + 0x10)) u>> 0x15).b & 1) != 0)
        rax_6 = sub_1408e52c0(rax_3)
    
    int64_t* r10_1
    
    if (rbx_1 == 0 || ((zx.q(*(*(rbx_1 + 8) + 0x10)) u>> 0x15).b & 1) == 0 || rax_6 == 0xffffffff)
        result = sub_1405948b0(arg2)
        r10_1 = *arg4
    else
        result = sub_1405948b0(arg2)
        r10_1 = *(rbx_1 + 0x78)
    
    if (arg3 == result)
        result.b = 1
    else if (not(test_bit(zx.q(r10_1[8].d), 0x1e)))
        (*(*r10_1 + 0xb0))(r10_1, arg3, result, 1)
        result.b = 1
    else
        memcpy(arg3, result, *(r10_1 + 0x3c))
        result.b = 1

return result
