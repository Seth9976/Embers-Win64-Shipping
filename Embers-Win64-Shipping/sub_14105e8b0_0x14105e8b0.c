// 函数: sub_14105e8b0
// 地址: 0x14105e8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0
*(arg1 + 0xa0) = arg2
*(arg1 + 0xa4) = 0

if (data_1439c7a34 u> 1)
    sub_140af2b60()
    
    if (sub_140b2ab20(&data_143dbb3f0, u"PresentGPU=", arg1 + 0xa4) != 0)
        int32_t rcx = *(arg1 + 0xa4)
        int32_t rax_3 = data_1439c7a34 - 1
        
        if (rcx s>= 0xffffffff)
            if (rcx s< rax_3)
                rax_3 = rcx
            
            *(arg1 + 0xa4) = rax_3
        else
            *(arg1 + 0xa4) = 0xffffffff
    else if (data_1439c7a38 u> 1)
        int32_t rcx_1 = 4
        *(arg1 + 0xa4) = 0xffffffff
        
        if (data_1439c7a34 u> 2)
            rcx_1 = data_1439c7a34
        
        *(arg1 + 0xa0) = rcx_1

int32_t i_2 = *(arg1 + 0x88)
int64_t* rbx = *(arg1 + 0x80)

if (i_2 != 0)
    int32_t i
    
    do
        void* rcx_2 = *rbx
        
        if (rcx_2 != 0)
            (*(*(rcx_2 + 0x68) + 0x10))(rcx_2 + 0x68)
        
        rbx = &rbx[1]
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t rbx_1 = 0
*(arg1 + 0x88) = 0

if (*(arg1 + 0x8c) != 0)
    sub_1405c5570(arg1 + 0x80, 0)
    rbx_1 = *(arg1 + 0x88)

int64_t rdi = sx.q(*(arg1 + 0xa0))
int32_t rax_5 = rbx_1 + rdi.d
*(arg1 + 0x88) = rax_5

if (rax_5 s> *(arg1 + 0x8c))
    sub_1405a4d70(arg1 + 0x80)

memset(*(arg1 + 0x80) + (sx.q(rbx_1) << 3), 0, rdi << 3)
int32_t i_3 = *(arg1 + 0xd0)
int64_t* rbx_2 = *(arg1 + 0xc8)

if (i_3 != 0)
    int32_t i_1
    
    do
        void* rcx_8 = *rbx_2
        
        if (rcx_8 != 0)
            (*(*(rcx_8 + 0x68) + 0x10))(rcx_8 + 0x68)
        
        rbx_2 = &rbx_2[1]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

*(arg1 + 0xd0) = 0

if (*(arg1 + 0xd4) != 0)
    sub_1405c5570(arg1 + 0xc8, 0)
    r14 = *(arg1 + 0xd0)

int64_t rbx_3 = sx.q(*(arg1 + 0xa0))
int32_t rax_8 = r14 + rbx_3.d
*(arg1 + 0xd0) = rax_8

if (rax_8 s> *(arg1 + 0xd4))
    sub_1405a4d70(arg1 + 0xc8)

return memset(*(arg1 + 0xc8) + (sx.q(r14) << 3), 0, rbx_3 << 3) __tailcall
