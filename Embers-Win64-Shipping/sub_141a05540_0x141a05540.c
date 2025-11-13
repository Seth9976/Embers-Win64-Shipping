// 函数: sub_141a05540
// 地址: 0x141a05540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = 0x3c23d70a

if (not(arg2 f< 0.00999999978f))
    result = __minss_xmmss_memss(arg2, 0x3f800000)

uint64_t i_5 = zx.q(*(arg1 + 0x2f8))
*(arg1 + 0x24c) = result

if (i_5.d s> 0)
    int64_t rbp_1 = sx.q(i_5.d)
    int64_t rax_1 = 8 * rbp_1
    
    if (mulu.dp.q(8, rbp_1) u>> 0x40 != zx.o(0))
        rax_1 = -1
    
    int64_t* rax_2 = j_sub_140a82f30(rax_1)
    
    if (i_5.d s> 0)
        int64_t r8_1 = 0
        
        do
            rax_2[r8_1] = *(*(*(arg1 + 0x2f0) + (r8_1 << 3)) + 0x3e8)
            r8_1 += 1
        while (r8_1 s< rbp_1)
    
    int128_t zmm6 = *(arg1 + 0x24c)
    int32_t var_5c_1 = zmm6.d
    float i_4 = i_5.d
    
    if (sub_140a80f40() != 0)
        if (i_5.d s> 0)
            int64_t* rax_4 = rax_2
            uint64_t i_2 = i_5
            uint64_t i
            
            do
                void* rcx_3 = *rax_4
                
                if (rcx_3 != 0)
                    *(rcx_3 + 0x474) = zmm6.d f* zmm6.d
                
                rax_4 = &rax_4[1]
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        return j_sub_140a74f90(rax_2)
    
    if (data_143f138f4 == 0)
        uint32_t rax_5
        
        if (data_143de5480 != 0)
            rax_5.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_5.b != 0)
            int32_t var_54_1 = rax_2:4.d
            void** r9_1 = rax_2.d.q
            
            if (i_4 s> 0)
                void** rax_6 = r9_1
                uint64_t i_3 = zx.q(i_4)
                uint64_t i_1
                
                do
                    void* rdx_2 = *rax_6
                    
                    if (rdx_2 != 0)
                        *(rdx_2 + 0x474) = zmm6.d f* zmm6.d
                    
                    rax_6 = &rax_6[1]
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
            
            return j_sub_140a74f90(r9_1)
    
    void var_48
    int64_t* rax_7 = sub_141a07930(&var_48, nullptr, 0xff)
    *(*rax_7 + 0x10) = rax_2.o
    void* rcx_9 = *rax_7
    int32_t r8_2 = rax_7[2].d
    int64_t* rdx_3 = rax_7[1]
    int64_t* rbx_1 = *(rcx_9 + 0x28)
    int64_t* arg_8 = rbx_1
    int32_t* rdi = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi += 1
        rbx_1 = arg_8
    
    result = sub_1405e48c0(rcx_9, rdx_3, r8_2, 1)
    
    if (rbx_1 != 0)
        int32_t rsi_1 = *rdi
        *rdi -= 1
        
        if (rsi_1 == 1)
            return sub_140a2f6e0(arg_8)

return result
