// 函数: sub_1417da2e0
// 地址: 0x1417da2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
*arg1 = 0
arg1[1] = 0
uint128_t zmm0 = data_143ef8a50.o
void* rdx = _mm_bsrli_si128(zmm0, 8).q

if (rdx != 0)
    *(rdx + 0xc) += 1
    rdx = zmm0:8.q

if (zmm0.q == 0)
label_1417da4af:
    
    if (rdx != 0)
        int32_t r15_1 = *(rdx + 0xc)
        *(rdx + 0xc) -= 1
        
        if (r15_1 == 1)
            int64_t* rcx_7 = zmm0:8.q
            (*(*rcx_7 + 8))(rcx_7, zx.q(r15_1))
else if (rdx != 0)
    int32_t rax_1 = 0
    
    if (0 == *(rdx + 8))
        *(rdx + 8) = 0
    else
        rax_1 = *(rdx + 8)
    
    if (rax_1 s> 0)
        int64_t* var_50_1 = zmm0:8.q
        int32_t rax_3 = 0
        bool z_1
        
        if (0 == *(rdx + 8))
            *(rdx + 8) = 0
            z_1 = true
        else
            rax_3 = *(rdx + 8)
            z_1 = false
        
        void* rax_5
        int64_t* r14_1
        
        if (z_1)
        label_1417da384:
            rax_5 = nullptr
            r14_1 = nullptr
            var_50_1 = nullptr
        else
            while (true)
                bool z_2
                
                if (rax_3 == *(rdx + 8))
                    *(rdx + 8) = rax_3 + 1
                    z_2 = true
                else
                    *(rdx + 8)
                    z_2 = false
                
                if (z_2)
                    rax_5 = zmm0.q
                    r14_1 = var_50_1
                    void* var_58_1 = rax_5
                    break
                
                rax_3 = 0
                bool z_3
                
                if (0 == *(rdx + 8))
                    *(rdx + 8) = 0
                    z_3 = true
                else
                    rax_3 = *(rdx + 8)
                    z_3 = false
                
                if (z_3)
                    goto label_1417da384
        
        int64_t* rcx_1 = *(rax_5 + 0x50)
        int64_t* var_38
        int64_t* rbx_1
        
        if (rcx_1 == 0)
            rbx_1 = nullptr
            int64_t var_30_1 = 0
            var_38 = nullptr
        else
            (*(*rcx_1 + 0x60))(rcx_1, &var_38)
            int32_t var_30
            r8 = var_30
            rbx_1 = var_38
        
        void* r12_1 = &rbx_1[sx.q(r8)]
        
        if (rbx_1 != r12_1)
            do
                void* rbp_1 = *rbx_1
                
                if (rbp_1 != 0)
                    void* rax_8 = sub_1417e5e10()
                    void* rdx_2 = *(rbp_1 + 0x10)
                    int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                    
                    if (rax_9.d s<= *(rdx_2 + 0x38)
                            && *(*(rdx_2 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30)
                        int64_t rsi_1 = sx.q(arg1[1].d)
                        int32_t rax_11 = (rsi_1 + 1).d
                        arg1[1].d = rax_11
                        
                        if (rax_11 s> *(arg1 + 0xc))
                            sub_1405a4d70(arg1)
                        
                        *(*arg1 + (rsi_1 << 3)) = rbp_1
                
                rbx_1 = &rbx_1[1]
            while (rbx_1 != r12_1)
            
            rbx_1 = var_38
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        if (r14_1 != 0)
            r14_1[1].d -= 1
            
            if (r14_1[1].d == 1)
                (**var_50_1)(var_50_1)
                int32_t rax_15 = *(var_50_1 + 0xc)
                *(var_50_1 + 0xc) -= 1
                
                if (rax_15 == 1)
                    (*(*var_50_1 + 8))(var_50_1, 1)
    
    rdx = zmm0:8.q
    goto label_1417da4af

return arg1
