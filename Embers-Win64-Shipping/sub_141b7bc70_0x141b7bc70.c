// 函数: sub_141b7bc70
// 地址: 0x141b7bc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14307a9f8
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
__builtin_memset(&arg1[1], 0, 0x20)
*(arg1 + 0x2a) = arg2
arg1[5].w = 0x101
*(arg1 + 0x2b) = arg3
*(arg1 + 0x2c) = 0

if (data_143cd80cc s> *(0x14 + *(ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    j_sub_140b3db50()
    void arg_8
    int64_t rbx_1 = *sub_140b58170(&arg_8, "SlateRHIRenderer", 1)
    j_sub_140b3db50()
    int64_t* rax_2 = j_sub_140b407e0(&data_143de7d78, rbx_1)
    int64_t r9_1 = *rax_2
    void var_28
    int64_t* rax_3 = (*(r9_1 + 0x48))(rax_2, &var_28, zx.q(*(arg1 + 0x2a)), r9_1)
    int64_t* rdx_2 = rax_3[1]
    int64_t rcx_4 = *rax_3
    int64_t var_38 = rcx_4
    int64_t* var_30 = rdx_2
    
    if (rdx_2 != 0)
        rdx_2[1].d += 1
        rdx_2 = var_30
    
    if (&arg1[3] != &var_38)
        arg1[3] = rcx_4
        var_38 = 0
        sub_1405aeff0(&arg1[4], &var_30)
        rdx_2 = var_30
    
    if (rdx_2 != 0)
        rdx_2[1].d -= 1
        
        if (rdx_2[1].d == 1)
            int64_t* rbx_2 = var_30
            (**rbx_2)(rbx_2, rdx_2)
            int32_t rax_6 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_6 == 1)
                int64_t* rcx_7 = var_30
                (*(*rcx_7 + 8))(rcx_7, 1)
    
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t rsi_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*var_20 + 8))(var_20, zx.q(rsi_1))

return arg1
