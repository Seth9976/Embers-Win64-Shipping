// 函数: sub_140cbc430
// 地址: 0x140cbc430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1b3f0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1b3f0)
    
    if (data_143e1b3f0 == 0xffffffff)
        void*** var_18 = nullptr
        void*** rax_4 = sub_140a84c80(0, 0x20, 0)
        var_18 = rax_4
        int32_t var_10_1 = 2
        
        if (rax_4 != 0)
            *rax_4 = &data_142d43dd8
            rax_4[1] = sub_140cb7dc0
            rax_4[3] = sub_140a387b0()
            *rax_4 = &data_142d43e30
        
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        data_143e1b3e8 =
            (*(*rcx_2 + 0x70))(rcx_2, gc.DumpPoolStats", Dumps count and size of GC Pools"
            , &var_18, 0)
        data_143e1b3e0 = &data_142d3ff10
        void*** rax_9
        
        if (var_10_1 == 0)
            rax_9 = var_18
        label_140cbc5b4:
            
            if (rax_9 != 0)
                sub_140a74f90(rax_9)
        else
            void*** rcx_3 = var_18
            
            if (rcx_3 != 0)
                (*rcx_3)[7](rcx_3, 0)
                rax_9 = var_18
                
                if (rax_9 != 0)
                    rax_9 = sub_140a84c80(rax_9, 0, 0)
                    var_18 = rax_9
                
                int32_t var_10_2 = 0
                goto label_140cbc5b4
        atexit(sub_142cc2160)
        _Init_thread_footer(&data_143e1b3f0)

int64_t rax_3 = data_143e1b3f8

if (rax_3 != 0)
    return rax_3

int64_t rax_2 = j_sub_140a82f30(zx.q((rax_3 + 0x18).d))

if (rax_2 == 0)
    data_143e1b3f8 = 0
    return 0

__builtin_memset(rax_2, 0, 0x18)
data_143e1b3f8 = rax_2
return rax_2
