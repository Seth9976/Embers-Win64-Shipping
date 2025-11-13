// 函数: sub_14203cc80
// 地址: 0x14203cc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xa0) = arg2
int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

int64_t r8
r8.b = 1
int64_t* result = (*(*rcx + 0xb0))(rcx, u"r.FullScreenMode", r8)

if (result != 0)
    int16_t* var_18
    sub_140a2e390(&var_18, u"%d", zx.q(arg2))
    int16_t* const rdx = &data_142d40450
    int64_t r9_1 = *result
    int32_t var_10
    
    if (var_10 != 0)
        rdx = var_18
    
    result = (*(r9_1 + 0x80))(result, rdx, 0x2000000, r9_1)
    int16_t* rcx_3 = var_18
    
    if (rcx_3 != 0)
        return sub_140a74f90(rcx_3)

return result
