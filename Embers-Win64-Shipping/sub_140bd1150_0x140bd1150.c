// 函数: sub_140bd1150
// 地址: 0x140bd1150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t result = __security_cookie ^ &var_d8
int64_t result_1 = result
void* rsi = nullptr

while (*(arg1 + 0x378) != 0)
    int64_t* rcx = *(arg1 + 0x370)
    int64_t rdx_1 = *(arg1 + 0x380)
    void* rdi_1 = *rcx
    
    if (rdx_1 != 0)
        result = zx.q(*(rcx + 0xc)) + rdx_1
        
        if (result u> 0x10000000)
            break
    
    *(arg1 + 0x380) = zx.q(*(rcx + 0xc)) + rdx_1
    *rcx = *rcx
    int32_t r11_1 = *(arg1 + 0x378)
    int32_t rax_4 = r11_1 - 1
    
    if (rax_4 s>= 1)
        rax_4 = 1
    
    if (rax_4 != 0)
        int64_t rcx_1 = *(arg1 + 0x370)
        memcpy(rcx_1, (sx.q(r11_1 - rax_4) << 4) + rcx_1, rax_4 << 4)
        r11_1 = *(arg1 + 0x378)
    
    int64_t r10_1 = *(arg1 + 0x370)
    *(arg1 + 0x378) = r11_1 - 1
    int32_t r8_3 = 0
    
    if (r11_1 - 1 s> 1)
        uint64_t rax_5
        
        do
            int32_t r9_1 = r8_3 * 2
            rax_5 = zx.q(r9_1 + 1)
            
            if ((rax_5 + 1).d s< r11_1 - 1)
                if (*(r10_1 + sx.q(rax_5.d) * 0x10 + 8) u< *(r10_1 + sx.q(r9_1) * 0x10 + 0x28))
                    rax_5 = zx.q(r9_1)
                
                rax_5 = zx.q(rax_5.d + 1)
            
            int128_t* r8_6 = (sx.q(r8_3) << 4) + r10_1
            int128_t* rdx_9 = (sx.q(rax_5.d) << 4) + r10_1
            
            if (*(rdx_9 + 8) u>= *(r8_6 + 8))
                break
            
            if (r8_6 != rdx_9)
                int128_t zmm1 = *r8_6
                *r8_6 = *rdx_9
                *rdx_9 = zmm1
            
            r8_3 = rax_5.d
        while (((rax_5 << 1) + 1).d s< r11_1 - 1)
    
    if (data_14399fa4c != 0 && rsi != 0)
        sub_140bc4ed0(*(rdi_1 + 0xe8), *(rsi + 0xe8))
    
    void* rcx_8 = *(arg1 + 0x278)
    int64_t var_b8 = 0
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    int64_t var_b0_1 = -1
    rsi = rdi_1
    int64_t var_a8_1 = 0
    int32_t var_a0_1 = 0
    var_48_1.d = *(rdi_1 + 0x18)
    var_40_1:3.b = 2
    uint64_t var_98 = 0
    void*** var_78_1 = nullptr
    void* var_60_1 = rdi_1
    void** const var_68 = &data_142da2668
    int64_t (* var_88)(int64_t* arg1, int32_t* arg2) = sub_140bc3460
    int32_t var_90_1 = 0
    result = sub_140abd8c0(rcx_8, &var_98, &var_b8, &var_88)
    
    if (var_88 != 0)
        void** const* rcx_9 = &var_68
        
        if (var_78_1 != 0)
            rcx_9 = var_78_1
        
        result = (*rcx_9)[2](rcx_9)

__security_check_cookie(result_1 ^ &var_d8)
return result
