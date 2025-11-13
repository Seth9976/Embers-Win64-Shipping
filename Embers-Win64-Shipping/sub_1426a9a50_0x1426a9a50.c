// 函数: sub_1426a9a50
// 地址: 0x1426a9a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*(arg1 + 0x178) = 0xffffffff

if (*(arg1 + 0x160) s> 0)
    int64_t rbp_1 = 0
    
    do
        void* rax_1 = *(arg1 + 0x158)
        uint64_t rcx = zx.q(*(rax_1 + rbp_1))
        
        if (rcx.d s< *(arg1 + 0x118))
            int64_t rsi_1 = *(arg1 + 0x110)
            uint32_t r15_1 = zx.d(*(rax_1 + rbp_1 + 2))
            int64_t rdi_1 = rcx * 0x58
            
            if (*(rdi_1 + rsi_1 + 0x50) != 0)
                int64_t* rcx_1 = *(rdi_1 + rsi_1 + 0x48)
                
                if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
                    int64_t* rcx_2
                    
                    if (*(rdi_1 + rsi_1 + 0x50) == 0)
                        rcx_2 = nullptr
                    else
                        rcx_2 = *(rdi_1 + rsi_1 + 0x48)
                    
                    (*(*rcx_2 + 0x50))(rcx_2, arg1, zx.q(r15_1))
        
        i += 1
        rbp_1 += 4
    while (i s< *(arg1 + 0x160))

uint32_t rdi_2

if (arg2 == 0)
    rdi_2 = 0
else
    rdi_2 = zx.d(*(arg2 + 0x50))

*(arg1 + 0x180) |= 1
int128_t zmm6 =
    sub_1426a9c40(arg1, arg1 + 0x148, rdi_2, 1, sub_1426a9c40(arg1, arg1 + 0x148, rdi_2, 0, arg3))
void* rax_5 = *(arg1 + 0xa8)
*(arg1 + 0x180) &= 0xfffffffe

if (rax_5 == 0)
    rax_5 = sub_141ee69e0(arg1)

int128_t var_28 = zmm6

if (rax_5 == 0)
    zmm6 = zx.o(0)
else
    zmm6 = *(rax_5 + 0x530)

int32_t i_1 = 0

if (*(arg1 + 0x150) s> 0)
    int64_t** rdi_3 = nullptr
    
    do
        int64_t rax_6 = *(arg1 + 0x148)
        
        if (*(rdi_3 + rax_6 + 0x12) == 1)
            int64_t* rcx_6 = *(rdi_3 + rax_6)
            
            if (rcx_6 != 0)
                uint64_t rdx_3 = zx.q(*(rdi_3 + rax_6 + 0x10))
                
                if (rdx_3.d s< *(arg1 + 0x118))
                    zmm6 = sub_1426c3610(rcx_6, arg1, 
                        zx.q(*(rcx_6 + 0x52)) + *(rdx_3 * 0x58 + *(arg1 + 0x110) + 0x30), zmm6, 
                        zmm6)
        
        i_1 += 1
        rdi_3 = &rdi_3[3]
    while (i_1 s< *(arg1 + 0x150))

*(arg1 + 0x150) = 0

if (*(arg1 + 0x154) s<= 0xffffffff)
    sub_1405a5130(arg1 + 0x148, 0)

int32_t result = *(arg1 + 0x164)
*(arg1 + 0x160) = 0

if (result s< 0 && result != 0)
    return sub_1405dadb0(arg1 + 0x158, 0) __tailcall

return result
