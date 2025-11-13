// 函数: sub_142193980
// 地址: 0x142193980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg4
int64_t* rbx = arg3

if ((*(arg1 + 0x2c) & 1) == 0)
    return 

void* r13_1 = *(arg1 + 0x48)

if (r13_1 == 0)
label_142193bd7:
    void* r9_2 = *(arg1 + 0x30)
    int64_t rbx_6
    
    if (*(r9_2 + 0x110) s<= 0)
    label_142193c51:
        rbx_6 = *(r9_2 + 0x30)
    else
        int64_t r8_3 = sx.q(rbx[1].d)
        int32_t r14_1 = 0
        
        if (r8_3.d s<= 0)
        label_142193c51_1:
            rbx_6 = *(r9_2 + 0x30)
        else
            int64_t rcx_8 = 0
            int64_t* rbx_5 = *rbx
            int64_t* rax_20 = rbx_5
            
            while (**(r9_2 + 0x108) != *rax_20)
                r14_1 += 1
                rcx_8 += 1
                rax_20 = &rax_20[2]
                
                if (rcx_8 s>= r8_3)
                    goto label_142193c51_2
            
            int64_t rcx_9 = sx.q(r14_1)
            rbx_6 = rbx_5[rcx_9 * 2 + 1]
            int64_t rax_22
            
            if (r14_1 s< 0 || r14_1 s>= rdi[1].d)
                rax_22.b = 0
            else
                rax_22.b = 1
            
            if (rax_22.b != 0)
                int64_t rcx_10 = *(*rdi + (rcx_9 << 3))
                
                if (rcx_10 != 0)
                    rbx_6 = rcx_10
            
            if (rbx_6 == 0)
            label_142193c51_2:
                rbx_6 = *(r9_2 + 0x30)
    
    int64_t rdi_3 = sx.q(arg2[1].d)
    int32_t rax_24 = (rdi_3 + 1).d
    arg2[1].d = rax_24
    
    if (rax_24 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    (*arg2)[rdi_3] = rbx_6
    return 

void* rax_1 = sub_142559b40()
void* r9 = *(r13_1 + 0x10)
int64_t rax_2 = sx.q(*(rax_1 + 0x38))

if (rax_2.d s> *(r9 + 0x38) || *(*(r9 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    goto label_142193bd7

void* rax_4 = *(r13_1 + 0x30)

if (rax_4 == 0)
    goto label_142193bd7

int32_t i = 0
void* r11_1 = ***(rax_4 + 0x50)
void* var_48_1 = r11_1

if (*(r11_1 + 0x30) s<= 0)
    return 

int64_t r10_1 = 0
int64_t r12_1 = 0
int64_t arg_8 = 0

do
    void* rax_5 = *(arg1 + 0x30)
    int64_t* rcx_1
    
    if (r12_1 s< 0 || i s>= *(rax_5 + 0x110))
        rcx_1.b = 0
    else
        rcx_1.b = 1
    
    int64_t* rbx_2
    
    if (rcx_1.b != 0)
        int32_t r8_1 = rbx[1].d
        int32_t rcx_2 = 0
        int64_t rdx = 0
        
        if (r8_1 s<= 0)
            goto label_142193abc
        
        int64_t* rbx_1 = *rbx
        int64_t* rax_7 = rbx_1
        
        while (*(*(rax_5 + 0x108) + (r12_1 << 3)) != *rax_7)
            rcx_2 += 1
            rdx += 1
            rax_7 = &rax_7[2]
            
            if (rcx_2 s>= r8_1)
                goto label_142193abc
        
        rbx_2 = rbx_1[rdx * 2 + 1]
        int64_t rax_9
        
        if (rdx s< 0 || rcx_2 s>= rdi[1].d)
            rax_9.b = 0
        else
            rax_9.b = 1
        
        if (rax_9.b != 0)
            int64_t* rcx_3 = *(*rdi + (rdx << 3))
            
            if (rcx_3 != 0)
                rbx_2 = rcx_3
        
        if (rbx_2 != 0)
            goto label_142193b62
        
        goto label_142193abc
    
label_142193abc:
    int32_t rax_11 = *(arg1 + 0x40)
    int64_t rdi_1 = sx.q(rax_11 - 1)
    
    if (rax_11 - 1 s< 0)
        goto label_142193b2f
    
    void* rbx_4
    
    while (true)
        rbx_4 = *(*(arg1 + 0x38) + (rdi_1 << 3))
        
        if (rbx_4 != 0)
            void* rax_13 = sub_142554870()
            void* rdx_1 = *(rbx_4 + 0x10)
            int64_t rax_14 = sx.q(*(rax_13 + 0x38))
            
            if (rax_14.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_14 << 3)) == rax_13 + 0x30
                    && *(rbx_4 + 0x28) s< 0 && i s< *(rbx_4 + 0x38))
                break
        
        int64_t temp1_1 = rdi_1
        rdi_1 -= 1
        
        if (temp1_1 - 1 s< 0)
            goto label_142193b20
    
    rbx_2 = *(*(rbx_4 + 0x30) + (r12_1 << 3))
    
    if (rbx_2 != 0)
        goto label_142193b62
    
label_142193b20:
    r11_1 = var_48_1
    r10_1 = arg_8
label_142193b2f:
    
    if ((*(r13_1 + 0x46) & 1) != 0)
        rbx_2 = *(*(arg1 + 0x30) + 0x30)
    
    if ((*(r13_1 + 0x46) & 1) != 0 && rbx_2 != 0)
    label_142193b62:
        int64_t rdi_2 = sx.q(arg2[1].d)
        int32_t rcx_6 = (rdi_2 + 1).d
        arg2[1].d = rcx_6
        
        if (rcx_6 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        (*arg2)[rdi_2] = rbx_2
    else
        void* rax_18 = *(r11_1 + 0x28)
        void* rcx_5 = r11_1 + 0x10
        
        if (rax_18 != 0)
            rcx_5 = rax_18
        
        int64_t* rax = sub_1423657b0(*(r13_1 + 0x30), *(rcx_5 + r10_1))
        rbx_2 = rax
        
        if (rax != 0)
            goto label_142193b62
    
    i += 1
    r11_1 = var_48_1
    r10_1 = arg_8 + 0x18
    rdi = arg4
    r12_1 += 1
    rbx = arg3
    arg_8 = r10_1
while (i s< *(r11_1 + 0x30))
