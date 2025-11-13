// 函数: sub_1425cc380
// 地址: 0x1425cc380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t rdi_1 = sx.q(arg2[1].d)
    int64_t rbp_1 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = rdi_1.d
    
    if (rdi_1.d != 0 || r8_1 != 0)
        sub_140638750(arg1, rdi_1.d, r8_1)
        memcpy(*arg1, rbp_1, (rdi_1 << 2).d)
    else
        *(arg1 + 0xc) = rdi_1.d

sub_14081d8c0(&arg1[2], &arg2[2])
arg1[4].d = arg2[4].d
*(arg1 + 0x24) = *(arg2 + 0x24)
arg1[5].d = arg2[5].d
*(arg1 + 0x2c) = *(arg2 + 0x2c)
arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)
arg1[7].d = arg2[7].d

if (&arg1[8] != &arg2[8])
    int64_t rbp_2 = sx.q(arg2[9].d)
    int64_t r14_1 = arg2[8]
    int32_t r8_4 = *(arg1 + 0x4c)
    arg1[9].d = rbp_2.d
    
    if (rbp_2.d != 0 || r8_4 != 0)
        sub_1407c3650(&arg1[8], rbp_2.d, r8_4)
        memcpy(arg1[8], r14_1, (rbp_2 * 0xc).d)
    else
        *(arg1 + 0x4c) = rbp_2.d

if (&arg1[0xa] != &arg2[0xa])
    int32_t i_2 = arg1[0xb].d
    
    if (i_2 != 0)
        void* rdi_4 = arg1[0xa] + 0x18
        int32_t i
        
        do
            int64_t* rbx_1 = *(rdi_4 + 0x18)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t rax_10 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rax_10 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            int64_t rcx_6 = *rdi_4
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rdi_4 += 0x90
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = arg2[0xb].d
    void* rbx_2 = arg2[0xa]
    int32_t r8_8 = *(arg1 + 0x5c)
    arg1[0xb].d = i_3
    
    if (i_3 != 0 || r8_8 != 0)
        sub_142467eb0(&arg1[0xa], i_3, r8_8)
        int128_t* rbp_3 = arg1[0xa]
        
        if (i_3 != 0)
            void* rdi_5 = rbp_3 + 0x38
            void* rbx_3 = rbx_2 + 0x38
            int32_t i_1
            
            do
                *rbp_3 = *(rbx_3 - 0x38)
                *(rdi_5 - 0x28) = *(rbx_3 - 0x28)
                sub_140596d10(rdi_5 - 0x20, rbx_3 - 0x20)
                *(rdi_5 - 0x10) = *(rbx_3 - 0x10)
                void* rax_14 = *(rbx_3 - 8)
                *(rdi_5 - 8) = rax_14
                
                if (rax_14 != 0)
                    *(rax_14 + 8) += 1
                
                rbp_3 = &rbp_3[9]
                *rdi_5 = *rbx_3
                *(rdi_5 + 8) = *(rbx_3 + 8)
                *(rdi_5 + 0x10) = *(rbx_3 + 0x10)
                *(rdi_5 + 0x18) = *(rbx_3 + 0x18)
                *(rdi_5 + 0x28) = *(rbx_3 + 0x28)
                *(rdi_5 + 0x30) = *(rbx_3 + 0x30)
                *(rdi_5 + 0x38) = *(rbx_3 + 0x38)
                int32_t rax_18 = *(rbx_3 + 0x48)
                rbx_3 += 0x90
                *(rdi_5 + 0x48) = rax_18
                rdi_5 += 0x90
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x5c) = i_3

return arg1
