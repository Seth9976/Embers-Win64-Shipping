// 函数: sub_142627160
// 地址: 0x142627160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg4
int64_t* rdi = arg1
uint32_t r15 = zx.d(*(rax + 0x32))
uint64_t r13 = zx.q(*(rax + 0x30))
uint64_t rbx_1 = zx.q(r15 * r13.d)
uint32_t var_98 = r15
int16_t* rax_2 = (*(*arg1 + 0x10))(arg5, zx.q((rbx_1 << 3).d))
int16_t* r14 = rax_2
int32_t rbx_2

if (rax_2 != 0)
    int64_t var_88 = 0
    int64_t var_80_1 = 0
    sub_142616290(&var_88, 0x400)
    int64_t var_68 = 0
    int64_t var_60_1 = 0
    sub_142616290(&var_68, 0x400)
    int16_t* rdi_1 = r14
    int16_t* var_b0_1 = r14
    int64_t count_1 = sx.q(rbx_1.d) * 2
    uint32_t count = count_1.d
    void* rsi_1 = &r14[sx.q(rbx_1.d)]
    void* var_a8_1 = rsi_1
    void* var_90_1 = &r14[sx.q((rbx_1 * 2).d)]
    void* var_a0_1 = &r14[sx.q((rbx_1 * 3).d)]
    memset(r14, 0, count_1)
    memset(rsi_1, 0, count_1)
    int16_t* rbx_3 = arg6
    int16_t rbp_1 = 1
    int16_t arg_20 = 1
    int16_t i = (*rbx_3 + 1) & 0xfffe
    
    if (i u> 0)
        int16_t* r9 = rdi_1
        
        do
            int16_t i_1 = i
            i -= 2
            
            if (i_1 u< 2)
                i = 0
            
            void* rdi_2 = var_90_1
            int64_t rax_9 = sub_142629b70(8, i, arg4, rbx_3, r9, rsi_1, rdi_2, var_a0_1, &var_88)
            r9 = var_b0_1
            void* r11_1
            
            if (rax_9 == r9)
                r11_1 = var_a8_1
            else
                r11_1 = var_a0_1
                var_90_1 = r9
                r9 = rdi_2
                var_a8_1 = r11_1
                var_b0_1 = rdi_2
                var_a0_1 = rsi_1
            
            int32_t j = 0
            int32_t rcx_6 = 0
            int32_t var_b8_1 = 0
            
            if (r15 != 0)
                int32_t rdx_2 = 0
                int16_t* var_70_1 = r9
                char* rax_10 = nullptr
                int32_t var_b4_1 = 0
                char* var_78_1 = nullptr
                int16_t* r8_3 = r9
                uint64_t r10_1 = sx.q(r13.d)
                
                do
                    if (r13.d != 0)
                        int16_t* r10_2 = arg6
                        char* rsi_2 = rax_10
                        int16_t* rbx_4 = r8_3
                        void* r15_2 = *(r10_2 + 8) - r9
                        
                        do
                            if (*(r15_2 + rbx_4) u>= i && *rbx_4 == 0 && rsi_2[arg4[3]] != 0)
                                int16_t* var_e8_1
                                var_e8_1.w = rbp_1
                                char rax_12 = sub_14262b2b0(j, rcx_6, rdx_2 + j, i, var_e8_1.w, 
                                    arg4, r10_2, r9, r11_1, &var_88)
                                rcx_6 = var_b8_1
                                rdx_2 = var_b4_1
                                r9 = var_b0_1
                                r10_2 = arg6
                                
                                if (rax_12 != 0)
                                    rbp_1 += 1
                                    arg_20 = rbp_1
                            
                            r11_1 = var_a8_1
                            j += 1
                            rsi_2 = &rsi_2[1]
                            rbx_4 = &rbx_4[1]
                        while (j s< r13.d)
                        
                        rax_10 = var_78_1
                        r10_1 = r13
                        r8_3 = var_70_1
                        r15 = var_98
                    
                    r11_1 = var_a8_1
                    r8_3 = &r8_3[r10_1]
                    rcx_6 += 1
                    var_70_1 = r8_3
                    rdx_2 += r13.d
                    var_b8_1 = rcx_6
                    rax_10 = &rax_10[r10_1]
                    var_b4_1 = rdx_2
                    var_78_1 = rax_10
                    j = 0
                while (rcx_6 s< r15)
                
                rbx_3 = arg6
            
            rsi_1 = var_a8_1
        while (i != 0)
        
        rdi_1 = var_b0_1
    
    if (sub_142629b70(0x40, 0, arg4, rbx_3, rdi_1, rsi_1, var_90_1, var_a0_1, &var_88) != rdi_1)
        rdi_1 = var_90_1
    
    int32_t rax_15 = sub_142629ff0(arg1, arg4, arg2, arg3, &arg_20, rdi_1)
    rbx_2 = rax_15
    
    if ((rax_15 u>> 0x1f).b == 0)
        memcpy(arg4[5], rdi_1, count)
        rbx_2 = 0x40000000
        arg4[1].w = arg_20
    
    sub_142609160(var_68)
    sub_142609160(var_88)
    rdi = arg1
    r14 = rax_2
else
    rbx_2 = -0x7ffffffc

int64_t r8_8 = *rdi
(*(r8_8 + 0x18))(rdi, r14, r8_8)
return zx.q(rbx_2)
