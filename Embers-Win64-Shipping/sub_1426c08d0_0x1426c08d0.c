// 函数: sub_1426c08d0
// 地址: 0x1426c08d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t __saved_zmm6 = arg4
arg4 = arg2
sub_1426ecbc0(arg1)
sub_140b33630("BehaviorTreeTick")
int32_t rax = *(arg1 + 0x118)
int32_t r15 = 0

if (rax s> 0)
    int64_t rdi_1 = 0
    
    do
        int64_t rsi_1 = *(arg1 + 0x110)
        int32_t i = 0
        
        if (*(rdi_1 + rsi_1 + 0x18) s> 0)
            int64_t** r14_1 = nullptr
            
            do
                int64_t* rcx = *(r14_1 + *(rdi_1 + rsi_1 + 0x10))
                arg4 = sub_1426c3610(rcx, arg1, zx.q(*(rcx + 0x52)) + *(rdi_1 + rsi_1 + 0x30), 
                    arg4, arg4)
                i += 1
                r14_1 = &r14_1[1]
            while (i s< *(rdi_1 + rsi_1 + 0x18))
        
        rax = *(arg1 + 0x118)
        r15 += 1
        rdi_1 += 0x58
    while (r15 s< rax)

if ((*(arg1 + 0x263) & 8) != 0)
    arg3, arg4 = sub_1426ba550(arg1)
    rax = *(arg1 + 0x118)

if (rax != 0)
    char rax_2 = *(arg1 + 0x263)
    
    if ((rax_2 & 0x20) != 0 && (rax_2 & 0x40) == 0)
        *(arg1 + 0x262) |= 1
        int32_t rax_3 = *(arg1 + 0x118)
        int32_t r12_1 = 0
        
        if (rax_3 s> 0)
            int64_t rdi_2 = 0
            
            do
                int64_t r15_1 = *(arg1 + 0x110)
                int32_t i_1 = 0
                
                if (*(rdi_2 + r15_1 + 0x28) s> 0)
                    int64_t* r14_2 = nullptr
                    
                    do
                        int64_t* rcx_2 = *(r14_2 + *(rdi_2 + r15_1 + 0x20))
                        int64_t rbp_2 = zx.q(*(rcx_2 + 0x52)) + *(rdi_2 + r15_1 + 0x30)
                        
                        if ((rcx_2[0xd].b & 2) != 0)
                            if ((*(rcx_2 + 0x55) & 4) == 0)
                                goto label_1426c0a4a
                            
                            uint32_t rax_7 = zx.d((*(*rcx_2 + 0x298))())
                            
                            if (rax_7 != 0)
                                int64_t rcx_4 = zx.q(rax_7 + 3) & 0xfffffffffffffffc
                                
                                if (rbp_2 != rcx_4)
                                    int64_t rax_10 = sx.q(*(rbp_2 - rcx_4))
                                    
                                    if (rax_10.d s>= 0 && rax_10.d s< *(arg1 + 0x138))
                                        rcx_2 = *(*(arg1 + 0x130) + (rax_10 << 3))
                                    label_1426c0a4a:
                                        
                                        if (rcx_2 != 0)
                                            (*(*rcx_2 + 0x2c0))(rcx_2, arg1, rbp_2, arg4, 
                                                __saved_zmm6)
                        
                        i_1 += 1
                        r14_2 = &r14_2[2]
                    while (i_1 s< *(rdi_2 + r15_1 + 0x28))
                
                rax_3 = *(arg1 + 0x118)
                r12_1 += 1
                rdi_2 += 0x58
            while (r12_1 s< rax_3)
        
        uint64_t rcx_6 = zx.q(*(arg1 + 0x260))
        
        if (rcx_6.d s< rax_3)
            void* rdx_4 = rcx_6 * 0x58 + *(arg1 + 0x110)
            
            if (*(rdx_4 + 0x41) - 1 u<= 1)
                int64_t* rcx_7 = *(rdx_4 + 8)
                int64_t rdi_4 = zx.q(*(rcx_7 + 0x52)) + *(rdx_4 + 0x30)
                
                if ((rcx_7[0xd].b & 2) != 0)
                    if ((*(rcx_7 + 0x55) & 4) != 0)
                        rcx_7 = sub_1426b2ab0(rcx_7, arg1, rdi_4)
                    
                    if (rcx_7 != 0)
                        (*(*rcx_7 + 0x2c0))(rcx_7, arg1, rdi_4, arg4, __saved_zmm6)
        
        if (zx.d(*(arg1 + 0x260)) + 1 s< *(arg1 + 0x118))
            int64_t rdx_7 = sx.q(*(arg1 + 0x118)) * 0x58
            int64_t rax_19 = *(arg1 + 0x110)
            
            if (*(rdx_7 + rax_19 - 0x17) == 2)
                int64_t* rcx_8 = *(rdx_7 + rax_19 - 0x50)
                int64_t rdi_6 = zx.q(*(rcx_8 + 0x52)) + *(rdx_7 + rax_19 - 0x28)
                
                if ((rcx_8[0xd].b & 2) != 0)
                    if ((*(rcx_8 + 0x55) & 4) != 0)
                        rcx_8 = sub_1426b2ab0(rcx_8, arg1, rdi_6)
                    
                    if (rcx_8 != 0)
                        (*(*rcx_8 + 0x2c0))(rcx_8, arg1, rdi_6, arg4, __saved_zmm6)
        
        *(arg1 + 0x262) &= 0xfe
        
        if ((*(arg1 + 0x263) & 1) != 0)
            sub_1426bfc00(arg1, 0, arg3)

return sub_140b37f60("BehaviorTreeTick") __tailcall
