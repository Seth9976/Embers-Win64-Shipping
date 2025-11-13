// 函数: sub_141ae06b0
// 地址: 0x141ae06b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r13 = arg2
int64_t result

if (arg4 != 0)
    void* rsi_1 = arg3 + 0xd8
    int32_t i
    
    do
        void* rbp_1 = r13
        r13 += 0xf8
        sub_141adb020(rbp_1, rsi_1 - 0xd8)
        *(rbp_1 + 0xc8) = *(rsi_1 - 0x10)
        *(rbp_1 + 0xcc) = *(rsi_1 - 0xc)
        
        if (rbp_1 + 0xd0 != rsi_1 - 8)
            int32_t rdi_1 = *rsi_1
            int64_t r14_1 = *(rsi_1 - 8)
            int32_t r8 = *(rbp_1 + 0xdc)
            *(rbp_1 + 0xd8) = rdi_1
            
            if (rdi_1 != 0 || r8 != 0)
                sub_141ae1d10(rbp_1 + 0xd0, rdi_1, r8)
                memcpy(*(rbp_1 + 0xd0), r14_1, rdi_1 * 0x2c)
            else
                *(rbp_1 + 0xdc) = rdi_1
        
        if (rbp_1 + 0xe0 != rsi_1 + 8)
            int32_t j_1 = *(rbp_1 + 0xe8)
            
            if (j_1 != 0)
                void* rbx_3 = *(rbp_1 + 0xe0) + 0x50
                int32_t j
                
                do
                    int64_t rcx_3 = *(rbx_3 + 0x10)
                    
                    if (rcx_3 != 0)
                        sub_140a74f90(rcx_3)
                    
                    int64_t rcx_4 = *rbx_3
                    
                    if (rcx_4 != 0)
                        sub_140a74f90(rcx_4)
                    
                    int64_t rcx_5 = *(rbx_3 - 0x10)
                    
                    if (rcx_5 != 0)
                        sub_140a74f90(rcx_5)
                    
                    rbx_3 += 0xa0
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            sub_141ade940(rbp_1 + 0xe0, *(rsi_1 + 8), *(rsi_1 + 0x10), *(rbp_1 + 0xec), 0)
        
        result = *(rsi_1 + 0x18)
        rsi_1 += 0xf8
        *(rbp_1 + 0xf0) = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
