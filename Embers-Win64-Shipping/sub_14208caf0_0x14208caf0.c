// 函数: sub_14208caf0
// 地址: 0x14208caf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x44]
int32_t* result = arg2
*arg2 = 0
int64_t* rsi = *(rax + 0x298)

if (rsi != 0)
    void* rax_1 = sub_142531230()
    void* rdx = rsi[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* rbx_1 = rsi[0xe]
        void* rax_5 = (*(*arg1 + 0x150))(arg1, rdx)
        int128_t zmm0_1 = data_142d3f660
        int64_t* rdx_1 = *(rax_5 + 0x1b0)
        int64_t var_f8 = *(rsi[0xe] + 0xb8)
        int64_t* var_f0_1 = rdx_1
        int64_t var_e8_1 = *(rbx_1 + 0xac)
        int32_t var_e0_1 = 0xffffffff
        int32_t var_c4
        int32_t rax_10 = (var_c4 & 0xffffffe8) | 8
        int64_t var_dc_1 = 0
        int128_t var_d4_1 = zmm0_1
        
        if (rdx_1 != 0)
            void* rax_12 = (*(*rdx_1 + 0x240))(rdx_1)
            
            if (rax_12 != 0)
                bool rcx_4
                
                if (data_143de5480 != 0)
                    rcx_4 = GetCurrentThreadId() == data_143de5470
                
                if (data_143de5480 == 0 || rcx_4 != 0)
                    var_d4_1.d = (*(rax_12 + 0x520)).d
                    rax_10 |= 0x10
                    var_d4_1:4.d = *(rax_12 + 0x530)
                    var_d4_1:8.d = (*(rax_12 + 0x528)).d
        
        int32_t var_c4_2 = rax_10 | 2
        void var_98
        sub_1422d9ba0(&var_98, &var_f8)
        void var_c0
        void var_b0
        void* rax_18 = (*(*rsi + 0x270))(rsi, &var_98, &var_b0, &var_c0, *(rsi[0xe] + 0xb8), 0, 0)
        
        if (rax_18 != 0)
            int32_t rax_20 = neg.d(*(rax_18 + 0x25c))
            *result = _mm_cvtepi32_ps(zx.o(neg.d(*(rax_18 + 0x258)))).d
            result[1] = _mm_cvtepi32_ps(zx.o(rax_20)).d
        
        sub_1422dbba0(&var_98)

return result
