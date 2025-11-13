// 函数: sub_140db8300
// 地址: 0x140db8300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1
arg1.b = 0
int64_t r9

if ((*(rdi + 0x1b) & 4) == 0)
    r9 = sx.q(*(rdi + 0xc))

if ((*(rdi + 0x1b) & 4) != 0 || r9.d == 0xffffffff || *(*rdi + 0x17c) != 0)
    char rax_2 = *(rdi + 0x19)
    
    if ((rax_2 & 0x39) != 0)
        int32_t var_28
        sub_140e13cf0(*rdi, &var_28)
        int128_t zmm1 = data_143dbb1f0.d
        int128_t zmm0_1 = data_143dbb1f0:4.d
        
        if (*(rdi + 0x1a) != data_1439ae51d)
            int64_t* rcx_2 = *rdi
            char rax_5
            
            if ((*(rcx_2 + 0x29) & 2) == 0 && data_143e24360 == 0)
                rax_5 = (*(*rcx_2 + 0x210))(rcx_2)
            
            int32_t arg_8
            
            if ((*(rcx_2 + 0x29) & 2) != 0 || (data_143e24360 == 0 && rax_5 != 0))
                int64_t* rcx_4 = *rdi
                zmm1 = 0x3f800000
                arg_8 = 0x3f800000
                
                if (*(rcx_4 + 0x17c) != 0)
                    zmm1 = rcx_4[0x2f].d
                
                sub_140e25880(rcx_4, zmm1, zmm0_1)
            else
                int64_t* rcx_3 = *rdi
                zmm1 = 0x3f800000
                arg_8 = 0x3f800000
                
                if (*(rcx_3 + 0x17c) != 0)
                    zmm1 = rcx_3[0x2f].d
                
                (*(*rcx_3 + 0x168))(rcx_3, zmm1)
            
            int64_t* rax_7
            rax_7, arg1 = sub_140e13cf0(*rdi, &arg_8)
            zmm1 = *rax_7
            zmm0_1 = *(rax_7 + 4)
        
        if (*(*rdi + 0x28) s>= 0 && (*(rdi + 0x1a) & 0x19) != 0)
            rdi[3].b |= 0x10
        
        int32_t var_24
        
        if (zmm1.d f!= var_28 || zmm0_1.d f!= var_24 || (*(rdi + 0x19) & 0x30) != 0)
            int64_t rax_9 = sx.q(*(rdi + 0xc))
            
            if (rax_9.d != 0xffffffff)
                void* rdx_5 = (rax_9 << 5) + *arg3
                
                if (rax_9.d == 0)
                    *(arg4 + 0x378) += 1
                    sub_140e1a0f0(*(arg4 + 0x368))
                    *(arg4 + 0x381) = 1
                else if ((*(rdx_5 + 0x1a) & 0x19) != 0)
                    *(rdx_5 + 0x19) |= 1
                    sub_140db8590(arg2, rdx_5)
            else if (data_143e24360 == 0)
                void* rdx_6 = *rdi
                
                if (*(rdx_6 + 0x268) != 0)
                    int64_t* rbx_4 = *(rdx_6 + 0x270)
                    
                    if (rbx_4 != 0)
                        int32_t rax_10 = rbx_4[1].d
                        
                        if (rax_10 s> 0)
                            int64_t* rcx_7 = nullptr
                            
                            if (rbx_4 != 0)
                                if (rax_10 == 0)
                                    rbx_4 = nullptr
                                else
                                    rbx_4[1].d = rax_10 + 1
                                
                                if (rbx_4 != 0)
                                    rcx_7 = *(rdx_6 + 0x268)
                            
                            char rax_13
                            rax_13, arg1 = (*(*rcx_7 + 0x210))(rcx_7)
                            
                            if (rax_13 != 0)
                                *(arg4 + 0x378) += 1
                                sub_140e1a0f0(*(arg4 + 0x368))
                                *(arg4 + 0x381) = 1
                            
                            if (rbx_4 != 0)
                                rbx_4[1].d -= 1
                                
                                if (rbx_4[1].d == 1)
                                    (**rbx_4)(rbx_4)
                                    int32_t temp1_1 = *(rbx_4 + 0xc)
                                    *(rbx_4 + 0xc) -= 1
                                    
                                    if (temp1_1 == 1)
                                        (*(*rbx_4 + 8))(rbx_4, 1)
        
        arg1.b = 1
    else if ((rax_2 & 2) != 0 && *(*rdi + 0x28) s>= 0)
        rdi[3].b |= 0x10
        arg1.b = 1
else
    int64_t* rbx_3 = (r9 << 5) + *arg3
    arg1 = *rbx_3
    
    if (arg1 != 0)
        sub_140e1a0f0(arg1)
        *(rbx_3 + 0x19) |= 1
        sub_140db8590(arg2, rbx_3)
    
    arg1.b = 1

*(rdi + 0x19) = 0
return zx.q(arg1.b)
