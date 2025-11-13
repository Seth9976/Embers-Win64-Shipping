// 函数: sub_140f7a650
// 地址: 0x140f7a650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
char rax_1
int32_t r9
rax_1, r9 = (**rcx)(rcx)

if (rax_1 == 0)
    int32_t rdi_1 = 0
    int32_t rdx = arg1[0xf2].d
    int32_t rcx_1 = 0
    int32_t rax_2
    rax_2.b = arg1[0xf3].b == 1
    int32_t arg_8 = rdx
    
    if (rax_2 + *(arg1 + 0x794) s>= 0)
        rcx_1 = rax_2 + *(arg1 + 0x794)
    
    void* rax_4 = &arg1[0xf0]
    int32_t arg_c = rcx_1
    
    if (arg1[0xf1].b == 0)
        rax_4 = &arg_8
    
    int64_t rax_5 = *rax_4
    
    if (rax_5.d != rdx || (rax_5 u>> 0x20).d != rcx_1)
        r9 = sub_140f74180(arg1)
    
    if ((0xffe0 & arg2) != 0 || arg2 == 9)
        int64_t rdx_1 = sx.q(arg1[0xf2].d)
        bool cond:1 = arg1[0xf3].b == 1
        int32_t rax_7 = 0
        arg_8 = rdx_1.d
        int32_t rcx_3
        rcx_3.b = cond:1
        
        if (rcx_3 + *(arg1 + 0x794) s>= 0)
            rax_7 = rcx_3 + *(arg1 + 0x794)
        
        int64_t* rcx_5 = arg1[9]
        int64_t* r14_1 = rdx_1 * 0x70 + rcx_5[3]
        int64_t zmm0 = sub_140f06e10(rcx_5, &arg_8, arg2, r9)
        void var_28
        
        if (&var_28 != &arg1[0xf0] && arg1[0xf1].b != 0)
            arg1[0xf1].b = 0
        
        int64_t r9_1 = sx.q(arg_8)
        void* r11 = arg1[9]
        int32_t rcx_6 = *(*r14_1 + 8)
        int32_t arg_18 = r9_1.d
        int32_t r8_1 = rcx_6 - 1
        
        if (rcx_6 == 0)
            r8_1 = 0
        
        if (rax_7 + 1 s<= r8_1)
            r8_1 = rax_7 + 1
        
        bool r10 = false
        int32_t arg_1c = r8_1
        int64_t rax_12 = arg_18.q
        arg_18.q = rax_12
        
        if (r8_1 s> 0)
            int32_t rcx_8 = *(*(r9_1 * 0x70 + *(r11 + 0x18)) + 8)
            int32_t rdx_5 = rcx_8 - 1
            
            if (rcx_8 == 0)
                rdx_5 = 0
            
            if (rdx_5 == r8_1)
                uint32_t rax_13 = (rax_12 u>> 0x20).d
                r10 = true
                arg_18 = r9_1.d
                
                if (rax_13 - 1 s>= 0)
                    rdi_1 = rax_13 - 1
                
                arg_1c = rdi_1
                arg_18.q = arg_18.q
        
        char rdx_7
        uint32_t r8_3
        rdx_7, r8_3 = sub_140f8af60(&arg1[0xf2], r11, &arg_18, r10, zmm0, var_28)
        sub_140f8fc70(arg1, rdx_7, r8_3)
        int64_t* result
        result.b = 1
        return result

return 0
