// 函数: sub_142c39160
// 地址: 0x142c39160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
void* rdi = *(arg1 + 0x10)
int64_t var_20

if (*(rbx + 0x5c) u< arg2 - 1)
    while (*(rbx + 0x58) != 0)
        uint64_t rdx = zx.q(*(rbx + 0x5c))
        int64_t r8_1 = *(rbx + 0x70)
        int32_t r9_1 = *(r8_1 + zx.q((rdx + 1).d) * 0x14)
        
        if (r9_1 - 0xfe00 u<= 0xf || r9_1 - 0xe0100 u<= 0xef)
            uint64_t rcx_4 = rdx * 5
            uint64_t r8_4 = zx.q(*(r8_1 + (rcx_4 << 2)))
            int32_t* rdx_4 = r8_1 + 0xc + (rcx_4 << 2)
            *rdx_4 = 0
            void* r10_2 = *(rdi + 0x40)
            var_20 = *(r10_2 + 0x30)
            int32_t* var_28_2 = rdx_4
            bool cond:0_1 = (*(r10_2 + 0x140))(rdi, *(rdi + 0x48), r8_4) == 0
            uint64_t rcx_6 = zx.q(*(rbx + 0x5c)) * 5
            int64_t rax_16 = *(rbx + 0x70)
            
            if (cond:0_1)
                uint64_t r8_5 = zx.q(*(rax_16 + (rcx_6 << 2)))
                *(rax_16 + 0xc + (rcx_6 << 2)) = 0
                void* r10_3 = *(rdi + 0x40)
                (*(r10_3 + 0x130))(rdi, *(rdi + 0x48), r8_5, rax_16 + 0xc + (rcx_6 << 2), 
                    *(r10_3 + 0x20), var_20)
                sub_142c08c10(rbx)
                uint64_t rcx_11 = zx.q(*(rbx + 0x5c)) * 5
                int64_t rax_19 = *(rbx + 0x70)
                uint64_t r8_6 = zx.q(*(rax_19 + (rcx_11 << 2)))
                *(rax_19 + 0xc + (rcx_11 << 2)) = 0
                void* r10_4 = *(rdi + 0x40)
                (*(r10_4 + 0x130))(rdi, *(rdi + 0x48), r8_6, rax_19 + 0xc + (rcx_11 << 2), 
                    *(r10_4 + 0x20))
                sub_142c08c10(rbx)
            else
                int32_t arg_10 = *(rax_16 + (rcx_6 << 2))
                sub_142bf5610(rbx, 2, 1, &arg_10)
            
            while (*(rbx + 0x5c) u< arg2)
                uint64_t rcx_14 = zx.q(*(rbx + 0x5c)) * 5
                int64_t rax_22 = *(rbx + 0x70)
                void* rdx_8 = rax_22 + (rcx_14 << 2)
                int32_t rcx_15 = *(rax_22 + (rcx_14 << 2))
                
                if (rcx_15 - 0xfe00 u> 0xf && rcx_15 - 0xe0100 u> 0xef)
                    break
                
                *(rdx_8 + 0xc) = 0
                void* r10_5 = *(rdi + 0x40)
                (*(r10_5 + 0x130))(rdi, *(rdi + 0x48), zx.q(rcx_15), rdx_8 + 0xc, *(r10_5 + 0x20), 
                    var_20)
                
                if (*(rbx + 0x59) == 0)
                    *(rbx + 0x5c) += 1
                else if (*(rbx + 0x78) != *(rbx + 0x70) || *(rbx + 0x64) != *(rbx + 0x5c))
                    if (sub_142bf50b0(rbx, 1, 1) != 0)
                        int64_t rdx_10 = *(rbx + 0x70)
                        uint64_t r9_11 = zx.q(*(rbx + 0x5c)) * 5
                        uint64_t rcx_18 = zx.q(*(rbx + 0x64)) * 5
                        int64_t rax_31 = *(rbx + 0x78)
                        *(rax_31 + (rcx_18 << 2)) = *(rdx_10 + (r9_11 << 2))
                        *(rax_31 + (rcx_18 << 2) + 0x10) = *(rdx_10 + (r9_11 << 2) + 0x10)
                        *(rbx + 0x64) += 1
                        *(rbx + 0x5c) += 1
                else
                    *(rbx + 0x64) += 1
                    *(rbx + 0x5c) += 1
        else
            uint64_t rcx = rdx * 5
            uint64_t r8_2 = zx.q(*(r8_1 + (rcx << 2)))
            *(r8_1 + 0xc + (rcx << 2)) = 0
            void* r10_1 = *(rdi + 0x40)
            (*(r10_1 + 0x130))(rdi, *(rdi + 0x48), r8_2, r8_1 + 0xc + (rcx << 2), *(r10_1 + 0x20), 
                var_20)
            
            if (*(rbx + 0x59) == 0)
                *(rbx + 0x5c) += 1
            else if (*(rbx + 0x78) != *(rbx + 0x70) || *(rbx + 0x64) != *(rbx + 0x5c))
                if (sub_142bf50b0(rbx, 1, 1) != 0)
                    int64_t rdx_2 = *(rbx + 0x70)
                    uint64_t r9_4 = zx.q(*(rbx + 0x5c)) * 5
                    uint64_t rcx_3 = zx.q(*(rbx + 0x64)) * 5
                    int64_t rax_11 = *(rbx + 0x78)
                    *(rax_11 + (rcx_3 << 2)) = *(rdx_2 + (r9_4 << 2))
                    *(rax_11 + (rcx_3 << 2) + 0x10) = *(rdx_2 + (r9_4 << 2) + 0x10)
                    *(rbx + 0x64) += 1
                    *(rbx + 0x5c) += 1
            else
                *(rbx + 0x64) += 1
                *(rbx + 0x5c) += 1
        
        if (*(rbx + 0x5c) u>= arg2 - 1)
            break

uint64_t result = zx.q(*(rbx + 0x5c))

if (result.d u< arg2)
    uint64_t rdx_11 = result * 5
    int64_t rax_33 = *(rbx + 0x70)
    uint64_t r8_9 = zx.q(*(rax_33 + (rdx_11 << 2)))
    *(rax_33 + 0xc + (rdx_11 << 2)) = 0
    void* r10_6 = *(rdi + 0x40)
    result = (*(r10_6 + 0x130))(rdi, *(rdi + 0x48), r8_9, rax_33 + 0xc + (rdx_11 << 2), 
        *(r10_6 + 0x20), var_20)
    
    if (*(rbx + 0x59) == 0)
        *(rbx + 0x5c) += 1
    else
        if (*(rbx + 0x78) == *(rbx + 0x70))
            result = zx.q(*(rbx + 0x5c))
        
        if (*(rbx + 0x78) == *(rbx + 0x70) && *(rbx + 0x64) == result.d)
            *(rbx + 0x64) += 1
            *(rbx + 0x5c) += 1
        else
            result = sub_142bf50b0(rbx, 1, 1)
            
            if (result.b != 0)
                int64_t rdx_13 = *(rbx + 0x70)
                uint64_t r9_14 = zx.q(*(rbx + 0x5c)) * 5
                uint64_t rcx_21 = zx.q(*(rbx + 0x64)) * 5
                int64_t rax_38 = *(rbx + 0x78)
                *(rax_38 + (rcx_21 << 2)) = *(rdx_13 + (r9_14 << 2))
                result = zx.q(*(rdx_13 + (r9_14 << 2) + 0x10))
                *(rax_38 + (rcx_21 << 2) + 0x10) = result.d
                *(rbx + 0x64) += 1
                *(rbx + 0x5c) += 1

return result
