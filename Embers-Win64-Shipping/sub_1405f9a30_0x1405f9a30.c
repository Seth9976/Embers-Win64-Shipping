// 函数: sub_1405f9a30
// 地址: 0x1405f9a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t var_58_1 = -2
EnterCriticalSection(arg1 + 0xa0)
uint64_t rax = zx.q(*(arg1 + 0x150))

if (rax.d s>= 0 && rax.d s< *(arg1 + 0x138) && (*(*(arg1 + 0x100) + 8))(arg1 + 0x100).d s< 0x100)
    rax = j_sub_140a82f30(0x38)
    uint64_t var_48 = rax
    
    if (rax == 0)
        rax = 0
    else
        *(rax + 8) = 1
        *(rax + 0xc) = 1
        *rax = &data_142d62b50
        *(rax + 0x10) = &data_142d5f0d8
        __builtin_memset(rax + 0x18, 0, 0x20)
    
    uint64_t var_30_1 = rax
    
    if (arg3 != 0)
        *(rax + 0x20) = 0
        
        if (arg3 s> *(rax + 0x24))
            sub_1405c5510(rax + 0x18, arg3)
        
        sub_1405f18d0(rax + 0x18, arg2, arg3)
        *(rax + 0x28) = arg4
        *(rax + 0x30) = arg5
        uint128_t zmm0_1 = (rax + 0x10).o
        var_48.o = zmm0_1
        void* rax_3 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_3 != 0)
            *(rax_3 + 8) += 1
        
        (**(arg1 + 0x100))(arg1 + 0x100, &var_48)
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                rax = zx.q(*(var_40 + 0xc))
                *(var_40 + 0xc) -= 1
                
                if (rax.d == 1)
                    (*(*var_40 + 8))(var_40, 1)
    
    if (var_30_1 != 0)
        rax = zx.q(*(var_30_1 + 8))
        *(var_30_1 + 8) -= 1
        
        if (rax.d == 1)
            (**var_30_1)(var_30_1)
            int32_t rdi_2 = *(var_30_1 + 0xc)
            *(var_30_1 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*var_30_1 + 8))(var_30_1, zx.q(rdi_2))

if (arg1 != -0xa0)
    LeaveCriticalSection(arg1 + 0xa0)
