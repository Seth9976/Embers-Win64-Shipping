// 函数: sub_14290e1f0
// 地址: 0x14290e1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rbp = *(arg2 + 0x28)
int64_t rax_1 = sub_1428a94b0(**(arg2 + 0x10))
int64_t* rcx_5
char* rdx_1
uint64_t r8_4

if (arg4 != 1)
    r8_4 = zx.q(arg3)
    rcx_5 = arg1
    
    if (rbp != 0)
        int64_t var_18_2 = rax_1
        
        if (sub_1428b6f70(rcx_5, "%*s%s Public-Key:\n", r8_4) s> 0)
        label_14290e355:
            
            if (sub_1428b6f70(arg1, "%*spub:\n", zx.q(arg3)) s> 0)
                int32_t rcx_7 = **(arg2 + 0x10)
                int64_t rbx_1
                
                if (rcx_7 == 0x40a || rcx_7 == 0x43f)
                    rbx_1 = 0x20
                else
                    int64_t rbx
                    rbx.b = rcx_7 != 0x40b
                    rbx_1 = rbx + 0x38
                
                if (sub_14293bb60(arg1, rbp, rbx_1, arg3 + 4) != 0)
                    return 1
    else
        rdx_1 = "%*s<INVALID PUBLIC KEY>\n"
    label_14290e2e7:
        
        if (sub_1428b6f70(rcx_5, rdx_1, r8_4) s> 0)
            return 1
else
    if (rbp == 0 || *(rbp + 0x40) == 0)
        r8_4 = zx.q(arg3)
        rdx_1 = "%*s<INVALID PRIVATE KEY>\n"
        rcx_5 = arg1
        goto label_14290e2e7
    
    int64_t var_18_1 = rax_1
    
    if (sub_1428b6f70(arg1, "%*s%s Private-Key:\n", zx.q(arg3)) s> 0
            && sub_1428b6f70(arg1, "%*spriv:\n", zx.q(arg3)) s> 0)
        int32_t rcx_3 = **(arg2 + 0x10)
        int64_t r8_3
        
        if (rcx_3 == 0x40a || rcx_3 == 0x43f)
            r8_3 = 0x20
        else
            int64_t r8_2
            r8_2.b = rcx_3 != 0x40b
            r8_3 = r8_2 + 0x38
        
        if (sub_14293bb60(arg1, *(rbp + 0x40), r8_3, arg3 + 4) != 0)
            goto label_14290e355
return 0
