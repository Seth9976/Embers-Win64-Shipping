// 函数: sub_1423913b0
// 地址: 0x1423913b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[8].b)
int64_t* rbx = arg1

if (result.b == 6)
label_14239146a:
    result = *rbx
    
    if ((*(result + 0x1f4) & 0x20) != 0)
        rbx[1].b = 1
        result = sub_14239a450(&rbx[4])
        void* rdx_1 = rbx[3]
        int32_t r8_2 = rbx[7].d
        int32_t rcx_5 = *(rdx_1 + 0x130)
        
        if (r8_2 s< rcx_5)
            void* rbx_1 = rbx[4]
            uint128_t zmm1_1
            zmm1_1.d = _mm_cvtepi32_ps(zx.o(rcx_5)).d f* arg5
            zmm1_1.d = zmm1_1.d f+ zmm1_1.d
            int32_t r9_3 = r8_2 - (int.d(-0.5f f- zmm1_1.d) s>> 1)
            
            if (rcx_5 s<= r9_3)
                r9_3 = rcx_5
            
            result = sub_1423b1860(rbx_1 + 0x10, rdx_1, r8_2, r9_3)
            *(rbx_1 + 0x30) = 1
    else if (rbx[1].b != 0)
        sub_14239a450(&rbx[4])
        int64_t* var_68
        sub_14237e7a0(&var_68, rbx[3])
        uint64_t result_1
        result = result_1
        int32_t i_1
        
        for (int32_t i = i_1; i s< *(result + 0x18); i = i_1)
            int64_t rsi_1 = sx.q(*(arg3 + 0x68))
            int32_t rax_5 = (rsi_1 + 1).d
            int64_t rbp_1 = *(*var_68 + sx.q(i) * 0x18)
            *(arg3 + 0x68) = rax_5
            
            if (rax_5 s> *(arg3 + 0x6c))
                sub_142396930(arg3, rsi_1.d)
            
            void* rax_6 = *(arg3 + 0x60)
            void* rcx_11 = arg3
            
            if (rax_6 != 0)
                rcx_11 = rax_6
            
            int32_t var_5c
            int32_t var_50 = var_50 & not.d(var_5c)
            *(rcx_11 + (rsi_1 << 3)) = rbp_1
            void var_60
            sub_14059bdd0(&var_60)
            result = result_1
        
        rbx[1].b = 0
else
    void* r8 = *arg1
    
    if ((*(r8 + 0x1f4) & 0x20) != 0)
    label_142391404:
        void var_40
        sub_1423a4f80(&var_40, 3, r8, &arg1[0xd])
        void* rax = *rbx
        
        while (true)
            sub_142390a00(rbx, arg2, &var_40, *(rax + 0x1f4) u>> 5 & 1, arg4)
            char rcx_2 = rbx[8].b
            
            if (rcx_2 == 6)
                break
            
            rax = *rbx
            
            if ((*(rax + 0x1f4) & 0x20) == 0)
                if (rcx_2 == 5)
                    break
                
                if (*arg4 s<= 0)
                    break
        
        sub_1423a6360(&var_40)
        result = zx.q(rbx[8].b)
    else if (result.b != 5 && *arg4 s> 0)
        goto label_142391404
    
    if (result.b == 6)
        goto label_14239146a

return result
