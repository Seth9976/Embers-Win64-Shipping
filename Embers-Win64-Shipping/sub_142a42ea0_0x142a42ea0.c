// 函数: sub_142a42ea0
// 地址: 0x142a42ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_30

if ((arg2 & 0x3fffffff) == 0 && test_bit(arg4, 0x1d) && test_bit(arg4, 0xc) && test_bit(arg4, 0xd))
    if (arg1 == 0 && arg3 != 0 && modu.dp.q(0:arg3, data_143cc8280) != 0)
        goto label_142a42f9e
    
    if (data_144015398 != 0)
        int64_t var_28_1 = 0x10
        uint64_t var_38 = arg2
        int64_t result = arg1
        var_30 = 5
        int32_t rax_4 =
            data_144015398(GetCurrentProcess(), &result, &var_38, zx.q(arg4), 4, &var_30, 1)
        
        if (rax_4 == 0)
            return result
        
        sub_142a43740(
            "unable to allocate huge (1GiB) page, trying large (2MiB) pages instead (error 0x%lx)\n", 
            zx.q(rax_4))

int64_t lpAddress

if (arg1 != 0)
label_142a42fb0:
    
    if (arg3 != 0)
        uint64_t temp1_2 = modu.dp.q(0:arg3, data_143cc8280)
        
        if (temp1_2 == 0 && data_144015390 != temp1_2)
            int64_t var_10_1 = arg3
            int64_t var_20 = 0
            int64_t var_18_1 = 0
            int64_t* var_28_2 = &var_20
            var_30 = 1
            return data_144015390(GetCurrentProcess(), arg1, arg2, zx.q(arg4), 4, &var_30, 1)
    
    lpAddress = arg1
else
label_142a42f9e:
    int64_t lpAddress_1 = sub_142a42670(arg3, arg2)
    
    if (lpAddress_1 == 0)
        goto label_142a42fb0
    
    lpAddress = lpAddress_1

return VirtualAlloc(lpAddress, arg2, arg4, PAGE_READWRITE)
