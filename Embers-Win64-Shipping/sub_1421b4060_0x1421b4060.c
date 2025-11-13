// 函数: sub_1421b4060
// 地址: 0x1421b4060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
uint64_t result = zx.q(*(arg1 + 0x120))
int64_t* r9 = nullptr
uint32_t rsi_1 = (result + 0x1f).d u>> 5
int64_t* var_28 = nullptr
int32_t var_1c = 0x80
int32_t var_20 = result.d
int64_t var_38

if (rsi_1 u<= 4)
    var_38 = 0
    int64_t var_30_1 = 0
else
    sub_1405a4a00(&var_38, 0, rsi_1, 4)
    int64_t* rbp_1 = &var_38
    uint32_t var_1c_1 = rsi_1 << 5
    
    if (var_28 != 0)
        rbp_1 = var_28
    
    if (rsi_1 u> 8)
        memset(rbp_1, 0, zx.q(rsi_1) << 2)
    else if (rsi_1 != 0)
        __builtin_memset(rbp_1, 0, zx.q(rsi_1) << 2)
    
    uint64_t rdx_1 = zx.q(rsi_1 - 1)
    result = zx.q(0xffffffff u>> ((neg.d(var_20)).b & 0x1f))
    *(rbp_1 + (rdx_1 << 2)) &= result.d
    r9 = var_28

int32_t i = *(arg1 + 0x118)
int32_t rdx_2 = 0

if (i s> 0)
    void* r8_4 = nullptr
    
    do
        int64_t r10_1 = *(arg1 + 0xf8)
        uint32_t rax_5 = zx.d(*(r8_4 + r10_1))
        int32_t rax_7
        int32_t rbp_2
        uint64_t rsi_3
        int64_t* r11_1
        
        if (rax_5 s< *(arg1 + 0x120))
            r11_1 = &var_38
            
            if (r9 != 0)
                r11_1 = r9
            
            rsi_3 = zx.q(rax_5) u>> 5
            rbp_2 = 1 << (rax_5.b & 0x1f)
            rax_7 = *(r11_1 + (rsi_3 << 2))
        
        if (rax_5 s>= *(arg1 + 0x120) || (rbp_2 & rax_7) != 0)
            result = zx.q(i - 1)
            
            if (rdx_2 != result.d)
                result = sx.q(i)
                *(r8_4 + r10_1) = *(r10_1 + (result << 1) - 2)
            
            *(arg1 + 0x118) -= 1
            rdx_2 -= 1
            r8_4 -= 2
        else
            result = zx.q(rax_7) | zx.q(rbp_2)
            *(r11_1 + (rsi_3 << 2)) = result.d
            r9 = var_28
        
        i = *(arg1 + 0x118)
        rdx_2 += 1
        r8_4 += 2
    while (rdx_2 s< i)

for (; i s< *(arg1 + 0x120); i += 1)
    int64_t* rcx_8 = &var_38
    
    if (r9 != 0)
        rcx_8 = r9
    
    uint64_t r8_7 = zx.q((var_20 + 0x1f) u>> 5)
    int32_t rdx_3 = 0
    int64_t rax_8 = 0
    
    if (r8_7 != 0)
        while (*(rcx_8 + (rax_8 << 2)) == 0xffffffff)
            rdx_3 += 1
            rax_8 += 1
            
            if (rax_8 s>= r8_7)
                break
    
    if (rdx_3 s>= r8_7.d)
        result = *(arg1 + 0xf8)
        *(result + (sx.q(i) << 1)) = i.w
    else
        void* r10_2 = rcx_8 + (rax_8 << 2)
        int32_t rcx_9 = *r10_2
        int32_t rax_10 = not.d(rcx_9)
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_forward(rax_10)
        int32_t rdx_5 = (rdx_3 << 5) + temp0_1
        
        if (rdx_5 s>= var_20)
            result = *(arg1 + 0xf8)
            *(result + (sx.q(i) << 1)) = i.w
        else
            *r10_2 = rcx_9 | (neg.d(rax_10) & rax_10)
            r9 = var_28
            
            if (rdx_5 == 0xffffffff)
                result = *(arg1 + 0xf8)
                *(result + (sx.q(i) << 1)) = i.w
            else
                result = *(arg1 + 0xf8)
                *(result + (sx.q(i) << 1)) = rdx_5.w

if (r9 != 0)
    result = sub_140a74f90(r9)

__security_check_cookie(rax_1 ^ &var_58)
return result
