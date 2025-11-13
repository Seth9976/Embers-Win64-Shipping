// 函数: sub_1414196f0
// 地址: 0x1414196f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 1
int64_t rcx
int64_t rbx_1

if (data_1439c7a34 u> 1)
    rbx_1 = data_143ed2d88
    
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470

int64_t* rbx_3

if (data_1439c7a34 u<= 1 || *(rbx_1 + (rcx << 2)) == 0)
    rbx_3 = *(arg1 + 0xa0)
    void* rsi_1 = sx.q(*(arg1 + 0xa8)) * 0x5240 + rbx_3
    
    if (rbx_3 != rsi_1)
        do
            if ((*(rbx_3 + 0x497c) & 2) == 0)
                if (*(rbx_3 + 0xd7a) != 0)
                    if (sub_142391c90(zx.q(rbx_3[0x15a].d)) == 0)
                        rbx_3[0x15b].d = arg2
                    else if (*(rbx_3 + 0xd7c) != 0)
                        goto label_14141992c
                else if (*(rbx_3 + 0xd7c) != 0)
                label_14141992c:
                    
                    if (sub_142391c90(zx.q(rbx_3[0x15a].d)) == 0)
                        void* rax_14 = *rbx_3
                        
                        if (rax_14 != 0 && *(rax_14 + 8) s> 1)
                            rbx_3[0x15b].d = arg2
                else
                    rbx_3[0x15b].d = arg2
            
            rbx_3 = &rbx_3[0xa48]
        while (rbx_3 != rsi_1)
        
        rbx_3 = *(arg1 + 0xa0)
else
    int32_t r8_1 = arg2
    int32_t rcx_1 = 0x20
    
    if (arg2 != 0)
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_forward(arg2)
        rcx_1 = temp0_1
    
    int32_t r9_1 = data_1439c7a38
    int32_t rbx_2 = *(&data_1439c7aa8 + (sx.q(modu.dp.d(0:rcx_1, r9_1)) << 2))
    
    while (true)
        int32_t rax_4 = 1 << rcx_1.b
        rcx_1 = 0x20
        int32_t rax_6 = not.d(rax_4) & r8_1
        r8_1 = rax_6
        
        if (rax_6 != 0)
            uint64_t rflags_2
            int32_t temp0_2
            temp0_2, rflags_2 = _bit_scan_forward(rax_6)
            rcx_1 = temp0_2
        
        if (rax_6 == 0)
            break
        
        rbx_2 |= *(&data_1439c7aa8 + (sx.q(modu.dp.d(0:rcx_1, r9_1)) << 2))
    
    char r14_1 = 0x20
    int32_t r12_1 = rbx_2
    
    if (rbx_2 != 0)
        uint64_t rflags_3
        char temp0_3
        temp0_3, rflags_3 = _bit_scan_forward(rbx_2)
        r14_1 = temp0_3
    
    int64_t* i = *(arg1 + 0xa0)
    
    for (void* r13_2 = sx.q(*(arg1 + 0xa8)) * 0x5240 + i; i != r13_2; i = &i[0xa48])
        if ((*(i + 0x497c) & 2) == 0)
            int64_t rax_9
            
            if (*(i + 0xd7a) != 0)
                if (sub_142391c90(zx.q(i[0x15a].d)).b == 0)
                label_14141984c:
                    
                    if (*(i + 0xd74) != 0 || *(i + 0xd75) != 0)
                        i[0x15b].d = (1 << (data_1439c7a34).b) - 1
                    else
                        int32_t rdx_2 = 1 << r14_1
                        r14_1 = 0x20
                        i[0x15b].d = rdx_2
                        rax_9.b = rdx_2 != arg2
                        *(arg1 + 0x54) |= rax_9.b
                        int32_t rdx_4 = not.d(rdx_2) & r12_1
                        r12_1 = rdx_4
                        
                        if (rdx_4 != 0)
                            uint64_t rflags_4
                            char temp0_4
                            temp0_4, rflags_4 = _bit_scan_forward(rdx_4)
                            r14_1 = temp0_4
                        
                        if (rdx_4 == 0)
                            r14_1 = rdx_4.b + 0x20
                            
                            if (rbx_2 != 0)
                                uint64_t rflags_5
                                char temp0_5
                                temp0_5, rflags_5 = _bit_scan_forward(rbx_2)
                                r14_1 = temp0_5
                            
                            r12_1 = rbx_2
                else if (*(i + 0xd7c) != 0)
                    goto label_141419835
            else
                if (*(i + 0xd7c) == 0)
                    goto label_14141984c
                
            label_141419835:
                
                if (sub_142391c90(zx.q(i[0x15a].d)).b == 0)
                    rax_9 = *i
                    
                    if (rax_9 != 0 && *(rax_9 + 8) s> 1)
                        goto label_14141984c
    
    rbx_3 = *(arg1 + 0xa0)

uint64_t result = zx.q(rbx_3[0x15b].d)
*(arg1 + 0x3d0) = result.d

if (*(arg1 + 0xa8) s> 1)
    int64_t rdx_5 = 0x5240
    
    do
        result = *(arg1 + 0xa0)
        rdx_5 += 0x5240
        i_1 += 1
        *(arg1 + 0x3d0) |= *(result + rdx_5 - 0x4768)
    while (i_1 s< *(arg1 + 0xa8))

return result
