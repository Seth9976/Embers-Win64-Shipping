// 函数: sub_1405db9f0
// 地址: 0x1405db9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
uint64_t result

if (rcx != 0)
    uint64_t result_1
    (*(*(rcx + 8) + 0x1a0))(rcx + 8, &result_1)
    char rcx_2 = *arg2
    
    if (rcx_2 != 0)
        result = data_143dbb180
        int32_t rcx_3
        int32_t rdx_1
        
        if (rcx_2 != 3)
            rdx_1 = result:4.d
            rcx_3 = result.d
        label_1405dba79:
            result = result_1
            
            if (rcx_3 + *arg3 s<= result.d && rdx_1 + arg3[1] s<= (result u>> 0x20).d)
                goto label_1405dbaae
        else
            rcx_3 = *(arg2 + 4)
            
            if (rcx_3 s>= 0)
                rdx_1 = *(arg2 + 8)
                
                if (rdx_1 s>= 0)
                    goto label_1405dba79
    else
        result = result_1
        
        if (*arg3 == result.d && arg3[1] == (result u>> 0x20).d)
        label_1405dbaae:
            TEB* gsbase
            
            if (data_143cd7ea0 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143cd7ea0)
                
                if (data_143cd7ea0 == 0xffffffff)
                    int64_t* rcx_9 = data_143db18d0
                    
                    if (rcx_9 == 0)
                        sub_140a53c40()
                        rcx_9 = data_143db18d0
                    
                    int64_t r8
                    r8.b = 1
                    int64_t* rax_6 = (*(*rcx_9 + 0xb0))(rcx_9, r.DefaultBackBufferPixelFormat", r8)
                    
                    if (rax_6 != 0)
                        int64_t rdx_3 = *rax_6
                        rax_6 = (*(rdx_3 + 0x58))(rax_6, rdx_3)
                    
                    data_143cd7e98 = rax_6
                    _Init_thread_footer(&data_143cd7ea0)
            
            if (arg4 == sub_142295d40(sub_14229df30(*data_143cd7e98)).d)
                result.b = 1
                return result

result.b = 0
return result
