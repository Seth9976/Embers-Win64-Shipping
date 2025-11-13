// 函数: sub_14231a120
// 地址: 0x14231a120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void* rax_2 = *(arg1 + 0xa8)

if (rax_2 == 0)
    rax_2 = sub_141ee69e0(arg1)

char result = sub_14243ade0(rax_2)

if (result != 0 && *(arg1 + 0x8b0) != 0)
    TEB* gsbase
    int64_t rcx_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    int64_t var_d8
    __builtin_memset(&var_d8, 0, 0x40)
    bool cond:0_1 = data_143f587e8 s> *(0x14 + rcx_2)
    int64_t var_140 = 0
    int32_t var_138_1 = 0
    char var_11c_1 = 0
    int32_t var_120 = 0x21
    
    if (cond:0_1)
        _Init_thread_header(&data_143f587e8)
        
        if (data_143f587e8 == 0xffffffff)
            sub_140b58170(&data_143f587e0, "ClothOverlapComponents", 1)
            _Init_thread_footer(&data_143f587e8)
    
    char var_148
    void var_98
    sub_141eb54c0(&var_98, data_143f587e0, &var_148, 0, nullptr)
    void* rax_5 = *(arg1 + 0xa8)
    int32_t var_12c_1 = *(arg1 + 0x10c)
    int32_t var_124_1 = *(arg1 + 0x114)
    int32_t var_128_1 = *(arg1 + 0x110)
    int32_t var_130 = 1
    
    if (rax_5 == 0)
        rax_5 = sub_141ee69e0(arg1)
    
    sub_141ec85d0(rax_5, &var_140, arg1 + 0x100, &data_14399f720, &var_120, &var_130, &var_98)
    int32_t rdi_1 = 0
    
    if (var_138_1 s> 0)
        do
            int32_t* rbx_1 = var_140 + ((sx.q(rdi_1) * 3 + 1) << 3)
            
            if (sub_140d3e110(rbx_1) != 0)
                int64_t* rax_9 = sub_140d3c6e0(rbx_1)
                int64_t rdx_3 = *rax_9
                int32_t rax_10 = (*(rdx_3 + 0x4d8))(rax_9, rdx_3)
                int32_t* var_118
                
                if (rax_10 == 0)
                    if (sub_14221b2f0(sub_140d3c6e0(rbx_1) + 0x2a8) != 0)
                        var_148 = 0
                        void* rax_14 = sub_142216820(sub_140d3c6e0(rbx_1) + 0x2a8)
                        var_118 = rbx_1
                        int64_t* var_108_1 = &var_d8
                        void* var_110_1 = arg1
                        char* var_100_1 = &var_148
                        var_128_1.q = &var_118
                        var_130.q = j_sub_142308590
                        sub_142269e40(rax_14, &var_130)
                else if (rax_10 == 5)
                    void* rax_15 = sub_140d3c6e0(rbx_1)
                    
                    if (rax_15 != 0)
                        void* rax_16 = sub_142591550()
                        void* rcx_17 = *(rax_15 + 0x10)
                        int64_t rdx_5 = sx.q(*(rax_16 + 0x38))
                        
                        if (rdx_5.d s<= *(rcx_17 + 0x38)
                                && *(*(rcx_17 + 0x30) + (rdx_5 << 3)) == rax_16 + 0x30
                                && *(rax_15 + 0x430) != 0 && rax_15 != arg1)
                            int64_t* rcx_19 = *(rax_15 + 0x8b0)
                            
                            if (rcx_19 != 0)
                                __builtin_memset(&var_118, 0, 0x40)
                                (*(*rcx_19 + 0x78))(rcx_19, &var_118, 0)
                                sub_141d430d0(&var_d8, &var_118)
                                int64_t var_e8
                                
                                if (var_e8 != 0)
                                    sub_140a74f90(var_e8)
                                
                                int64_t var_f8
                                sub_1405ded70(&var_f8)
                                int64_t var_108_2
                                
                                if (var_108_2 != 0)
                                    sub_140a74f90(var_108_2)
                                
                                int32_t* rcx_24 = var_118
                                
                                if (rcx_24 != 0)
                                    sub_140a74f90(rcx_24)
            
            rdi_1 += 1
        while (rdi_1 s< var_138_1)
    
    int64_t* rcx_25 = *(arg1 + 0x8b0)
    (*(*rcx_25 + 0x68))(rcx_25, &var_d8)
    int64_t var_38
    
    if (var_38 != 0)
        sub_140a74f90(var_38)
    
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    int64_t rcx_28 = var_140
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)
    
    int64_t var_a8
    
    if (var_a8 != 0)
        sub_140a74f90(var_a8)
    
    int64_t var_b8
    result = sub_1405ded70(&var_b8)
    int64_t var_c8
    
    if (var_c8 != 0)
        result = sub_140a74f90(var_c8)
    
    int64_t rcx_32 = var_d8
    
    if (rcx_32 != 0)
        result = sub_140a74f90(rcx_32)

__security_check_cookie(rax_1 ^ &var_188)
return result
