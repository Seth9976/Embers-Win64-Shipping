// 函数: sub_140b306a0
// 地址: 0x140b306a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg1[0x17]
void* r12_1 = &rbp[sx.q(arg1[0x18].d)]

if (rbp != r12_1)
    do
        int64_t* r14_1 = *rbp
        
        if (r14_1 != 0)
            int64_t rsi_1 = 0
            *(*r14_1 + 0x90) = 0
            int64_t* rdi_1 = r14_1[7]
            uint64_t r15_2 = sx.q(r14_1[8].d) << 3 u>> 3
            
            if (rdi_1 u> &rdi_1[r14_1[8]])
                r15_2 = 0
            
            if (r15_2 != 0)
                do
                    void* rbx_1 = *rdi_1
                    
                    if (rbx_1 != 0)
                        int64_t rcx = *(rbx_1 + 8)
                        
                        if (rcx != 0)
                            sub_140a74f90(rcx)
                        
                        j_sub_140a74f90(rbx_1)
                    
                    rdi_1 = &rdi_1[1]
                    rsi_1 += 1
                while (rsi_1 != r15_2)
            
            sub_140b30610(&r14_1[9])
            int64_t rcx_3 = r14_1[7]
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            int64_t rcx_4 = r14_1[5]
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            int64_t rcx_5 = r14_1[3]
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            int64_t* rbx_2 = r14_1[1]
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t rax_6 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_6 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            j_sub_140a74f90(r14_1)
        
        rbp = &rbp[1]
    while (rbp != r12_1)
    
    rbp = arg1[0x17]

if (rbp != 0)
    sub_140a74f90(rbp)

int64_t rcx_10 = arg1[0x15]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

sub_140b30860(&arg1[0xa])
arg1[9].d = 0
int64_t rcx_12 = arg1[8]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

return sub_140b30030(arg1) __tailcall
