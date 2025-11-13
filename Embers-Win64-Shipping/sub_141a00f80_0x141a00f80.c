// 函数: sub_141a00f80
// 地址: 0x141a00f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*(arg1 + 0x238) = 0
sub_141a09210(arg1 + 0x148, 0)

if (*(arg1 + 0x18) != 0 && *(arg1 + 4) s> 0)
    sub_141a09210(arg1 + 0x198, 0)
    sub_141a09210(arg1 + 0x1e8, 0)

void* result = sub_140b011d0()

if (result.b != 0 && data_143db7aa8 != 0)
    void var_28
    int64_t* rax = sub_141a077b0(&var_28, nullptr, data_14399e5dc)
    *(*rax + 0x10) = arg1
    void* rcx_5 = *rax
    int32_t r8_2 = rax[2].d
    int64_t* rdx_1 = rax[1]
    int64_t* rdi = *(rcx_5 + 0x20)
    int64_t* arg_10 = rdi
    
    if (rdi != 0)
        rdi[9].d += 1
    
    sub_141a16280(rcx_5, rdx_1, r8_2, 1)
    result = &arg_10
    
    if (arg1 + 0x290 != &arg_10)
        int64_t* rcx_6 = *(arg1 + 0x290)
        *(arg1 + 0x290) = rdi
        
        if (rcx_6 != 0)
            result = zx.q(rcx_6[9].d)
            rcx_6[9].d -= 1
            
            if (result.d == 1)
                return sub_140a2f6e0(rcx_6)
    else if (rdi != 0)
        result = zx.q(rdi[9].d)
        rdi[9].d -= 1
        
        if (result.d == 1)
            return sub_140a2f6e0(arg_10)
else if (*(arg1 + 0xd0) s> 0)
    int32_t* rcx_8 = nullptr
    int64_t* rdx_2 = nullptr
    
    do
        result = *(arg1 + 0xc8)
        void* r8_3 = *(rdx_2 + result)
        
        if (r8_3 != 0)
            result = *(r8_3 + 0x158)
            
            if (result != 0)
                uint128_t zmm0_1 = zx.o(*(*(result + 0x78) + 0x60))
                result = *(arg1 + 0x60)
                zmm0_1 = _mm_cvtepi32_ps(zmm0_1)
                
                if ((result.b & 1) != 0)
                    result = (result s>> 1) + arg1 + 0x60
                
                *(rcx_8 + result) = zmm0_1.d
        
        i += 1
        rdx_2 = &rdx_2[1]
        rcx_8 = &rcx_8[1]
    while (i s< *(arg1 + 0xd0))

return result
