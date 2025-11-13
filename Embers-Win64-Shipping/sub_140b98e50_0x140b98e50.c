// 函数: sub_140b98e50
// 地址: 0x140b98e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
EnterCriticalSection(rdi + 0x40)
int64_t rbp = sx.q(*(rdi + 0x70))
int32_t rax = (rbp + 1).d
*(rdi + 0x70) = rax

if (rax s> *(rdi + 0x74))
    sub_1405a4d70(rdi + 0x68)

*(*(rdi + 0x68) + (rbp << 3)) = arg3
int32_t result

if (*(rdi + 0x88) == 0)
    result = data_1439a9650
    
    if (*(rdi + 0x70) == result)
        int32_t rax_3 = data_143e1a334
        int32_t rdi_1
        
        if (rax_3 + 1 s>= 0)
            rdi_1 = 5
            
            if (rax_3 + 1 s< 5)
                rdi_1 = rax_3 + 1
        else
            rdi_1 = 0
        
        int64_t* rax_5 = __crt_deferred_errno_cache::get(&data_143db7b00)
        int64_t r8 = *rax_5
        result = (*(r8 + 0x120))(rax_5, zx.q(rdi_1), r8)
else
    int64_t* rcx_2 = *(rdi + 0x90)
    *(rdi + 0x88) = 0
    result = (*(*rcx_2 + 0x10))(rcx_2)

if (rdi == -0x40)
    return result

return LeaveCriticalSection(rdi + 0x40)
