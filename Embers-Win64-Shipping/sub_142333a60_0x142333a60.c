// 函数: sub_142333a60
// 地址: 0x142333a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t* result = __security_cookie ^ &var_108
int64_t* result_1 = result
void* rsi = *(arg1 + 0x18)
int64_t* rdi = arg3

if (rsi != 0)
    int64_t var_c0
    
    if (*(rsi + 0x95) != 0)
        int64_t* rcx = *(arg1 + 0x30)
        
        if (rcx != 0)
            int64_t rsi_1 = *(rsi + 0x98)
            void* rax_2 = (*(*rcx + 0x10))(rcx)
            
            if (rsi_1.d != *(rax_2 + 0x14) || (rsi_1 u>> 0x20).d != *(rax_2 + 0x18))
                int64_t* rcx_1 = *(arg1 + 0x30)
                *(arg1 + 0x30) = 0
                
                if (rcx_1 != 0)
                    (*(*rcx_1 + 0x38))(rcx_1)
        
        wchar16 const* const var_e8
        char var_e0
        char var_d8
        char var_d0
        
        if (*(arg1 + 0x30) == 0)
            var_d0 = 0
            var_d8 = 1
            int32_t var_a8_1 = 1
            int64_t rax_5 = *(*(arg1 + 0x18) + 0x98)
            var_c0 = rax_5
            int32_t var_74_1 = rax_5.d
            int128_t var_a4_1 = zx.o(0)
            var_e0 = 1
            int32_t var_70_1 = var_c0:4.d
            int32_t temp0_1 = _mm_bsrli_si128(zx.o(0), 0xc)
            int32_t var_68_1 = 1
            int16_t var_60_1 = 1
            int16_t var_40_1 = 1
            wchar16 const* const var_48_1 = u"DebugCanvasLayerTexture"
            var_e8 = u"DebugCanvasLayerTexture"
            int16_t var_50_1 = 0
            int128_t var_88 = var_a8_1.o
            int32_t var_78_1 = temp0_1
            int32_t var_6c_1 = 0
            int32_t var_64_1 = 0x10000
            int32_t var_5c_1 = 2
            int32_t var_58_1 = 0x10
            int32_t var_54_1 = 0x2000001
            char var_3e_1 = 0
            sub_1419a0ce0(&data_1439c9260, arg2, &var_88, arg1 + 0x30, var_e8, var_e0, var_d8, 
                var_d0)
        
        void* rcx_2 = data_143f5b298
        int64_t* rsi_3
        
        if (rcx_2 == 0)
            rsi_3 = nullptr
        else if (sub_1423e6860(rcx_2, nullptr) == 0)
            rsi_3 = nullptr
        else
            int64_t* rcx_3 = *(data_143f5b298 + 0xaf8)
            
            if (rcx_3 == 0)
                rsi_3 = nullptr
            else
                rsi_3 = (*(*rcx_3 + 0xc0))(rcx_3)
        
        int64_t var_c8 = 0
        int64_t var_b0 = 0
        
        if (rsi_3 != 0)
            (*(*rsi_3 + 0x78))(rsi_3, zx.q(*(arg1 + 0x38)), &var_c8, &var_b0, var_e8, var_e0, 
                var_d8, var_d0)
            
            if ((*(*rsi_3 + 0x68))(rsi_3) != 0 && *(arg1 + 0x38) != 0xffffffff)
                void* rcx_6 = data_143f5b298
                
                if (rcx_6 != 0)
                    int64_t* rcx_7 = *(rcx_6 + 0xb08)
                    
                    if (rcx_7 != 0)
                        int64_t* rax_15 = (*(*rcx_7 + 0x100))(rcx_7)
                        
                        if (rax_15 != 0)
                            int64_t rdx_2 = *rax_15
                            int64_t* rax_16 = (*(rdx_2 + 0xb8))(rax_15, rdx_2)
                            
                            if (rax_16 != 0)
                                int64_t r8_2 = *rax_16
                                (*(r8_2 + 0x28))(rax_16, zx.q(*(arg1 + 0x38)), r8_2)
        
        if (rsi_3 == 0 || var_c8 == 0)
            rdi = *(arg1 + 0x30) + 0x10
        else
            rdi = &var_c8
        
        sub_1405d1550(&var_b0)
        sub_1405d1550(&var_c8)
    
    sub_1405d16e0(*(arg1 + 0x28) + 8, *rdi)
    void* rax_17 = *(arg1 + 0x18)
    char rsi_4 = *(rax_17 + 0x8d)
    *(rax_17 + 0x8d) = 1
    void* rcx_14 = *(arg1 + 0x18)
    void* rax_18
    
    if (*(rcx_14 + 0x8c) != 0)
        rax_18 = *rdi
    
    int32_t* rdx_6
    
    if (*(rcx_14 + 0x8c) == 0 || rax_18 == 0)
        rdx_6 = *(arg1 + 0x28) + 0x10
    else
        int32_t rax_19 = *(rax_18 + 0x60)
        int32_t var_b4_1 = *(rax_18 + 0x64)
        rdx_6 = &var_c0
        var_c0 = 0
        int32_t var_b8_1 = rax_19
    
    sub_142420170(rcx_14, rdx_6)
    sub_14240e4b0(*(arg1 + 0x18), arg2, 1, 0)
    *(*(arg1 + 0x18) + 0x8d) = rsi_4
    result = sub_1405d16e0(*(arg1 + 0x28) + 8, nullptr)

__security_check_cookie(result_1 ^ &var_108)
return result
