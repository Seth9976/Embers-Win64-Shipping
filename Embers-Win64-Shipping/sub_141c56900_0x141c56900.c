// 函数: sub_141c56900
// 地址: 0x141c56900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = EnterCriticalSection(arg1)
int64_t* i = *arg4

for (void* r14_2 = &i[sx.q(arg4[1].d) * 2]; i != r14_2; i = &i[2])
    result = *i
    
    if (result != 0)
        *(arg3 + 0x10) = *(result + 0xc)
        int64_t* rsi_1 = *i
        int64_t* rax_2 = (*(*rsi_1 + 0x280))(rsi_1)
        sub_140d3a3a0(rax_2 + 0x4c, rsi_1)
        int64_t r8 = *rax_2
        (*(r8 + 0x10))(rax_2, arg3, r8)
        void*** rax_3 = j_sub_140a82f30(0x18)
        
        if (rax_3 != 0)
            rax_3[1].d = 1
            *(rax_3 + 0xc) = 1
            *rax_3 = &data_142d42ea8
            rax_3[2] = rax_2
        
        uint128_t zmm0_1 = rax_2.o
        uint128_t var_38 = zmm0_1
        void* rax_4 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_4 != 0)
            *(rax_4 + 8) += 1
        
        sub_142357580(rsi_1, &var_38)
        int64_t* rbx_2 = var_38:8.q
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rax_7 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_7 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        sub_142376b50(rax_2, not.b(i[1].b) & 1)
        void* rbp_2 = sx.q(arg2) * 0x3f0 + arg1->__offset(0xc8).q
        int64_t rsi_2 = sx.q(*(rbp_2 + 0x1b0))
        int32_t rax_9 = (rsi_2 + 1).d
        *(rbp_2 + 0x1b0) = rax_9
        
        if (rax_9 s> *(rbp_2 + 0x1b4))
            sub_1405a4f90(rbp_2 + 0x1a8)
        
        int64_t** rcx_10 = (rsi_2 << 4) + *(rbp_2 + 0x1a8)
        *rcx_10 = rax_2
        rcx_10[1] = rax_3
        
        if (rax_3 != 0)
            rax_3[1].d += 1
        
        int64_t rsi_3 = sx.q(*(rbp_2 + 0x1c0))
        int32_t rax_13 = (rsi_3 + 1).d
        *(rbp_2 + 0x1c0) = rax_13
        
        if (rax_13 s> *(rbp_2 + 0x1c4))
            sub_1405a4d70(rbp_2 + 0x1b8)
        
        result = *(rbp_2 + 0x1b8)
        *(result + (rsi_3 << 3)) = 0
        
        if (rax_3 != 0)
            result = zx.q(rax_3[1].d)
            rax_3[1].d -= 1
            
            if (result.d == 1)
                (**rax_3)(rax_3)
                result = zx.q(*(rax_3 + 0xc))
                *(rax_3 + 0xc) -= 1
                
                if (result.d == 1)
                    result = (*rax_3)[1](rax_3, 1)

if (arg1 == 0)
    return result

return LeaveCriticalSection(arg1) __tailcall
