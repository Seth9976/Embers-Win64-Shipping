// 函数: sub_140850920
// 地址: 0x140850920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t* result = __security_cookie ^ &var_d8
int64_t* result_1 = result

if (*(arg1 + 0xe58) s> 0)
    void* rax_1 = *(arg2 + 0x30)
    void** var_50_1 = nullptr
    int32_t var_44_1 = 4
    int32_t i_2 = 1
    void* var_70 = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 0x48) += 1
    
    void* rdi_1 = arg1 + 0xe30
    
    if (*(arg2 + 0x41) == 0)
        void* rax_6 = *(rdi_1 + 0x20)
        void* rbx_3 = rdi_1
        
        if (rax_6 != 0)
            rbx_3 = rax_6
        
        int64_t rdi_2 = 0
        int64_t rsi_2 = sx.q(*(rdi_1 + 0x28)) << 3
        uint64_t rsi_3 = rsi_2 u>> 3
        
        if (rbx_3 u> rsi_2 + rbx_3)
            rsi_3 = 0
        
        if (rsi_3 != 0)
            do
                sub_14085eed0(*rbx_3)
                rdi_2 += 1
                rbx_3 += 8
            while (rdi_2 != rsi_3)
    else
        void var_a0
        int64_t* rax_2 = sub_14084d190(&var_a0, nullptr, 0xff)
        void* rcx_1 = *rax_2
        *(rcx_1 + 0x10) = arg1
        void* rbx_1 = rcx_1 + 0x18
        *(rbx_1 + 0x20) = 0
        int64_t r15_1 = sx.q(*(rdi_1 + 0x28))
        void* r12_1 = *(rdi_1 + 0x20)
        *(rbx_1 + 0x28) = r15_1.d
        
        if (r15_1.d != 0)
            sub_14085a010(rbx_1, r15_1.d, 0)
            void* rax_3 = *(rbx_1 + 0x20)
            
            if (r12_1 != 0)
                rdi_1 = r12_1
            
            if (rax_3 != 0)
                rbx_1 = rax_3
            
            memcpy(rbx_1, rdi_1, (r15_1 << 3).d)
        else
            *(rbx_1 + 0x2c) = 4
        
        void* rcx_4 = *rax_2
        int64_t* rbx_2 = *(rcx_4 + 0x50)
        int64_t* var_b0_1 = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[9].d += 1
            rbx_2 = var_b0_1
        
        sub_14085c6a0(rcx_4, rax_2[1], rax_2[2].d, 1)
        int64_t i_4 = sx.q(i_2)
        int32_t i_3 = (i_4 + 1).d
        i_2 = i_3
        
        if (i_3 s> var_44_1)
            sub_14083a490(&var_70, i_4.d)
        
        void** rcx_6 = &var_70
        
        if (var_50_1 != 0)
            rcx_6 = var_50_1
        
        rcx_6[i_4] = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[9].d += 1
            rbx_2[9].d -= 1
            
            if (rbx_2[9].d == 1)
                sub_140a2f6e0(var_b0_1)
    
    if (*(arg2 + 0x40) != 0 || *(arg2 + 0x41) != 0)
        void* rsi_4 = arg1 + 0xe30
        void var_88
        int64_t* rax_9 = sub_14084d310(&var_88, &var_70, 0xff)
        void* rcx_10 = *rax_9
        *(rcx_10 + 0x10) = arg1
        void* rbx_4 = rcx_10 + 0x18
        *(rbx_4 + 0x20) = 0
        int64_t r15_2 = sx.q(*(rsi_4 + 0x28))
        void* r12_2 = *(rsi_4 + 0x20)
        *(rbx_4 + 0x28) = r15_2.d
        
        if (r15_2.d != 0)
            sub_14085a010(rbx_4, r15_2.d, 0)
            void* rax_10 = *(rbx_4 + 0x20)
            
            if (r12_2 != 0)
                rsi_4 = r12_2
            
            if (rax_10 != 0)
                rbx_4 = rax_10
            
            memcpy(rbx_4, rsi_4, (r15_2 << 3).d)
        else
            *(rbx_4 + 0x2c) = 4
        
        void* rcx_13 = *rax_9
        int64_t* rbx_5 = *(rcx_13 + 0x50)
        int64_t* var_a8_1 = rbx_5
        
        if (rbx_5 != 0)
            rbx_5[9].d += 1
            rbx_5 = var_a8_1
        
        sub_14085c960(rcx_13, rax_9[1], rax_9[2].d, 1)
        void* rdi_4 = *(arg2 + 0x38)
        int64_t rsi_5 = sx.q(*(rdi_4 + 0x28))
        int32_t rax_11 = (rsi_5 + 1).d
        *(rdi_4 + 0x28) = rax_11
        
        if (rax_11 s> *(rdi_4 + 0x2c))
            sub_14083a490(rdi_4, rsi_5.d)
        
        void* rax_12 = *(rdi_4 + 0x20)
        
        if (rax_12 != 0)
            rdi_4 = rax_12
        
        *(rdi_4 + (rsi_5 << 3)) = rbx_5
        
        if (rbx_5 != 0)
            rbx_5[9].d += 1
            rbx_5[9].d -= 1
            
            if (rbx_5[9].d == 1)
                sub_140a2f6e0(var_a8_1)
    
    result = zx.q(*(arg1 + 0xe5c))
    *(arg1 + 0xe58) = 0
    
    if (result.d s< 0 && result.d != 0)
        result = sub_14085a940(arg1 + 0xe30, 0)
    
    void** rbx_6 = &var_70
    int32_t i_1 = i_2
    
    if (var_50_1 != 0)
        rbx_6 = var_50_1
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t* rcx_18 = *rbx_6
            
            if (rcx_18 != 0)
                result = zx.q(rcx_18[9].d)
                rcx_18[9].d -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(rcx_18)
            
            rbx_6 = &rbx_6[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (var_50_1 != 0)
        result = sub_140a74f90(var_50_1)

__security_check_cookie(result_1 ^ &var_d8)
return result
