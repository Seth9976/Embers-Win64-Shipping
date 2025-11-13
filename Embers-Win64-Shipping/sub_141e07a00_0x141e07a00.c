// 函数: sub_141e07a00
// 地址: 0x141e07a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int128_t zmm7 = arg2
void var_58

if (arg3 == 0)
    int32_t i = 0
    
    if (*(arg1 + 0x80) s> 0)
        int64_t* rsi_1 = nullptr
        int128_t zmm6 = zx.o(0)
        
        do
            result = *(arg1 + 0x78)
            void** rdi_1 = *(rsi_1 + result)
            
            if (rdi_1 != 0)
                void* rdx_5 = *rdi_1
                
                if (rdx_5 == 0 || zmm6.d f== rdi_1[0x2a].d)
                    result.b = 0
                else
                    result.b = 1
                
                if (result.b != 0)
                    int64_t* rax_3
                    rax_3, zmm7 = sub_141ddd680(&var_58, rdx_5 + 0xe0, zmm7.d)
                    result, zmm6 = sub_141e31c70(rdi_1, rax_3, 1)
            
            i += 1
            rsi_1 = &rsi_1[1]
        while (i s< *(arg1 + 0x80))
else
    int32_t arg_18
    sub_140865c40(arg1 + 0x88, &arg_18, arg3)
    int64_t rax = sx.q(arg_18)
    void* const rcx_1
    
    if (rax.d == 0xffffffff)
        rcx_1 = nullptr
    else
        rcx_1 = *(arg1 + 0x88) + rax * 0x18
    
    result = rcx_1 + 8
    
    if (rcx_1 == 0)
        result = nullptr
    
    if (result != 0)
        void* const rbx_1 = *result
        
        if (rbx_1 != 0)
            return sub_141e31c70(rbx_1, sub_141ddd680(&var_58, arg3 + 0xe0, zmm7.d), 1)
return result
