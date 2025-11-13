// 函数: sub_141e658b0
// 地址: 0x141e658b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg4
int64_t* rbp = *arg2
int64_t* rbx = arg2
int64_t* r13 = arg3
int64_t* r14 = nullptr
void* r15_2 = &rbp[sx.q(arg2[1].d) * 2]

if (rbp != r15_2)
    do
        arg3.b = 1
        void* rax_1
        rax_1, arg3 = sub_141e5fc50(arg1, rbp, arg3.b)
        
        if (rax_1 != 0 && *(rax_1 + 0x50) == *r13)
            int128_t zmm1
            
            if (rax_1 + 0x60 != rax_1 + 0x40)
                zmm1 = *(rax_1 + 0x60)
                *(rax_1 + 0x60) = *(rax_1 + 0x40)
                *(rax_1 + 0x40) = zmm1
            
            if (rax_1 + 0x50 != rax_1 + 0x30)
                zmm1 = *(rax_1 + 0x50)
                *(rax_1 + 0x50) = *(rax_1 + 0x30)
                *(rax_1 + 0x30) = zmm1
            
            void var_68
            
            if (*(rax_1 + 0x50) != 0 && rax_1 + 0x50 != &var_68)
                *(rax_1 + 0x50) = 0
                int64_t* rdi_1 = *(rax_1 + 0x58)
                
                if (rdi_1 != 0)
                    *(rax_1 + 0x58) = 0
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp4_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
            
            *(rax_1 + 0x68) = 0
            
            if (*(rax_1 + 0x6c) s<= 0xffffffff)
                sub_140638c50(rax_1 + 0x60, 0)
            
            if (rax_1 + 0x70 != &var_68)
                *(rax_1 + 0x70) = 0
                int64_t* rbx_2 = *(rax_1 + 0x78)
                
                if (rbx_2 != 0)
                    *(rax_1 + 0x78) = 0
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp5_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
        
        rbp = &rbp[2]
    while (rbp != r15_2)
    
    r12 = arg4
    rbx = arg2

if (r12[1].d != 0)
    int64_t* rcx_8 = *r12
    
    if (rcx_8 != 0 && (*(*rcx_8 + 0x28))(rcx_8) != 0)
        if (r12[1].d != 0)
            r14 = *r12
        
        (*(*r14 + 0x50))(r14)

int64_t rcx_10 = *rbx

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t* rbx_3 = r13[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp1_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

return sub_140745b20(r12) __tailcall
