// 函数: sub_141402bf0
// 地址: 0x141402bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143ec8318 s> *rbx_1)
    _Init_thread_header(&data_143ec8318)
    
    if (data_143ec8318 == 0xffffffff)
        data_143ec8314 = *data_143ec9a28
        _Init_thread_footer(&data_143ec8318)

if (data_143ec8320 s> *rbx_1)
    _Init_thread_header(&data_143ec8320)
    
    if (data_143ec8320 == 0xffffffff)
        data_143ec831c = *data_143ec9b38
        _Init_thread_footer(&data_143ec8320)

int32_t rdi = *data_143ec9a28
int32_t* result = data_143ec9b38
int32_t rbx_2 = *result

if (rdi != data_143ec8314 || rbx_2 != data_143ec831c)
    int64_t var_28 = 0
    int32_t i_2 = 0
    int32_t var_18_1 = 0xffffffff
    result = sub_140d3cc80(sub_1425be5e0(), &var_28, 1, 0x10, 0)
    int32_t i = i_2
    int32_t i_1 = var_18_1 + 1
    int64_t rcx_2 = var_28
    int32_t i_3 = i_1
    
    if (i_1 s< i)
        do
            result = sx.q(i_1)
            
            if (*(rcx_2 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< i)
    
    while (i_1 s>= 0)
        if (i_1 s>= i)
            break
        
        void* r9_1 = *(rcx_2 + (sx.q(i_1) << 3))
        
        if (r9_1 != 0)
            void* rax_6 = *(r9_1 + 0x1b0)
            
            if (rax_6 != 0)
                sub_141402ac0(rax_6)
                i_1 = i_3
                i = i_2
                rcx_2 = var_28
        
        result = zx.q(i_1 + 1)
        i_3 = result.d
        i_1 = result.d
        
        if (result.d s< i)
            do
                result = sx.q(i_1)
                
                if (*(rcx_2 + (result << 3)) != 0)
                    break
                
                result = zx.q(i_1 + 1)
                i_3 = result.d
                i_1 = result.d
            while (result.d s< i)
    
    if (rcx_2 != 0)
        result = sub_140a74f90(rcx_2)
    
    data_143ec8314 = rdi
    data_143ec831c = rbx_2

return result
