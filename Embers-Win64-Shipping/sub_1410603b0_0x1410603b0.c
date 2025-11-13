// 函数: sub_1410603b0
// 地址: 0x1410603b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != -0x20)
    EnterCriticalSection(arg1 + 0x20)

void* rax = *(arg1 + 0x98)
void* result

if (rax == arg1 + 0x98)
label_141060452:
    result = nullptr
else
    while (true)
        result = rax - 0x10
        int32_t rdi_1 = 0
        
        if (*(result + 8) u> 0)
            while (true)
                int64_t rsi_3 = (zx.q(rdi_1) + 2) * 2
                int64_t* rcx_1 = **(result + (rsi_3 << 3))
                int64_t rax_3 = (*(*rcx_1 + 0x40))(rcx_1)
                
                if (*(result + (rsi_3 << 3) + 8) u> rax_3)
                    break
                
                rdi_1 += 1
                
                if (rdi_1 u>= *(result + 8))
                    goto label_141060425
            
            break
        
    label_141060425:
        int64_t* rdx_1 = *(arg1 + 0x98)
        *rdx_1[1] = *rdx_1
        *(*rdx_1 + 8) = rdx_1[1]
        j_sub_140a74f90(result)
        rax = *(arg1 + 0x98)
        
        if (rax == arg1 + 0x98)
            goto label_141060452

if (arg1 != -0x20)
    LeaveCriticalSection(arg1 + 0x20)

return result
