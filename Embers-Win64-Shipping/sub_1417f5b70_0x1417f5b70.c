// 函数: sub_1417f5b70
// 地址: 0x1417f5b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ef9440 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ef9440)
    
    if (data_143ef9440 == 0xffffffff)
        data_143ef9438 = sub_1417f7460()
        _Init_thread_footer(&data_143ef9440)

int32_t rax_2 = -1
int32_t result

if (arg1[1].d == 0)
    void* rcx_8 = data_143f5b298
    
    if (rcx_8 != 0)
        int64_t* rcx_9 = *(rcx_8 + 0xb08)
        
        if (rcx_9 != 0)
            rax_2 = (*(*rcx_9 + 0x70))(rcx_9)
    
    int64_t var_18
    int64_t* rax_9 = sub_140bded20(data_143ef9438, &var_18, rax_2)
    int16_t* const rbx_1
    
    if (rax_9[1].d == 0)
        rbx_1 = &data_142d40450
    else
        rbx_1 = *rax_9
    
    result = sub_140b1f700(arg3, u"Tracking orgin is set to %s", rbx_1)
    int64_t rcx_12 = var_18
    
    if (rcx_12 != 0)
        return sub_140a74f90(rcx_12)
else
    int64_t* rax_3 = *arg1
    int16_t* const rbx = &data_142d40450
    int16_t* rcx
    
    if (rax_3[1].d == 0)
        rcx = &data_142d40450
    else
        rcx = *rax_3
    
    char rax_4 = sub_1417f20a0(rcx)
    int64_t* rcx_1 = *arg1
    
    if (rax_4 == 0)
        int16_t* rdx_2
        
        if (rcx_1[1].d == 0)
            rdx_2 = &data_142d40450
        else
            rdx_2 = *rcx_1
        
        void arg_8
        int64_t* rax_5 = sub_140b58260(&arg_8, rdx_2, 1)
        result = sub_140bddcb0(data_143ef9438, *rax_5, 0)
    else if (rcx_1[1].d == 0)
        result = _wtoi(&data_142d40450)
    else
        result = _wtoi(*rcx_1)
    
    int32_t result_1 = result
    
    if (result u> 1)
        int16_t** rax_6 = *arg1
        
        if (rax_6[1].d != 0)
            rbx = *rax_6
        
        result = sub_140b1f850(arg3, 2, u"Invalid tracking orgin, %s", rbx)
    
    void* rcx_6 = data_143f5b298
    
    if (rcx_6 != 0)
        int64_t* rcx_7 = *(rcx_6 + 0xb08)
        
        if (rcx_7 != 0)
            return (*(*rcx_7 + 0x68))(rcx_7, zx.q(result_1))

return result
