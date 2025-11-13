// 函数: sub_14102c770
// 地址: 0x14102c770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 1
int64_t r12 = **(arg1 + 0x20)

if (data_1439c7a34 u> 1)
    int32_t r10_1 = 0
    void* i = arg2
    
    if (arg2 != 0)
        do
            int32_t rdx = *(i + 0x40)
            
            if (rdx u> r10_1)
                r10_1 = rdx
                i_2 = (*(i + 0x18))[2].d
            else if (rdx == r10_1)
                i_2 |= (*(i + 0x18))[2].d
            
            i = *(i + 0x20)
        while (i != 0)
    
    if (arg2 == 0 || r10_1 == 0)
        int64_t* result
        result.b = 0
        return result

int64_t r15
r15.b = 0
*arg3 = 0

if (i_2 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_2)
    int32_t rsi_1 = temp0_1
    int32_t i_1
    
    do
        void* rbx_1 = arg2
        
        if (arg2 != 0 && data_1439c7a34 u> 1)
            while (*(rbx_1 + 0x18) != *(**(*(r12 + (zx.q(rsi_1) << 3) + 0x9d8) + 0x6d8) + 0x138))
                rbx_1 = *(rbx_1 + 0x20)
                
                if (rbx_1 == 0)
                    break
        
        if (*(rbx_1 + 0x44) != 0xffffffff)
            char rax_3 = *(rbx_1 + 0x4c)
            
            if ((rax_3 & 2) != 0)
                if ((rax_3 & 1) != 0)
                    goto label_14102c895
                
                if (sub_141023a60(*(rbx_1 + 0x18), rbx_1, arg4) != 0)
                    *(rbx_1 + 0x4c) |= 1
                label_14102c895:
                    r15.b = 1
                    
                    if (*(rbx_1 + 0x48) != 2)
                        int64_t rdx_5 = *arg3
                        
                        if (*(rbx_1 + 0x38) u>= rdx_5)
                            rdx_5 = *(rbx_1 + 0x38)
                        
                        *arg3 = rdx_5
                    else
                        uint64_t r8_1 = *arg3
                        int64_t rax_5
                        int64_t rdx_2
                        rdx_2:rax_5 = mulu.dp.q(0x431bde82d7b634db, data_143f0f168)
                        uint64_t rcx_4 = rdx_2 u>> 0x12
                        
                        if (rcx_4 u<= 1)
                            rcx_4 = 1
                        
                        uint64_t temp0_2 = divu.dp.q(0:(*(rbx_1 + 0x38)), rcx_4)
                        
                        if (temp0_2 u>= r8_1)
                            r8_1 = temp0_2
                        
                        *arg3 = r8_1
        
        int32_t rax_8 = 1 << rsi_1.b
        rsi_1 = 0x20
        i_1 = not.d(rax_8) & i_2
        i_2 = i_1
        
        if (i_1 != 0)
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_forward(i_1)
            rsi_1 = temp0_3
    while (i_1 != 0)

return zx.q(r15.b)
