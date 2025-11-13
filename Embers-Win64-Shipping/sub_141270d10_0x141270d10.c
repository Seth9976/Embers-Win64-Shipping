// 函数: sub_141270d10
// 地址: 0x141270d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143e8eab0)

if (data_1439b6574 != 0)
    int32_t i = 0
    int32_t arg_8
    arg_8.q = 0xffffffff.q
    int32_t rcx_1 = data_143e8eb08 - 1
    
    if (rcx_1 s>= 0)
        while (i u>= *(data_143e8eb00 + (sx.q(rcx_1) << 2)))
            i += 1
            int32_t temp0_1 = rcx_1
            rcx_1 -= 1
            
            if (temp0_1 - 1 s< 0)
                break
    
    int32_t i_1 = data_143e8eaf8
    int32_t arg_c = rcx_1
    int64_t rbx_1 = i.q
    arg_c = 0xffffffff
    
    while (rbx_1.d != i_1 || (rbx_1 u>> 0x20).d != (i_1.q u>> 0x20).d)
        void var_38
        sub_14125fef0(sx.q(rbx_1.d) * 0x88 + data_143e8eaf0, &var_38)
        int32_t j = (rbx_1 + 1).d
        int32_t rcx_6 = rbx_1:4.d
        
        if (rcx_6 s>= 0)
            while (j u>= *(data_143e8eb00 + (sx.q(rcx_6) << 2)))
                j += 1
                int32_t temp1_1 = rcx_6
                rcx_6 -= 1
                
                if (temp1_1 - 1 s< 0)
                    break
        
        arg_c = rcx_6
        rbx_1 = j.q
    
    data_1439b6574 = 0

return LeaveCriticalSection(&data_143e8eab0) __tailcall
