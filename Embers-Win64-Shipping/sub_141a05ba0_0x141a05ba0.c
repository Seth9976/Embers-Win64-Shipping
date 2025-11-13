// 函数: sub_141a05ba0
// 地址: 0x141a05ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_4 = zx.q(*(arg1 + 0x2f8))
*(arg1 + 0x260) = arg2

if (i_4.d s<= 0)
    return 

int64_t r15_1 = sx.q(i_4.d)
int64_t rax_1 = 8 * r15_1

if (mulu.dp.q(8, r15_1) u>> 0x40 != zx.o(0))
    rax_1 = -1

int64_t* rax_2 = j_sub_140a82f30(rax_1)

if (i_4.d s> 0)
    int64_t r8_1 = 0
    
    do
        rax_2[r8_1] = *(*(*(arg1 + 0x2f0) + (r8_1 << 3)) + 0x3e8)
        r8_1 += 1
    while (r8_1 s< r15_1)

int32_t var_50_1 = i_4.d
char var_4c_1 = arg2

if (sub_140a80f40() == 0)
    uint32_t rax_5
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_5.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_5.b == 0))
        void var_48
        int64_t* rax_7 = sub_141a07d20(&var_48, nullptr, 0xff)
        *(*rax_7 + 0x10) = rax_2.o
        void* rcx_9 = *rax_7
        int32_t r8_2 = rax_7[2].d
        int64_t* rdx_1 = rax_7[1]
        int64_t* rbx_1 = *(rcx_9 + 0x28)
        int64_t* arg_8 = rbx_1
        int32_t* rdi = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi += 1
            rbx_1 = arg_8
        
        sub_1405e48c0(rcx_9, rdx_1, r8_2, 1)
        
        if (rbx_1 != 0)
            int32_t rsi_1 = *rdi
            *rdi -= 1
            
            if (rsi_1 == 1)
                sub_140a2f6e0(arg_8)
    else if (i_4.d s<= 0)
        j_sub_140a74f90(rax_2)
    else
        int64_t* rcx_5 = rax_2
        uint64_t i_3 = i_4
        uint64_t i
        
        do
            void* rax_6 = *rcx_5
            
            if (rax_6 != 0)
                *(rax_6 + 0x449) &= 0xfe
                *(rax_6 + 0x449) |= arg2
            
            rcx_5 = &rcx_5[1]
            i = i_3
            i_3 -= 1
        while (i != 1)
        j_sub_140a74f90(rax_2)
else if (i_4.d s<= 0)
    j_sub_140a74f90(rax_2)
else
    int64_t* rcx_3 = rax_2
    uint64_t i_2 = i_4
    uint64_t i_1
    
    do
        void* rax_4 = *rcx_3
        
        if (rax_4 != 0)
            *(rax_4 + 0x449) &= 0xfe
            *(rax_4 + 0x449) |= arg2
        
        rcx_3 = &rcx_3[1]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    j_sub_140a74f90(rax_2)
