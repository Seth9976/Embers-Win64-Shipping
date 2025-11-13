// 函数: sub_1428d6160
// 地址: 0x1428d6160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rcx_2
int64_t count

if (arg2 == 0)
    if (arg4 != 0)
        goto label_1428d622a
    
    if (arg5 != arg2 || arg3 != 0)
        return 1
    
    if (arg1[0x11].d != 0xffffffff && sub_142892d80(*arg1, arg2, arg3, arg4, &data_143511e38) != 0)
        count = sx.q(sub_142890e90(*arg1))
        rcx_2 = &arg1[9]
    label_1428d61df:
        memset(rcx_2, 0, count)
        arg1[0x11].d = 0
        return 1
else if (arg4 == 0)
label_1428d6237:
    
    if (arg2 == 0)
        return 1
    
    if (sub_140687ad0(*arg1) != 0 && sub_142892370(*arg1, arg3.d) != 0
            && sub_142892d80(*arg1, nullptr, nullptr, arg2, &data_143511e38) != 0)
        int64_t count_1 = sx.q(sub_142890e90(*arg1))
        
        if (sub_142891550(*arg1, &arg1[9], &data_143511e38, zx.q(count_1.d)) != 0)
            sub_1428d6410(&arg1[1], &arg1[9], count_1.d)
            sub_1428d6410(&arg1[5], &arg1[1], count_1.d)
            sub_1428b8960(&arg1[9], count_1)
            
            if (sub_142892d80(*arg1, nullptr, nullptr, 0, &data_143511e38) != 0)
                count = count_1
                rcx_2 = &arg1[9]
                goto label_1428d61df
else
label_1428d622a:
    
    if (sub_142892d80(*arg1, arg4, arg5, 0, nullptr) != 0)
        goto label_1428d6237
return 0
