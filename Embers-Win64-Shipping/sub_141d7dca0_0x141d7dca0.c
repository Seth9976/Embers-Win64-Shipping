// 函数: sub_141d7dca0
// 地址: 0x141d7dca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg2[3]
int64_t rax = sx.q(*(rsi + 0x18))

if (rax.d s>= 0)
    int64_t* rcx = *(*(arg1 + 0x70) + (rax << 3))
    int64_t rdx_1 = (*(*rcx + 0x18))(rcx, zx.q(*(rsi + 0x14)))
    int64_t var_28 = *arg2
    *arg2 = 0
    int32_t var_20_1 = arg2[1].d
    int32_t rax_5 = *(arg2 + 0xc)
    arg2[1] = 0
    int64_t rcx_1 = *(arg1 + 0x70)
    int32_t var_1c_1 = rax_5
    _mm_cvtps_pd(*(rsi + 8))
    sub_141d45c50(*(rcx_1 + (rax << 3)), rdx_1, &var_28)
    int32_t i = 0
    
    if (*(rsi + 0x18) s> 0)
        int64_t* rbx_2 = nullptr
        
        do
            int64_t rdx_2 = *(arg1 + 0x70)
            void* rcx_3 = *(rbx_2 + rdx_2)
            bool z_1
            
            if (0 == *(rcx_3 + 8))
                *(rcx_3 + 8) = 0
                z_1 = true
            else
                *(rcx_3 + 8)
                z_1 = false
            
            if (not(z_1))
                int64_t* rcx_4 = *(rbx_2 + rdx_2)
                (*(*rcx_4 + 0x10))(rcx_4)
            
            i += 1
            rbx_2 = &rbx_2[1]
        while (i s< *(rsi + 0x18))

return sub_141d75370(arg2) __tailcall
