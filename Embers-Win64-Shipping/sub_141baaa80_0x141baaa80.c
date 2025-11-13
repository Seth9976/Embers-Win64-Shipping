// 函数: sub_141baaa80
// 地址: 0x141baaa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i

do
    i = *arg1
    *arg1 = 1
while (i != 0)
int64_t* rdi = *(arg1 + 0x18)
int64_t rbp = sx.q(arg1[8])
int64_t* r8 = rdi
void* r10 = &rdi[rbp * 2]

if (rdi == r10)
label_141baab35:
    int32_t rax_5 = (rbp + 1).d
    arg1[8] = rax_5
    
    if (rax_5 s> arg1[9])
        sub_1405a4f90(&arg1[6])
    
    int64_t* rbx_2 = *(arg1 + 0x18) + (rbp << 4)
    *rbx_2 = 0
    int64_t rbp_1 = sx.q(arg3[1].d)
    int64_t r14_1 = *arg3
    rbx_2[1].d = rbp_1.d
    
    if (rbp_1.d != 0)
        sub_1405c4a00(rbx_2, rbp_1.d, 0)
        memcpy(*rbx_2, r14_1, (rbp_1 << 3).d)
    else
        *(rbx_2 + 0xc) = 0
    
    int64_t rax_6 = sub_141a4fae0(arg1, arg1[4])
    int64_t rbp_2 = sx.q(arg1[4])
    int32_t rax_7 = (rbp_2 + 1).d
    arg1[4] = rax_7
    
    if (rax_7 s> arg1[5])
        sub_1405a4d70(&arg1[2])
    
    *(*(arg1 + 8) + (rbp_2 << 3)) = rax_6
    *arg1
    *arg1 = 0
    *arg2 = rax_6
else
    int32_t i_2
    
    while (true)
        i_2 = r8[1].d
        
        if (i_2 == arg3[1].d)
            break
        
    label_141baab2c:
        r8 = &r8[2]
        
        if (r8 == r10)
            goto label_141baab35
    
    int64_t* rax_2 = *arg3
    
    if (i_2 != 0)
        int64_t* r9_2 = *r8 - rax_2
        int32_t i_1
        
        do
            if (*(r9_2 + rax_2) != *rax_2)
                goto label_141baab2c
            
            rax_2 = &rax_2[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    int32_t r8_2 = ((r8 - rdi) s>> 4).d
    
    if (r8_2 == 0xffffffff)
        goto label_141baab35
    
    int64_t rax_4 = *(*(arg1 + 8) + (sx.q(r8_2) << 3))
    *arg1
    *arg1 = 0
    *arg2 = rax_4

return arg2
