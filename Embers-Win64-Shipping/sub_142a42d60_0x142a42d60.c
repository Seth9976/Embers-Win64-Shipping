// 函数: sub_142a42d60
// 地址: 0x142a42d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg5 == 0)
    if (data_144015388 == 0)
        goto label_142a42e4e
    
    if (sub_142a43d70(5) == 0)
        goto label_142a42e4e
    
    int64_t rcx = data_144015388
    uint64_t temp1_1 = modu.dp.q(0:arg2, rcx)
    
    if (temp1_1 != 0 || modu.dp.q(temp1_1:arg3, rcx) != 0 || arg6 == 0 || not(test_bit(arg4, 0xc))
            || not(test_bit(arg4, 0xd)))
        goto label_142a42e4e
    
    goto label_142a42de8

if (arg6 == 0 || not(test_bit(arg4, 0xc)) || not(test_bit(arg4, 0xd)))
    goto label_142a42e4e

label_142a42de8:
int64_t rax_6 = data_1440153c0

if (arg5 == 0 && rax_6 != 0)
    if (rax_6 == data_1440153c0)
        data_1440153c0 = rax_6 - 1
    else
        data_1440153c0
    
    goto label_142a42e4e

*arg7 = 1
int64_t rax_8 = sub_142a42ea0(arg1, arg2, arg3, arg4 | MEM_LARGE_PAGES)
int64_t rbx_1 = rax_8

if (arg5 != 0)
    return rax_8

if (rax_8 == 0)
    data_1440153c0
    data_1440153c0 = 0xa
label_142a42e4e:
    *arg7 = (arg4 u>> 0x1d).b & 1
    int64_t rax_12 = sub_142a42ea0(arg1, arg2, arg3, arg4)
    rbx_1 = rax_12
    
    if (rax_12 == 0)
        sub_142a43740("unable to alloc mem error: err: %i size: 0x%x \n", zx.q(GetLastError()))

return rbx_1
