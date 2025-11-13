// 函数: sub_142c80860
// 地址: 0x142c80860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t rdx = *(rbx + 0x4e50)
void* r15 = *(rbx + 0x250)
int32_t result

if (rdx == 0 || (arg2 != 0 && (rdx s<= 0 || arg2 == 0)))
label_142c80a1a:
    char const* const rdx_1 = "STOR %s"
    
    if (*(rbx + 0x5dc) != 0)
        rdx_1 = "APPE %s"
    
    result = gzprintf(&arg1[0xd3], rdx_1, arg1[0xe4], arg4)
    
    if (result != 0)
        return result
    
    arg1[0xea].d = 0x21
else if (rdx s>= 0)
    *(rbx + 0x5dc) = 1
    int64_t rax_1 = arg1[0xa2]
    
    if (rax_1 != 0)
        int32_t rax_2
        rax_2, arg3 = rax_1(arg1[0xa3], rdx, 0)
        
        if (rax_2 != 0)
            int64_t i = 0
            
            if (rax_2 != 2)
                sub_142c64760(rbx, "Could not seek stream", arg3, arg4)
                return 0x1f
            
            do
                int64_t rdi_1 = sx.q(*(rbx + 0x598))
                int64_t rcx_4 = *(rbx + 0x4e50) - i
                
                if (rcx_4 s<= rdi_1)
                    rdi_1 = sub_14058e700(rcx_4)
                
                int64_t rax_4
                rax_4, arg3 = (*(rbx + 0x4e80))(*(rbx + 0xa80), 1, rdi_1, *(rbx + 0x4e88))
                i += rax_4
                
                if (rax_4 == 0 || rax_4 u> rdi_1)
                    sub_142c64760(rbx, "Failed to read data", arg3, arg4)
                    return 0x1f
            while (i s< *(rbx + 0x4e50))
    
    int64_t rax_5 = *(rbx + 0x4e68)
    
    if (rax_5 s<= 0)
        goto label_142c80a1a
    
    int64_t rax_6 = rax_5 - *(rbx + 0x4e50)
    *(rbx + 0x4e68) = rax_6
    
    if (rax_6 s> 0)
        goto label_142c80a1a
    
    sub_142c68d40(arg1, 0xffffffff, -1, 0, 
        sub_142c64850(rbx, "File already completely uploaded\n", arg3, arg4), 0, 0xffffffff, 
        nullptr)
    *(r15 + 0x18) = 2
    arg1[0xea].d = 0
else
    result = gzprintf(&arg1[0xd3], "SIZE %s", arg1[0xe4], arg4)
    
    if (result != 0)
        return result
    
    arg1[0xea].d = 0x19
return 0
