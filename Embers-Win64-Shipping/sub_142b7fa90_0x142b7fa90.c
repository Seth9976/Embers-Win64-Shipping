// 函数: sub_142b7fa90
// 地址: 0x142b7fa90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = arg2

if (*arg3 s> 0)
    int32_t* rax
    rax.b = 0
    return rax

int32_t rbx = 0x1180
int32_t rdi = 0x1180
int64_t r12
int64_t var_28 = r12
int64_t r13
r13.b = *(arg1 + 0x10) == 0
char arg_20 = 0
int32_t* r15 = arg2
void* rax_8

while (true)
    int32_t rbp_1
    
    if (rdi - 0x1180 s>= 0x13)
        rbp_1 = rdi - 0x32
        
        if (rdi - 0x1193 s>= 0x15)
            rbp_1 = rdi
    else
        rbp_1 = rdi - 0x80
    
    r12.b = 0
    int32_t rax_3 = sub_142a959a0(*(arg1 + 0x20), rbp_1)
    int32_t rdx_1 = rax_3
    
    if (rax_3 == 0xc0 || rax_3 == 0xffffffff)
        rax_3 = 0
    else
        rax_3.b = 1
    
    r13.b |= rax_3.b
    
    if (rdx_1 == 0xc0)
        r12.b = 1
        rdx_1 = sub_142aa3ce0(*(arg1 + 0x10), rbp_1)
    
    if (rdx_1.b u< 0xc0)
        goto label_142b7fb97
    
    int64_t rcx_2
    
    switch (rdx_1 & 0xf)
        case 0, 3, 7, 0xa, 0xb, 0xc, 0xd
            rax_8.b = 0
            *arg3 = 5
            break
            break
        case 1, 2, 4
            goto label_142b7fb97
        case 5, 6, 8, 9
            if (r12.b == 0)
                goto label_142b7fb97
            
            goto label_142b7fb73
        case 0xe
            rdx_1 = sub_142b7f8c0(arg1, r12.b, rbp_1, rdx_1)
        label_142b7fb97:
            rcx_2 = zx.q(arg_20)
        case 0xf
        label_142b7fb73:
            rcx_2.b = 1
            rdx_1 = 0xc0
            arg_20 = 1
    
    rdi += 1
    *r15 = rdx_1
    r15 = &r15[1]
    
    if (rdi - 0x1180 s>= 0x43)
        if (r13.b != 0 && rcx_2.b != 0)
            do
                if (*rsi == 0xc0)
                    int32_t rdi_1
                    
                    if (rbx - 0x1180 s>= 0x13)
                        rdi_1 = rbx - 0x32
                        
                        if (rbx - 0x1193 s>= 0x15)
                            rdi_1 = rbx
                    else
                        rdi_1 = rbx - 0x80
                    
                    *rsi = sub_142b7eac0(arg1, rdi_1, sub_142aa3ce0(*(arg1 + 0x10), rdi_1), 1, arg3)
                
                rbx += 1
                rsi = &rsi[1]
            while (rbx - 0x1180 s< 0x43)
        
        if (r13.b == 0 || *arg3 s> 0)
            return nullptr
        
        rax_8.b = 1
        break

return rax_8
