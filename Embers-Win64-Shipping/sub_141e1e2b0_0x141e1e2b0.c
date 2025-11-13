// 函数: sub_141e1e2b0
// 地址: 0x141e1e2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t* rcx = *(arg1 + 0x30)
int64_t r8_1

if (rcx != 0)
    r8_1 = *(*arg2 + 0xb0)

int64_t result

if (rcx != 0 && r8_1 != 0 && rcx[7] == r8_1)
    int32_t var_1c8
    
    if (arg2[8].b != 0 && (*(*rcx + 0x278))() == 0)
        void* rbx_2 = *arg2
        int64_t var_180 = *(*(arg1 + 0x30) + 0x18)
        int64_t var_138
        sub_140b63b70(&var_180, &var_138)
        void var_e0
        int64_t* rax_7 = sub_140aae420(&var_e0, rbx_2 + 0xc8)
        void var_c8
        int64_t* rax_8 = sub_140aae2f0(&var_c8, &var_138)
        void var_108
        char* var_f0
        char** rax_10 = sub_140a96390(&var_f0, 
            _vfprintf_p_l(&var_108, 
                Trying to play a non-additive animation '{0}' into a pose that is expected to be additive in "
        "anim instance '{1}'", 
            AnimNode_SequencePlayer"))
        int64_t var_98_1 = *rax_8
        void* rcx_8 = rax_8[1]
        int32_t var_a8_1 = 4
        void* var_90_1 = rcx_8
        
        if (rcx_8 != 0)
            *(rcx_8 + 8) += 1
        
        int32_t var_88_1 = rax_8[2].d
        int64_t var_68_1 = *rax_7
        void* rax_13 = rax_7[1]
        char var_80_1 = 1
        int32_t var_78_1 = 4
        void* var_60_1 = rax_13
        
        if (rax_13 != 0)
            *(rax_13 + 8) += 1
        
        int64_t i_1 = 2
        int32_t var_58_1 = rax_7[2].d
        char var_50_1 = 1
        void* var_1b8 = nullptr
        int32_t var_1b0_1 = 2
        sub_1405a4b40(&var_1b8, 2, 0)
        void var_a0
        void* rdx_4 = &var_a0
        int64_t* rcx_11 = var_1b8 + 8
        int32_t i_2 = 2
        int32_t i
        
        do
            rcx_11[-1].d = *(rdx_4 - 8)
            *rcx_11 = *rdx_4
            *rcx_11 = *rdx_4
            *rcx_11 = *rdx_4
            *rcx_11 = *rdx_4
            rcx_11[4].b = 0
            
            if (*(rdx_4 + 0x20) != 0)
                rcx_11[1] = *(rdx_4 + 8)
                void* rax_21 = *(rdx_4 + 0x10)
                rcx_11[2] = rax_21
                
                if (rax_21 != 0)
                    *(rax_21 + 8) += 1
                
                rcx_11[3].d = *(rdx_4 + 0x18)
                rcx_11[4].b = 1
            
            rcx_11 = &rcx_11[6]
            rdx_4 += 0x30
            i = i_2
            i_2 -= 1
        while (i != 1)
        char* var_148 = *rax_10
        void* rax_24 = rax_10[1]
        void* var_140_1 = rax_24
        
        if (rax_24 != 0)
            *(rax_24 + 8) += 1
        
        void var_120
        int64_t* rax_25 = sub_140aac870(&var_120, &var_148, &var_1b8)
        int64_t* rsi_1 = rax_25[1]
        int64_t rcx_13 = *rax_25
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        var_1c8 = rax_25[2].d
        int64_t* var_118
        
        if (var_118 != 0)
            var_118[1].d -= 1
            
            if (var_118[1].d == 1)
                (**var_118)(var_118)
                int32_t rax_29 = *(var_118 + 0xc)
                *(var_118 + 0xc) -= 1
                
                if (rax_29 == 1)
                    (*(*var_118 + 8))(var_118, 1)
        
        sub_140596f50(&var_1b8)
        int64_t __saved_rdi
        int64_t* r14_1 = &__saved_rdi
        
        do
            i_1 -= 1
            r14_1 = &r14_1[-6]
            
            if (*r14_1 != 0)
                *r14_1 = 0
                int64_t* rbx_5 = r14_1[-2]
                
                if (rbx_5 != 0)
                    rbx_5[1].d -= 1
                    
                    if (rbx_5[1].d == 1)
                        (**rbx_5)(rbx_5)
                        int32_t rax_33 = *(rbx_5 + 0xc)
                        *(rbx_5 + 0xc) -= 1
                        
                        if (rax_33 == 1)
                            (*(*rbx_5 + 8))(rbx_5, 1)
        while (i_1 != 0)
        
        int64_t* rbx_7 = rax_10[1]
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t rax_37 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (rax_37 == 1)
                    (*(*rbx_7 + 8))(rbx_7, 1)
        
        int64_t* rbx_9 = rax_8[1]
        
        if (rbx_9 != 0)
            rbx_9[1].d -= 1
            
            if (rbx_9[1].d == 1)
                (**rbx_9)(rbx_9)
                int32_t rax_41 = *(rbx_9 + 0xc)
                *(rbx_9 + 0xc) -= 1
                
                if (rax_41 == 1)
                    (*(*rbx_9 + 8))(rbx_9, 1)
        
        int64_t* rbx_10 = rax_7[1]
        
        if (rbx_10 != 0)
            rbx_10[1].d -= 1
            
            if (rbx_10[1].d == 1)
                (**rbx_10)(rbx_10)
                int32_t rax_45 = *(rbx_10 + 0xc)
                *(rbx_10 + 0xc) -= 1
                
                if (rax_45 == 1)
                    (*(*rbx_10 + 8))(rbx_10, 1)
        
        int64_t* var_100
        
        if (var_100 != 0)
            var_100[1].d -= 1
            
            if (var_100[1].d == 1)
                (**var_100)(var_100)
                int32_t rax_49 = *(var_100 + 0xc)
                *(var_100 + 0xc) -= 1
                
                if (rax_49 == 1)
                    (*(*var_100 + 8))(var_100, 1)
        
        int64_t rcx_27 = var_138
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        int64_t var_160 = rcx_13
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        int32_t var_150_1 = var_1c8
        void var_128
        sub_140b58170(&var_128, "Evaluate", 1)
        *arg2
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t rax_55 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (rax_55 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t rax_59 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (rax_59 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
            
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t rdi_2 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (rdi_2 == 1)
                    (*(*rsi_1 + 8))(rsi_1, zx.q(rdi_2))
    
    uint8_t var_1a8 = *(*arg2 + 0x6d9) u>> 1 & 1
    int32_t zmm0 = *(arg1 + 0x1c)
    int64_t var_1a0
    __builtin_memset(&var_1a0, 0, 0x20)
    int64_t* rcx_37 = *(arg1 + 0x30)
    int32_t var_1a4_1 = zmm0
    result = (*(*rcx_37 + 0x2c0))(rcx_37, &arg2[1], &arg2[4], &var_1a8, var_1c8, arg1)
    int64_t var_190
    
    if (var_190 != 0)
        result = sub_140a74f90(var_190)
    
    int64_t rcx_39 = var_1a0
    
    if (rcx_39 != 0)
        result = sub_140a74f90(rcx_39)
else if (arg2[8].b == 0)
    result = sub_141e0ba30(&arg2[1])
else
    result = sub_141e47c50(&arg2[1], arg3)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
