// 函数: sub_1423bcde0
// 地址: 0x1423bcde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t r15 = arg2
int64_t result

if (arg1[0x1a] == 0)
    result = 0
else
    TEB* gsbase
    
    if (data_143f5a768
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f5a768)
        
        if (data_143f5a768 == 0xffffffff)
            int64_t* rcx_9 = data_143db18d0
            
            if (rcx_9 == 0)
                sub_140a53c40()
                rcx_9 = data_143db18d0
            
            int64_t r8_3
            r8_3.b = 1
            int64_t* rax_16 = (*(*rcx_9 + 0xb0))(rcx_9, u"r.VirtualTextureReducedMemory", r8_3)
            int64_t rax_18
            
            if (rax_16 == 0)
                rax_18 = 0
            else
                rax_18 = (*(*rax_16 + 0x58))(rax_16)
            
            data_143f5a760 = rax_18
            _Init_thread_footer(&data_143f5a768)
    
    uint32_t rax_4 = zx.d(arg1[0xc].b)
    int32_t* rax_6 = arg1[0x1a]
    void* const rcx_3
    int32_t rdx
    int32_t rbp_1
    int32_t r14_1
    
    if (rax_6 == 0)
        rbp_1 = 0
        r14_1 = 0
        rdx = 0
        rcx_3 = nullptr
    else
        rbp_1 = *rax_6
        r14_1 = rax_6[1]
        char rax_8 = (*(*arg1 + 0x318))(arg1)
        rcx_3 = arg1[0x1a]
        
        if (rax_8 == 0)
            rdx = *(rcx_3 + 0x20)
        else
            rdx = *(*(rcx_3 + 0x28) + 4)
    
    int32_t rdx_1 = rdx - r15
    
    if (rdx_1 s<= 0)
        rdx_1 = 0
    
    uint32_t rsi_1
    
    if (rcx_3 == 0)
        rsi_1 = 0
    else
        void* rax_10 = *(rcx_3 + 0x28)
        
        if (rax_10 == 0)
            rsi_1 = *(rcx_3 + 0xc)
        else
            rsi_1 = zx.d(*(rax_10 + 0x20))
    
    uint32_t var_88
    sub_141998310(&var_88, rbp_1, r14_1, rsi_1, rdx_1.b)
    int64_t* rcx_6 = data_143f0f180
    int32_t rax_13 = (1 << (data_1439c7a34).b) - 1
    int32_t var_40_1 = *(arg1[0x1a] + 0x10)
    int128_t var_78 = zx.o(0)
    
    if (r15 s<= 1)
        r15 = 1
    
    int32_t var_68_1 = 1
    int128_t var_64_1 = data_143dbb1e0
    int32_t var_54_1 = rax_13
    char var_50_1 = 0
    int64_t var_48_1 = 0
    int32_t var_84
    void var_80
    result = (*(*rcx_6 + 0x1c8))(rcx_6, zx.q(var_88), zx.q(var_84), zx.q(rsi_1.b), r15, 1, 
        ((((rax_4 & 2) | 0x404000) * 2) | (rax_4 & 1)) << 4, &var_78, &var_80)

__security_check_cookie(rax_1 ^ &var_d8)
return result
