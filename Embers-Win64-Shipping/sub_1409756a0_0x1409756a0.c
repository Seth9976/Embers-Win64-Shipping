// 函数: sub_1409756a0
// 地址: 0x1409756a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi
rsi.b = 0
int32_t r12 = 0
char arg_8 = 0

if (arg1[0xc].d s<= 0)
    return 0

uint64_t rbx
uint64_t arg_10 = rbx
void* rcx = nullptr
void* arg_18 = nullptr

while (true)
    if (rsi.b == 0)
        int64_t rax_1 = arg1[0xb]
        void* rbp_1 = rcx + rax_1
        int64_t* rcx_1 = *(rcx + rax_1 + 0x10)
        
        if (rcx_1 != 0)
            rax_1 = (*(*rcx_1 + 0x28))(rcx_1)
        
        if (rcx_1 == 0 || rax_1.b == 0)
            rbx.b = 0
        else
            rbx.b = 1
        
        int64_t* rcx_2 = *(arg2 + 8)
        
        if (rcx_2 != 0)
            rax_1 = (*(*rcx_2 + 0x28))(rcx_2)
        
        if (rcx_2 == 0 || rax_1.b == 0)
            rax_1.b = 0
        else
            rax_1.b = 1
        
        if (rbx.b == rax_1.b)
            char rax_5
            
            if (rbx.b != 0)
                int64_t* rcx_3 = *(rbp_1 + 0x10)
                rax_5 = (**rcx_3)(rcx_3, *(arg2 + 8))
            
            if (rbx.b == 0 || rax_5 != 0)
                int32_t rax_6 = *(rbp_1 + 0x38)
                
                if (rax_6 s> 1)
                    int32_t i = 0
                    
                    if (rax_6 s> 0)
                        int64_t rsi_1 = 0
                        
                        do
                            void* rbx_2 = *(rbp_1 + 0x30) + rsi_1
                            
                            if (sub_14094dfb0(rbx_2, rbp_1 + 8) == 0)
                                int64_t* rcx_5 = *(rbx_2 + 8)
                                
                                if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0
                                        && (*(*arg1 + 0x2b8))(arg1, rbx_2) == 0xffffffff)
                                    sub_14094ded0(rbp_1 + 8, rbx_2)
                                    break
                            
                            i += 1
                            rsi_1 += 0x50
                        while (i s< *(rbp_1 + 0x38))
                        
                        rsi = zx.q(arg_8)
        
        int32_t i_1 = *(rbp_1 + 0x38)
        rbx = 0
        bool cond:0_1 = i_1 != 0
        
        if (i_1 s> 0)
            int64_t rdi_1 = 0
            
            do
                int64_t r14_1 = *(rbp_1 + 0x30)
                int64_t* rcx_8 = *(rdi_1 + r14_1 + 8)
                
                if (rcx_8 != 0)
                    i_1 = (*(*rcx_8 + 0x28))(rcx_8)
                
                if (rcx_8 == 0 || i_1.b == 0)
                    rsi.b = 0
                else
                    rsi.b = 1
                
                int64_t* rcx_9 = *(arg2 + 8)
                
                if (rcx_9 != 0)
                    i_1 = (*(*rcx_9 + 0x28))(rcx_9)
                
                if (rcx_9 == 0 || i_1.b == 0)
                    i_1.b = 0
                else
                    i_1.b = 1
                
                char rax_15
                
                if (rsi.b == i_1.b && rsi.b != 0)
                    int64_t* rcx_10 = *(rdi_1 + r14_1 + 8)
                    rax_15 = (**rcx_10)(rcx_10, *(arg2 + 8))
                
                if (rsi.b != i_1.b || (rsi.b != 0 && rax_15 == 0))
                    rsi = zx.q(arg_8)
                else
                    sub_140975590(rbp_1, rbx.d)
                    rbx = zx.q(rbx.d - 1)
                    rdi_1 -= 0x50
                    arg1[6].d -= 1
                    rsi.b = 1
                    arg_8 = 1
                
                i_1 = *(rbp_1 + 0x38)
                rbx = zx.q(rbx.d + 1)
                rdi_1 += 0x50
            while (rbx.d s< i_1)
            
            cond:0_1 = i_1 != 0
        
        void* rcx_14
        
        if (cond:0_1)
            rcx_14 = arg_18
        else
            sub_140974980(&arg1[0xb], r12, 1, 1)
            r12 -= 1
            rcx_14 = arg_18 - 0x50
        
        rcx = rcx_14 + 0x50
        r12 += 1
        arg_18 = rcx
        
        if (r12 s< arg1[0xc].d)
            continue
        else if (rsi.b == 0)
            break
    
    (*(*arg1 + 0x378))(arg1)
    break

return zx.q(rsi.b)
