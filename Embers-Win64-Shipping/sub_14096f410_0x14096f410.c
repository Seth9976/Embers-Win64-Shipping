// 函数: sub_14096f410
// 地址: 0x14096f410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x6f0)
void* rdx = *(arg1 + 0x6e8)

if (rdx != 0)
    *(arg1 + 0x6e8) = 0
    sub_14094ea30(arg1 + 0x6e8, rdx)

if (arg1 != -0x6f0)
    LeaveCriticalSection(arg1 + 0x6f0)

int64_t* rax = j_sub_140a82f30(0x50)
int64_t* rdi = rax

if (rax == 0)
    rdi = nullptr
else
    float zmm0_1 = data_143989b38 f* *(arg1 + 0x718)
    *rdi = 0
    rdi[1] = arg2
    rdi[2].d = 0
    *(rdi + 0x14) = 0
    rdi[3].d = int.d(zmm0_1)
    rdi[4] = 0
    rdi[5] = 0
    int64_t* rax_2 = j_sub_140a82f30(0x10)
    
    if (rax_2 == 0)
        rax_2 = nullptr
    else
        *rax_2 = 0
    
    rdi[7] = rax_2
    rdi[6] = rax_2
    rdi[8].d = 0
    int64_t rbx_1 = sx.q(rdi[5].d)
    int32_t rax_3 = rbx_1.d + arg3
    rdi[5].d = rax_3
    
    if (rax_3 s> *(rdi + 0x2c))
        sub_1405c4f50(&rdi[4])
    
    int32_t i_1 = arg3
    void* rcx_6 = rbx_1 * 0x30 + rdi[4]
    
    if (arg3 != 0)
        int32_t i
        
        do
            __builtin_memset(rcx_6, 0, 0x20)
            *(rcx_6 + 0x20) = 0xffffffff
            *(rcx_6 + 0x28) = 0
            rcx_6 += 0x30
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t rbx_2 = 0
    
    if (arg3 s> 0)
        int64_t rsi_1 = 0
        
        do
            *(rsi_1 + rdi[4] + 0x20) = rbx_2
            int64_t* rax_5 = j_sub_140a82f30(0x10)
            
            if (rax_5 != 0)
                *rax_5 = 0
                rax_5[1].d = rbx_2
                int64_t** rcx_7 = rdi[6]
                rdi[6] = rax_5
                *rcx_7 = rax_5
            
            rbx_2 += 1
            rsi_1 += 0x30
        while (rbx_2 s< arg3)

void* rdx_2 = *(arg1 + 0x6e8)

if (rdx_2 != rdi)
    *(arg1 + 0x6e8) = rdi
    sub_14094ea30(arg1 + 0x6e8, rdx_2)

*(arg1 + 0x720) = arg4.d
int128_t zmm6
zmm6.d = arg4.d f* *(arg1 + 0x718)
int32_t result = int.d(zmm6.d)
*(arg1 + 0x71c) = result
return result
