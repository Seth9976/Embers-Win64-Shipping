// 函数: sub_1419ef220
// 地址: 0x1419ef220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(data_143de5480)
int64_t rbx = data_143ed5cc8
int64_t rsi = rbx
int64_t rcx
uint64_t rdi

if (result.b == 0)
    rdi = 0
    rcx = 0
else
    uint32_t rax = GetCurrentThreadId()
    rbx = data_143ed5cc8
    rdi = 0
    result = zx.q(data_143de5480)
    rcx.b = rax != data_143de5470

if (not(data_1439cbe90 f== *(rsi + (rcx << 2))))
    int64_t rcx_1
    
    if (result.b == 0)
        rcx_1 = 0
    else
        rcx_1.b = GetCurrentThreadId() != data_143de5470
    
    data_1439cbe90 = *(rbx + (rcx_1 << 2))
    int64_t var_38
    result = sub_1419ea730(&var_38, 0x30, 1, 0x20000000)
    int32_t i_3
    int32_t i_2 = i_3
    int64_t rbx_1 = var_38
    int32_t i = i_2
    uint64_t var_20 = 0
    int32_t i_1 = i_2
    
    if (i_2 != 0)
        sub_1405c4a00(&var_20, i_2, 0)
        rdi = var_20
        result = memcpy(rdi, rbx_1, i_2 << 3)
        i_2 = i_3
        i = i_1
    
    int32_t result_2
    int32_t result_1 = result_2
    
    while (result_1 != i_2)
        sub_141ee8490(*(rdi + (sx.q(result_1) << 3)))
        result = zx.q(result_1 + 1)
        result_1 = result.d
        
        while (result.d s< i)
            result = sx.q(result_1)
            
            if (*(rdi + (result << 3)) != 0)
                break
            
            result = zx.q(result_1 + 1)
            result_1 = result.d
    
    if (rdi != 0)
        result = sub_140a74f90(rdi)
    
    int64_t rcx_8 = var_38
    
    if (rcx_8 != 0)
        return sub_140a74f90(rcx_8)

return result
