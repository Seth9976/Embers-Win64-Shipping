// 函数: sub_1409387b0
// 地址: 0x1409387b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3
int64_t* r14 = arg1
void* rdi
rdi.b = 1
void* rax_1 = (*(*arg1 + 0x20))()

if (rax_1 == 0)
    rdi.b = 0
else
    int32_t r15_1 = 0
    
    if (rbx[1].d s> 0)
        int64_t* rcx = rax_1 + 0xd0
        int64_t r13_1 = 0
        
        while (true)
            int64_t* rbp_1 = *rcx
            int64_t* r12_1 = *rbx
            int64_t* rbx_1 = rbp_1
            rdi = &rbp_1[sx.q(rcx[1].d) * 2]
            
            if (rbp_1 != rdi)
                int64_t* r14_1 = *(r12_1 + r13_1)
                
                while (true)
                    if ((**r14_1)(r14_1, *rbx_1) != 0)
                        rcx = rax_1 + 0xd0
                        int32_t rbx_3 = ((rbx_1 - rbp_1) s>> 4).d
                        
                        if (rbx_3 == 0xffffffff)
                            r14 = arg1
                            break
                        
                        sub_140911e80(rcx, rbx_3, 1, 1)
                        r14 = arg1
                        int64_t rbx_4 = *(r12_1 + r13_1)
                        int64_t* rcx_2 = r14[0x3d]
                        int64_t* var_48
                        (*(*rcx_2 + 0x68))(rcx_2, &var_48)
                        
                        if (var_48 != 0)
                            int64_t* rcx_3 = r14[0x3d]
                            
                            if ((*(*rcx_3 + 0x130))(rcx_3, rbx_4) == 0)
                                int64_t* rcx_4 = var_48
                                
                                if (rcx_4 != 0)
                                    (*(*rcx_4 + 0x60))(rcx_4, rbx_4)
                        
                        int64_t* var_40
                        
                        if (var_40 != 0)
                            var_40[1].d -= 1
                            
                            if (var_40[1].d == 1)
                                (**var_40)(var_40)
                                int32_t rax_10 = *(var_40 + 0xc)
                                *(var_40 + 0xc) -= 1
                                
                                if (rax_10 == 1)
                                    (*(*var_40 + 8))(var_40, 1)
                        
                        int32_t rax_12 = *(rax_1 + 0xac)
                        
                        if (rax_12 s>= *(rax_1 + 0x30))
                            int32_t rax_14 = *(rax_1 + 0xa8)
                            
                            if (rax_14 s< *(rax_1 + 0x34))
                                *(rax_1 + 0xa8) = rax_14 + 1
                        else
                            *(rax_1 + 0xac) = rax_12 + 1
                    else
                        rbx_1 = &rbx_1[2]
                        
                        if (rbx_1 != rdi)
                            continue
                        else
                            r14 = arg1
                    
                    rcx = rax_1 + 0xd0
                    break
            
            rbx = arg3
            r15_1 += 1
            r13_1 += 0x10
            
            if (r15_1 s>= rbx[1].d)
                break
        
        rdi.b = 1

(*(*r14 + 0x338))(r14, arg2, rbx, zx.q(rdi.b))
return zx.q(rdi.b)
