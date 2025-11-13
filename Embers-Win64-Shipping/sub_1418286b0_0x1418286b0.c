// 函数: sub_1418286b0
// 地址: 0x1418286b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t* rbx_1 = *arg1
int64_t rdi_1 = arg2
int64_t* rax

if (rbx_1 == 0)
    rax = j_sub_140a82f30(0x20)
    
    if (rax != 0)
        *rax = rdi_1
        rax[1] = arg3
        rax[2] = 0
        rax[3] = 0
    
    *arg1 = rax
    arg1[1] = rax
else if (arg4 != 0)
    int64_t* rbx_2 = arg1[1]
    
    if (rbx_2 != 0)
        while (true)
            int64_t rcx_5 = *rbx_2
            int64_t rdx_6 = rbx_2[1] + rcx_5
            
            if (rdi_1 u> rdx_6)
                int64_t* rax_8 = j_sub_140a82f30(0x20)
                int64_t* rcx_9 = rax_8
                
                if (rax_8 == 0)
                    rcx_9 = nullptr
                else
                    *rax_8 = rdi_1
                    rax_8[1] = arg3
                    rax_8[3] = 0
                
                rcx_9[2] = rbx_2
                rcx_9[3] = rbx_2[3]
                rax = rbx_2[3]
                
                if (rax == 0)
                    arg1[1] = rcx_9
                    rbx_2[3] = rcx_9
                else
                    rax[2] = rcx_9
                    rbx_2[3] = rcx_9
                
                break
            
            int64_t rax_5 = rdi_1 + arg3
            
            if (rcx_5 u<= rax_5)
                if (rcx_5 u<= rdi_1)
                    rdi_1 = rcx_5
                
                *rbx_2 = rdi_1
                
                if (rax_5 u>= rdx_6)
                    rdx_6 = rax_5
                
                rbx_2[1] = rdx_6 - rdi_1
                sub_14182f660(arg1, rbx_2, arg4)
                break
            
            rbx_2 = rbx_2[2]
            
            if (rbx_2 == 0)
                int64_t* rax_6 = j_sub_140a82f30(zx.q((&rbx_2[4]).d))
                int64_t* rcx_7 = rax_6
                
                if (rax_6 == 0)
                    rcx_7 = nullptr
                else
                    *rax_6 = rdi_1
                    rax_6[1] = arg3
                    rax_6[2] = rbx_2
                    rax_6[3] = rbx_2
                
                void* rdx_7 = *arg1
                rcx_7[2] = *(rdx_7 + 0x10)
                rcx_7[3] = rdx_7
                rax = *(rdx_7 + 0x10)
                
                if (rax == 0)
                    *arg1 = rcx_7
                    *(rdx_7 + 0x10) = rcx_7
                else
                    rax[3] = rcx_7
                    *(rdx_7 + 0x10) = rcx_7
                
                break
else
    int64_t r8 = arg3 + arg2
    
    while (true)
        int64_t rcx = *rbx_1
        
        if (rcx u> r8)
            int64_t* rax_3 = j_sub_140a82f30(0x20)
            int64_t* rcx_4 = rax_3
            
            if (rax_3 == 0)
                rcx_4 = nullptr
            else
                *rax_3 = rdi_1
                rax_3[1] = arg3
                rax_3[2] = 0
                rax_3[3] = 0
            
            rcx_4[2] = rbx_1[2]
            rcx_4[3] = rbx_1
            rax = rbx_1[2]
            
            if (rax == 0)
                *arg1 = rcx_4
                rbx_1[2] = rcx_4
            else
                rax[3] = rcx_4
                rbx_1[2] = rcx_4
            
            break
        
        int64_t rdx_1 = rbx_1[1] + rcx
        
        if (rdi_1 u<= rdx_1)
            if (rcx u<= rdi_1)
                rdi_1 = rcx
            
            *rbx_1 = rdi_1
            
            if (r8 u>= rdx_1)
                rdx_1 = r8
            
            rbx_1[1] = rdx_1 - rdi_1
            sub_14182f660(arg1, rbx_1, 0)
            break
        
        rbx_1 = rbx_1[3]
        
        if (rbx_1 == 0)
            int64_t* rax_1 = j_sub_140a82f30(zx.q((&rbx_1[4]).d))
            int64_t* rcx_2 = rax_1
            
            if (rax_1 == 0)
                rcx_2 = nullptr
            else
                *rax_1 = rdi_1
                rax_1[1] = arg3
                rax_1[2] = rbx_1
                rax_1[3] = rbx_1
            
            void* rdx_2 = arg1[1]
            rcx_2[2] = rdx_2
            rcx_2[3] = *(rdx_2 + 0x18)
            rax = *(rdx_2 + 0x18)
            
            if (rax == 0)
                arg1[1] = rcx_2
                *(rdx_2 + 0x18) = rcx_2
            else
                rax[2] = rcx_2
                *(rdx_2 + 0x18) = rcx_2
            
            break
