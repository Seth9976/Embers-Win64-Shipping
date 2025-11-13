// 函数: sub_1420dfdf0
// 地址: 0x1420dfdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t result = __security_cookie ^ &var_198
int64_t result_1 = result
int32_t rsi = *(arg1 + 0xc)
void* const rbx

if (rsi s>= data_143e1d9b4)
    rbx = nullptr
else
    int16_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rsi)
    uint32_t rdx_2 = zx.d(temp1_1)
    int32_t rax_3 = temp2_1 + rdx_2
    result = data_143e1d9a0
    rbx = *(result + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18

if (*(rbx + 0xc) == 0 && (*(rbx + 0xb) & 1) == 0)
    int64_t r12_1 = sx.q(sub_140d18af0(&data_143e1d678, rsi))
    void* rdi_3 = r12_1 * 0x50 + data_143e1d678
    
    if (*(rdi_3 + 0x14) s< 0x40)
        sub_1405dadb0(rdi_3 + 8, 0x40)
    
    void* rcx_5 = *(arg1 + 0x20)
    void* var_130_1 = rcx_5
    int32_t var_140 = rsi
    void* var_138_1 = rdi_3
    void* var_128_1 = sub_140d21d80(rcx_5)
    int64_t rax_9 = data_143e1b318
    
    if (rax_9 == 0)
        rax_9 = sub_140cbc430()
        data_143e1b318 = rax_9
    
    int64_t var_118_1 = rax_9
    int32_t* var_120 = &var_140
    int32_t** var_110_1 = &var_120
    int64_t var_108_1 = rax_9
    int64_t var_c0_1 = 0
    CRITICAL_SECTION criticalSection
    InitializeCriticalSection(&criticalSection)
    SetCriticalSectionSpinCount(&criticalSection, 0xfa0)
    int64_t var_50
    __builtin_memset(&var_50, 0, 0x11)
    int32_t var_3c_1 = 0
    void** var_168 = nullptr
    int32_t var_160_1 = 1
    int64_t var_158_1 = 0
    int64_t var_150_1 = 0
    sub_1405a4d70(&var_168)
    void** rsi_1 = var_168
    *rsi_1 = arg1
    
    if (var_160_1 != 0)
        int64_t* var_170_1 = nullptr
        sub_1420e9030(&var_120, &var_168)
        
        if (var_170_1 != 0)
            var_170_1[9].d -= 1
            
            if (var_170_1[9].d == 1)
                sub_140a2f6e0(var_170_1)
        
        rsi_1 = var_168
    
    *(rbx + 8) |= 0x1000000
    *(rbx + 0xc) = 0xffffffff - r12_1.d
    
    if (*(rdi_3 + 0x10) s< sub_140d21b00())
        int64_t r10_1 = 0
        int32_t* r9_1 = *(rdi_3 + 8)
        uint64_t r11_2 = sx.q(*(rdi_3 + 0x10)) << 2 u>> 2
        
        if (r9_1 u> &r9_1[sx.q(*(rdi_3 + 0x10))])
            r11_2 = 0
        
        if (r11_2 != 0)
            do
                int32_t rax_14 = *r9_1
                uint32_t r8_4 = zx.d(rax_14.w)
                
                if (rax_14 s< 0)
                    rax_14 += 0xffff
                    r8_4 -= 0x10000
                
                r9_1 = &r9_1[1]
                r10_1 += 1
                *(*(data_143e1d9a0 + (sx.q(rax_14 s>> 0x10) << 3)) + sx.q(r8_4) * 0x18 + 0xc) = 0
            while (r10_1 != r11_2)
        
        sub_140d20120(&data_143e1d678, r12_1.d)
    else
        sub_140625cf0(*(rdi_3 + 8), *(rdi_3 + 0x10))
        sub_140625cf0(*(rdi_3 + 0x18), *(rdi_3 + 0x20))
        sub_140625cf0(*(rdi_3 + 0x28), *(rdi_3 + 0x30))
    
    if (var_158_1 != 0)
        sub_140a74f90(var_158_1)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    int64_t rcx_18 = var_50
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    result = DeleteCriticalSection(&criticalSection)

__security_check_cookie(result_1 ^ &var_198)
return result
