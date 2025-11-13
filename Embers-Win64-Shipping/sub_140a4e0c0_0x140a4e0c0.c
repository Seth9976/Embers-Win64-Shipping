// 函数: sub_140a4e0c0
// 地址: 0x140a4e0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = GetCurrentThreadId()

if (*(arg1 + 0x30) != rax)
    sub_140b732c0()
    return 0

if (arg2 == 0)
    return sub_140a4be40(arg1, arg3.d, 0x10)

if (arg3 == 0)
    sub_140a45c50(arg1, arg2)
    return 0

int64_t rbx = 0
uint64_t arg_8 = 0

if (arg3 == 0)
    arg_8 = zx.q(*(arg2 - 0x10))
else
    int64_t rax_2 = *(arg1 + 0x38)
    
    if (arg2 u< rax_2 || arg2 u>= rax_2 + 0x200000)
        if (sub_140a4a990(arg1, arg2) != 0)
            arg_8 = zx.q(*(arg2 - 0x10))
        else
            int64_t* rcx_1 = *(arg1 + 0x58)
            int64_t rax_6 = (*(*rcx_1 + 0x90))(rcx_1)
            int64_t rdx_1 = 0
            
            while (true)
                int16_t rcx_2 = *(rax_6 + (rdx_1 << 1))
                rdx_1 += 1
                
                if (rcx_2 != *((rdx_1 << 1) + 0x142e5d706))
                    int64_t* rcx_5 = *(arg1 + 0x58)
                    int64_t rax_10 = (*(*rcx_5 + 0x90))(rcx_5, rdx_1)
                    
                    while (true)
                        int16_t rcx_6 = *(rax_10 + (rbx << 1))
                        rbx += 1
                        
                        if (rcx_6 != *((rbx << 1) + 0x142e5d716))
                            int64_t* rcx_7 = *(arg1 + 0x58)
                            int64_t rax_12 = (*(*rcx_7 + 0x90))(rcx_7)
                            int64_t rdx_3 = -1
                            
                            while (true)
                                if (*(rax_12 + (rdx_3 << 1) + 2) == (*u"jemalloc")[1 + rdx_3])
                                    rdx_3 += 2
                                    
                                    if (rdx_3 == 9)
                                        goto label_140a4e185
                                    
                                    if (*(rax_12 + (rdx_3 << 1)) == (*u"jemalloc")[rdx_3])
                                        continue
                                
                                OutputDebugStringW(Realloc from previous malloc - we don't know how "
                                "to get allocation size, exiting...\n")
                                sub_140b721f0(1)
                                break
                            
                            break
                        
                        if (rbx == 8)
                            goto label_140a4e185
                    
                    break
                
                if (rdx_1 == 7)
                label_140a4e185:
                    int64_t* rcx_3 = *(arg1 + 0x58)
                    
                    if ((*(*rcx_3 + 0x40))(rcx_3, arg2, &arg_8) == 0 || arg_8 == 0)
                        OutputDebugStringW(Realloc from previous malloc - we were not able to get "
                        "correct allocation size, exiting...\n")
                        sub_140b721f0(1)
                    
                    break
    else
        arg_8 = zx.q(*(arg2 - 0x10))

int64_t result = sub_140a4be40(arg1, arg3.d, 0x10)
uint64_t r8_2 = arg_8

if (arg3 u<= r8_2)
    r8_2 = arg3

memcpy(result, arg2, r8_2.d)
uint64_t rax_15 = arg_8

if (rax_15 u> 0x8000)
    sub_140a4bcc0(u"Realloc PtrSize=%u NewSize=%u PooledPtr=0x%016llx\n", zx.q(rax_15.d))

sub_140a45c50(arg1, arg2)
return result
