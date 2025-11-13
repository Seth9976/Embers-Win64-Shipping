// 函数: sub_1419ca540
// 地址: 0x1419ca540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d s<= 0)
    return 

int64_t* rax_1 = *arg1
int64_t rbx_1 = 0
int16_t* rsi_1 = nullptr
int64_t rbp_1 = *rax_1
int32_t rdi_1 = rax_1[1].d
uint64_t var_18 = 0
int16_t* rbp_2

if (rdi_1 != 0)
    sub_1405a4c70(&var_18, rdi_1, 0)
    rsi_1 = var_18
    memcpy(rsi_1, rbp_1, rdi_1 * 2)
    rbp_2 = rsi_1
else
    rbp_2 = nullptr

int16_t* const r14_1 = &data_142d40450
int16_t* const rcx_2 = &data_142d40450

if (rdi_1 != 0)
    rcx_2 = rbp_2

if (sub_140a54510(rcx_2, u"Pause") != 0)
    int16_t* rcx_3 = &data_142d40450
    
    if (rdi_1 != 0)
        rcx_3 = rbp_2
    
    if (sub_140a54510(rcx_3, u"Background") != 0)
        int16_t* rcx_6 = &data_142d40450
        
        if (rdi_1 != 0)
            rcx_6 = rbp_2
        
        int32_t rax_8 = sub_140a54510(rcx_6, u"Fast")
        
        if (rax_8 != 0)
            if (rdi_1 != 0)
                r14_1 = rbp_2
            
            if (sub_140a54510(r14_1, u"Precompile").d == 0)
                void* rcx_9 = data_143f1da40
                
                if (rcx_9 != 0)
                    int64_t rdi_4 = data_143f20268
                    int64_t rdx_4
                    
                    if (data_143de5480 == 0)
                        rdx_4 = 0
                    else
                        uint32_t rax_9 = GetCurrentThreadId()
                        rcx_9 = data_143f1da40
                        rdx_4.b = rax_9 != data_143de5470
                    
                    *(rcx_9 + 0xd4) = *(rdi_4 + (rdx_4 << 2))
                    int64_t rdi_5 = data_143f202b0
                    
                    if (data_143de5480 != 0)
                        rbx_1.b = GetCurrentThreadId() != data_143de5470
                    
                    *(data_143f1da40 + 0xd8) = *(rdi_5 + (rbx_1 << 2))
                
                sub_1419d7250()
        else
            sub_1419d8200(rax_8 + 1)
            sub_1419d7250()
    else
        void* rcx_4 = data_143f1da40
        
        if (rcx_4 != 0)
            int64_t rdi_2 = data_143f20238
            int64_t rdx_3
            
            if (data_143de5480 == 0)
                rdx_3 = 0
            else
                uint32_t rax_4 = GetCurrentThreadId()
                rcx_4 = data_143f1da40
                rdx_3.b = rax_4 != data_143de5470
            
            *(rcx_4 + 0xd4) = *(rdi_2 + (rdx_3 << 2))
            int64_t rdi_3 = data_143f20280
            
            if (data_143de5480 != 0)
                rbx_1.b = GetCurrentThreadId() != data_143de5470
            
            *(data_143f1da40 + 0xd8) = *(rdi_3 + (rbx_1 << 2))
        
        sub_1419d7250()
else
    uint64_t rax = data_143f1da40
    
    if (rax != 0)
        *(rax + 0xe0) += 1
        rax = data_143f1da40
        
        if (*(rax + 0xe0) s> 0)
            *(rax + 0xdc) = 1

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)
