// 函数: sub_140d1d7d0
// 地址: 0x140d1d7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t result = __security_cookie ^ &var_188
int64_t result_1 = result
int32_t r14 = *(arg1 + 0xc)
void* const rbx

if (r14 s>= data_143e1d9b4)
    rbx = nullptr
else
    int16_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r14)
    uint32_t rdx_2 = zx.d(temp1_1)
    int32_t rax_3 = temp2_1 + rdx_2
    result = data_143e1d9a0
    rbx = *(result + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18

if (*(rbx + 0xc) == 0 && (*(rbx + 0xb) & 1) == 0)
    int64_t rdx_4 = sx.q(data_143e1d690)
    uint64_t rsi_1
    
    if (rdx_4.d == 0)
        rsi_1 = sx.q(data_143e1d680)
        int32_t rax_8 = (rsi_1 + 1).d
        bool cond:1_1 = rax_8 s<= data_143e1d684
        data_143e1d680 = rax_8
        
        if (not(cond:1_1))
            sub_1405c5060(&data_143e1d678)
        
        int32_t* rcx_6 = rsi_1 * 0x50 + data_143e1d678
        *rcx_6 = 0xffffffff
        __builtin_memset(&rcx_6[2], 0, 0x41)
    else
        rsi_1 = zx.q(*(data_143e1d688 + (rdx_4 << 2) - 4))
        data_143e1d690 = rdx_4.d - 1
    
    int64_t rcx_8 = sx.q(rsi_1.d) * 0x50
    *(rcx_8 + data_143e1d678) = r14
    void* r15_1 = data_143e1d678
    data_143e1d698 += 1
    void* r15_2 = r15_1 + rcx_8
    
    if (*(r15_2 + 0x14) s< 0x40)
        sub_1405dadb0(r15_2 + 8, 0x40)
    
    int32_t var_130 = *(arg1 + 0xc)
    int64_t rax_12 = data_143e1b318
    void* var_128_1 = r15_2
    
    if (rax_12 == 0)
        rax_12 = sub_140cbc430()
        data_143e1b318 = rax_12
    
    int64_t var_118_1 = rax_12
    int32_t* var_120 = &var_130
    int64_t var_108_1 = rax_12
    int32_t** var_110_1 = &var_120
    int64_t var_c0_1 = 0
    CRITICAL_SECTION criticalSection
    InitializeCriticalSection(&criticalSection)
    SetCriticalSectionSpinCount(&criticalSection, 0xfa0)
    int64_t var_50
    __builtin_memset(&var_50, 0, 0x11)
    int32_t var_3c_1 = 0
    void** var_158 = nullptr
    int32_t var_150_1 = 1
    int64_t var_148_1 = 0
    int64_t var_140_1 = 0
    sub_1405a4d70(&var_158)
    void** r14_1 = var_158
    *r14_1 = arg1
    
    if (var_150_1 != 0)
        int64_t* var_160_1 = nullptr
        sub_140d27af0(&var_120, &var_158)
        
        if (var_160_1 != 0)
            var_160_1[9].d -= 1
            
            if (var_160_1[9].d == 1)
                sub_140a2f6e0(var_160_1)
        
        r14_1 = var_158
    
    *(rbx + 8) |= 0x1000000
    *(rbx + 0xc) = not.d(rsi_1.d)
    int32_t rax_16 = data_1439aa888
    
    if (rax_16 s<= 1)
        rax_16 = 1
    
    if (*(r15_2 + 0x10) s< rax_16)
        int64_t r11_1 = 0
        int32_t* r10_1 = *(r15_2 + 8)
        uint64_t rbx_2 = sx.q(*(r15_2 + 0x10)) << 2 u>> 2
        
        if (r10_1 u> &r10_1[sx.q(*(r15_2 + 0x10))])
            rbx_2 = 0
        
        if (rbx_2 != 0)
            do
                int32_t rax_19 = *r10_1
                uint32_t r9_1 = zx.d(rax_19.w)
                
                if (rax_19 s< 0)
                    rax_19 += 0xffff
                    r9_1 -= 0x10000
                
                r10_1 = &r10_1[1]
                r11_1 += 1
                *(*(data_143e1d9a0 + (sx.q(rax_19 s>> 0x10) << 3)) + sx.q(r9_1) * 0x18 + 0xc) = 0
            while (r11_1 != rbx_2)
        
        sub_140d20120(&data_143e1d678, rsi_1.d)
    else
        sub_140625cf0(*(r15_2 + 8), *(r15_2 + 0x10))
        sub_140625cf0(*(r15_2 + 0x18), *(r15_2 + 0x20))
        sub_140625cf0(*(r15_2 + 0x28), *(r15_2 + 0x30))
    
    if (var_148_1 != 0)
        sub_140a74f90(var_148_1)
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    int64_t rcx_20 = var_50
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    result = DeleteCriticalSection(&criticalSection)

__security_check_cookie(result_1 ^ &var_188)
return result
