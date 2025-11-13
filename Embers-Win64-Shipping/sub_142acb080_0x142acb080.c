// 函数: sub_142acb080
// 地址: 0x142acb080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 1
int32_t var_34 = 0
int32_t var_38 = 0
*arg4 = 0
int32_t r15 = 1
void* const rax_1 = &data_143656170
int32_t var_3c = 0
int64_t rbx = 0
int32_t rdi_1

do
    int64_t r14_1 = sx.q(*rax_1)
    int32_t rax_2 = sub_142acb250(arg1, arg2, arg3, *(arg1 + (r14_1 << 3) + 0x4f0), 0, &var_3c, 
        &var_38, &var_34)
    rdi_1 = rax_2
    
    if (rax_2 s> 0)
        if ((r14_1.d & 0xfffffffa) != 0 || r14_1.d == 5)
            r15 = -1
        
        break
    
    rbx += 1
    rax_1 = &data_143656170 + (rbx << 2)
while (*(&data_143656170 + (rbx << 2)) s>= 0)

if (rdi_1 s> 0)
    int32_t var_48
    int32_t var_44
    int32_t var_40
    int32_t rax_4
    
    if (*(arg1 + 0x520) != 0)
        var_48 = 0
        int64_t rbx_1 = 0
        var_44 = 0
        var_40 = 0
        void* const rax_3 = &data_143656170
        
        do
            int64_t r14_2 = sx.q(*rax_3)
            rax_4 = sub_142acb250(arg1, arg2, arg3, *(arg1 + (r14_2 << 3) + 0x4f0), 1, &var_48, 
                &var_44, &var_40)
            
            if (rax_4 s> 0)
                if ((r14_2.d & 0xfffffffa) != 0 || r14_2.d == 5)
                    rsi = -1
                
                break
            
            rbx_1 += 1
            rax_3 = &data_143656170 + (rbx_1 << 2)
        while (*(&data_143656170 + (rbx_1 << 2)) s>= 0)
    
    int32_t rax_5
    int32_t rcx_3
    int32_t rdx_2
    
    if (*(arg1 + 0x520) == 0 || rax_4 s<= rdi_1)
        rax_5 = var_3c
        rcx_3 = var_38
        rdx_2 = var_34
    else
        rax_5 = var_48
        rdi_1 = rax_4
        rcx_3 = var_44
        r15 = rsi
        rdx_2 = var_40
    
    if (rdi_1 s> 0)
        *arg4 = rdi_1
        return zx.q(((rax_5 * 0x3c + rcx_3) * 0x3c + rdx_2) * r15 * 0x3e8)

return 0
