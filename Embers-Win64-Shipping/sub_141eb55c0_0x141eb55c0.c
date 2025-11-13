// 函数: sub_141eb55c0
// 地址: 0x141eb55c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void* rdi = nullptr
__builtin_memset(arg1, 0, 0x20)
int64_t* rcx = &arg1[4]
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax_2 = rcx[2]

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
rcx[1] = 0
arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
arg1[0xa] = 0
arg1[0xb].d = 0

if (arg2 != 0)
    char rax_3 = sub_141dcdf70(arg2)
    void* var_58_1 = nullptr
    int32_t var_4c_1 = 0x18
    int32_t var_50_1 = 0
    void* rax_4 = sub_142459c10()
    
    if (rax_4 != 0)
        void* rax_5 = sub_142459c10()
        
        if (rax_5 != 0)
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s<= *(rax_4 + 0x38) && *(*(rax_4 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
                rdi = rax_4
    
    void var_118
    void* r8_1 = &var_118
    
    if (rdi != sub_142459c10())
        sub_1419f71f0(arg2, rax_4, r8_1)
    else
        sub_1419f6fe0(arg2, rax_4, r8_1)
    
    int32_t rax_9 = var_50_1
    
    if (rax_9 s> *(arg1 + 0xc))
        sub_1405c5660(arg1, rax_9)
        rax_9 = var_50_1
    
    void* rcx_20 = var_58_1
    void* r15_1 = &var_118
    
    if (rcx_20 != 0)
        r15_1 = rcx_20
    
    void* r13_1 = r15_1 + (sx.q(rax_9) << 3)
    
    if (r15_1 != r13_1)
        do
            int64_t* rdi_1 = *r15_1
            bool rax_11
            
            if (rax_3 == 0)
                rax_11 = sub_141ee7380(rdi_1)
            
            void** const var_148
            
            if (rax_3 != 0 || rax_11 != 0)
                (*(*rdi_1 + 0x398))(rdi_1, &var_148)
                int64_t var_140
                int64_t var_138
                char rax_19
                
                if (sub_140d3e110(&var_140) == 0 || var_138 == 0)
                    rax_19 = 0
                else
                    rax_19 = 1
                
                char var_128
                
                if (rax_19 != 0)
                    int64_t rbx_3 = sx.q(arg1[1].d)
                    int32_t rax_20 = (rbx_3 + 1).d
                    arg1[1].d = rax_20
                    
                    if (rax_20 s> *(arg1 + 0xc))
                        sub_1405c4ec0(arg1)
                    
                    void*** rbx_4 = *arg1 + rbx_3 * 0x28
                    *rbx_4 = &data_1430507f0
                    rbx_4[1].d = 0xffffffff
                    *(rbx_4 + 0xc) = 0
                    rbx_4[3].d = 0xffffffff
                    *(rbx_4 + 0x1c) = 0
                    rbx_4[1] = var_140
                    rbx_4[2] = var_138
                    rbx_4[4].b = var_128
                    var_128 = 0
                    var_148[9](&var_148)
                    *rbx_4 = &data_1430507f0
                
                var_148 = &data_1430507f0
                
                if (var_128 != 0)
                    int64_t* rax_26 = sub_140d3c6e0(&var_140)
                    
                    if (rax_26 != 0)
                        if (var_138 != 0)
                            (*(*rax_26 + 0x2a8))(rax_26, var_138, 1)
                        
                        int64_t var_158
                        sub_140d3a3a0(&var_158, nullptr)
                        var_140 = var_158
                    
                    if (var_138 != 0)
                        sub_140a74f90(var_138)
            else if (*(rdi_1 + 0x8c) == 3)
                void* rax_12 = sub_1425881f0()
                void* rdx_3 = rdi_1[2]
                int64_t rax_13 = sx.q(*(rax_12 + 0x38))
                
                if (rax_13.d s<= *(rdx_3 + 0x38)
                        && *(*(rdx_3 + 0x30) + (rax_13 << 3)) == rax_12 + 0x30)
                    void* rcx_7 = rdi_1[0x18]
                    int64_t* var_160 = rdi_1
                    
                    if (rcx_7 != 0 && sub_141ee7380(rcx_7) != 0)
                        void* rbx_2 = *(arg2 + 0x130)
                        
                        if (rbx_2 == 0)
                            rbx_2 = rdi_1[0x18]
                            void* rax_16 = *(rbx_2 + 0xc0)
                            
                            if (rax_16 != 0)
                                while (*(rax_16 + 0xa0) == arg2)
                                    rbx_2 = rax_16
                                    rax_16 = *(rax_16 + 0xc0)
                                    
                                    if (rax_16 == 0)
                                        break
                        
                        if ((*(rdi_1 + 0x14c) & 1) == 0)
                            sub_1405c6ac0(rdi_1, 0, 0)
                        
                        sub_141eb01e0(&arg1[2], &var_160, 
                            sub_140ad7d70(&rdi_1[0x38], &var_148, rbx_2 + 0x1c0))
            r15_1 += 8
        while (r15_1 != r13_1)
        
        rcx_20 = var_58_1
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)

__security_check_cookie(rax_1 ^ &var_188)
return arg1
