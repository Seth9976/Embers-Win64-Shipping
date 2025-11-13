// 函数: sub_140f07c30
// 地址: 0x140f07c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
int32_t rax

if (arg2 s>= 0)
    rax = *(arg1 + 0x20)
    
    if (arg2 s< rax && arg2 + 1 s>= 0 && arg2 + 1 s< rax)
        int64_t rax_1 = sx.q(arg2)
        int64_t* r13_1 = rax_1 * 0x70 + *(arg1 + 0x18)
        int64_t* r12_1 = (rax_1 + 1) * 0x70 + *(arg1 + 0x18)
        int64_t* rdx = *r12_1
        int32_t r9 = rdx[1].d
        int32_t r8 = r9 - 1
        
        if (r9 == 0)
            r8 = -1
        
        int32_t rax_3 = r9 - 1
        
        if (r9 == 0)
            rax_3 = -1
        
        if (r9 == 0)
            rax_3 = 0
        
        if (rax_3 == 0)
            return sub_140f14980(rbx, arg2 + 1, arg3)
        
        int64_t* rcx_1 = *r13_1
        int32_t rax_5 = rcx_1[1].d
        int32_t rdi_1 = rax_5 - 1
        
        if (rax_5 == 0)
            rdi_1 = 0
        
        int32_t arg_10 = rdi_1
        
        if (r9 == 0)
            r8 = 0
        
        if (r8 != 0)
            int64_t rdx_2 = *rdx
            
            if (rax_5 != 0)
                sub_140ab3a50(rcx_1, rdx_2, r8, rdi_1)
            else
                sub_140a20ba0(rcx_1, rdx_2, r8)
        
        r13_1[0xd].b |= 7
        int32_t i = 0
        
        if (r12_1[6].d s> 0)
            int64_t* r15_1 = nullptr
            
            do
                int64_t rax_6 = r12_1[5]
                int64_t* rbx_1 = *(r15_1 + rax_6 + 8)
                int64_t* r14_1 = *(r15_1 + rax_6)
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                int32_t arg_20
                (*(*r14_1 + 8))(r14_1, &arg_20)
                int32_t rdx_4 = arg_20
                
                if (arg4 - rdx_4 s<= 0)
                label_140f07e2c:
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp2_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp2_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
                else
                    int32_t rax_10 = rdx_4 + rdi_1
                    
                    if (rax_10 s<= 0)
                        rax_10 = 0
                    
                    arg_20 = rax_10
                    int32_t rax_11 = arg4 + rdi_1
                    
                    if (rax_11 s<= 0)
                        rax_11 = 0
                    
                    arg4 = rax_11
                    (*(*r14_1 + 0x60))(r14_1, r13_1, &arg_20)
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d += 1
                    
                    int64_t rsi_1 = sx.q(r13_1[6].d)
                    int32_t rax_13 = (rsi_1 + 1).d
                    r13_1[6].d = rax_13
                    
                    if (rax_13 s> *(r13_1 + 0x34))
                        sub_1405c4f50(&r13_1[5])
                    
                    int64_t** rcx_8 = rsi_1 * 0x30 + r13_1[5]
                    *rcx_8 = r14_1
                    rcx_8[1] = rbx_1
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d += 1
                    
                    __builtin_memset(&rcx_8[2], 0, 0x20)
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp4_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp4_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
                        
                        goto label_140f07e2c
                
                rdi_1 = arg_10
                i += 1
                r15_1 = &r15_1[6]
            while (i s< r12_1[6].d)
            
            rbx = arg1
        
        sub_140f14730(rbx + 0x18, arg2 + 1, 1, 0)
        *(rbx + 0x88) |= 1
        int64_t rax_4
        rax_4.b = 1
        return rax_4

rax.b = 0
return rax
