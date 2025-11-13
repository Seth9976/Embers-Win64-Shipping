// 函数: sub_1422a38b0
// 地址: 0x1422a38b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2[1].d)
int32_t i = 0
char rax = arg3
int64_t r15
r15.b = 1
*(arg1 + 0x38) = rax
char r12 = 1

if (rbp.d s> 0)
    int64_t rbp_1 = 0
    void* r14_1 = *arg2
    int32_t rdx = *(r14_1 + 0x70)
    void* r14_2 = r14_1 + 0x70
    
    do
        int32_t rax_1 = *r14_2
        uint8_t r8_1 = (rax_1 u>> 0x10).b
        uint8_t r10_1 = rax_1.b
        uint8_t r9_1
        uint8_t r11_1
        
        if (r8_1 != 0xff || (rax_1 u>> 8).b != r8_1)
        label_1422a3949:
            r15.b = 0
            r9_1 = r8_1
            r11_1 = r10_1
        else
            r9_1 = r8_1
            
            if (rax_1.b != r8_1)
                goto label_1422a3949
            
            r10_1 = r8_1
            r11_1 = r8_1
            
            if ((rax_1 u>> 0x18).b != r8_1)
                goto label_1422a3949
        
        if (r9_1 != rdx:2.b || (rax_1 u>> 8).b != rdx:1.b || r11_1 != rdx.b
                || (rax_1 u>> 0x18).b != rdx:3.b)
            r12 = 0
        label_1422a397e:
            
            if (r15.b == 0)
                break
        else if (r12 == 0)
            goto label_1422a397e
        
        rbp_1 += 1
        r14_2 += 0x74
    while (rbp_1 s< rbp)
    
    rax = arg3
    rbp = zx.q(rbp.d)

if (r15.b != 0)
    int64_t* rcx_6 = *(arg1 + 0x18)
    
    if (rcx_6 != 0)
        rax = (**rcx_6)(rcx_6, 1)
        *(arg1 + 0x18) = 0
    
    *(arg1 + 0x30) = 0
    return rax

*(arg1 + 0x34) = rbp.d
*(arg1 + 0x38) = rax
sub_14228fd40(arg1, rax)
int64_t* rcx_8 = *(arg1 + 0x18)
(*(*rcx_8 + 8))(rcx_8, zx.q(*(arg1 + 0x34)), 0)
uint64_t rax_6

if (rbp.d == 0)
    rax_6 = 0
else
    int64_t* rcx_9 = *(arg1 + 0x18)
    rax_6 = (*(*rcx_9 + 0x30))(rcx_9)

*(arg1 + 0x28) = rax_6

if (arg2[1].d s> 0)
    int64_t r9_2 = 0
    
    do
        r9_2 += 0x74
        uint64_t rdx_4 = zx.q(*(arg1 + 0x30) * i)
        i += 1
        rax_6 = zx.q(*(r9_2 + *arg2 - 4))
        *(rdx_4 + *(arg1 + 0x28)) = rax_6.d
    while (i s< arg2[1].d)

return rax_6
