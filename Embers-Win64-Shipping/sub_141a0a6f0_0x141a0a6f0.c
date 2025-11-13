// 函数: sub_141a0a6f0
// 地址: 0x141a0a6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = 0
int32_t var_28 = 0xffffffff
int64_t var_38 = 0
int32_t var_30 = 0
void* result
int64_t r8_1
result, r8_1 = sub_140d3cc80(sub_141a23150(), &var_38, 1, 0x30, 0x20000000)
int64_t rbp = sx.q(var_30)
int32_t i = var_28 + 1
int64_t r14 = var_38
int32_t i_1 = i

if (i s< rbp.d)
    result = zx.q(i)
    
    do
        result = sx.q(result.d)
        
        if (*(r14 + (result << 3)) != 0)
            break
        
        result = zx.q(i + 1)
        i_1 = result.d
        i = result.d
    while (result.d s< rbp.d)

uint64_t var_20 = 0
int32_t j = rbp.d
int32_t j_1 = rbp.d

if (rbp.d != 0)
    sub_1405c4a00(&var_20, rbp.d, 0)
    rdi = var_20
    result, r8_1 = memcpy(rdi, r14, (rbp << 3).d)
    i = i_1
    rbp = zx.q(var_30)
    r14 = var_38
    j = j_1

if (i != rbp.d)
    do
        r8_1.b = 1
        sub_141a0a830(*(rdi + (sx.q(i) << 3)), nullptr)
        result = zx.q(i + 1)
        i = result.d
        
        while (result.d s< j)
            result = sx.q(i)
            
            if (*(rdi + (result << 3)) != 0)
                break
            
            result = zx.q(i + 1)
            i = result.d
    while (i != rbp.d)
    
    r14 = var_38

if (rdi != 0)
    result = sub_140a74f90(rdi)
    r14 = var_38

if (r14 == 0)
    return result

return sub_140a74f90(r14)
