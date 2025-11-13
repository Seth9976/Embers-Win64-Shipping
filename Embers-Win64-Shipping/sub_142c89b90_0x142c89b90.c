// 函数: sub_142c89b90
// 地址: 0x142c89b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0xcc) == 0)
    memset(arg2 + 0xd0, 0, 0x58)
    *(arg2 + 0x100) = sub_142c8a190
    *(arg2 + 0x108) = sub_142c70420
    int64_t rcx_1 = 0
    bool cond:0_1
    
    while (true)
        char rdx = (*"1.2.8")[rcx_1]
        rcx_1 += 1
        char temp1_1 = *(rcx_1 + 0x1436baaaf)
        cond:0_1 = rdx u< temp1_1
        
        if (rdx != temp1_1)
            break
        
        if (rcx_1 == 8)
            cond:0_1 = rdx u< *(rcx_1 + 0x1436baaaf)
            break
    
    if (cond:0_1)
        if (sub_140371b70(arg2 + 0xd0, 0xfffffff1, "1.2.8", 0x58) != 0)
        label_142c89c38:
            int64_t r8 = *(arg2 + 0xf0)
            void* rcx_3 = *arg1
            
            if (r8 == 0)
                sub_142c64760(rcx_3, 
                    "Error while processing content unencoding: Unknown failure within decompression "
                "software.", 
                    r8, arg4)
                return 0x3d
            
            sub_142c64760(rcx_3, "Error while processing content unencoding: %s", r8, arg4)
            return 0x3d
        
        *(arg2 + 0xcc) = 1
    else
        if (sub_140371b70(arg2 + 0xd0, 0x2f, "1.2.8", 0x58) != 0)
            goto label_142c89c38
        
        *(arg2 + 0xcc) = 4

int32_t rcx_4 = *(arg2 + 0xcc)

if (rcx_4 == 4)
    *(arg2 + 0xd0) = *(arg2 + 0x78)
    *(arg2 + 0xd8) = arg3.d
    return sub_142c89f50(arg1, arg2, arg4)

int64_t arg_10

if (rcx_4 == 1)
    char* r15_1 = *(arg2 + 0x78)
    int32_t rax_9 = sub_142c89e30(r15_1, arg3, &arg_10)
    
    if (rax_9 == 0)
        int64_t rcx_24 = arg_10
        *(arg2 + 0xd8) = arg3.d - rcx_24.d
        *(arg2 + 0xd0) = &r15_1[rcx_24]
    label_142c89df0:
        *(arg2 + 0xcc) = 3
        goto label_142c89dfa
    
    if (rax_9 != 2)
        goto label_142c89d36
    
    *(arg2 + 0xd8) = arg3.d
    int64_t rax_10 = data_143ccb898(zx.q(arg3.d))
    *(arg2 + 0xd0) = rax_10
    
    if (rax_10 == 0)
        goto label_142c89dae
    
    memcpy(rax_10, *(arg2 + 0x78), *(arg2 + 0xd8))
    *(arg2 + 0xcc) = 2
else if (rcx_4 == 2)
    *(arg2 + 0xd8) += arg3.d
    int64_t rax_6 = sub_142c562c0(*(arg2 + 0xd0), zx.q(*(arg2 + 0xd8)))
    *(arg2 + 0xd0) = rax_6
    
    if (rax_6 == 0)
    label_142c89dae:
        sub_140374100(arg2 + 0xd0)
        *(arg2 + 0xcc) = 0
        return 0x1b
    
    memcpy(zx.q(*(arg2 + 0xd8)) - arg3 + rax_6, *(arg2 + 0x78), arg3.d)
    int32_t rax_7 = sub_142c89e30(*(arg2 + 0xd0), zx.q(*(arg2 + 0xd8)), &arg_10)
    
    if (rax_7 == 0)
        data_143ccb8a0(*(arg2 + 0xd0))
        uint64_t rdx_6 = zx.q(*(arg2 + 0xd8))
        int64_t rax_8 = arg_10
        *(arg2 + 0xd0) = *(arg2 + 0x78) - rdx_6 + rax_8 + arg3
        *(arg2 + 0xd8) = rdx_6.d - rax_8.d
        goto label_142c89df0
    
    if (rax_7 != 2)
        data_143ccb8a0(*(arg2 + 0xd0))
    label_142c89d36:
        sub_142c8a150(arg1, arg2 + 0xd0, arg4)
        sub_140374100(arg2 + 0xd0)
        *(arg2 + 0xcc) = 0
        return 0x3d
else
    *(arg2 + 0xd0) = *(arg2 + 0x78)
    *(arg2 + 0xd8) = arg3.d
label_142c89dfa:
    
    if (*(arg2 + 0xd8) != 0)
        return sub_142c89f50(arg1, arg2, arg4)
return 0
