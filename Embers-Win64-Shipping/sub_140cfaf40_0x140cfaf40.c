// 函数: sub_140cfaf40
// 地址: 0x140cfaf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i = arg3
int32_t rbx_1 = arg2
int64_t rdx_1 = *(arg1[1] + 0x40) & 0x1040000000
int64_t r8_1 = *(*arg1 + 0x40) & 0x1040000000

if (r8_1 != 0 && rdx_1 != 0)
    return 

void* r14_2

if ((not.b(arg1[6].b) & 1) != 0)
    r14_2 = sx.q(*(arg1 + 0x2c) * rbx_1) + *arg1[2]
else
    int64_t* rax_3 = arg1[2]
    void* rcx = *rax_3
    
    if ((rcx.b & 1) != 0)
        rcx = (rcx s>> 1) + rax_3
    
    r14_2 = sx.q(*(arg1 + 0x2c) * rbx_1) + rcx

uint64_t r15_1 = zx.q(*(arg1 + 0x24))
int32_t rdi_1 = rol.d(1, rbx_1.b)
uint64_t rax

if (r8_1 != 0)
    do
        void* rcx_12 = arg1[2]
        rax.b = not.b(arg1[6].b)
        void* rcx_13
        
        if ((rax.b & 1) != 0)
            if (rbx_1 s>= 0 && rbx_1 s< *(rcx_12 + 0x28))
                void* rax_25 = *(rcx_12 + 0x20)
                rcx_13 = rcx_12 + 0x10
                
                if (rax_25 != 0)
                    rcx_13 = rax_25
                
            label_140cfb184:
                int32_t rax_26 = rbx_1
                
                if (rbx_1 s< 0)
                    rax_26 = rbx_1 + 0x1f
                
                if ((*(rcx_13 + (sx.q(rax_26 s>> 5) << 2)) & rdi_1) != 0)
                    int64_t* rcx_15 = arg1[1]
                    rax.b = not.b((rcx_15[8] u>> 0x24).b)
                    
                    if ((rax.b & 1) != 0)
                        (*(*rcx_15 + 0xe8))(rcx_15, sx.q(*(rcx_15 + 0x4c)) + r14_2)
                    
                    i -= 1
        else if (rbx_1 s>= 0 && rbx_1 s< *(rcx_12 + 0x18))
            rcx_13 = *(rcx_12 + 0x10)
            
            if ((rcx_13.b & 1) != 0)
                rcx_13 = (rcx_13 s>> 1) + rcx_12 + 0x10
            
            goto label_140cfb184
        r14_2 += r15_1
        rdi_1 = rol.d(rdi_1, 1)
        rbx_1 += 1
    while (i != 0)
else if (rdx_1 != 0)
    do
        void* rcx_8 = arg1[2]
        rax.b = not.b(arg1[6].b)
        void* rcx_9
        
        if ((rax.b & 1) != 0)
            if (rbx_1 s>= 0 && rbx_1 s< *(rcx_8 + 0x28))
                void* rax_19 = *(rcx_8 + 0x20)
                rcx_9 = rcx_8 + 0x10
                
                if (rax_19 != 0)
                    rcx_9 = rax_19
                
            label_140cfb0f4:
                int32_t rax_20 = rbx_1
                
                if (rbx_1 s< 0)
                    rax_20 = rbx_1 + 0x1f
                
                if ((*(rcx_9 + (sx.q(rax_20 s>> 5) << 2)) & rdi_1) != 0)
                    int64_t* rcx_11 = *arg1
                    rax.b = not.b((rcx_11[8] u>> 0x24).b)
                    
                    if ((rax.b & 1) != 0)
                        (*(*rcx_11 + 0xe8))(rcx_11, sx.q(*(rcx_11 + 0x4c)) + r14_2)
                    
                    i -= 1
        else if (rbx_1 s>= 0 && rbx_1 s< *(rcx_8 + 0x18))
            rcx_9 = *(rcx_8 + 0x10)
            
            if ((rcx_9.b & 1) != 0)
                rcx_9 = (rcx_9 s>> 1) + rcx_8 + 0x10
            
            goto label_140cfb0f4
        r14_2 += r15_1
        rdi_1 = rol.d(rdi_1, 1)
        rbx_1 += 1
    while (i != 0)
else
    do
        void* rcx_3 = arg1[2]
        rax.b = not.b(arg1[6].b)
        void* rcx_4
        
        if ((rax.b & 1) != 0)
            if (rbx_1 s>= 0 && rbx_1 s< *(rcx_3 + 0x28))
                void* rax_10 = *(rcx_3 + 0x20)
                rcx_4 = rcx_3 + 0x10
                
                if (rax_10 != 0)
                    rcx_4 = rax_10
                
            label_140cfb03c:
                int32_t rax_11 = rbx_1
                
                if (rbx_1 s< 0)
                    rax_11 = rbx_1 + 0x1f
                
                if ((*(rcx_4 + (sx.q(rax_11 s>> 5) << 2)) & rdi_1) != 0)
                    int64_t* rcx_6 = *arg1
                    
                    if ((not.b((rcx_6[8] u>> 0x24).b) & 1) != 0)
                        (*(*rcx_6 + 0xe8))(rcx_6, sx.q(*(rcx_6 + 0x4c)) + r14_2)
                    
                    int64_t* rcx_7 = arg1[1]
                    rax.b = not.b((rcx_7[8] u>> 0x24).b)
                    
                    if ((rax.b & 1) != 0)
                        (*(*rcx_7 + 0xe8))(rcx_7, sx.q(*(rcx_7 + 0x4c)) + r14_2)
                    
                    i -= 1
        else if (rbx_1 s>= 0 && rbx_1 s< *(rcx_3 + 0x18))
            rcx_4 = *(rcx_3 + 0x10)
            
            if ((rcx_4.b & 1) != 0)
                rcx_4 = (rcx_4 s>> 1) + rcx_3 + 0x10
            
            goto label_140cfb03c
        r14_2 += r15_1
        rdi_1 = rol.d(rdi_1, 1)
        rbx_1 += 1
    while (i != 0)
