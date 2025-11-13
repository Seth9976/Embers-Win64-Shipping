// 函数: sub_14152f8a0
// 地址: 0x14152f8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t arg_8 = arg2[2].d
int32_t* r8 = *rcx

if (&r8[1] u> rcx[1])
    int32_t* rdx = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx, 4)
else
    arg_8 = *r8
    *rcx += 4

int32_t rdx_1 = arg_8

if (rdx_1 s> *(arg2 + 0x14))
    sub_140809a30(arg2, rdx_1)
    rdx_1 = arg_8

r8.b = 1
sub_1417560a0(arg2, rdx_1, r8.b)
int32_t rbp = 0

if (arg_8 s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rax_4 = arg2[1]
        int64_t* rcx_4 = arg1[0x12]
        int64_t* rdi_1 = arg2
        
        if (rax_4 != 0)
            rdi_1 = rax_4
        
        (*(*rcx_4 + 0x1d8))(rcx_4, &data_1439a9528)
        int32_t rax_6
        int512_t zmm1
        rax_6, zmm1 = sub_140b4e7c0(arg1[0x12], &data_1439a9528)
        
        if (rax_6 s>= 5)
            int64_t arg_10 = *(rdi_1 + r14_1)
            sub_1416f31e0(arg1, &arg_10, zmm1)
            
            if ((*(arg1[0x12] + 0x28) & 1) != 0)
                void* rbx_1 = *(rdi_1 + r14_1)
                int64_t rax_9 = arg_10
                
                if (rbx_1 != rax_9)
                    *(rdi_1 + r14_1) = rax_9
                    
                    if (rbx_1 != 0)
                        int64_t rcx_7 = *(rbx_1 + 0x78)
                        
                        if (rcx_7 != 0)
                            sub_140a74f90(rcx_7)
                        
                        int64_t rcx_8 = *(rbx_1 + 0x68)
                        
                        if (rcx_8 != 0)
                            sub_140a74f90(rcx_8)
                        
                        int64_t rcx_9 = *(rbx_1 + 0x58)
                        
                        if (rcx_9 != 0)
                            sub_140a74f90(rcx_9)
                        
                        int64_t rcx_10 = *(rbx_1 + 0x48)
                        
                        if (rcx_10 != 0)
                            sub_140a74f90(rcx_10)
                        
                        j_sub_140a74f90(rbx_1)
        
        rbp += 1
        r14_1 += 8
    while (rbp s< arg_8)

return arg1
