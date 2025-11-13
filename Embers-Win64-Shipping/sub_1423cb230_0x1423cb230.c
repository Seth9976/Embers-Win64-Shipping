// 函数: sub_1423cb230
// 地址: 0x1423cb230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg2)
int32_t r12 = 0
uint64_t result = zx.q(*(arg1 + 0x14))
int32_t r9 = (result - 1).d

if (result.d s<= 0)
    r9 = 0

int32_t rbp_1 = *(arg1 + 0x20) - r9
int64_t rsi = sx.q(rbp_1)

if (arg2 s> 0)
    int64_t rdi_1 = 0
    
    while (rdi_1 s< rsi)
        void* rbx_1 = *(*(arg1 + 0x18) + (rdi_1 << 3))
        
        if (*(rbx_1 + 0x20) != 0)
            sub_140bcb6b0(rbx_1 + 0x10, 1)
            sub_140bd1d40(rbx_1 + 0x10)
        
        rdi_1 += 1
        
        if (rdi_1 s>= r15)
            break

if (r15 s< rsi)
    int64_t rbx_2 = r15
    int32_t rdi_2 = 0
    
    do
        void* rbp_2 = *(*(arg1 + 0x18) + (rbx_2 << 3))
        
        if (sub_140bc7f20(rbp_2 + 0x10) s> 0)
            if (arg3 != 0)
                if (data_143de5480 != 0)
                    GetCurrentThreadId()
                
                sub_140bc7fd0(rbp_2 + 0x10, &arg3[sx.q(rdi_2)], 1)
            
            r12 += 1
        
        rdi_2 += 1
        rbx_2 += 1
    while (rbx_2 s< rsi)

if (r12 == rbp_1 - arg2)
    result.b = 1
    return result

if (r15 s< rsi)
    int64_t i_1 = rsi - r15
    int64_t* rbx_3 = arg3
    int64_t i
    
    do
        if (arg3 != 0)
            int64_t rcx_4 = *rbx_3
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
                *rbx_3 = 0
        
        rbx_3 = &rbx_3[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 0
return result
