// 函数: sub_141b1d4a0
// 地址: 0x141b1d4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg4
int32_t* r14 = &arg3[4]
void* r13 = arg1
int32_t* var_80 = r14
uint64_t result = sub_141a51f20((*(*r15 + 8))(r15), r14, r15)
int64_t* result_2 = result

if (result != 0)
    bool cond:0_1 = (arg3[3] | arg3[2] | arg3[1] | *arg3) == 0
    int32_t rbx_1 = 0
    int32_t rdi_1 = 0
    void* r12_1 = nullptr
    void* var_a8 = nullptr
    int64_t var_a0_1 = 0
    
    if (cond:0_1)
        goto label_141b1d5cf
    
    void* var_98
    sub_141a4a790(r15, &var_98, arg3, r14)
    void* r14_1 = var_98
    int64_t r15_1 = 0
    int32_t var_90
    void* rcx_7 = r14_1 + (sx.q(var_90) << 3)
    result = (rcx_7 - r14_1 + 7) u>> 3
    
    if (r14_1 u> rcx_7)
        result = 0
    
    uint64_t result_1 = result
    
    if (result != 0)
        void* var_88
        
        do
            var_88 = *r14_1
            result = sub_140d3c6e0(&var_88)
            uint64_t result_3 = result
            
            if (result != 0)
                int64_t rsi_1 = sx.q(rdi_1)
                rdi_1 = (rsi_1 + 1).d
                var_a0_1.d = rdi_1
                
                if (rdi_1 s> rbx_1)
                    result = sub_1405a4d70(&var_a8)
                    rdi_1 = var_a0_1.d
                    r12_1 = var_a8
                    rbx_1 = var_a0_1:4.d
                
                *(r12_1 + (rsi_1 << 3)) = result_3
            
            r14_1 += 8
            r15_1 += 1
        while (r15_1 != result_1)
        
        if (rdi_1 != 0)
            r15 = arg4
            r13 = arg1
            r14 = var_80
        label_141b1d5cf:
            int32_t rdx_3 = *(r13 + 0x50)
            
            if (rdx_3 != 0)
                if (rdx_3 s> rbx_1)
                    sub_1405c5570(&var_a8, rdx_3)
                    rdi_1 = var_a0_1.d
                    r12_1 = var_a8
                
                void* rax_7 = *(r13 + 0x48)
                void* rdx_4 = r13 + 0x18
                
                if (rax_7 != 0)
                    rdx_4 = rax_7
                
                int64_t rax_8 = sx.q(*(r13 + 0x50))
                var_88 = rdx_4
                void* rax_9 = rdx_4 + rax_8 * 0x18
                
                if (rdx_4 != rax_9)
                    do
                        int64_t rax_10 = *r15
                        int64_t zmm1_1 = *(rdx_4 + 0x10)
                        int128_t var_70 = *rdx_4
                        int64_t var_60_1 = zmm1_1
                        void* rax_11 = (*(rax_10 + 8))(r15, zmm1_1)
                        void var_50
                        int32_t* rax_12 =
                            sub_141a644b0(&var_70, &var_50, *r14, *(rax_11 + 8) + 0xd0)
                        var_70 = *(rax_12 + 8)
                        int64_t r9_4 = sx.q(*rax_12)
                        var_70.d = r9_4.d
                        var_70:4.b = rax_12[1].b
                        int32_t* rcx_18
                        
                        if (r15[0x16].d == *(r15 + 0xdc))
                        label_141b1d6d0:
                            rcx_18 = nullptr
                        else
                            void* r8_3 = &r15[0x1c]
                            void* rcx_14 = *(r8_3 + 8)
                            
                            if (rcx_14 != 0)
                                r8_3 = rcx_14
                            
                            int32_t rax_15 = *(r8_3 + (((sx.q(r15[0x1e].d) - 1) & r9_4) << 2))
                            
                            if (rax_15 == 0xffffffff)
                            label_141b1d6d0_1:
                                rcx_18 = nullptr
                            else
                                while (true)
                                    rcx_18 = sx.q(rax_15) * 0xc0 + r15[0x15]
                                    
                                    if (*rcx_18 == r9_4.d)
                                        break
                                    
                                    rax_15 = rcx_18[0x2e]
                                    
                                    if (rax_15 == 0xffffffff)
                                        goto label_141b1d6d0_2
                                
                                if (rax_15 == 0xffffffff)
                                label_141b1d6d0_2:
                                    rcx_18 = nullptr
                        
                        void* rax_16 = &rcx_18[2]
                        
                        if (rcx_18 == 0)
                            rax_16 = nullptr
                        
                        int32_t rax_17
                        void* rbx_2
                        
                        if (rax_16 == 0)
                            rbx_2 = nullptr
                            rax_17 = 0
                            var_98 = nullptr
                            var_90 = 0
                        else
                            sub_141a4a6a0(rax_16, &var_98, &var_70:8, r15)
                            rax_17 = var_90
                            rbx_2 = var_98
                        
                        int64_t r14_2 = 0
                        void* rcx_20 = rbx_2 + (sx.q(rax_17) << 3)
                        uint64_t r13_4 = (rcx_20 - rbx_2 + 7) u>> 3
                        
                        if (rbx_2 u> rcx_20)
                            r13_4 = 0
                        
                        if (r13_4 != 0)
                            do
                                result_1 = *rbx_2
                                int64_t rax_20 = sub_140d3c6e0(&result_1)
                                
                                if (rax_20 != 0)
                                    int64_t rsi_2 = sx.q(rdi_1)
                                    rdi_1 = (rsi_2 + 1).d
                                    var_a0_1.d = rdi_1
                                    
                                    if (rdi_1 s> var_a0_1:4.d)
                                        sub_1405a4d70(&var_a8)
                                        rdi_1 = var_a0_1.d
                                        r12_1 = var_a8
                                    
                                    *(r12_1 + (rsi_2 << 3)) = rax_20
                                
                                rbx_2 += 8
                                r14_2 += 1
                            while (r14_2 != r13_4)
                            
                            r15 = arg4
                        
                        r14 = var_80
                        rdx_4 = var_88 + 0x18
                        var_88 = rdx_4
                    while (rdx_4 != rax_9)
                    
                    r13 = arg1
            
            if (rdi_1 == 0)
                int64_t* rax_22 = (*(*r15 + 0x88))(r15, &var_98)
                
                if (&var_a8 != rax_22)
                    if (r12_1 != 0)
                        sub_140a74f90(r12_1)
                    
                    r12_1 = *rax_22
                    *rax_22 = 0
                    rdi_1 = rax_22[1].d
                    rax_22[1] = 0
                
                void* rcx_25 = var_98
                
                if (rcx_25 != 0)
                    sub_140a74f90(rcx_25)
            
            int64_t* rbx_4 = *(r13 + 8)
            result = sx.q(*(r13 + 0x10))
            void* rsi_3 = &rbx_4[result * 5]
            
            if (rbx_4 != rsi_3)
                int64_t* result_4 = result_2
                
                do
                    int64_t rdx_13 = *rbx_4
                    
                    if (*(rdx_13 + 0xb4) != 0)
                        var_98 = r12_1
                        int32_t var_90_1 = rdi_1
                        var_a8.o = var_98.o
                        result = sub_141b34b10(r13, result_4, rbx_4, &var_a8, r15, *var_80)
                    else
                        result = (*(*result_2 + 0x210))(result_2, rdx_13, 0)
                        result_4 = result_2
                    
                    rbx_4 = &rbx_4[5]
                while (rbx_4 != rsi_3)
            
            goto label_141b1d86c
        
    label_141b1d86c:
        
        if (r12_1 != 0)
            return sub_140a74f90(r12_1)

return result
