// 函数: sub_1420ff4d0
// 地址: 0x1420ff4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143a2e4cc
uint64_t rsi = 0
int64_t var_68
uint64_t var_50

if (rax != data_143a2e4f8)
    data_143a2e4f8 = rax
    var_68 = 0
    int32_t var_60_1 = 0
    int32_t var_58_1 = 0xffffffff
    sub_140d3cc80(sub_1425313d0(), &var_68, 1, 0x30, 0x20000000)
    int64_t r12_1 = sx.q(var_60_1)
    int32_t i = var_58_1 + 1
    int64_t r15_1 = var_68
    int32_t i_2 = i
    
    if (i s< r12_1.d)
        int32_t i_4 = i
        
        while (*(r15_1 + (sx.q(i_4) << 3)) == 0)
            i_4 = i + 1
            i_2 = i_4
            i = i_4
            
            if (i_4 s>= r12_1.d)
                break
    
    var_50 = 0
    uint64_t rdi_1 = 0
    int32_t var_48_1 = r12_1.d
    int32_t r14_1 = r12_1.d
    
    if (r12_1.d != 0)
        sub_1405c4a00(&var_50, r12_1.d, 0)
        rdi_1 = var_50
        memcpy(rdi_1, r15_1, (r12_1 << 3).d)
        i = i_2
        r12_1 = zx.q(var_60_1)
        r15_1 = var_68
        r14_1 = var_48_1
    
    if (i != r12_1.d)
        do
            sub_142103dc0(*(rdi_1 + (sx.q(i) << 3)))
            int32_t i_5 = i + 1
            i = i_5
            
            if (i_5 s< r14_1)
                while (*(rdi_1 + (sx.q(i) << 3)) == 0)
                    int32_t i_6 = i + 1
                    i = i_6
                    
                    if (i_6 s>= r14_1)
                        break
        while (i != r12_1.d)
        
        r15_1 = var_68
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
        r15_1 = var_68
    
    if (r15_1 != 0)
        sub_140a74f90(r15_1)

TEB* gsbase

if (data_143f489b0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f489b0)
    
    if (data_143f489b0 == 0xffffffff)
        int64_t rbx_4 = sx.q(data_143f48718)
        int64_t rdi_2 = data_143f48710
        data_143f489a8 = rbx_4.d
        
        if (rbx_4.d != 0)
            sub_140638750(&data_143f489a0, rbx_4.d, 0)
            memcpy(data_143f489a0, rdi_2, (rbx_4 << 2).d)
        else
            data_143f489ac = 0
        
        atexit(&data_142d025e0)
        _Init_thread_footer(&data_143f489b0)

uint64_t result
uint32_t zmm6[0x4]
result, zmm6 = sub_1420ff940()
int32_t r8_4 = data_143f489a8
int32_t rcx_8 = 0
int32_t rbx_2 = (data_143f48718.q).d
uint64_t result_1 = data_143f48710

if (r8_4 s> 0)
    int64_t rdx_5 = 0
    result = result_1
    
    do
        if (rdx_5 s< 0)
            goto label_1420ff6aa
        
        if (rcx_8 s>= rbx_2)
            goto label_1420ff6aa
        
        if (*(data_143f489a0 - result_1 + result) f!= *result)
            goto label_1420ff6aa
        
        rcx_8 += 1
        rdx_5 += 1
        result += 4
    while (rcx_8 s< r8_4)

if (r8_4 != rbx_2)
label_1420ff6aa:
    int32_t r8_5 = data_143f489ac
    data_143f489a8 = rbx_2
    
    if (rbx_2 != 0 || r8_5 != 0)
        sub_140638750(&data_143f489a0, rbx_2, r8_5)
        memcpy(data_143f489a0, result_1, rbx_2 << 2)
    else
        data_143f489ac = 0
    
    var_68 = 0
    int32_t var_60_2 = 0
    int32_t var_58_2 = 0xffffffff
    result = sub_140d3cc80(sub_1425313d0(), &var_68, 1, 0x30, 0x20000000)
    int64_t r15_2 = sx.q(var_60_2)
    int32_t i_1 = var_58_2 + 1
    int64_t r14_2 = var_68
    int32_t i_3 = i_1
    
    if (i_1 s< r15_2.d)
        result = zx.q(i_1)
        
        do
            result = sx.q(result.d)
            
            if (*(r14_2 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< r15_2.d)
    
    var_50 = 0
    int32_t j = r15_2.d
    int32_t j_1 = r15_2.d
    
    if (r15_2.d != 0)
        sub_1405c4a00(&var_50, r15_2.d, 0)
        rsi = var_50
        result = memcpy(rsi, r14_2, (r15_2 << 3).d)
        i_1 = i_3
        r15_2 = zx.q(var_60_2)
        r14_2 = var_68
        j = j_1
    
    if (i_1 != r15_2.d)
        int32_t r8_11 = (data_143f48718.q).d
        uint32_t var_28_1[0x4] = zmm6
        zmm6 = 0x7fffffff
        
        do
            void* rdx_11 = *(rsi + (sx.q(i_1) << 3))
            uint32_t rcx_13 = zx.d(*(rdx_11 + 0x2a0))
            int32_t rax_9
            
            if (rcx_13 == r8_11)
                rax_9 = *(rdx_11 + 0x28c)
            label_1420ff7dd:
                
                if (rax_9 != 0)
                    float zmm0_2[0x4]
                    float zmm1_1[0x4]
                    
                    if (rax_9 - 1 s>= 0 && rax_9 - 1 s< r8_11)
                        zmm1_1 = *(data_143f48710 + (sx.q(rax_9) << 2) - 4)
                        zmm0_2 = _mm_and_ps(zmm1_1, zmm6)
                    
                    if (rax_9 - 1 s< 0 || rax_9 - 1 s>= r8_11 || not(zmm0_2[0] > 9.99999994e-09f))
                        zmm1_1 = *(rdx_11 + 0x288)
                    
                    r8_11.b = 1
                    zmm6 = sub_142102360(rdx_11, zmm1_1, r8_11.b)
                    r8_11 = (data_143f48718.q).d
            else if (rcx_13 s< r8_11)
                rax_9 = *(rdx_11 + 0x28c) - rcx_13 + r8_11
                goto label_1420ff7dd
            result = zx.q(i_1 + 1)
            i_1 = result.d
            
            while (result.d s< j)
                result = sx.q(i_1)
                
                if (*(rsi + (result << 3)) != 0)
                    break
                
                result = zx.q(i_1 + 1)
                i_1 = result.d
        while (i_1 != r15_2.d)
        
        r14_2 = var_68
    
    if (rsi != 0)
        result = sub_140a74f90(rsi)
        r14_2 = var_68
    
    if (r14_2 != 0)
        return sub_140a74f90(r14_2)

return result
