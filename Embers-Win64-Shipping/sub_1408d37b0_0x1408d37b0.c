// 函数: sub_1408d37b0
// 地址: 0x1408d37b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** r15 = *(arg1 + 0x38)
int64_t result = sx.q(*(arg1 + 0x40))
void** arg_10 = r15
void* rbp = &r15[result]
void* var_58 = rbp

while (r15 != rbp)
    void* rbx_1 = *r15
    int32_t i = 0
    int32_t r8
    
    if (*(rbx_1 + 0x30) s> 0)
        int64_t rdi_1 = 0
        int64_t arg_8 = 0
        int64_t r13_1 = 0
        
        do
            result = *(rbx_1 + 0x28)
            
            if (*(result + r13_1) != 0)
                uint64_t* r15_3 = *(rbx_1 + 0x38) + 0x20 + rdi_1
                uint64_t rbp_1 = *r15_3
                int64_t r14_1 = sx.q(r15_3[1].d) << 2
                result = r14_1 + rbp_1
                uint64_t r14_2 = r14_1 u>> 2
                
                if (rbp_1 u> result)
                    r14_2 = 0
                
                if (r14_2 != 0)
                    int64_t r15_4 = 0
                    
                    do
                        int64_t rdi_2 = sx.q(*rbp_1)
                        r8.b = 1
                        int64_t rsi_2 = rdi_2 * 2
                        sub_141f70fe0(*(*(rbx_1 + 0x48) + (rsi_2 << 3)), nullptr, r8)
                        int64_t rdx_1
                        rdx_1.b = 1
                        void* rcx_2 = *(*(rbx_1 + 0x48) + rdi_2 * 0x10)
                        *(rcx_2 + 0x3a) |= 2
                        int64_t* rcx_3 = *(*(rbx_1 + 0x48) + (rsi_2 << 3))
                        (*(*rcx_3 + 0x340))(rcx_3, rdx_1)
                        result = *(rbx_1 + 0x48)
                        rbp_1 += 4
                        r15_4 += 1
                        void* rdx_2 = *(result + (rsi_2 << 3))
                        *(rdx_2 + 0x5a7) &= 0xdf
                    while (r15_4 != r14_2)
                    
                    rdi_1 = arg_8
                
                r15_3[1].d = 0
                
                if (*(r15_3 + 0xc) != 0)
                    result, r8 = sub_1405dadb0(r15_3, 0)
            
            rdi_1 += 0x40
            i += 1
            r13_1 += 8
            arg_8 = rdi_1
        while (i s< *(rbx_1 + 0x30))
        
        r15 = arg_10
        rbp = var_58
    
    int32_t i_2 = *(rbx_1 + 0x40)
    
    if (i_2 != 0)
        void* rdi_5 = *(rbx_1 + 0x38) + 0x20
        int32_t i_1
        
        do
            result, r8 = sub_140745b20(rdi_5 + 0x10)
            int64_t rcx_6 = *rdi_5
            
            if (rcx_6 != 0)
                result, r8 = sub_140a74f90(rcx_6)
            
            rdi_5 += 0x40
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(rbx_1 + 0x40) = 0
    
    if (*(rbx_1 + 0x44) != 0)
        result, r8 = sub_1405a52a0(rbx_1 + 0x38, 0)
    
    *(rbx_1 + 0x50) = 0
    
    if (*(rbx_1 + 0x54) != 0)
        result, r8 = sub_1405a5410(rbx_1 + 0x48, 0)
    
    *(rbx_1 + 0x30) = 0
    
    if (*(rbx_1 + 0x34) != 0)
        result, r8 = sub_140638c50(rbx_1 + 0x28, 0)
    
    r15 = &r15[1]
    arg_10 = r15

return result
