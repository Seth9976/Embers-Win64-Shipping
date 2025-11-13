// 函数: sub_14066b7a0
// 地址: 0x14066b7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = 0
int64_t rdi = 0
int64_t var_38 = 0
int32_t rbx = 0
int32_t var_2c = 0
int32_t i = 0

if (*(arg1 + 0x30) s> 0)
    int16_t* r14_1 = nullptr
    
    do
        int16_t r12_1 = *(r14_1 + *(arg1 + 0x28))
        
        if (r12_1 != 0)
            int32_t r15_1 = rbx - 1
            
            if (rbx s<= 0)
                r15_1 = 0
            
            int32_t rbx_1
            rbx_1.b = rbx s<= 0
            rbx += rbx_1 + 1
            
            if (rbx s> rcx)
                sub_140594770(&var_38)
                rcx = var_2c
                rdi = var_38
            
            int64_t rax_2 = sx.q(r15_1)
            *(rdi + (rax_2 << 1)) = r12_1
            *(rdi + (rax_2 << 1) + 2) = 0
        
        i += 2
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 0x30))

int64_t* r14_2 = *(arg1 + 0x38)

if (r14_2 != &var_38)
    int32_t r8_1 = *(r14_2 + 0xc)
    r14_2[1].d = rbx
    
    if (rbx != 0 || r8_1 != 0)
        sub_1405a4c70(r14_2, rbx, r8_1)
        memcpy(*r14_2, rdi, rbx * 2)
    else
        *(r14_2 + 0xc) = 0

int32_t rax_3 = *(arg1 + 0x20)

if (rax_3 u> 5 || not(test_bit(0x29, rax_3)) || *(arg1 + 0x18) != 0)
    rbx.b = 0
else
    rbx.b = 1

if (rdi != 0)
    sub_140a74f90(rdi)

return zx.q(rbx.b)
