// 函数: sub_141f75bc0
// 地址: 0x141f75bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
uint64_t var_8 = rbp
void* rax = *(arg1 + 0x430)
int32_t r15 = *(arg1 + 0x558)
int32_t rbx

if (rax == 0)
    rbx = 0
else
    int32_t r14_1 = data_143f3b738
    
    if ((*(arg1 + 0x5a6) & 4) == 0)
        rbp = zx.q(*(rax + 0x138))
    else
        rbp = zx.q(*(arg1 + 0x554))
    
    void* rdx = *(arg1 + 0x5b0)
    rbx = 0
    int32_t rdi_1 = 0
    
    if (rdx != 0)
        rdi_1 = *(*(rdx + 0x40) + 8) - 1
        
        if (rbp.d s>= 0)
            int32_t rax_2 = rdi_1
            
            if (rbp.d s< rdi_1)
                rax_2 = rbp.d
            
            rbp = zx.q(rax_2)
        else
            rbp = 0
        
        *(arg1 + 0x55c) = *(rdx + 0x2c)
    
    int32_t rax_4 = *(arg1 + 0x550)
    
    if (rax_4 s<= 0)
        if (arg2 == 0xffffffff || (*(arg1 + 0x5a8) & 0x10) != 0)
            if ((*(arg1 + 0x5a7) & 8) == 0 || *(arg1 + 0xc0) == 0)
                goto label_141f75cde
            
            void* rax_5 = sub_1425974e0()
            void* rdx_1 = *(arg1 + 0xc0)
            void* r8_1 = *(rdx_1 + 0x10)
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s> *(r8_1 + 0x38) || *(*(r8_1 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                rdx = *(arg1 + 0x5b0)
            label_141f75cde:
                
                if (rdx == 0)
                    rbx = rdi_1
                else
                    int32_t rcx_2 = *(rdx + 0x28)
                    int32_t rcx_3 = rcx_2 + r14_1
                    
                    if (rcx_2 + r14_1 s>= 0)
                        rbx = rdi_1
                        
                        if (rcx_3 s< rdi_1)
                            rbx = rcx_3
            else
                int32_t rax_8 = *(rdx_1 + 0x558)
                
                if (rax_8 s>= 0)
                    rbx = rdi_1
                    
                    if (rax_8 s< rdi_1)
                        rbx = rax_8
        else if (arg2 s>= 0)
            rbx = rdi_1
            
            if (arg2 s< rdi_1)
                rbx = arg2
        
        if (rbp.d s> 0)
            if (rbp.d s> rdi_1)
                rbx = rdi_1
            else if (rbx s>= rbp.d)
                if (rbx s< rdi_1)
                    rdi_1 = rbx
                
                rbx = rdi_1
            else
                rbx = rbp.d
    else if (rax_4 - 1 s>= rbp.d)
        rbx = rdi_1
        
        if (rax_4 s<= rdi_1)
            rbx = rax_4 - 1
    else
        rbx = rbp.d
    
    if ((*(*(arg1 + 0x430) + 0x3d) & 8) != 0)
        void* rax_10 = *(arg1 + 0x5b0)
        
        if (rax_10 != 0)
            int32_t rax_11 = *(rax_10 + 0x28)
            
            if (rbx s>= rax_11)
                rax_11 = rbx
            
            rbx = rax_11

*(arg1 + 0x558) = rbx
int32_t* i = *(arg1 + 0x4a0)
rbp.b = rbx != r15

for (void* rsi_1 = &i[sx.q(*(arg1 + 0x4a8)) * 2]; i != rsi_1; i = &i[2])
    int64_t rax_13 = sub_140d3c6e0(i)
    
    if (rax_13 != 0)
        rbp.b |= sub_141f75bc0(rax_13, zx.q(rbx))

return zx.q(rbp.b)
