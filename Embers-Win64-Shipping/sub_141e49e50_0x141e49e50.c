// 函数: sub_141e49e50
// 地址: 0x141e49e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rax_5

if (arg1 == 0)
    rax_5 = nullptr
else
    void* rdi_1 = arg1[4]
    
    if (rdi_1 != 0)
        void* rax_1 = sub_142591550()
        void* rdx = *(rdi_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* r8_1
            r8_1.b = 1
            sub_141f3e990(arg1[4], 1, r8_1.b)
    
    rax_5 = arg1[0x48]
    
    if (rax_5 == 0)
        rax_5 = (*(*arg1 + 0x300))(arg1)
        arg1[0x48] = rax_5

uint32_t zmm0[0x4] = __andps_xmmxud_memxud(*(rax_5 + 0x820), data_142d3f770)
*(rax_5 + 0x826) = arg2

if (arg2 != 0)
    zmm0 ^= data_142d3f780

*(rax_5 + 0x820) = zmm0[0]
int64_t* result = sub_141df83c0(arg1)
int64_t* result_1 = result

if (result != 0)
    void* rsi_1 = arg1[4]
    
    if (rsi_1 != 0)
        void* rax_6 = sub_142591550()
        void* rdx_1 = *(rsi_1 + 0x10)
        int64_t rax_7 = sx.q(*(rax_6 + 0x38))
        
        if (rax_7.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30)
            void* r8_2
            r8_2.b = 1
            sub_141f3e990(arg1[4], 1, r8_2.b)
    
    void* rax_10 = arg1[0x48]
    
    if (rax_10 == 0)
        rax_10 = (*(*arg1 + 0x300))(arg1)
        arg1[0x48] = rax_10
    
    result = zx.q(*(rax_10 + 0x820))
    *(result_1 + 0x12c) = result.d

return result
