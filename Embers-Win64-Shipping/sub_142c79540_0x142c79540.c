// 函数: sub_142c79540
// 地址: 0x142c79540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *arg1
char* r10 = *(r15 + 0x4e38)
void* rdi = *(r15 + 0x250)
char* rbx = r10
char rax = sub_142c79230(*r10)

if (rax != 0)
    char i
    
    do
        char rcx_1 = rbx[1]
        rbx = &rbx[1]
        i = sub_142c79230(rcx_1)
    while (i != 0)

int64_t* r12

if (rax == 0 || rbx == r10)
    r12 = rdi + 8
    *r12 = 0
else
    char* r8_1 = rbx
    
    if (rbx u> r10 && rbx[-1] == 0x2f)
        r8_1 = &rbx[-1]
    
    r12 = rdi + 8
    int32_t rax_2 = sub_142c51e30(r15, r10, r8_1 - r10, r12, nullptr, 1)
    
    if (rax_2 != 0)
        return rax_2

int32_t rax_3

if (*rbx == 0x3b)
    while (true)
        char i_1 = rbx[1]
        void* rbx_1 = &rbx[1]
        void* rdx_2 = rbx_1
        
        if (i_1 != 0)
            while (i_1 != 0x3d)
                i_1 = *(rbx_1 + 1)
                rbx_1 += 1
                
                if (i_1 == 0)
                    return 3
            
            if (*rbx_1 != 0)
                char* arg_10
                rax_3 = sub_142c51e30(r15, rdx_2, rbx_1 - rdx_2, &arg_10, nullptr, 1)
                
                if (rax_3 != 0)
                    return rax_3
                
                rbx = rbx_1 + 1
                char* r10_1 = rbx
                
                if (sub_142c79230(*(rbx_1 + 1)) != 0)
                    char i_2
                    
                    do
                        char rcx_5 = rbx[1]
                        rbx = &rbx[1]
                        i_2 = sub_142c79230(rcx_5)
                    while (i_2 != 0)
                
                int64_t arg_8
                char* arg_18
                int32_t rax_5 = sub_142c51e30(r15, r10_1, rbx - r10_1, &arg_8, &arg_18, 1)
                char* rcx_7 = arg_10
                
                if (rax_5 != 0)
                    data_143ccb8a0(rcx_7)
                    return rax_5
                
                if (sub_142c70460(rcx_7, "UIDVALIDITY") != 0 && *(rdi + 0x10) == 0)
                    char* rcx_8 = arg_18
                    
                    if (rcx_8 != 0)
                        int64_t rax_7 = arg_8
                        
                        if (rcx_8[rax_7 - 1] == 0x2f)
                            rcx_8[rax_7 - 1] = rax_5.b
                    
                    *(rdi + 0x10) = arg_8
                    goto label_142c797a1
                
                if (sub_142c70460(arg_10, "UID") != 0 && *(rdi + 0x18) == 0)
                    char* rcx_10 = arg_18
                    
                    if (rcx_10 != 0)
                        int64_t rax_10 = arg_8
                        
                        if (rcx_10[rax_10 - 1] == 0x2f)
                            rcx_10[rax_10 - 1] = 0
                    
                    *(rdi + 0x18) = arg_8
                    goto label_142c797a1
                
                if (sub_142c70460(arg_10, "SECTION") != 0 && *(rdi + 0x20) == 0)
                    char* rcx_12 = arg_18
                    
                    if (rcx_12 != 0)
                        int64_t rax_13 = arg_8
                        
                        if (rcx_12[rax_13 - 1] == 0x2f)
                            rcx_12[rax_13 - 1] = 0
                    
                    *(rdi + 0x20) = arg_8
                    goto label_142c797a1
                
                if (sub_142c70460(arg_10, "PARTIAL") == 0 || *(rdi + 0x28) != 0)
                    data_143ccb8a0(arg_10)
                    data_143ccb8a0(arg_8)
                else
                    char* rcx_14 = arg_18
                    
                    if (rcx_14 != 0)
                        int64_t rax_16 = arg_8
                        
                        if (rcx_14[rax_16 - 1] == 0x2f)
                            rcx_14[rax_16 - 1] = 0
                    
                    *(rdi + 0x28) = arg_8
                label_142c797a1:
                    char* rcx_15 = arg_10
                    arg_8 = 0
                    data_143ccb8a0(rcx_15)
                    data_143ccb8a0(arg_8)
                    
                    if (*rbx != 0x3b)
                        break
                    
                    continue
        
        return 3

if (*r12 != 0 && *(rdi + 0x18) == 0 && *rbx == 0x3f)
    char rcx_17 = rbx[1]
    rbx = &rbx[1]
    char* r10_2 = rbx
    
    if (sub_142c79230(rcx_17) != 0)
        char i_3
        
        do
            char rcx_18 = rbx[1]
            rbx = &rbx[1]
            i_3 = sub_142c79230(rcx_18)
        while (i_3 != 0)
    
    rax_3 = sub_142c51e30(r15, r10_2, rbx - r10_2, rdi + 0x30, nullptr, 1)
    
    if (rax_3 != 0)
        return rax_3

uint32_t rax_19 = zx.d(*rbx)
char temp0_1 = rax_19.b
rax_19.b = neg.b(rax_19.b)
return sbb.d(rax_19, rax_19, temp0_1 != 0) & 3
