// 函数: sub_1417c0c10
// 地址: 0x1417c0c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t result = *arg2
int64_t r15 = 0
int64_t* r12 = *(arg1 + 0x10)
int64_t* rbx = nullptr
int64_t* rdi = *(arg1 + 0x18)
int64_t* rsi = arg2
uint64_t i_6 = zx.q(*(arg3 + 8))
int64_t r13 = sx.q(*(result + 8))
int64_t* var_120 = nullptr
int32_t result_1 = 0
int32_t var_114 = 0

if (r12 != 0)
    result = (*(*r12 + 8))(r12)
    int64_t* var_e0
    
    if (result.d == 3)
        void* const rcx_5
        
        if (rsi[3].d == *(rsi + 0x44))
        label_1417c0cf1:
            rcx_5 = nullptr
        else
            void* rax_4 = rsi[0xa]
            void* rdx = &rsi[9]
            
            if (rax_4 != 0)
                rdx = rax_4
            
            int32_t rax_5 = *(rdx + ((zx.q(rsi[0xb].d - 1) & 4) << 2))
            
            if (rax_5 == 0xffffffff)
            label_1417c0cf1_1:
                rcx_5 = nullptr
            else
                int64_t r8 = rsi[2]
                
                while (true)
                    int64_t rdx_1 = sx.q(rax_5) * 3
                    rcx_5 = r8 + (rdx_1 << 3)
                    
                    if (*(r8 + (rdx_1 << 3)) == 4)
                        break
                    
                    rax_5 = *(rcx_5 + 0x10)
                    
                    if (rax_5 == 0xffffffff)
                        goto label_1417c0cf1_2
                
                if (rax_5 == 0xffffffff)
                label_1417c0cf1_2:
                    rcx_5 = nullptr
        
        void* rax_6 = *(rcx_5 + 8)
        
        if (rax_6 != 0)
            *(rax_6 + 8) = 1
        
        int64_t* var_108 = nullptr
        int64_t var_100_1 = 0
        
        if (i_6.d != 0)
            sub_1405dadb0(&var_108, i_6.d)
            rbx = var_108
            
            if (i_6.d s> 0)
                uint64_t i_4 = i_6
                uint64_t i
                
                do
                    int64_t rdi_1 = sx.q(var_100_1.d)
                    int32_t rax_7 = (rdi_1 + 1).d
                    var_100_1.d = rax_7
                    
                    if (rax_7 s> var_100_1:4.d)
                        sub_1406105e0(&var_108)
                        rbx = var_108
                    
                    int32_t* rdx_4 = rbx + (rdi_1 << 2)
                    
                    if (rdx_4 != 0)
                        *rdx_4 = 0
                    
                    i = i_4
                    i_4 -= 1
                while (i != 1)
                rsi = arg2
        
        int64_t rax_8 = *r12
        var_e0 = rbx
        int32_t var_d8_1 = i_6.d
        result = (*(rax_8 + 0x30))(r12, rsi, &var_e0)
        void* r14 = arg1
        int32_t result_2 = 0
        int64_t r10_1 = 0
        
        if (r13 s>= 4)
            int32_t r8_2 = *(r14 + 0x20)
            void* rcx_10 = **rsi + 0xc
            int64_t i_5 = ((r13 - 4) u>> 2) + 1
            r10_1 = i_5 << 2
            int64_t i_1
            
            do
                int64_t rax_10 = sx.q(*(rcx_10 - 8))
                
                if (r8_2 != 1)
                    if (not(0f f!= *(rbx + (rax_10 << 2))))
                        result_2 += 1
                else if (not(0f f== *(rbx + (rax_10 << 2))))
                    result_2 += 1
                
                int64_t rax_11 = sx.q(*rcx_10)
                
                if (r8_2 != 1)
                    if (not(0f f!= *(rbx + (rax_11 << 2))))
                        result_2 += 1
                else if (not(0f f== *(rbx + (rax_11 << 2))))
                    result_2 += 1
                
                int64_t rax_12 = sx.q(*(rcx_10 + 8))
                
                if (r8_2 != 1)
                    if (not(0f f!= *(rbx + (rax_12 << 2))))
                        result_2 += 1
                else if (not(0f f== *(rbx + (rax_12 << 2))))
                    result_2 += 1
                
                result = sx.q(*(rcx_10 + 0x10))
                
                if (r8_2 != 1)
                    if (not(0f f!= *(rbx + (result << 2))))
                        result_2 += 1
                else if (not(0f f== *(rbx + (result << 2))))
                    result_2 += 1
                
                rcx_10 += 0x20
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
        
        if (r10_1 s< r13)
            int64_t i_3 = r13 - r10_1
            int32_t* r8_5 = **rsi + 4 + (r10_1 << 3)
            int64_t i_2
            
            do
                result = sx.q(*r8_5)
                
                if (*(r14 + 0x20) != 1)
                    if (not(0f f!= *(rbx + (result << 2))))
                        result_2 += 1
                else if (not(0f f== *(rbx + (result << 2))))
                    result_2 += 1
                
                r8_5 = &r8_5[2]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        if (result_2 s> 0)
            sub_1405a4d70(&var_120)
            result = zx.q(result_2)
            result_1 = result.d
        else if (result_2 s< 0 && result_2 != 0)
            sub_1405c53d0(&var_120)
            result = zx.q(result_2)
            result_1 = result.d
        
        if (r13 s> 0)
            int64_t* rdi_2 = var_120
            
            do
                int64_t rcx_14 = **rsi
                result = sx.q(*(rcx_14 + (r15 << 3) + 4))
                
                if (*(r14 + 0x20) != 1)
                    if (not(0f f!= *(rbx + (result << 2))))
                        result = *(rcx_14 + (r15 << 3))
                        *rdi_2 = result
                        rdi_2 = &rdi_2[1]
                        
                        if (rax_6 != 0)
                            int64_t r14_2 = sx.q(*(rax_6 + 0x18))
                            int64_t r12_2 = **rsi
                            int32_t rax_18 = (r14_2 + 1).d
                            *(rax_6 + 0x18) = rax_18
                            
                            if (rax_18 s> *(rax_6 + 0x1c))
                                sub_1405a4d70(rax_6 + 0x10)
                            
                            result = *(r12_2 + (r15 << 3))
                            *(*(rax_6 + 0x10) + (r14_2 << 3)) = result
                            r14 = arg1
                            rsi = arg2
                else if (not(0f f== *(rbx + (result << 2))))
                    result = *(rcx_14 + (r15 << 3))
                    *rdi_2 = result
                    rdi_2 = &rdi_2[1]
                    
                    if (rax_6 != 0)
                        int64_t r14_1 = sx.q(*(rax_6 + 0x18))
                        int64_t r12_1 = **rsi
                        int32_t rax_16 = (r14_1 + 1).d
                        *(rax_6 + 0x18) = rax_16
                        
                        if (rax_16 s> *(rax_6 + 0x1c))
                            sub_1405a4d70(rax_6 + 0x10)
                        
                        result = *(r12_1 + (r15 << 3))
                        *(*(rax_6 + 0x10) + (r14_1 << 3)) = result
                        r14 = arg1
                        rsi = arg2
                
                r15 += 1
            while (r15 s< r13)
        
        if (rbx != 0)
            result = sub_140a74f90(rbx)
        
        rbx = var_120
    
    if (rdi != 0)
        result = zx.q(result_1)
        
        if (result.d != 0)
            int64_t r8_6 = rsi[1]
            var_e0 = rbx
            int32_t var_d8_2 = result.d
            void var_c8
            sub_1417bf5d0(&var_c8, &var_e0, r8_6, &rsi[2])
            (*(*rdi + 0x30))(rdi, &var_c8, arg3)
            int64_t* var_68
            
            if (var_68 != 0)
                (**var_68)(var_68, 1)
            
            void var_b8
            result = sub_1405ae080(&var_b8)
    
    if (rbx != 0)
        result = sub_140a74f90(rbx)
else if (rdi != 0)
    result = (*(*rdi + 0x30))(rdi)

__security_check_cookie(rax_1 ^ &var_148)
return result
