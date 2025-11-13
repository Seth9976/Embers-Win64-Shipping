// 函数: sub_14215d7e0
// 地址: 0x14215d7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int32_t i_3 = arg1[1].d

if (i_3 != 0)
    void* rdi_1 = *arg1 + 0x30
    int32_t i
    
    do
        int64_t rcx = *(rdi_1 + 8)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t* rbx_1 = *rdi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 += 0x50
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t i_2 = arg2[1].d
void* rdi_2 = *arg2
int32_t r8 = *(arg1 + 0xc)
arg1[1].d = i_2

if (i_2 != 0 || r8 != 0)
    sub_140808ed0(arg1, i_2, r8)
    int64_t* r15_1 = *arg1
    
    if (i_2 != 0)
        void* rdi_3 = rdi_2 + 0x40
        void* rbx_2 = &r15_1[8]
        int32_t i_1
        
        do
            *r15_1 = *(rdi_3 - 0x40)
            *(rbx_2 - 0x38) = *(rdi_3 - 0x38)
            *(rbx_2 - 0x30) = *(rdi_3 - 0x30)
            *(rbx_2 - 0x28) = *(rdi_3 - 0x28)
            *(rbx_2 - 0x20) = *(rdi_3 - 0x20)
            *(rbx_2 - 0x18) = *(rdi_3 - 0x18)
            void* rax_10 = *(rdi_3 - 0x10)
            *(rbx_2 - 0x10) = rax_10
            
            if (rax_10 != 0)
                *(rax_10 + 8) += 1
            
            *(rbx_2 - 8) = 0
            int64_t rsi = sx.q(*rdi_3)
            int64_t rax_11 = *(rdi_3 - 8)
            *rbx_2 = rsi.d
            
            if (rsi.d != 0)
                sub_140638750(rbx_2 - 8, rsi.d, 0)
                memcpy(*(rbx_2 - 8), rax_11, (rsi << 2).d)
            else
                *(rbx_2 + 4) = 0
            
            r15_1 = &r15_1[0xa]
            *(rbx_2 + 8) = *(rdi_3 + 8)
            rdi_3 += 0x50
            rbx_2 += 0x50
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
else
    *(arg1 + 0xc) = 0

return arg1
