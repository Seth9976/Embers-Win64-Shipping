// 函数: sub_142c7b9e0
// 地址: 0x142c7b9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = arg1[0x47]
bool cond:0 = arg1[0xe1].d != 4
int64_t arg_10 = 0

if (not(cond:0))
    return sub_142c7b3c0(arg1)

if (arg1[0xd9] != 0)
    return sub_142c8ec60(&arg1[0xd3], arg4)

int32_t rdi_1
char i

do
    int32_t arg_8
    int32_t rax_3
    rax_3, arg3 = FindVITargetTypeInstance(rbp, &arg1[0xd3], &arg_8, &arg_10, arg3)
    rdi_1 = rax_3
    
    if (rax_3 != 0)
        return rax_3
    
    int32_t rdx_2 = arg_8
    
    if (rdx_2 == 0)
        break
    
    uint64_t r8_2 = zx.q(arg1[0xe1].d)
    int32_t rax_7
    
    switch ((r8_2 - 1).d)
        case 0
            rax_7, arg3 = sub_142c7b8c0(arg1, rdx_2, r8_2, arg3)
        label_142c7bb94:
            rdi_1 = rax_7
        label_142c7bb96:
            
            if (rdi_1 != 0)
                break
        case 1
            rax_7, arg3 = sub_142c7b610(arg1, rdx_2, r8_2, arg3)
            goto label_142c7bb94
        case 2
            void* rcx_5 = *arg1
            
            if (rdx_2 == 0x2b)
                rax_7, arg2, arg3 = sub_142c7b3c0(arg1)
                goto label_142c7bb94
            
            if (*(rcx_5 + 0x5f8) == 1)
                rax_7, arg3 = sub_142c7b200(arg1)
                goto label_142c7bb94
            
            arg3 = sub_142c64760(rcx_5, "STARTTLS denied", r8_2, arg3)
            rdi_1 = 0x40
            goto label_142c7bb96
        case 4
            rax_7, arg2, arg3 = sub_142c7b560(arg1, rdx_2, arg3, arg2)
            goto label_142c7bb94
        case 5
            rdi_1 = 0
            
            if (rdx_2 == 0x2b)
            label_142c7bb25:
                arg1[0xe1].d = 0
                goto label_142c7bb96
            
            arg3 = sub_142c64760(*arg1, "Authentication failed: %d", zx.q(rdx_2), arg3)
            rdi_1 = 0x43
            goto label_142c7bb96
        case 6
            if (rdx_2 != 0x2b)
            label_142c7bb40:
                arg3 = sub_142c64760(*arg1, "Access denied. %c", zx.q(rdx_2), arg3)
                rdi_1 = 0x43
                goto label_142c7bb96
            
            void* rax_8 = arg1[0x3f]
            void* const r8_5 = &data_1434cce10
            
            if (rax_8 != 0)
                r8_5 = rax_8
            
            int32_t rax_9
            rax_9, arg3 = gzprintf(&arg1[0xd3], "PASS %s", r8_5, arg3)
            rdi_1 = rax_9
            
            if (rax_9 == 0)
                arg1[0xe1].d = 8
            
            goto label_142c7bb96
        case 7
            rdi_1 = 0
            
            if (rdx_2 == 0x2b)
                goto label_142c7bb25
            
            goto label_142c7bb40
        case 8
            rax_7, arg3 = sub_142c7b7e0(arg1, rdx_2, arg3)
            goto label_142c7bb94
        default
            arg1[0xe1].d = 0
    
    if (arg1[0xe1].d == 0)
        break
    
    i = sub_142c8ed60(&arg1[0xd3])
while (i != 0)
return rdi_1
