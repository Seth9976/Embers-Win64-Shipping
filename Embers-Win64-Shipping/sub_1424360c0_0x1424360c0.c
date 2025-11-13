// 函数: sub_1424360c0
// 地址: 0x1424360c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void* rdi = arg3
int64_t r12 = sx.q(arg4)
void* r8_2 = (r12 << 6) + *(*(arg1 + 8) + 0x28)

if (*(r8_2 + 0x24) != 0)
    int64_t rax_2 = *(arg1 + 0x20)
    void* rcx = *(rax_2 + (r12 << 3))
    void** rsi_1 = rax_2 + (r12 << 3)
    
    if (rcx == 0)
        void* var_60_1 = nullptr
        int32_t i_4 = 0
        int32_t var_54_1 = 4
        int64_t* var_b0
        void var_80
        sub_14243f910(arg1, &var_b0, &var_80, r12.d, 0, zx.q(*(r8_2 + 0x24)), arg5)
        int32_t var_a8
        void* rcx_26
        
        if (var_a8 - 2 u<= 1)
            data_143f5e410 += 1
            void** rax_17 = j_sub_140a82f30(0x68)
            
            if (rax_17 == 0)
                rax_17 = nullptr
            else
                __builtin_memset(rax_17, 0, 0x68)
            
            void** rbx_2 = *rsi_1
            void** rcx_13 = rbx_2
            
            if (rbx_2 != rax_17)
                *rsi_1 = rax_17
                rcx_13 = rax_17
                
                if (rbx_2 != 0)
                    sub_142429790(rbx_2)
                    j_sub_140a74f90(rbx_2)
                    rcx_13 = *rsi_1
            
            sub_14243b170(rcx_13)
            *(*rsi_1 + 0x18) = arg1
            *(*rsi_1 + 0x60) = r12.d
            *(*rsi_1 + 0x64) = data_14399fa54
            void* rbx_3 = *rsi_1
            void var_98
            void** rax_21 = sub_142430050(&var_98, &var_80, 0xff)
            int64_t* rcx_18 = var_b0
            void* rdx_7 = *rax_21
            *(rdx_7 + 0x10) = rcx_18
            
            if (rcx_18 != 0)
                rcx_18[1].d += 1
            
            *(rdx_7 + 0x18) = rbx_3
            void* rcx_19 = *rax_21
            int32_t r8_4 = rax_21[2].d
            int64_t* rdx_8 = rax_21[1]
            int64_t* rbx_4 = *(rcx_19 + 0x28)
            int64_t* var_a0 = rbx_4
            
            if (rbx_4 != 0)
                rbx_4[9].d += 1
            
            sub_140a39c10(rcx_19, rdx_8, r8_4, 1)
            void* rax_23 = *rsi_1 + 0x10
            
            if (rax_23 != &var_a0)
                int64_t* rcx_20 = *rax_23
                *rax_23 = rbx_4
                
                if (rcx_20 != 0)
                    rcx_20[9].d -= 1
                    
                    if (rcx_20[9].d == 1)
                        sub_140a2f6e0(rcx_20)
            else if (rbx_4 != 0)
                rbx_4[9].d -= 1
                
                if (rbx_4[9].d == 1)
                    sub_140a2f6e0(var_a0)
            
            int64_t rbx_5 = sx.q(*(rdi + 0x28))
            void* r15_2 = *rsi_1
            int32_t rax_26 = (rbx_5 + 1).d
            *(rdi + 0x28) = rax_26
            
            if (rax_26 s> *(rdi + 0x2c))
                sub_14083a490(rdi, rbx_5.d)
            
            void* rax_27 = *(rdi + 0x20)
            void* rcx_22 = *(r15_2 + 0x10)
            
            if (rax_27 != 0)
                rdi = rax_27
            
            *(rdi + (rbx_5 << 3)) = rcx_22
            
            if (rcx_22 != 0)
                *(rcx_22 + 0x48) += 1
            
            int64_t* rcx_23 = var_b0
            *arg2 = *rsi_1
            arg2[1].d = 2
            
            if (rcx_23 != 0)
                rcx_23[1].d -= 1
                
                if (rcx_23[1].d == 1)
                    int64_t* rcx_24 = var_b0
                    (*(*rcx_24 + 0x18))(rcx_24, 1)
            
            rcx_26 = var_60_1
            void* rbx_6 = &var_80
            int32_t i_3 = i_4
            
            if (rcx_26 != 0)
                rbx_6 = rcx_26
            
            if (i_3 != 0)
                int32_t i
                
                do
                    int64_t* rcx_25 = *rbx_6
                    
                    if (rcx_25 != 0)
                        rcx_25[9].d -= 1
                        
                        if (rcx_25[9].d == 1)
                            sub_140a2f6e0(rcx_25)
                    
                    rbx_6 += 8
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                rcx_26 = var_60_1
        else
            arg2[1].d = var_a8
            int64_t* rcx_10 = var_b0
            *arg2 = 0
            
            if (rcx_10 != 0)
                rcx_10[1].d -= 1
                
                if (rcx_10[1].d == 1)
                    int64_t* rcx_11 = var_b0
                    (*(*rcx_11 + 0x18))(rcx_11, 1)
            
            rcx_26 = var_60_1
            void* rbx_1 = &var_80
            int32_t i_2 = i_4
            
            if (rcx_26 != 0)
                rbx_1 = rcx_26
            
            if (i_2 != 0)
                int32_t i_1
                
                do
                    int64_t* rcx_12 = *rbx_1
                    
                    if (rcx_12 != 0)
                        rcx_12[9].d -= 1
                        
                        if (rcx_12[9].d == 1)
                            sub_140a2f6e0(rcx_12)
                    
                    rbx_1 += 8
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                rcx_26 = var_60_1
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
    else
        void* rcx_1 = *(rcx + 0x10)
        int64_t rax_3
        
        if (rcx_1 != 0)
            rax_3 = 0
            
            if (0 == *(rcx_1 + 8))
                *(rcx_1 + 8) = 0
            else
                rax_3 = *(rcx_1 + 8)
        
        int32_t rdi_1
        
        if (rcx_1 == 0 || ((rax_3 u>> 0x1a).b & 1) != 0)
            rdi_1 = 1
        else
            int64_t r15_1 = sx.q(*(rdi + 0x28))
            void* r13_1 = *rsi_1
            int32_t rax_5 = (r15_1 + 1).d
            *(rdi + 0x28) = rax_5
            
            if (rax_5 s> *(rdi + 0x2c))
                sub_14083a490(rdi, r15_1.d)
            
            void* rax_6 = *(rdi + 0x20)
            void* rcx_3 = *(r13_1 + 0x10)
            
            if (rax_6 != 0)
                rdi = rax_6
            
            *(rdi + (r15_1 << 3)) = rcx_3
            rdi_1 = 0
            
            if (rcx_3 != 0)
                *(rcx_3 + 0x48) += 1
        
        int64_t* rcx_4 = *rsi_1
        void* rdx_2 = *rcx_4
        
        if (rdx_2 != 0)
            *(rdx_2 + 8) = rcx_4[1]
        
        int64_t* rdx_3 = rcx_4[1]
        
        if (rdx_3 != 0)
            *rdx_3 = *rcx_4
        
        *rcx_4 = 0
        rcx_4[1] = 0
        sub_14243b170(*rsi_1)
        *(*rsi_1 + 0x64) = data_14399fa54
        *arg2 = *rsi_1
        arg2[1].d = rdi_1 + 2
else
    *arg2 = 0
    arg2[1].d = 3

__security_check_cookie(rax_1 ^ &var_f8)
return arg2
