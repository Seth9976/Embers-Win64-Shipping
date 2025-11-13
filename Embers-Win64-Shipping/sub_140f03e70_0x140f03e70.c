// 函数: sub_140f03e70
// 地址: 0x140f03e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) != 0)
    int64_t* rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 != 0)
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 s> 0)
            void* rdx = nullptr
            
            if (rbx_1 == 0)
                goto label_140f03eb8
            
            if (rax_1 == 0)
                rbx_1 = nullptr
            else
                rax_1 += 1
                rbx_1[1].d = rax_1
            label_140f03eb8:
                
                if (rbx_1 != 0)
                    rdx = *(arg1 + 0x18)
                
                if (rbx_1 != 0)
                    rbx_1[1].d = rax_1 + 1
            
            int64_t result = sub_140ac6680(sub_140d44910(rdx + 0x2a8))
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    int64_t rdx_1 = *rbx_1
                    (*rdx_1)(rbx_1, rdx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
                
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            return result

TEB* gsbase

if (data_143e2a200 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2a200)
    
    if (data_143e2a200 == 0xffffffff)
        atexit(&data_142ccb670)
        _Init_thread_footer(&data_143e2a200)

return &data_143e2a1f0
