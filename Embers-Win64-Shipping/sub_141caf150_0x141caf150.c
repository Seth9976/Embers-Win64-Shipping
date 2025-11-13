// 函数: sub_141caf150
// 地址: 0x141caf150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* r13 = arg1
int32_t rdx = arg2[1].d

if (rdx s> 0)
    int64_t* var_70 = nullptr
    int64_t var_68_1 = 0
    sub_14061cd70(&var_70, rdx)
    int64_t* rbx_1 = *arg2
    int64_t rdx_1 = sx.q(arg2[1].d)
    int32_t i_11 = var_68_1.d
    void* r14_3 = &rbx_1[rdx_1 * 2]
    uint64_t result_3
    
    if (rbx_1 != r14_3)
        int64_t* r15_1 = var_70
        
        do
            uint64_t* rax = sub_140ba59c0(&result_3, rbx_1)
            int64_t i_12 = sx.q(i_11)
            i_11 = (i_12 + 1).d
            var_68_1.d = i_11
            
            if (i_11 s> var_68_1:4.d)
                sub_1405a4f90(&var_70)
                i_11 = var_68_1.d
                r15_1 = var_70
            
            int64_t* rcx_5 = &r15_1[i_12 * 2]
            *rcx_5 = 0
            *rcx_5 = *rax
            *rax = 0
            rcx_5[1].d = rax[1].d
            *(rcx_5 + 0xc) = *(rax + 0xc)
            rax[1] = 0
            uint64_t result_4 = result_3
            
            if (result_4 != 0)
                sub_140a74f90(result_4)
            
            rbx_1 = &rbx_1[2]
        while (rbx_1 != r14_3)
        
        r13 = arg1
        rdx_1 = zx.q(arg2[1].d)
    
    int32_t i_5 = 0
    uint64_t var_80 = 0
    int32_t i_8 = 0
    int32_t i_7 = 0
    int32_t var_74_1 = 0
    
    if (rdx_1.d s> 0)
        sub_1405a5410(&var_80, rdx_1.d)
        i_5 = i_7
        i_8 = i_5
    
    int64_t* r14_4 = var_70
    void* r12_3 = &r14_4[sx.q(i_11) * 2]
    void* var_88
    
    if (r14_4 != r12_3)
        uint64_t rsi_1 = var_80
        
        do
            int16_t* rdx_4
            
            if (r14_4[1].d == 0)
                rdx_4 = &data_142d40450
            else
                rdx_4 = *r14_4
            
            int64_t rbx_2 = *sub_140b58260(&var_88, rdx_4, 1)
            i_8.q = rbx_2
            int64_t* rdx_10
            
            if (*(r13 + 0x60) == *(r13 + 0x8c))
            label_141caf31e:
                rdx_10 = nullptr
            else
                int32_t rax_7 = sub_140b5ead0(rbx_2.d) + arg3
                void* r8_1 = r13 + 0x90
                void* rcx_9 = *(r8_1 + 8)
                
                if (rcx_9 != 0)
                    r8_1 = rcx_9
                
                int32_t rax_9 = *(r8_1 + (((sx.q(*(r13 + 0xa0)) - 1) & sx.q(rax_7)) << 2))
                
                if (rax_9 == 0xffffffff)
                label_141caf31e_1:
                    rdx_10 = nullptr
                else
                    while (true)
                        rdx_10 = (sx.q(rax_9) << 5) + *(r13 + 0x58)
                        
                        if (*rdx_10 == rbx_2)
                            break
                        
                        rax_9 = rdx_10[3].d
                        
                        if (rax_9 == 0xffffffff)
                            goto label_141caf31e_2
                    
                    if (rax_9 == 0xffffffff)
                    label_141caf31e_2:
                        rdx_10 = nullptr
            
            void* rdi_2 = &rdx_10[1]
            
            if (rdx_10 == 0)
                rdi_2 = nullptr
            
            if (rdi_2 == 0 || *(rdi_2 + 8) s<= 0)
                int64_t i_10 = sx.q(i_5)
                i_5 = (i_10 + 1).d
                
                if (i_5 s> var_74_1)
                    sub_1405a4f90(&var_80)
                    rsi_1 = var_80
                
                int64_t rax_11 = i_10 * 2
                *(rsi_1 + (rax_11 << 3)) = 0
                *(rsi_1 + (rax_11 << 3) + 8) = 0
            else
                int64_t i_9 = sx.q(i_5)
                i_5 = (i_9 + 1).d
                
                if (i_5 s> var_74_1)
                    sub_1405a4f90(&var_80)
                
                int64_t* rbx_4 = (i_9 << 4) + var_80
                *rbx_4 = 0
                int64_t rsi_2 = sx.q(*(rdi_2 + 8))
                int64_t rdi_3 = *rdi_2
                rbx_4[1].d = rsi_2.d
                
                if (rsi_2.d != 0)
                    sub_1405c4a00(rbx_4, rsi_2.d, 0)
                    memcpy(*rbx_4, rdi_3, (rsi_2 << 3).d)
                    rsi_1 = var_80
                else
                    rsi_1 = var_80
                    *(rbx_4 + 0xc) = 0
            
            r14_4 = &r14_4[2]
        while (r14_4 != r12_3)
        
        i_8 = i_5
    
    result_3 = 0
    int32_t var_58_1 = 0
    int64_t* var_98 = nullptr
    int32_t i_6 = 0
    var_88 = r13 - 0x28
    sub_141caf5b0(r13 - 0x28, &var_98, arg2, 1, 0, &result_3, nullptr)
    int32_t i_3 = i_6
    int64_t* rsi_3 = var_98
    int64_t* rbx_5 = rsi_3
    
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx_15 = *rbx_5
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            rbx_5 = &rbx_5[2]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    if (rsi_3 != 0)
        sub_140a74f90(rsi_3)
    
    int64_t* rdi_4 = var_80
    uint64_t result_1 = result_3
    int64_t* r13_1 = rdi_4
    result = &rdi_4[sx.q(i_5) * 2]
    int64_t* arg_10 = rdi_4
    
    if (rdi_4 != result)
        void* const* result_2 = result
        
        do
            int64_t rsi_4 = 0
            int64_t** rdi_5 = *r13_1
            result = &rdi_5[r13_1[1]]
            uint64_t r14_6 = sx.q(r13_1[1].d) << 3 u>> 3
            
            if (rdi_5 u> result)
                r14_6 = 0
            
            if (r14_6 != 0)
                void* r13_2 = var_88
                int64_t rbx_6 = result_1 + (sx.q(var_58_1) << 3)
                
                do
                    int64_t* rdx_16 = *rdi_5
                    result = result_1
                    
                    if (result_1 == rbx_6)
                    label_141caf4e2:
                        result = sub_141caa8e0(r13_2, rdx_16)
                    else
                        while (*result != *rdx_16)
                            result = &result[1]
                            
                            if (result == rbx_6)
                                goto label_141caf4e2
                    
                    rdi_5 = &rdi_5[1]
                    rsi_4 += 1
                while (rsi_4 != r14_6)
                
                r13_1 = arg_10
            
            r13_1 = &r13_1[2]
            arg_10 = r13_1
        while (r13_1 != result_2)
        
        i_5 = i_8
        rdi_4 = var_80
    
    if (result_1 != 0)
        result = sub_140a74f90(result_1)
    
    int64_t* rbx_7 = rdi_4
    
    if (i_5 != 0)
        int32_t i_1
        
        do
            int64_t rcx_20 = *rbx_7
            
            if (rcx_20 != 0)
                result = sub_140a74f90(rcx_20)
            
            rbx_7 = &rbx_7[2]
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
    
    if (rdi_4 != 0)
        result = sub_140a74f90(rdi_4)
    
    int64_t* rsi_5 = var_70
    int32_t i_4 = i_11
    int64_t* rbx_8 = rsi_5
    
    if (i_4 != 0)
        int32_t i_2
        
        do
            int64_t rcx_22 = *rbx_8
            
            if (rcx_22 != 0)
                result = sub_140a74f90(rcx_22)
            
            rbx_8 = &rbx_8[2]
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
    
    if (rsi_5 != 0)
        return sub_140a74f90(rsi_5)

return result
