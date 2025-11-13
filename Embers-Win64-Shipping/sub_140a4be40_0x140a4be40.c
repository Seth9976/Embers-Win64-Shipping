// 函数: sub_140a4be40
// 地址: 0x140a4be40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 u> 0x10)
    OutputDebugStringW(u"Alignment > 16 is not supported\n")

uint32_t rax = GetCurrentThreadId()

if (*(arg1 + 0x30) == rax)
    for (int32_t i = 0; i u< 0xe; i += 1)
        int32_t r8 = *(sx.q(i) * 0x4020 + 0x143d7d728)
        
        if (*(sx.q(i) * 0x4020 + &data_143d79710) u< r8
                && arg2 u<= *(sx.q(i) * 0x4020 + 0x143d79720) - 0x10)
            int32_t rdx_1 = 0
            
            if (r8 != 0)
                do
                    int64_t* rbx_3 =
                        *(sx.q(i) * 0x4020 + &data_143d79710 + (zx.q(rdx_1) << 3) + 0x18)
                    
                    if (*rbx_3 == 0)
                        uint64_t count = zx.q(arg2)
                        
                        if (*(sx.q(i) * 0x4020 + 0x143d79714) u>= rdx_1)
                            rdx_1 = *(sx.q(i) * 0x4020 + 0x143d79714)
                        
                        *(sx.q(i) * 0x4020 + &data_143d79710) += 1
                        *(sx.q(i) * 0x4020 + 0x143d7971c) += 1
                        *(sx.q(i) * 0x4020 + 0x143d79714) = rdx_1
                        int32_t rdx_3 = *(sx.q(i) * 0x4020 + &data_143d79710)
                        
                        if (*(sx.q(i) * 0x4020 + 0x143d79718) u>= rdx_3)
                            rdx_3 = *(sx.q(i) * 0x4020 + 0x143d79718)
                        
                        *(sx.q(i) * 0x4020 + 0x143d79718) = rdx_3
                        int64_t rcx_8 = rbx_3[1]
                        *rbx_3 = count
                        memset(rcx_8, 0xfe, count)
                        return rbx_3[1]
                    
                    rdx_1 += 1
                while (rdx_1 u< r8)
            
            sub_140a4bcc0(
                AllocateFromPool run out of memory allocating %u bytes for %u allocations\n", 
                zx.q(arg2))
            OutputDebugStringW(u"Please increase MaxNumAllocations for that pool, exiting...\n")
            sub_140b721f0(1)
            return 0
    
    int32_t rax_6 = (*(arg1 + 0x40) + 0xf) & 0xfffffff0
    uint64_t rdx = zx.q(arg2)
    int32_t rcx_3 = arg2 + 0x10 + rax_6
    *(arg1 + 0x40) = rax_6
    
    if (rcx_3 u<= 0x200000)
        int64_t rbx_1 = *(arg1 + 0x38)
        *(arg1 + 0x40) = rcx_3
        uint64_t rcx_4 = zx.q(rax_6)
        uint64_t* rbx_2 = rbx_1 + rcx_4
        *rbx_2 = zx.q(arg2)
        rbx_2[1] = rcx_4 + *(arg1 + 0x38) + 0x10
        *(arg1 + 0x40)
        sub_140a4bcc0(u"Malloc Size=%u LargeMemoryPoolOffset=%u \n", rdx)
        return rbx_2[1]
    
    sub_140a4bcc0(u"MallocCrash run out of memory allocating %u bytes, free %u bytes\n", rdx)
    OutputDebugStringW(u"Please increase LARGE_MEMORYPOOL_SIZE, exiting...\n")
    sub_140b721f0(1)
else
    sub_140b732c0()

return 0
