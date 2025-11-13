// 函数: sub_1409dc5c0
// 地址: 0x1409dc5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ceeca8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ceeca8)
    
    if (data_143ceeca8 == 0xffffffff)
        atexit(sub_142cb7ac0)
        _Init_thread_footer(&data_143ceeca8)

int32_t i_3 = data_143ceeca0

if (data_143ceeca4 s< 0)
    if (i_3 != 0)
        int64_t* rbx_4 = data_143ceec98 + 8
        int32_t i
        
        do
            int64_t rcx_1 = *rbx_4
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_4 = &rbx_4[3]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    bool cond:1_1 = data_143ceeca4 == 0
    data_143ceeca0 = 0
    
    if (not(cond:1_1))
        sub_1405a5130(&data_143ceec98, 0)
else
    if (i_3 != 0)
        int64_t* rbx_2 = data_143ceec98 + 8
        int32_t i_1
        
        do
            int64_t rcx = *rbx_2
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            rbx_2 = &rbx_2[3]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    data_143ceeca0 = 0

int32_t i_2 = 0

if (arg2[1].d s> 0)
    int32_t* r14_1 = nullptr
    int128_t zmm6
    int128_t var_38_1 = zmm6
    
    do
        int64_t rsi_1 = sx.q(data_143ceeca0)
        int32_t rbx_5 = *(r14_1 + *arg2)
        int32_t rax_3 = (rsi_1 + 1).d
        bool cond:3_1 = rax_3 s<= data_143ceeca4
        data_143ceeca0 = rax_3
        
        if (not(cond:3_1))
            sub_1405a4df0(&data_143ceec98)
        
        int64_t rax_4 = data_143ceec98
        int64_t rcx_2 = rsi_1 * 3
        zmm6 = data_142d3f660
        *(rax_4 + (rcx_2 << 3)) = 0
        *(rax_4 + (rcx_2 << 3) + 8) = 0
        *(rax_4 + (rcx_2 << 3) + 0x10) = 0
        int64_t rdx_1 = sx.q(data_143ceeca0 - 1) * 3
        int64_t rcx_4 = data_143ceec98
        *(rcx_4 + (rdx_1 << 3)) = rbx_5
        void* rbx_6 = rcx_4 + (rdx_1 << 3)
        int64_t rsi_2 = sx.q(*(rbx_6 + 0x10))
        int32_t rax_8 = (rsi_2 + 1).d
        int32_t var_54_1 = (*(r14_1 + *arg3)).d
        *(rbx_6 + 0x10) = rax_8
        
        if (rax_8 s> *(rbx_6 + 0x14))
            sub_14090a6a0(rbx_6 + 8)
        
        int64_t rax_9 = data_143f36128
        i_2 += 1
        r14_1 = &r14_1[1]
        int64_t* rcx_8 = rsi_2 * 0x60 + *(rbx_6 + 8)
        *(rcx_8 + 0x10) = 4.o
        *rcx_8 = rax_9
        *(rcx_8 + 0x20) = zmm6
        rcx_8[1].d = 0
        int128_t var_68
        *(rcx_8 + 0x30) = var_68
        int128_t var_58
        *(rcx_8 + 0x40) = var_58
        *(rcx_8 + 0x50) = 0.o
    while (i_2 s< arg2[1].d)

return sub_1409dc390(arg1, &data_143ceec98) __tailcall
