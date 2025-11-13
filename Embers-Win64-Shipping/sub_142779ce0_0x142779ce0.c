// 函数: sub_142779ce0
// 地址: 0x142779ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg2
int64_t rdx = sx.q(arg2[1].d)

for (; i != &i[rdx]; i = &i[1])
    if (*i == arg1)
        return nullptr

int32_t rax_1 = (rdx + 1).d
arg2[1].d = rax_1

if (rax_1 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*((rdx << 3) + *arg2) = arg1
int64_t* rcx_1 = *(arg1 + 0xb0)

if (rcx_1 != 0 && *(arg1 + 0xb8) != 0)
    int32_t rax_4 = (*(*rcx_1 + 0x3e8))(rcx_1)
    int32_t rax_6
    
    if (rax_4 == 3)
        int64_t* rcx_2 = *(arg1 + 0xb8)
        rax_6 = (*(*rcx_2 + 0x3e8))(rcx_2)
    
    if (rax_4 != 3 || rax_6 != 3)
        int64_t* rcx_7 = *(arg1 + 0xb0)
        int32_t rax_12 = (*(*rcx_7 + 0x3e8))(rcx_7)
        int32_t rax_14
        
        if (rax_12 == 3)
            int64_t* rcx_8 = *(arg1 + 0xb8)
            rax_14 = (*(*rcx_8 + 0x3e8))(rcx_8)
        
        if (rax_12 != 3 || rax_14 != 4)
            int64_t* rcx_13 = *(arg1 + 0xb0)
            
            if ((*(*rcx_13 + 0x3e8))(rcx_13) == 3)
                int64_t* rcx_14 = *(arg1 + 0xb8)
                int32_t rax_21 = (*(*rcx_14 + 0x3e8))(rcx_14)
                
                if (rax_21 == 2)
                    void*** rax_22 = j_sub_140a82f30(zx.q(rax_21 + 0x26))
                    
                    if (rax_22 != 0)
                        int64_t* rcx_16 = *(arg1 + 0xb8)
                        uint32_t rsi_3 = zx.d(*(arg1 + 0xc0))
                        int64_t* rdi_3 = *(arg1 + 0xb0)
                        int64_t r8_6 = *rcx_16
                        int64_t rax_23 = (*(r8_6 + 0x3f8))(rcx_16, arg2, r8_6)
                        int64_t r8_7 = *rdi_3
                        return sub_1417bf2a0(rax_22, (*(r8_7 + 0x3f8))(rdi_3, arg2, r8_7), rax_23, 
                            rsi_3)
        else
            void*** rax_15 = j_sub_140a82f30(zx.q(rax_14 + 0x24))
            
            if (rax_15 != 0)
                int64_t* rcx_10 = *(arg1 + 0xb8)
                uint32_t rsi_2 = zx.d(*(arg1 + 0xc0))
                int64_t* rdi_2 = *(arg1 + 0xb0)
                int64_t r8_3 = *rcx_10
                int64_t rax_16 = (*(r8_3 + 0x3f8))(rcx_10, arg2, r8_3)
                int64_t r8_4 = *rdi_2
                return sub_1417bf3a0(rax_15, (*(r8_4 + 0x3f8))(rdi_2, arg2, r8_4), rax_16, rsi_2)
    else
        void*** rax_7 = j_sub_140a82f30(zx.q(rax_6 + 0x25))
        
        if (rax_7 != 0)
            int64_t* rcx_4 = *(arg1 + 0xb8)
            uint32_t rsi_1 = zx.d(*(arg1 + 0xc0))
            int64_t* rdi_1 = *(arg1 + 0xb0)
            int64_t r8 = *rcx_4
            int64_t rax_8 = (*(r8 + 0x3f8))(rcx_4, arg2, r8)
            int64_t r8_1 = *rdi_1
            return sub_1417bf320(rax_7, (*(r8_1 + 0x3f8))(rdi_1, arg2, r8_1), rax_8, rsi_1)

return nullptr
