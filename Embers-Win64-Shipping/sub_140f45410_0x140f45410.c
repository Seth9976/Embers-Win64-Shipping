// 函数: sub_140f45410
// 地址: 0x140f45410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
char arg_10

if (rsi.d s>= *(arg1 + 0x1c))
    int64_t rbp_1 = rsi << 3
    
    do
        char* rbx_2 = *(*(*(*arg1 + 0x2d0) + rbp_1) + 0x10) + 0x1a8
        
        if (*(rbx_2 + 0x10) != 0)
            int64_t* rcx = *(rbx_2 + 8)
            
            if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
                int64_t* rcx_1
                
                if (*(rbx_2 + 0x10) == 0)
                    rcx_1 = nullptr
                else
                    rcx_1 = *(rbx_2 + 8)
                
                (*(*rcx_1 + 0x48))(rcx_1, &arg_10)
                *rbx_2 = arg_10
        
        if (*rbx_2 != data_1439ae51d)
            break
        
        rsi = zx.q(rsi.d - 1)
        rbp_1 -= 8
    while (rsi.d s>= *(arg1 + 0x1c))

int64_t rbp_2 = sx.q(*(arg1 + 0x1c))
int64_t r12 = sx.q(rsi.d)
int64_t r14 = rbp_2

if (rbp_2 s<= r12)
    do
        void* r15_1 = *(*(*arg1 + 0x2d0) + (r14 << 3))
        char* rbx_4 = *(r15_1 + 0x10) + 0x1a8
        
        if (*(rbx_4 + 0x10) != 0)
            int64_t* rcx_3 = *(rbx_4 + 8)
            
            if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
                int64_t* rcx_4
                
                if (*(rbx_4 + 0x10) == 0)
                    rcx_4 = nullptr
                else
                    rcx_4 = *(rbx_4 + 8)
                
                (*(*rcx_4 + 0x48))(rcx_4, &arg_10)
                *rbx_4 = arg_10
        
        if (*rbx_4 != data_1439ae51d)
            int32_t* rcx_10
            
            if (arg1[5].d == *(arg1 + 0x54))
            label_140f4556f:
                rcx_10 = nullptr
            else
                void* rdx_3 = arg1[0xc]
                void* r8_1 = &arg1[0xb]
                
                if (rdx_3 != 0)
                    r8_1 = rdx_3
                
                int32_t rax_16 = *(r8_1 + (((sx.q(arg1[0xd].d) - 1) & sx.q(rbp_2.d)) << 2))
                
                if (rax_16 == 0xffffffff)
                label_140f4556f_1:
                    rcx_10 = nullptr
                else
                    while (true)
                        rcx_10 = sx.q(rax_16) * 0x1c + arg1[4]
                        
                        if (*rcx_10 == rbp_2.d)
                            break
                        
                        rax_16 = rcx_10[5]
                        
                        if (rax_16 == 0xffffffff)
                            goto label_140f4556f_2
                    
                    if (rax_16 == 0xffffffff)
                    label_140f4556f_2:
                        rcx_10 = nullptr
            
            if (r14 == r12 && *(r15_1 + 0x58) != 0)
                void* rbx_6 = *arg1 + 0x2a8
                
                if (*(rbx_6 + 0x10) != 0)
                    int64_t* rcx_11 = *(rbx_6 + 8)
                    
                    if (rcx_11 != 0 && (*(*rcx_11 + 0x28))(rcx_11) != 0)
                        int64_t* rcx_12
                        
                        if (*(rbx_6 + 0x10) == 0)
                            rcx_12 = nullptr
                        else
                            rcx_12 = *(rbx_6 + 8)
                        
                        (*(*rcx_12 + 0x48))(rcx_12)
                        *rbx_6 = arg3
                
                arg3 = *rbx_6 f- rcx_10[1]
                rcx_10[3] = arg3
            
            rcx_10[4] = arg1[3].d
            void* rax_21 = arg1[1]
            (*rax_21)(*(rax_21 + 8), r15_1, &rcx_10[1])
        
        rbp_2 = zx.q(rbp_2.d + 1)
        r14 += 1
    while (r14 s<= r12)

void* result = *arg1
arg1[2].d = 0
arg3 = *(result + 0x2ec) f+ arg1[3].d
arg1[3].d = 0
*(arg1 + 0x1c) = 0xffffffff
*(arg1 + 0x14) = arg3 f+ *(arg1 + 0x14)
return result
