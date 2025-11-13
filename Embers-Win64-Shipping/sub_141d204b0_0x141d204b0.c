// 函数: sub_141d204b0
// 地址: 0x141d204b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = data_143f36fe0
int64_t var_38 = 0
int64_t var_30 = 0
int64_t rdi = sx.q(sub_141d1f690(arg1, rdx))
int32_t rax_1 = var_30.d

if (rdi.d s> rax_1)
    var_30.d = rdi.d
    
    if (rdi.d s> var_30:4.d)
        sub_1405a4cf0(&var_38)
else if (rdi.d s< rax_1)
    int32_t rsi_2 = rax_1 - rdi.d
    
    if (rax_1 != rdi.d)
        int32_t rcx_2 = rax_1 - rsi_2
        
        if (rcx_2 != rdi.d)
            int64_t rax_3 = var_38
            memmove(rax_3 + (rdi << 2), rax_3 + (sx.q(rsi_2 + rdi.d) << 2), (rcx_2 - rdi.d) << 2)
            rax_1 = var_30.d
        
        var_30.d = rax_1 - rsi_2
        sub_1405dac90(&var_38)

int32_t i = 0

if (rdi.d s> 0 && rdi.d u>= 0x10)
    int32_t zmm2[0x4] = data_142e11d00
    int32_t rax_6 = rdi.d & 0x8000000f
    
    if (rax_6 s< 0)
        rax_6 = ((rax_6 - 1) | 0xfffffff0) + 1
    
    int64_t rcx_7 = 0x20
    int32_t r8_3 = 8
    
    do
        rcx_7 += 0x40
        uint128_t i_3 = zx.o(i)
        i += 0x10
        *(var_38 + rcx_7 - 0x60) = _mm_add_epi32(_mm_shuffle_epi32(i_3, 0), zmm2)
        int64_t rax_11 = var_38
        int32_t zmm1[0x4] = _mm_add_epi32(_mm_shuffle_epi32(zx.o(r8_3 - 4), 0), zmm2)
        i_3 = _mm_add_epi32(_mm_shuffle_epi32(zx.o(r8_3), 0), zmm2)
        *(rax_11 + rcx_7 - 0x50) = zmm1
        *(var_38 + rcx_7 - 0x40) = i_3
        int32_t rax_13 = r8_3 + 4
        r8_3 += 0x10
        *(var_38 + rcx_7 - 0x30) = _mm_add_epi32(_mm_shuffle_epi32(zx.o(rax_13), 0), zmm2)
    while (i s< rdi.d - rax_6)

for (int64_t i_1 = sx.q(i); i_1 s< rdi; i_1 += 1)
    *(var_38 + (i_1 << 2)) = i
    i += 1

int16_t arg_10 = 0x101
sub_141d227f0(arg1, &data_143f36fe0, &var_38, 0x101)
int32_t rax_16 = var_30:4.d
var_30.d = 0

if (rax_16 s< 0 && rax_16 != 0)
    sub_1405dadb0(&var_38, 0)

int32_t rax_17 = sub_141d1f690(arg1, data_143f36fc0)

if (rax_17 s> 0)
    int64_t i_2 = 0
    
    do
        int64_t r14_1 = sx.q(*(arg1[0x4d] + (i_2 << 2)))
        int32_t rsi_3 = (r14_1 + 1).d
        
        if (rsi_3 s> sub_141d1f690(arg1, data_143f36fe0))
            int32_t rax_25
            
            do
                int32_t rax_20 = sub_141d1a2b0(arg1, 1, data_143f36fe0)
                int64_t rdx_6 = sx.q(rax_20) << 5
                *(rdx_6 + arg1[0x68]) = rax_20
                *(rdx_6 + arg1[0x68] + 4) = 0xffffffff
                *(rdx_6 + arg1[0x68] + 8) = 0
                *(rdx_6 + arg1[0x68] + 0xc) = 0
                *(rdx_6 + arg1[0x68] + 0x10) = 0
                rax_25 = sub_141d1f690(arg1, data_143f36fe0)
            while (rsi_3 s> rax_25)
        
        int64_t rax_26 = arg1[0x68]
        int64_t rcx_16 = r14_1 << 5
        i_2 += 1
        *(rcx_16 + rax_26 + 8) += 1
    while (i_2 s< sx.q(rax_17))

int32_t r14_2 = 0

if (sub_141d1f690(arg1, data_143f36fe0) s> 0)
    int64_t rsi_4 = 0
    int32_t rax_36
    
    do
        void* rcx_18 = arg1[0x68]
        int32_t rax_28
        
        if (r14_2 != 0)
            rax_28 = *(rcx_18 + rsi_4 - 0x18) * 3 + *(rcx_18 + rsi_4 - 0x1c)
        else
            rax_28 = 0
        
        *(rcx_18 + rsi_4 + 4) = rax_28
        *(arg1[0x68] + rsi_4 + 0x10) = sub_141d1f690(arg1, data_143f36fd0) - 1
        
        if (*(arg1[0x68] + rsi_4 + 8) == 0)
            int64_t rdi_2 = sx.q(var_30.d)
            int32_t rax_34 = (rdi_2 + 1).d
            var_30.d = rax_34
            
            if (rax_34 s> var_30:4.d)
                sub_1405a4cf0(&var_38)
            
            *(var_38 + (rdi_2 << 2)) = r14_2
        
        r14_2 += 1
        rsi_4 += 0x20
        rax_36 = sub_141d1f690(arg1, data_143f36fe0)
    while (r14_2 s< rax_36)

int32_t r15_1 = 0
int32_t result = sub_141d1f690(arg1, data_143f36fe0)

if (result s> 0)
    int64_t r14_3 = 0
    
    do
        int32_t rdi_3 = 0
        
        if (sub_141d1f690(arg1, data_143f36fc0) s> 0)
            int32_t* rsi_5 = nullptr
            int32_t rax_40
            
            do
                if (r15_1 == *(rsi_5 + arg1[0x4d]))
                    *(arg1[0x4a] + (r14_3 << 2)) = rdi_3
                    r14_3 += 1
                
                rdi_3 += 1
                rsi_5 = &rsi_5[1]
                rax_40 = sub_141d1f690(arg1, data_143f36fc0)
            while (rdi_3 s< rax_40)
        
        r15_1 += 1
        result = sub_141d1f690(arg1, data_143f36fe0)
    while (r15_1 s< result)

if (var_30.d != 0)
    arg_10 = 0x101
    result = sub_141d227f0(arg1, &data_143f36fe0, &var_38, 0x101)

int64_t rcx_27 = var_38

if (rcx_27 == 0)
    return result

return sub_140a74f90(rcx_27)
