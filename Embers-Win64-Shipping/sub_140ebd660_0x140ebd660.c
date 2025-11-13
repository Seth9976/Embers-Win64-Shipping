// 函数: sub_140ebd660
// 地址: 0x140ebd660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* r14_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e2a080 s> *r14_1)
    _Init_thread_header(&data_143e2a080)
    
    if (data_143e2a080 == 0xffffffff)
        void*** rax_6 = j_sub_140a82f30(0x230)
        void*** rsi_1
        
        if (rax_6 == 0)
            rsi_1 = nullptr
        else
            rsi_1 = sub_140e95f60(rax_6)
        
        void*** rax_8 = j_sub_140a82f30(0x18)
        void*** rbx_1 = rax_8
        
        if (rax_8 == 0)
            rbx_1 = nullptr
        else
            rax_8[1].d = 1
            *(rax_8 + 0xc) = 1
            *rbx_1 = &data_142e1b260
            rbx_1[2] = rsi_1
        
        data_143e2a070 = rsi_1
        void**** rdi_1 = &rsi_1[1]
        data_143e2a078 = rbx_1
        
        if (rsi_1 == 0)
            rdi_1 = nullptr
        
        if (rdi_1 != 0)
            void* rax_9
            
            if (*rdi_1 != 0)
                rax_9 = rdi_1[1]
            
            if (*rdi_1 == 0 || rax_9 == 0 || *(rax_9 + 8) s<= 0)
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                *rdi_1 = rsi_1
                int64_t* rcx_2 = rdi_1[1]
                
                if (rbx_1 != rcx_2)
                    if (rbx_1 != 0)
                        *(rbx_1 + 0xc) += 1
                        rcx_2 = rdi_1[1]
                    
                    if (rcx_2 != 0)
                        int32_t temp2_1 = *(rcx_2 + 0xc)
                        *(rcx_2 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rcx_2 + 8))(rcx_2, 1)
                    
                    rdi_1[1] = rbx_1
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp1_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*rbx_1)[1](rbx_1, 1)
        
        atexit(sub_142ccb500)
        _Init_thread_footer(&data_143e2a080)

if (data_143e2a090 s> *r14_1)
    _Init_thread_header(&data_143e2a090)
    
    if (data_143e2a090 == 0xffffffff)
        int64_t* rax_4 = j_sub_140a82f30(0x10)
        
        if (rax_4 == 0)
            rax_4 = nullptr
        else
            *rax_4 = data_143e2a070
            rax_4[1] = data_143e2a078
            void* rcx_7 = data_143e2a078
            
            if (rcx_7 != 0)
                *(rcx_7 + 8) += 1
        
        data_143e2a088 = rax_4
        _Init_thread_footer(&data_143e2a090)

return &data_143e2a070
