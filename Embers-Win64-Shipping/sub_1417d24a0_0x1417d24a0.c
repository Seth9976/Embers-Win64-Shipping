// 函数: sub_1417d24a0
// 地址: 0x1417d24a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
void* rdx = *(arg1 + 0x248)
int32_t i = *(rdx + 0x20)

if (i != *(rdx + 0x4c))
    void* r8_1 = *(rdx + 0x58)
    void* r9_1 = rdx + 0x50
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    i = *(r9_1 + (((sx.q(*(rdx + 0x60)) - 1) & rbx) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(rdx + 0x18)
        
        do
            int64_t rdx_1 = sx.q(i) * 3
            
            if (*(r8_2 + (rdx_1 << 3)) == rbx.d)
                if (i == 0xffffffff)
                    break
                
                TEB* gsbase
                int32_t* rdi_2 =
                    *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
                
                if (data_143ef8878 s> *rdi_2)
                    _Init_thread_header(&data_143ef8878)
                    
                    if (data_143ef8878 == 0xffffffff)
                        atexit(sub_142ceb580)
                        _Init_thread_footer(&data_143ef8878)
                
                if (data_143ef8890 s> *rdi_2)
                    _Init_thread_header(&data_143ef8890)
                    
                    if (data_143ef8890 == 0xffffffff)
                        atexit(sub_142ceb540)
                        _Init_thread_footer(&data_143ef8890)
                
                if (data_143ef88a8 s> *rdi_2)
                    _Init_thread_header(&data_143ef88a8)
                    
                    if (data_143ef88a8 == 0xffffffff)
                        atexit(sub_142ceb500)
                        _Init_thread_footer(&data_143ef88a8)
                
                if (data_143ef88c0 s> *rdi_2)
                    _Init_thread_header(&data_143ef88c0)
                    
                    if (data_143ef88c0 == 0xffffffff)
                        atexit(sub_142ceb560)
                        _Init_thread_footer(&data_143ef88c0)
                
                if (data_143ef88d8 s> *rdi_2)
                    _Init_thread_header(&data_143ef88d8)
                    
                    if (data_143ef88d8 == 0xffffffff)
                        atexit(sub_142ceb520)
                        _Init_thread_footer(&data_143ef88d8)
                
                void* r8_3 = *(arg1 + 0x248)
                void* const rcx_6
                
                if (*(r8_3 + 0x20) == *(r8_3 + 0x4c))
                labelid_9:
                    rcx_6 = nullptr
                else
                    void* rax_10 = *(r8_3 + 0x58)
                    void* rdx_2 = r8_3 + 0x50
                    
                    if (rax_10 != 0)
                        rdx_2 = rax_10
                    
                    int32_t rax_11 = *(rdx_2 + (((sx.q(*(r8_3 + 0x60)) - 1) & rbx) << 2))
                    
                    if (rax_11 == 0xffffffff)
                    label_1417d25f0:
                        rcx_6 = nullptr
                    else
                        int64_t r9_2 = *(r8_3 + 0x18)
                        
                        while (true)
                            int64_t rdx_3 = sx.q(rax_11) * 3
                            rcx_6 = r9_2 + (rdx_3 << 3)
                            
                            if (*(r9_2 + (rdx_3 << 3)) == rbx.d)
                                break
                            
                            rax_11 = *(rcx_6 + 0x10)
                            
                            if (rax_11 == 0xffffffff)
                                goto label_1417d25f0_1
                        
                        if (rax_11 == 0xffffffff)
                        label_1417d25f0_1:
                            rcx_6 = nullptr
                
                void* rax_12 = *(arg1 + 0x240)
                int64_t rcx_7 = *(rcx_6 + 8)
                int128_t var_68 = zx.o(0)
                int64_t* r8_4 = rax_12 + 0x408
                int64_t var_58_1 = rcx_7
                
                if (rax_12 == 0)
                    r8_4 = nullptr
                
                int64_t var_18
                int64_t var_18_1 = var_18
                int64_t* var_50_1 = &data_143ef8868
                int64_t* var_48_1 = &data_143ef8880
                int64_t* var_40_1 = &data_143ef8898
                int64_t* var_38_1 = &data_143ef88b0
                int64_t* var_30_1 = &data_143ef88c8
                int32_t var_10
                int32_t var_10_1 = var_10
                int128_t var_28
                int128_t var_28_1 = var_28
                (*(*r8_4 + 0x18))(r8_4, &var_68)
                return sub_140bb5c10(*(arg1 + 0x248) + 0x18, rbx.d)
            
            i = *(r8_2 + (rdx_1 << 3) + 0x10)
        while (i != 0xffffffff)

return i
