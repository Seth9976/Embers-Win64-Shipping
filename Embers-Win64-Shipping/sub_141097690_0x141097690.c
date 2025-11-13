// 函数: sub_141097690
// 地址: 0x141097690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int32_t arg_8 = 0
arg_8.q = *(*arg1 + 0x28)
TEB* gsbase

if (data_143e2f170 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2f170)
    
    if (data_143e2f170 == 0xffffffff)
        int64_t* rcx_15 = data_143db18d0
        
        if (rcx_15 == 0)
            sub_140a53c40()
            rcx_15 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_18 = (*(*rcx_15 + 0xb0))(rcx_15, u"r.SupportAtmosphericFog", r8_1)
        int64_t rax_16
        
        if (rax_18 == 0)
            rax_16 = 0
        else
            int64_t rdx_12 = *rax_18
            rax_16 = (*(rdx_12 + 0x58))(rax_18, rdx_12)
        
        data_143e2f168 = rax_16
        _Init_thread_footer(&data_143e2f170)

if (data_1439c7a15 != 0 && test_bit(arg2, 0xd) && test_bit(arg2, 9))
    int64_t rdi_1 = data_143e2f168
    
    if (data_143de5480 != 0)
        rbx.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rdi_1 + (rbx << 2)) != 0)
        void* rsi_1 = *(*arg1 + 0x20)
        
        if (rsi_1 != 0)
            void* rsi_2 = *(rsi_1 + 0x1c28)
            
            if (rsi_2 != 0)
                void* rax_6 = *(rsi_2 + 0x70)
                void* rax_7
                
                if (rax_6 != 0)
                    rax_7 = *(rax_6 + 0x18)
                
                void* arg_10
                int64_t* rdx_3
                int32_t rdi_2
                
                if (rax_6 == 0 || rax_7 == 0)
                    void* rcx = *(data_143f10e68 + 0x10)
                    arg_8.q = rcx
                    
                    if (rcx != 0)
                        *(rcx + 8) += 1
                    
                    rdx_3 = &arg_8
                    rdi_2 = 2
                else
                    arg_10 = rax_7
                    *(rax_7 + 8) += 1
                    rdx_3 = &arg_10
                    rdi_2 = 1
                
                sub_1405d1600(&arg1[0x2a5], rdx_3)
                
                if ((rdi_2.b & 2) != 0)
                    rdi_2 &= 0xfffffffd
                    sub_1405d1550(&arg_8)
                
                if ((rdi_2.b & 1) != 0)
                    rdi_2 &= 0xfffffffe
                    sub_1405d1550(&arg_10)
                
                void* rax_9 = *(rsi_2 + 0x78)
                void* rax_10
                
                if (rax_9 != 0)
                    rax_10 = *(rax_9 + 0x18)
                
                void* arg_18
                void* arg_20
                int64_t* rdx_4
                int32_t rbx_1
                
                if (rax_9 == 0 || rax_10 == 0)
                    void* rcx_4 = *(data_143f10e68 + 0x10)
                    arg_18 = rcx_4
                    
                    if (rcx_4 != 0)
                        *(rcx_4 + 8) += 1
                    
                    rdx_4 = &arg_18
                    rbx_1 = 8
                else
                    arg_20 = rax_10
                    *(rax_10 + 8) += 1
                    rdx_4 = &arg_20
                    rbx_1 = 4
                
                int32_t rbx_2 = rbx_1 | rdi_2
                sub_1405d1600(&arg1[0x2a6], rdx_4)
                
                if ((rbx_2.b & 8) != 0)
                    rbx_2 &= 0xfffffff7
                    sub_1405d1550(&arg_18)
                
                if ((rbx_2.b & 4) != 0)
                    rbx_2 &= 0xfffffffb
                    sub_1405d1550(&arg_20)
                
                void* rax_12 = *(rsi_2 + 0x80)
                void* rax_13
                
                if (rax_12 != 0)
                    rax_13 = *(rax_12 + 0x18)
                
                void* var_38
                void* var_30
                int64_t* rdx_5
                char rdi_3
                
                if (rax_12 == 0 || rax_13 == 0)
                    void* rcx_8 = *(data_143f111a8 + 0x10)
                    var_38 = rcx_8
                    
                    if (rcx_8 != 0)
                        *(rcx_8 + 8) += 1
                    
                    rdx_5 = &var_38
                    rdi_3 = 0x20
                else
                    var_30 = rax_13
                    *(rax_13 + 8) += 1
                    rdx_5 = &var_30
                    rdi_3 = 0x10
                
                char rdi_4 = rdi_3 | rbx_2.b
                int64_t* result = sub_1405d1600(&arg1[0x2a7], rdx_5)
                
                if ((rdi_4 & 0x20) != 0)
                    result = sub_1405d1550(&var_38)
                
                if ((rdi_4 & 0x10) == 0)
                    return result
                
                return sub_1405d1550(&var_30)

sub_1408c8cf0(&arg1[0x2a5], *(data_143f10e68 + 0x10))
sub_1408c8cf0(&arg1[0x2a6], *(data_143f10e68 + 0x10))
return sub_1408c8cf0(&arg1[0x2a7], *(data_143f111a8 + 0x10))
