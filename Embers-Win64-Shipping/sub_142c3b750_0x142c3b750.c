// 函数: sub_142c3b750
// 地址: 0x142c3b750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = 0
char const* const r15 = "tiniidemaniflosigilr"
char* result

for (int32_t i = 0; i u< 5; )
    int32_t rdx = *(arg2 + 0x38)
    int32_t r8 = 0
    int32_t rdx_1 = rdx - 1
    int32_t r10_1 = *r15
    int64_t r11_1 = *(arg2 + 0x40)
    void* rax_5
    
    if (rdx - 1 s>= 0)
        uint64_t rcx
        
        while (true)
            uint64_t rax_2 = zx.q((rdx_1 + r8) u>> 1)
            rcx = zx.q(rax_2.d)
            int32_t r9_1 = *(r11_1 + rax_2 * 0x24)
            int32_t rax_4
            
            if (r10_1 u>= r9_1)
                rax_4.b = r10_1 u> r9_1
            
            if (r10_1 u< r9_1 || rax_4 s< 0)
                rdx_1 = (rcx - 1).d
            else
                if (rax_4 s<= 0)
                    break
                
                r8 = (rcx + 1).d
            
            if (r8 s> rdx_1)
                goto label_142c3b7de
        
        rax_5 = r11_1 + rcx * 0x24
    
    if (rdx - 1 s< 0 || rax_5 == 0)
    label_142c3b7de:
        result = nullptr
    else
        result = zx.q(*(rax_5 + 0x1c))
    
    uint64_t rbx_1 = zx.q(r12)
    arg1[rbx_1 + 2] = result.d
    
    if (result.d != 0)
        if (i u>= 4)
            result, arg4 = sub_142c3bce0(arg4, arg3)
        else
            result, arg4 = sub_142c3c030(arg4, arg3, i)
        
        *(arg1 + (rbx_1 << 3) + 0x20) = result
        
        if (result != 0)
            int32_t var_40_1 = 0
            int32_t* rbx_4 = (rbx_1 << 5) + 0x48 + arg1
            int32_t* var_48 = rbx_4
            *rbx_4 = 0
            rbx_4[2] = 0
            sub_142c15f50(result, &var_48)
            void* var_38 = &rbx_4[4]
            *(rbx_4 + 0x10) = 0
            *(rbx_4 + 0x18) = 0
            int32_t var_30_1 = 0
            result, arg4 = sub_142c16120(result, &var_38)
            r12 += 1
    
    i += 1
    r15 = &r15[4]

result.b = r12 != 0
*arg1 = r12
arg1[1].b = 1
return result
