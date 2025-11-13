// 函数: sub_14139f6c0
// 地址: 0x14139f6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rsi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
int64_t var_28
int32_t var_20
int32_t var_1c

if (data_143ec6f80 s> *rsi_1)
    _Init_thread_header(&data_143ec6f80)
    
    if (data_143ec6f80 == 0xffffffff)
        sub_14061cd70(&data_143ec6f70, 0x80)
        
        for (int32_t i = 0; i u< 0x80; i += 1)
            sub_140a2e390(&var_28, u"%s%d", u"TranslucentVolume")
            int64_t rdi_1 = sx.q(data_143ec6f78)
            int32_t rax_6 = (rdi_1 + 1).d
            bool cond:2_1 = rax_6 s<= data_143ec6f7c
            data_143ec6f78 = rax_6
            
            if (not(cond:2_1))
                sub_1405a4f90(&data_143ec6f70)
            
            int64_t* rcx_5 = (rdi_1 << 4) + data_143ec6f70
            *rcx_5 = 0
            *rcx_5 = var_28
            var_28 = 0
            rcx_5[1].d = var_20
            *(rcx_5 + 0xc) = var_1c
            int64_t rcx_6 = var_28
            var_20.q = 0
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
        
        atexit(sub_142cde720)
        _Init_thread_footer(&data_143ec6f80)

if (data_143ec6f98 s> *rsi_1)
    _Init_thread_header(&data_143ec6f98)
    
    if (data_143ec6f98 == 0xffffffff)
        sub_14061cd70(&data_143ec6f88, 0x80)
        
        for (int32_t i_1 = 0; i_1 u< 0x80; i_1 += 1)
            sub_140a2e390(&var_28, u"%s%d", u"TranslucentVolumeDir")
            int64_t rdi_2 = sx.q(data_143ec6f90)
            int32_t rax_10 = (rdi_2 + 1).d
            bool cond:3_1 = rax_10 s<= data_143ec6f94
            data_143ec6f90 = rax_10
            
            if (not(cond:3_1))
                sub_1405a4f90(&data_143ec6f88)
            
            int64_t* rcx_10 = (rdi_2 << 4) + data_143ec6f88
            *rcx_10 = 0
            *rcx_10 = var_28
            var_28 = 0
            rcx_10[1].d = var_20
            *(rcx_10 + 0xc) = var_1c
            int64_t rcx_11 = var_28
            var_20.q = 0
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
        
        atexit(sub_142cde780)
        _Init_thread_footer(&data_143ec6f98)

int64_t rcx_1 = sx.q(arg1) * 2
int64_t rax_3 = data_143ec6f88

if (arg2 == 0)
    rax_3 = data_143ec6f70

if (*(rax_3 + (rcx_1 << 3) + 8) == 0)
    return &data_142d40450

return *(rax_3 + (rcx_1 << 3))
