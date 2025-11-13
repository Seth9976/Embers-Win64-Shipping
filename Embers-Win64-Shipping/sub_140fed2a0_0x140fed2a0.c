// 函数: sub_140fed2a0
// 地址: 0x140fed2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
void* rdi = arg1
int32_t i = 0

if (*(arg1 + 0x18) s> 0)
    int64_t r12_1 = 0
    void* r13_1 = arg1 + 0x10
    void* arg_10 = r13_1
    
    do
        int32_t rbx_1 = 0
        void* r14_2 = *r13_1 + r12_1
        result = *(r14_2 + 0x10)
        bool cond:0_1 = result != 0
        
        if (result s> 0)
            int64_t* rdi_1 = nullptr
            
            do
                void* rsi_1 = *(rdi_1 + *(r14_2 + 8))
                int32_t rax_1
                
                if ((*(rsi_1 + 0x28) & 1) == 0)
                    rax_1 = 0
                    
                    if (0 == *(rsi_1 + 8))
                        *(rsi_1 + 8) = 0
                    else
                        rax_1 = *(rsi_1 + 8)
                
                if ((*(rsi_1 + 0x28) & 1) != 0 || rax_1 == 1)
                    sub_140ffc3a0(r14_2 + 8, rbx_1, 1, 1)
                    rbx_1 -= 1
                    rdi_1 -= 8
                else
                    void* rbp_1 = data_143e2b8b8
                    int32_t var_48_1 = 0
                    int64_t* rcx = *(rbp_1 + 0x150)
                    int32_t rax_3 = (*(*rcx + 0xe8))(rcx, *(rsi_1 + 0x18), rsi_1 + 0x20, 8, 0)
                    
                    if (rax_3 != 1)
                        if (rax_3 == 0)
                            *(rsi_1 + 0x28) |= 1
                            sub_140ffc3a0(r14_2 + 8, rbx_1, 1, 1)
                            rbx_1 -= 1
                            rdi_1 -= 8
                        else if (rax_3 s< 0)
                            var_48_1.q = *(rbp_1 + 0x168)
                            sub_140fff020(rax_3, "Result", 
                                "D:"
                            "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Query."
                            "cpp", 
                                0x15c)
                
                result = *(r14_2 + 0x10)
                rbx_1 += 1
                rdi_1 = &rdi_1[1]
            while (rbx_1 s< result)
            
            r13_1 = arg_10
            rdi = arg1
            cond:0_1 = result != 0
        
        if (not(cond:0_1))
            int64_t rbx_2 = sx.q(i) * 3
            sub_14081c910(*r13_1 + 8 + (rbx_2 << 3))
            int32_t rdx_2 = *(r13_1 + 8)
            int32_t rcx_8 = rdx_2 - i - 1
            
            if (rcx_8 s>= 1)
                rcx_8 = 1
            
            if (rcx_8 != 0)
                int64_t r9_1 = *r13_1
                memcpy(r9_1 + (rbx_2 << 3), r9_1 + sx.q(rdx_2 - rcx_8) * 0x18, rcx_8 * 0x18)
                rdx_2 = *(r13_1 + 8)
            
            *(r13_1 + 8) = rdx_2 - 1
            result = sub_1405fde90(r13_1)
            i -= 1
            r12_1 -= 0x18
        
        i += 1
        r12_1 += 0x18
    while (i s< *(rdi + 0x18))

return result
