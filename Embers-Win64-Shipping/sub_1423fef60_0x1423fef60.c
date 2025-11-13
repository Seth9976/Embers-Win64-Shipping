// 函数: sub_1423fef60
// 地址: 0x1423fef60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg1 + 0xa8)
uint64_t rdi = sx.q(*(arg1 + 0xb0))
void* r12 = r14 + rdi * 0x18

if (r14 != r12)
    do
        int64_t rdi_1 = 0
        int64_t* rbx_1 = *(r14 + 8)
        uint64_t rsi_2 = sx.q(*(r14 + 0x10)) << 3 u>> 3
        
        if (rbx_1 u> &rbx_1[sx.q(*(r14 + 0x10))])
            rsi_2 = 0
        
        if (rsi_2 != 0)
            do
                int64_t* rcx = *rbx_1
                
                if (rcx != 0)
                    (**rcx)(rcx, 1)
                
                rbx_1 = &rbx_1[1]
                rdi_1 += 1
            while (rdi_1 != rsi_2)
        
        r14 += 0x18
    while (r14 != r12)
    
    rdi = zx.q(*(arg1 + 0xb0))

if (rdi.d != 0)
    int64_t* rbx_3 = *(arg1 + 0xa8) + 8
    int32_t i
    
    do
        int64_t rcx_1 = *rbx_3
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx_3 = &rbx_3[3]
        i = rdi.d
        rdi = zx.q(rdi.d - 1)
    while (i != 1)

bool cond:0 = *(arg1 + 0xb4) == 0
*(arg1 + 0xb0) = 0

if (not(cond:0))
    sub_1405a5130(arg1 + 0xa8, 0)

sub_140a42ca0(arg1 + 0xb8, 0)
*(arg1 + 0x108) = 0xffffffff
sub_1405ae180(arg1 + 0xb8)
int64_t result = sub_1408464b0(arg1 + 0xa8)
int64_t* rcx_6 = *(arg1 + 0x68)

if (rcx_6 != 0)
    rcx_6[1].d -= 1
    
    if (rcx_6[1].d == 1)
        result = (**rcx_6)(rcx_6, 1)

int64_t rcx_7 = *(arg1 + 0x28)

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = *(arg1 + 0x18)

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t* rbx_4 = *(arg1 + 0x10)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp3_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp3_1 == 1)
            jump(*(*rbx_4 + 8))

return result
