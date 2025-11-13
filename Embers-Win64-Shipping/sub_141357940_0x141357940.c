// 函数: sub_141357940
// 地址: 0x141357940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8

if ((*(*arg2 + 0x28) & 1) == 0 || *(data_143eba568 + 4) != 0)
    *(arg1 + 0x50) = 0
    *(arg1 + 0x58) = 0
    *(arg1 + 0x5c) = 0xa
else
    void* rbx_1 = nullptr
    TEB* gsbase
    int32_t* rax_6 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    void* var_58_1 = nullptr
    int32_t* var_1b0_1 = rax_6
    int32_t var_50_1 = 0
    int32_t var_4c_1 = 0xa
label_1413579e2:
    
    if (data_143e903d8 s> *rax_6)
        _Init_thread_header(&data_143e903d8)
        
        if (data_143e903d8 == 0xffffffff)
            sub_140b58260(&data_143e903d0, u"FPostProcessMaterialNode", 1)
            _Init_thread_footer(&data_143e903d8)
    
    void* r8 = arg2[0x2a2]
    
    while (true)
        void* rcx_1
        
        if (rbx_1 != 0)
            rcx_1 = zx.q(*(rbx_1 + 0x10)) + 0x14 + rbx_1 + zx.q(*(rbx_1 + 0xc))
        else
            rcx_1 = r8
        
        rbx_1 = nullptr
        
        if (rcx_1 != sx.q(arg2[0x2a3].d) + r8)
            rbx_1 = rcx_1
        
        void var_148
        
        if (rbx_1 == 0)
        label_141357aac:
            void* rcx_7
            
            if (var_50_1 != 0)
                void* rcx_8 = &var_148
                
                if (var_58_1 != 0)
                    rcx_8 = var_58_1
                
                char var_1b8
                sub_141338bb0(rcx_8, var_50_1, var_1b8)
                int32_t rax_13 = var_50_1
                void* var_158_1 = nullptr
                int32_t var_150_1 = 0
                int32_t var_14c_1 = 0xa
                void var_1a8
                
                if (rax_13 s> 0xa)
                    sub_1413675a0(&var_1a8, rax_13)
                    rax_13 = var_50_1
                
                void* rdi_3 = var_58_1
                void* rbx_2 = &var_148
                
                if (rdi_3 != 0)
                    rbx_2 = rdi_3
                
                void* r14_1 = rbx_2 + sx.q(rax_13) * 0x18
                
                if (rbx_2 != r14_1)
                    do
                        int64_t rdi_4 = sx.q(var_150_1)
                        int64_t rsi_2 = *rbx_2
                        int32_t rax_15 = (rdi_4 + 1).d
                        var_150_1 = rax_15
                        
                        if (rax_15 s> var_14c_1)
                            sub_14119ab90(&var_1a8, rdi_4.d)
                        
                        void* rcx_12 = &var_1a8
                        
                        if (var_158_1 != 0)
                            rcx_12 = var_158_1
                        
                        rbx_2 += 0x18
                        *(rcx_12 + (rdi_4 << 3)) = rsi_2
                    while (rbx_2 != r14_1)
                    
                    rdi_3 = var_58_1
                
                *(arg1 + 0x50) = 0
                
                if (var_158_1 == 0)
                    memmove(arg1, &var_1a8, 0x50)
                
                int64_t rcx_14 = *(arg1 + 0x50)
                
                if (rcx_14 != 0)
                    sub_140a74f90(rcx_14)
                    rdi_3 = var_58_1
                
                *(arg1 + 0x50) = var_158_1
                *(arg1 + 0x58) = var_150_1
                *(arg1 + 0x5c) = var_14c_1
                int32_t var_14c_2 = 0xa
                int64_t var_158_2 = 0
                int32_t var_150_2 = 0
                
                if (rdi_3 == 0)
                    break
                
                rcx_7 = rdi_3
            else
                rcx_7 = var_58_1
                *(arg1 + 0x50) = 0
                *(arg1 + 0x58) = 0
                *(arg1 + 0x5c) = 0xa
                
                if (rcx_7 == 0)
                    break
            
            sub_140a74f90(rcx_7)
            break
        
        if (*(rbx_1 + 4) == data_143e903d0)
            uint64_t rax_9 = zx.q(*(rbx_1 + 0x10))
            void* rdi_2 = rbx_1 + 0x14 + rax_9
            
            if (rbx_1 + 0x14 == neg.q(rax_9))
                goto label_141357aac
            
            rax_6 = var_1b0_1
            
            if (*(rdi_2 + 0xc) != arg3)
                goto label_1413579e2
            
            if (rdi_2 == 0)
                goto label_141357aac
            
            int64_t rsi_1 = sx.q(var_50_1)
            int32_t rax_10 = (rsi_1 + 1).d
            var_50_1 = rax_10
            
            if (rax_10 s> var_4c_1)
                sub_141367470(&var_148, rsi_1.d)
            
            int64_t rcx_6 = rsi_1 * 3
            void* rdx_2 = &var_148
            
            if (var_58_1 != 0)
                rdx_2 = var_58_1
            
            rax_6 = var_1b0_1
            *(rdx_2 + (rcx_6 << 3)) = *rdi_2
            *(rdx_2 + (rcx_6 << 3) + 0x10) = *(rdi_2 + 0x10)
            goto label_1413579e2

__security_check_cookie(rax_1 ^ &var_1d8)
return arg1
