// 函数: sub_142a2b5e0
// 地址: 0x142a2b5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = *(arg1 + 0x364)
void* r11 = arg1 + 0x10e8
void* rax_1 = **(arg2 + 0x1a8)
int32_t rbp_2 = r14 * arg3 + arg4

if (*r11 == 0)
    return 0

int64_t r10 = *(arg1 + 0x440)
uint64_t i_3 = zx.q(arg6)
uint32_t rbx

if (r10 == 0)
    rbx = 0
else
    int32_t r8 = 0
    rbx = 0x7fffffff
    
    if (arg7 s> 0)
        do
            if (i_3.d s> 0)
                uint64_t i_2 = i_3
                char* rcx_1 = sx.q(r14 * r8 + rbp_2) + r10
                uint64_t i
                
                do
                    uint32_t rax_6 = zx.d(*rcx_1)
                    rcx_1 = &rcx_1[1]
                    
                    if (rbx s>= rax_6)
                        rbx = rax_6
                    
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            r8 += 1
        while (r8 s< arg7)

if (*(r11 + 1) != 0)
    if (*(r11 + 4) == 0)
        rbx = sub_142a2c660(arg5, r11)
    else
        void* rax_7 = *(arg2 + 0x1b8)
        void* rcx_3 = *(arg2 + 0x1b0)
        int32_t rdx_1
        
        if (rax_7 == 0)
            rdx_1 = 0
        else
            rdx_1 = sx.d(*(rax_7 + 5))
        
        int32_t rax_8
        
        if (rcx_3 == 0)
            rax_8 = 0
        else
            rax_8 = sx.d(*(rcx_3 + 5))
        
        char r13_1 = 0
        uint32_t r15_4 = (zx.d(*(sx.q(rax_8 + rdx_1) + r11 + 0xc)) * (arg5[1].d - 1) + 0x100) u>> 8
        
        if (*(arg5 + 0xc) s< 0)
            sub_142a23140(arg5)
            r11 = arg1 + 0x10e8
        
        int64_t r8_2 = *arg5
        uint64_t rcx_7 = zx.q(r15_4) << 0x38
        
        if (r8_2 u>= rcx_7)
            r13_1 = 1
            r15_4 = arg5[1].d - r15_4
            r8_2 -= rcx_7
        
        uint32_t rdx_2 = zx.d(*(zx.q(r15_4) + &data_143603f00))
        *(arg5 + 0xc) -= rdx_2
        arg5[1].d = r15_4 << rdx_2.b
        *arg5 = r8_2 << rdx_2.b
        *(rax_1 + 5) = r13_1
        
        if (r13_1 == 0)
            rbx = sub_142a2c660(arg5, r11)
    
    int32_t r8_4 = 0
    
    if (arg7 s> 0)
        do
            int32_t i_1 = 0
            
            if (i_3.d s> 0)
                do
                    int32_t rcx_13 = *(arg1 + 0x364) * r8_4 + i_1
                    i_1 += 1
                    sx.q(rcx_13 + rbp_2)[*(arg1 + 0x448)] = rbx.b
                while (i_1 s< i_3.d)
            
            r8_4 += 1
        while (r8_4 s< arg7)
else
    sub_142a29f20(arg1, r10, *(arg1 + 0x448), rbp_2, i_3.d, arg7)

return zx.q(rbx)
