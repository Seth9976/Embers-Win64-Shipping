// 函数: sub_140f03b40
// 地址: 0x140f03b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x50) != 0)
    int64_t* rbx_1 = *(arg1 - 0x48)
    
    if (rbx_1 != 0)
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 s> 0)
            void* r8 = nullptr
            
            if (rbx_1 == 0)
                goto label_140f03b8e
            
            if (rax_1 == 0)
                rbx_1 = nullptr
            else
                rax_1 += 1
                rbx_1[1].d = rax_1
            label_140f03b8e:
                
                if (rbx_1 != 0)
                    r8 = *(arg1 - 0x50)
                
                if (rbx_1 != 0)
                    rbx_1[1].d = rax_1 + 1
            
            void var_28
            sub_140f76a80(*(r8 + 0x2c0), &var_28)
            int64_t result = sub_140ac6680(&var_28)
            int64_t* var_20
            
            if (var_20 != 0)
                var_20[1].d -= 1
                
                if (var_20[1].d == 1)
                    int64_t rdx_3 = *var_20
                    (*rdx_3)(var_20, rdx_3)
                    int32_t rsi_1 = *(var_20 + 0xc)
                    *(var_20 + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        (*(*var_20 + 8))(var_20, zx.q(rsi_1))
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
                
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp4_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            return result

TEB* gsbase

if (data_143e2a1d0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2a1d0)
    
    if (data_143e2a1d0 == 0xffffffff)
        atexit(&data_142ccb630)
        _Init_thread_footer(&data_143e2a1d0)

return &data_143e2a1c0
