// 函数: sub_141fe8dd0
// 地址: 0x141fe8dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int32_t* result = __security_cookie ^ &var_e8
int32_t* result_1 = result

if (*(arg1 + 0xf4) == 0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    uint64_t rdx_1 = zx.q(data_14401b1a0)
    *(arg1 + 0xf4) = 1
    int32_t* rsi_2 = *(ThreadLocalStoragePointer + (rdx_1 << 3)) + 0x14
    
    if (data_143f3e9e0 s> *rsi_2)
        _Init_thread_header(&data_143f3e9e0)
        
        if (data_143f3e9e0 == 0xffffffff)
            int64_t* rcx_7 = data_143db18d0
            
            if (rcx_7 == 0)
                sub_140a53c40()
                rcx_7 = data_143db18d0
            
            int64_t r8_1
            r8_1.b = 1
            int64_t* rax_11 = (*(*rcx_7 + 0xb0))(rcx_7, u"r.DistanceFieldBuild.EightBit", r8_1)
            int64_t rax_12
            
            if (rax_11 == 0)
                rax_12 = 0
            else
                int64_t rdx_3 = *rax_11
                rax_12 = (*(rdx_3 + 0x58))(rax_11, rdx_3)
            
            data_143f3e9d8 = rax_12
            _Init_thread_footer(&data_143f3e9e0)
    
    int64_t rdi_1 = data_143f3e9d8
    int64_t rcx
    
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470
    
    int32_t rax_3 = 0x15
    
    if (*(rdi_1 + (rcx << 2)) != 0)
        rax_3 = 3
    
    *(arg1 + 0x10) = rax_3
    
    if (data_143f3e9f0 s> *rsi_2)
        _Init_thread_header(&data_143f3e9f0)
        
        if (data_143f3e9f0 == 0xffffffff)
            int64_t* rcx_9 = data_143db18d0
            
            if (rcx_9 == 0)
                sub_140a53c40()
                rcx_9 = data_143db18d0
            
            int64_t r8_2
            r8_2.b = 1
            int64_t* rax_14 = (*(*rcx_9 + 0xb0))(rcx_9, u"r.DistanceFields.AtlasSizeXY", r8_2)
            int64_t rax_15
            
            if (rax_14 == 0)
                rax_15 = 0
            else
                int64_t rdx_4 = *rax_14
                rax_15 = (*(rdx_4 + 0x58))(rax_14, rdx_4)
            
            data_143f3e9e8 = rax_15
            _Init_thread_footer(&data_143f3e9f0)
    
    int64_t rdi_2 = data_143f3e9e8
    int64_t rcx_1
    
    if (data_143de5480 == 0)
        rcx_1 = 0
    else
        rcx_1.b = GetCurrentThreadId() != data_143de5470
    
    int16_t rbp_1 = (*(rdi_2 + (rcx_1 << 2))).w
    
    if (data_143f3ea00 s> *rsi_2)
        _Init_thread_header(&data_143f3ea00)
        
        if (data_143f3ea00 == 0xffffffff)
            int64_t* rcx_11 = data_143db18d0
            
            if (rcx_11 == 0)
                sub_140a53c40()
                rcx_11 = data_143db18d0
            
            int64_t r8_3
            r8_3.b = 1
            int64_t* rax_17 = (*(*rcx_11 + 0xb0))(rcx_11, u"r.DistanceFields.AtlasSizeZ", r8_3)
            int64_t rax_9
            
            if (rax_17 == 0)
                rax_9 = 0
            else
                int64_t rdx_5 = *rax_17
                rax_9 = (*(rdx_5 + 0x58))(rax_17, rdx_5)
            
            data_143f3e9f8 = rax_9
            _Init_thread_footer(&data_143f3ea00)
    
    int64_t rdi_3 = data_143f3e9f8
    int64_t rcx_2
    
    if (data_143de5480 == 0)
        rcx_2 = 0
    else
        rcx_2.b = GetCurrentThreadId() != data_143de5470
    
    int16_t rax_8 = (*(rdi_3 + (rcx_2 << 2))).w
    int64_t var_c8 = 0
    int32_t var_c0_1 = 0
    int16_t var_bc_1 = 0
    int64_t var_40_1 = 0
    int32_t var_34_1 = 5
    int32_t var_38_1 = 1
    int64_t var_b8_1 = -1
    int32_t var_b0_1 = 0
    int16_t var_ac_1 = 0
    int16_t var_aa_1 = rbp_1
    int16_t var_a8_1 = rbp_1
    int16_t var_a6_1 = rax_8
    char var_a4_1 = 0
    result = sub_141fd8510(arg1 + 0x28, &var_c8)
    
    if (var_40_1 != 0)
        result = sub_140a74f90(var_40_1)
    
    *(arg1 + 0x100) = 0
    *(arg1 + 0x108) = 0

__security_check_cookie(result_1 ^ &var_e8)
return result
