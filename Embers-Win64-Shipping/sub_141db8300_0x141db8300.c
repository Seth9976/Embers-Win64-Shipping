// 函数: sub_141db8300
// 地址: 0x141db8300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2

if (&arg2[2] != &arg1[2])
    int64_t* rcx
    
    if (arg2[4] != 0)
        rcx = *(arg2 + 8)
    
    if (arg2[4] != 0 && rcx != 0)
        (*(*rcx + 0x40))(rcx, &arg1[2])
    else if (arg1[4] != 0)
        int64_t* rcx_1 = *(arg1 + 8)
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x38))(rcx_1, 0)
            int64_t rcx_2 = *(arg1 + 8)
            
            if (rcx_2 != 0)
                *(arg1 + 8) = sub_140a84c80(rcx_2, 0, 0)
            
            arg1[4] = 0

if (&arg1[6] != &arg2[6])
    int32_t i_3 = arg1[8]
    
    if (i_3 != 0)
        int64_t* rbx_2 = *(arg1 + 0x18) + 0x38
        int32_t i
        
        do
            int64_t rcx_3 = *rbx_2
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rbx_2 = &rbx_2[0xa]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[8]
    void* rdi_1 = *(arg2 + 0x18)
    int32_t r8_1 = arg1[9]
    arg1[8] = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_140808ed0(&arg1[6], i_2, r8_1)
        int32_t* r15_1 = *(arg1 + 0x18)
        
        if (i_2 != 0)
            void* rdi_2 = rdi_1 + 4
            void* rbx_3 = &r15_1[0x11]
            int32_t i_1
            
            do
                *r15_1 = *(rdi_2 - 4)
                *(rbx_3 - 0x40) = *rdi_2
                *(rbx_3 - 0x3c) = *(rdi_2 + 4)
                *(rbx_3 - 0x38) = *(rdi_2 + 8)
                *(rbx_3 - 0x30) = *(rdi_2 + 0x10)
                *(rbx_3 - 0x28) = *(rdi_2 + 0x18)
                *(rbx_3 - 0x18) = *(rdi_2 + 0x28)
                *(rbx_3 - 0x10) = *(rdi_2 + 0x30)
                *(rbx_3 - 0xc) = 0
                int64_t rsi_1 = sx.q(*(rdi_2 + 0x3c))
                int64_t rax_11 = *(rdi_2 + 0x34)
                *(rbx_3 - 4) = rsi_1.d
                
                if (rsi_1.d != 0)
                    sub_1407c3650(rbx_3 - 0xc, rsi_1.d, 0)
                    memcpy(*(rbx_3 - 0xc), rax_11, (rsi_1 * 0xc).d)
                else
                    *rbx_3 = 0
                
                r15_1 = &r15_1[0x14]
                *(rbx_3 + 4) = *(rdi_2 + 0x44)
                *(rbx_3 + 5) = *(rdi_2 + 0x45)
                *(rbx_3 + 6) ^= (*(rdi_2 + 0x46) ^ *(rbx_3 + 6)) & 1
                char rcx_7 = *(rdi_2 + 0x46)
                rdi_2 += 0x50
                *(rbx_3 + 6) ^= (rcx_7 ^ *(rbx_3 + 6)) & 2
                rbx_3 += 0x50
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        arg1[9] = i_2

sub_141db8110(&arg1[0xa], &arg2[0xa])

if (&arg1[0xe] != &arg2[0xe])
    int64_t rdi_3 = sx.q(arg2[0x10])
    int64_t rsi_2 = *(arg2 + 0x38)
    int32_t r8_4 = arg1[0x11]
    arg1[0x10] = rdi_3.d
    
    if (rdi_3.d != 0 || r8_4 != 0)
        sub_140808ed0(&arg1[0xe], rdi_3.d, r8_4)
        memcpy(*(arg1 + 0x38), rsi_2, (rdi_3 * 0x50).d)
    else
        arg1[0x11] = rdi_3.d

arg1[0x12] ^= (arg1[0x12] ^ arg2[0x12]) & 1
int32_t rcx_14 = ((arg1[0x12] ^ arg2[0x12]) & 2) ^ arg1[0x12]
arg1[0x12] = rcx_14
int32_t rax_22 = ((rcx_14 ^ arg2[0x12]) & 4) ^ rcx_14
arg1[0x12] = rax_22
int32_t rcx_18 = ((rax_22 ^ arg2[0x12]) & 8) ^ rax_22
arg1[0x12] = rcx_18
arg1[0x12] = ((rcx_18 ^ arg2[0x12]) & 0x10) ^ rcx_18
return arg1
