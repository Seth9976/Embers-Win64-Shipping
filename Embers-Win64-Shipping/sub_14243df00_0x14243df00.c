// 函数: sub_14243df00
// 地址: 0x14243df00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx = zx.q(data_14401b1a0)
int128_t zmm8 = *data_143f5e898
int32_t* rax_2 = data_143f5e8c8
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(*data_143f5e8b0))
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*rax_2))
void* rbx = *(ThreadLocalStoragePointer + (rcx << 3))

if (data_143f5e3e8 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f5e3e8)
    
    if (data_143f5e3e8 == 0xffffffff)
        data_143f5e3e4 = zmm8.d
        _Init_thread_footer(&data_143f5e3e8)

if (data_143f5e3f0 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f5e3f0)
    
    if (data_143f5e3f0 == 0xffffffff)
        data_143f5e3ec = zmm7.d
        _Init_thread_footer(&data_143f5e3f0)

if (data_143f5e3f8 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f5e3f8)
    
    if (data_143f5e3f8 == 0xffffffff)
        data_143f5e3f4 = zmm6.d
        _Init_thread_footer(&data_143f5e3f8)

uint64_t result
result.b = 0

if (not(data_143f5e3e4 f== zmm8.d))
    data_143f5e3e4 = zmm8.d
    result.b = 1

if (not(data_143f5e3ec f== zmm7.d))
    data_143f5e3ec = zmm7.d
    result.b = 1

if (not(data_143f5e3f4 f== zmm6.d))
    data_143f5e3f4 = zmm6.d
label_14243e002:
    int64_t var_68 = 0
    int32_t var_60_1 = 0
    int32_t var_58_1 = 0xffffffff
    sub_140d3cc80(sub_142582280(), &var_68, 1, 0x10, 0)
    int32_t rcx_2 = var_60_1
    int32_t i = var_58_1 + 1
    int64_t r8_2 = var_68
    int32_t i_5 = i
    
    if (i s< rcx_2)
        while (*(r8_2 + (sx.q(i) << 3)) == 0)
            int32_t i_8 = i + 1
            i_5 = i_8
            i = i_8
            
            if (i_8 s>= rcx_2)
                break
    
    while (i s>= 0)
        if (i s>= rcx_2)
            break
        
        sub_142438b00(*(r8_2 + (sx.q(i) << 3)))
        rcx_2 = var_60_1
        i = i_5 + 1
        r8_2 = var_68
        i_5 = i
        
        if (i s< rcx_2)
            while (*(r8_2 + (sx.q(i) << 3)) == 0)
                int32_t i_9 = i + 1
                i_5 = i_9
                i = i_9
                
                if (i_9 s>= rcx_2)
                    break
    
    if (r8_2 != 0)
        sub_140a74f90(r8_2)
    
    int64_t* r15_1 = nullptr
    int64_t* var_78 = nullptr
    int32_t rdi_1 = 0
    int32_t var_6c_1 = 0
    int32_t r14_1 = 0
    var_68 = 0
    int32_t var_60_2 = 0
    int32_t var_58_2 = 0xffffffff
    sub_140d3cc80(sub_1425b3af0(), &var_68, 1, 0x10, 0)
    int32_t r8_4 = var_60_2
    int32_t i_1 = var_58_2 + 1
    int64_t rdx_5 = var_68
    int32_t i_6 = i_1
    
    if (i_1 s< r8_4)
        while (*(rdx_5 + (sx.q(i_1) << 3)) == 0)
            int32_t i_10 = i_1 + 1
            i_6 = i_10
            i_1 = i_10
            
            if (i_10 s>= r8_4)
                break
    
    while (i_1 s>= 0)
        if (i_1 s>= r8_4)
            break
        
        int64_t* rcx_8 = *(rdx_5 + (sx.q(i_1) << 3))
        
        if ((*(*rcx_8 + 0x318))(rcx_8) != 0)
            int64_t rbx_1 = sx.q(rdi_1)
            int64_t rsi_1 = *(var_68 + (sx.q(i_6) << 3))
            rdi_1 = (rbx_1 + 1).d
            
            if (rdi_1 s> r14_1)
                sub_1405a4d70(&var_78)
                r14_1 = var_6c_1
                r15_1 = var_78
            
            r15_1[rbx_1] = rsi_1
            sub_141997f50(*(*(var_68 + (sx.q(i_6) << 3)) + 0x78))
        
        r8_4 = var_60_2
        i_1 = i_6 + 1
        rdx_5 = var_68
        i_6 = i_1
        
        if (i_1 s< r8_4)
            while (*(rdx_5 + (sx.q(i_1) << 3)) == 0)
                int32_t i_11 = i_1 + 1
                i_6 = i_11
                i_1 = i_11
                
                if (i_11 s>= r8_4)
                    break
    
    if (rdx_5 != 0)
        sub_140a74f90(rdx_5)
    
    int64_t rbx_2 = 0
    int64_t* rdi_2 = r15_1
    void* rcx_16 = &r15_1[sx.q(rdi_1)]
    uint64_t rsi_5 = (rcx_16 - r15_1 + 7) u>> 3
    
    if (r15_1 u> rcx_16)
        rsi_5 = 0
    
    if (rsi_5 != 0)
        do
            sub_141997f50(*(*rdi_2 + 0x78))
            rbx_2 += 1
            rdi_2 = &rdi_2[1]
        while (rbx_2 != rsi_5)
    
    var_68 = 0
    int32_t i_4 = 0
    int32_t var_58_3 = 0xffffffff
    result = sub_140d3cc80(sub_1425825b0(), &var_68, 1, 0x10, 0)
    int32_t i_2 = i_4
    int32_t i_3 = var_58_3 + 1
    int64_t r8_6 = var_68
    int32_t i_7 = i_3
    
    if (i_3 s< i_2)
        do
            result = sx.q(i_3)
            
            if (*(r8_6 + (result << 3)) != 0)
                break
            
            result = zx.q(i_3 + 1)
            i_7 = result.d
            i_3 = result.d
        while (result.d s< i_2)
    
    while (i_3 s>= 0)
        if (i_3 s>= i_2)
            break
        
        result = sub_141ee8490(*(r8_6 + (sx.q(i_3) << 3)))
        i_2 = i_4
        i_3 = i_7 + 1
        r8_6 = var_68
        i_7 = i_3
        
        if (i_3 s< i_2)
            do
                result = sx.q(i_3)
                
                if (*(r8_6 + (result << 3)) != 0)
                    break
                
                result = zx.q(i_3 + 1)
                i_7 = result.d
                i_3 = result.d
            while (result.d s< i_2)
    
    if (r8_6 != 0)
        result = sub_140a74f90(r8_6)
    
    if (r15_1 != 0)
        return sub_140a74f90(r15_1)
else if (result.b != 0)
    goto label_14243e002

return result
