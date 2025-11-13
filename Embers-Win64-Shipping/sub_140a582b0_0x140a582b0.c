// 函数: sub_140a582b0
// 地址: 0x140a582b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

uint64_t r15_1 = zx.q(arg4)
int64_t* rdi_1 = arg2
void** rsi_3 = arg1 + ((r15_1 * 3 + 5) << 3)

while (true)
    int64_t* r13_1 = rdi_1[1]
    
    while (true)
        int64_t* rbp_1 = *rdi_1
        uint64_t rdx_1 = rdi_1 u>> (*(arg1 + 0x10)).b
        int64_t* rcx_6 = ((zx.q(*(arg1 + 0x20) - 1) & zx.q(rdx_1.d)) << 5) + *(arg1 + 0x460)
        int64_t* rax_2 = rcx_6
        int16_t* rbx_1
        
        while (true)
            if (*rax_2 == rdx_1)
                uint64_t rbx_3 = (zx.q((rdi_1 u>> (*(arg1 + 8)).b).d) & zx.q(*(arg1 + 0x18))) << 5
                rbx_1 = rbx_3 + rax_2[1]
                
                if (rbx_3 != neg.q(rax_2[1]))
                    break
            else
                rax_2 = rax_2[3]
                
                if (rax_2 != rcx_6)
                    continue
                else
                    rbx_1 = nullptr
            
            sub_140af98a0("Unknown", 0x1f0, 
                FMallocBinned2 Attempt to free an unrecognized small block %p", rdi_1)
            sub_140afbb40()
            break
        
        int16_t rax_3 = rbx_1[1]
        
        if (rax_3 != 0xf317)
            int32_t var_48_1 = 0xf317
            sub_140af98a0("Unknown", 0x93, 
                MallocBinned2 Corruption Canary was 0x%x, should be 0x%x", zx.q(rax_3))
            sub_140afbb40()
        
        if (*(rbx_1 + 8) == 0)
            void* rcx_7 = *(rbx_1 + 0x10)
            
            if (rcx_7 != 0)
                *(rcx_7 + 0x18) = *(rbx_1 + 0x18)
                rcx_7 = *(rbx_1 + 0x10)
            
            **(rbx_1 + 0x18) = rcx_7
            void* rax_6 = *rsi_3
            
            if (rax_6 != 0)
                *(rax_6 + 0x18) = &rbx_1[8]
                rax_6 = *rsi_3
            
            *(rbx_1 + 0x10) = rax_6
            *(rbx_1 + 0x18) = rsi_3
            *rsi_3 = rbx_1
        
        *(rdi_1 + 4) = 1
        rdi_1[1] = *(rbx_1 + 8)
        *rdi_1 = arg3
        *(rdi_1 + 3) = 0xe3
        *(rdi_1 + 2) = r15_1.b
        int16_t temp2_1 = *rbx_1
        *rbx_1 -= 1
        *(rbx_1 + 8) = rdi_1
        
        if (temp2_1 == 1)
            int16_t rax_8 = rbx_1[1]
            
            if (rax_8 != 0x17ea && rax_8 != 0xf317)
                int32_t var_48_2 = 0x3941
                sub_140af98a0("Unknown", 0xa2, 
                    MallocBinned2 Corruption Canary was 0x%x, will be 0x%x because this block should be "
                "preexisting and in use.", zx.q(rax_8))
                sub_140afbb40()
            
            void* rcx_8 = *(rbx_1 + 0x10)
            rbx_1[1] = 0x3941
            
            if (rcx_8 != 0)
                *(rcx_8 + 0x18) = *(rbx_1 + 0x18)
                rcx_8 = *(rbx_1 + 0x10)
            
            **(rbx_1 + 0x18) = rcx_8
            sub_140a45dc0(arg1 + 0x478, rdi_1 & 0xffffffffffff0000, zx.q(data_143db71bc), 0x40, 
                0x4000000, arg1 + 0x478, arg1 + 0x880, arg1 + 0x878)
        
        rdi_1 = rbp_1
        
        if (rbp_1 == 0)
            break
    
    rdi_1 = r13_1
    
    if (r13_1 == 0)
        break
