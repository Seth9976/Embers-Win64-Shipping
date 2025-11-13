// 函数: sub_14219b0e0
// 地址: 0x14219b0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void* rsi = *(arg1 + 0x28)

if (rsi != 0)
    int64_t* rsi_1 = *(rsi + 0x88)
    
    if (rsi_1 != 0)
        int32_t rax = 0xe4
        
        if (*(arg1 + 0xb4) != 0)
            rax = 0x184
        
        void** var_e8
        sub_140b4c4f0(&var_e8, sx.q(rax + *(arg1 + 0xe8)), 0)
        int64_t rcx_1 = sx.q(*(arg1 + 0xe8))
        int64_t rdi
        rdi.b = *(arg1 + 0xb4) != 0
        
        if (rcx_1.d s> 0)
            char* rdx_2 = arg1 + 0xd0
            char* rax_2 = *(rdx_2 + 0x10)
            
            if (rax_2 != 0)
                rdx_2 = rax_2
            
            sub_140b53d10(&var_e8, rdx_2, rcx_1)
        
        sub_140b560b0(&var_e8, 1)
        sub_140b560b0(&var_e8, rdi.b)
        sub_140b560b0(&var_e8, arg2)
        int64_t* var_e0
        int64_t* rdx_5 = *var_e0
        
        if (&rdx_5[1] u> var_e0[1])
            int64_t* rdx_6 = &arg_18
            void*** rcx_7 = &var_e8
            char var_bf
            
            if ((var_bf & 0x20) != 0)
                sub_140b540d0(rcx_7, rdx_6, arg5)
            else
                var_e8[0x2a](rcx_7, rdx_6, 8)
        else
            arg_18 = *rdx_5
            *var_e0 += 8
        
        sub_140b53380(&var_e8, arg4, 0x14)
        
        if (*(arg1 + 0xb4) != 0)
            sub_140b53380(&var_e8, arg1 + 0xb5, 0x14)
        
        int64_t var_f8 = 0
        int64_t var_f0_1 = 0
        sub_1405947f0(&var_f8, 0x12)
        int32_t rax_6 = var_f0_1.d + 0x12
        var_f0_1.d = rax_6
        
        if (rax_6 s> 0)
            sub_140594770(&var_f8)
        
        int64_t rdi_1 = var_f8
        UnDecorator::getReferenceType(rdi_1, u"PostPacketHandler", 0x24)
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
        
        sub_140b560b0(&var_e8, 1)
        *(*(arg1 + 8) + 0x290) = 1
        int64_t* rcx_15 = rsi_1[0xb]
        int64_t var_58
        
        if ((*(*rcx_15 + 0x388))(rcx_15) != 0)
            int64_t rax_10 = *rsi_1
            var_f8.b = 1
            var_f8 = 0
            var_f0_1:4.w = 0
            int32_t var_48
            (*(rax_10 + 0x288))(rsi_1, var_58, zx.q(var_48), &var_f8, var_f8, var_f0_1)
        
        *(*(arg1 + 8) + 0x290) = 0
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        uint128_t zmm0_1
        zmm0_1.q = float.d(performanceCount)
        zmm0_1.q = zmm0_1.q f* data_143d796f8
        *(arg1 + 0x90) = arg2
        zmm0_1.q = zmm0_1.q f+ 16777216.0
        *(arg1 + 0x78) = zmm0_1.q
        *(arg1 + 0x98) = arg_18
        *(arg1 + 0x70) = sx.d(*arg4) & 0x3fff
        *(arg1 + 0x74) = sx.d(arg4[1]) & 0x3fff
        *(arg1 + 0xa0) = *arg4
        *(arg1 + 0xb0) = *(arg4 + 0x10)
        
        if (var_58 != 0)
            sub_140a74f90(var_58)
        
        return sub_140b4cb40(&var_e8)

return &__return_addr
