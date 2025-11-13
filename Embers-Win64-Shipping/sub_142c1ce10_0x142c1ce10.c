// 函数: sub_142c1ce10
// 地址: 0x142c1ce10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x90)
int64_t rbp
rbp.b = 0

if (*(rbx + 0x5c) u< *(rbx + 0x60))
    while (*(rbx + 0x58) != 0)
        uint64_t rcx = zx.q(*(rbx + 0x5c)) * 5
        int64_t rax_2 = *(rbx + 0x70)
        int32_t rdx = *(rax_2 + (rcx << 2))
        int32_t* r8_1 = rax_2 + (rcx << 2)
        
        if (not(test_bit(*arg2, rdx u>> 4 & 0x1f)) || not(test_bit(arg2[1], rdx & 0x1f))
            || not(test_bit(arg2[2], rdx u>> 9 & 0x1f)) || (*(arg1 + 0xb4) & r8_1[1]) == 0)
        label_142c1cef4:
            
            if (*(rbx + 0x59) == 0)
                *(rbx + 0x5c) += 1
            else if (*(rbx + 0x78) != *(rbx + 0x70) || *(rbx + 0x64) != *(rbx + 0x5c))
                if (sub_142bf50b0(rbx, 1, 1) != 0)
                    int64_t rdx_7 = *(rbx + 0x70)
                    uint64_t r9_1 = zx.q(*(rbx + 0x5c)) * 5
                    uint64_t rcx_12 = zx.q(*(rbx + 0x64)) * 5
                    int64_t rax_15 = *(rbx + 0x78)
                    *(rax_15 + (rcx_12 << 2)) = *(rdx_7 + (r9_1 << 2))
                    *(rax_15 + (rcx_12 << 2) + 0x10) = *(rdx_7 + (r9_1 << 2) + 0x10)
                    *(rbx + 0x64) += 1
                    *(rbx + 0x5c) += 1
            else
                *(rbx + 0x64) += 1
                *(rbx + 0x5c) += 1
        else
            uint32_t rdx_3 = zx.d(r8_1[3].w)
            int32_t rcx_6 = *(arg1 + 0xc0)
            
            if ((rdx_3.b & rcx_6.b & 0xe) != 0)
                goto label_142c1cef4
            
            if ((rdx_3.b & 8) != 0)
                bool rax_8
                
                if ((rcx_6.b & 0x10) == 0)
                    int32_t rcx_9 = rcx_6 & 0xff00
                    
                    if (rcx_9 == 0)
                        goto label_142c1cee6
                    
                    rax_8 = rcx_9 == (rdx_3 & 0xff00)
                else
                    rax_8 = sub_142c21fd0(*(arg1 + 0xa0), rcx_6 u>> 0x10, *r8_1)
                
                if (rax_8 == 0)
                    goto label_142c1cef4
                
                goto label_142c1cee6
            
        label_142c1cee6:
            
            if (sub_142c1cc50(arg2, arg1) == 0)
                goto label_142c1cef4
            
            rbp.b = 1
        
        if (*(rbx + 0x5c) u>= *(rbx + 0x60))
            break

return zx.q(rbp.b)
