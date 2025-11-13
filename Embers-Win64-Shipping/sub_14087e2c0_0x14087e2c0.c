// 函数: sub_14087e2c0
// 地址: 0x14087e2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int32_t i_2 = arg1[1].d

if (i_2 != 0)
    void* rdi_1 = *arg1 + 0x58
    int32_t i
    
    do
        int64_t* rbx_1 = *(rdi_1 + 0x18)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t rcx_2 = *rdi_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rdi_1 += 0x78
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t i_3 = arg2[1].d
void* rdi_2 = *arg2
int32_t r8 = *(arg1 + 0xc)
arg1[1].d = i_3

if (i_3 != 0 || r8 != 0)
    sub_140880030(arg1, i_3, r8)
    char* r15_1 = *arg1
    
    if (i_3 != 0)
        void* rdi_3 = rdi_2 + 0x44
        void* rbx_2 = &r15_1[0x44]
        int32_t i_1
        
        do
            *r15_1 = *(rdi_3 - 0x44)
            *(rbx_2 - 0x3c) = *(rdi_3 - 0x3c)
            *(rbx_2 - 0x34) = *(rdi_3 - 0x34)
            *(rbx_2 - 0x2c) = *(rdi_3 - 0x2c)
            *(rbx_2 - 0x24) = *(rdi_3 - 0x24)
            *(rbx_2 - 0x14) = *(rdi_3 - 0x14)
            int32_t rax_9 = *rbx_2
            *(rbx_2 - 0x10) = *(rdi_3 - 0x10)
            *rbx_2 ^= (rax_9 ^ *rdi_3) & 1
            int32_t rcx_7 = ((*rbx_2 ^ *rdi_3) & 2) ^ *rbx_2
            *rbx_2 = rcx_7
            *rbx_2 = ((rcx_7 ^ *rdi_3) & 4) ^ rcx_7
            *(rbx_2 + 4) = *(rdi_3 + 4)
            *(rbx_2 + 0x14) = 0
            uint32_t count = *(rdi_3 + 0x1c)
            int64_t rax_16 = *(rdi_3 + 0x14)
            *(rbx_2 + 0x1c) = count
            
            if (count != 0)
                sub_1405da9e0(rbx_2 + 0x14, count, 0)
                memcpy(*(rbx_2 + 0x14), rax_16, count)
            else
                *(rbx_2 + 0x20) = 0
            
            *(rbx_2 + 0x24) = *(rdi_3 + 0x24)
            void* rax_18 = *(rdi_3 + 0x2c)
            *(rbx_2 + 0x2c) = rax_18
            
            if (rax_18 != 0)
                *(rax_18 + 8) += 1
            
            r15_1 = &r15_1[0x78]
            rbx_2 += 0x78
            rdi_3 += 0x78
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
else
    *(arg1 + 0xc) = 0

return arg1
