// 函数: sub_142c7a150
// 地址: 0x142c7a150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (arg2 != 0x2a)
    if (arg2 == 0x4f)
        int32_t rax_13 = *(rcx + 0x5f8)
        
        if (rax_13 != 0 && arg1[0x58].b == 0)
            if (*(arg1 + 0x73d) != 0)
                int32_t result = sub_142c79fe0(arg1)
                
                if (result != 0)
                    return result
                
                arg1[0xe1].d = 3
                return result
            
            if (rax_13 != 1)
                sub_142c64760(rcx, "STARTTLS not supported.", arg3, arg4)
                return 0x40
    
    return sub_142c79a90(arg1) __tailcall

char* rbx_2 = *(rcx + 0xa80) + 2

while (true)
    char i = *rbx_2
    
    if (i == 0)
        return 0
    
    while (i u<= 0x20)
        if (not(test_bit(0x100002600, sx.q(i))))
            break
        
        i = rbx_2[1]
        rbx_2 = &rbx_2[1]
        
        if (i == 0)
            return 0
    
    char i_1 = *rbx_2
    
    if (i_1 == 0)
        return 0
    
    int64_t rdi_1 = 0
    
    while (i_1 u> 0x20 || not(test_bit(0x100002600, sx.q(i_1))))
        i_1 = rbx_2[rdi_1 + 1]
        rdi_1 += 1
        
        if (i_1 == 0)
            break
    
    if (rdi_1 == 8)
        if (*rbx_2 != 0x534c545452415453)
            goto label_142c7a284
        
        *(arg1 + 0x73d) = 1
        rbx_2 = &rbx_2[rdi_1]
        continue
    
    if (rdi_1 == 0xd)
        if (*rbx_2 != 0x5349444e49474f4c || *(rbx_2 + 8) != 0x454c4241 || rbx_2[0xc] != 0x44)
            goto label_142c7a284
        
        *(arg1 + 0x73e) = 1
        rbx_2 = &rbx_2[rdi_1]
        continue
    
    if (rdi_1 == 7)
        if (*rbx_2 != 0x4c534153 || *(rbx_2 + 4) != 0x492d || rbx_2[6] != 0x52)
            goto label_142c7a284
        
        *(arg1 + 0x73f) = 1
        rbx_2 = &rbx_2[rdi_1]
        continue
    
    if (rdi_1 u> 5)
    label_142c7a284:
        
        if (*rbx_2 == 0x48545541 && rbx_2[4] == 0x3d)
            rbx_2 = &rbx_2[5]
            rdi_1 -= 5
            int64_t arg_8
            int32_t rax_12 = sub_142c8f8d0(rbx_2, rdi_1, &arg_8)
            
            if (rax_12 != 0 && arg_8 == rdi_1)
                *(arg1 + 0x71c) |= rax_12
    
    rbx_2 = &rbx_2[rdi_1]
