// 函数: sub_142c88f90
// 地址: 0x142c88f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = -1
int64_t rcx = -1

do
    rcx += 1
while (arg1[rcx] != 0)

char* rax = data_143ccb898(rcx + 1)

if (rax == 0)
    return rax

char* rax_1 = data_143ccb8b0(arg1)
char* rdi = rax_1

if (rax_1 == 0)
    data_143ccb8a0(rax)
    return 0

char* rbx = rax
char* r12 = rdi

if (*rax_1 == 0)
    data_143ccb8a0(rax)
    return rdi

char* rax_4 = strchr(rdi, 0x3f)

if (rax_4 != 0)
    *rax_4 = 0

do
    if (strncmp("./", rdi, 2) != 0)
        if (strncmp("../", rdi, 3) != 0)
            if (strncmp("/./", rdi, 3) == 0)
                rdi = &rdi[2]
            else if (0x2f != *rdi || 0x2e != rdi[1] || 0 != rdi[2])
                if (strncmp("/../", rdi, 4) != 0)
                    int64_t rcx_6 = 0
                    
                    while (true)
                        char rax_9 = *(rcx_6 + &data_1436ba93c)
                        rcx_6 += 1
                        
                        if (rax_9 != rdi[rcx_6 - 1])
                            break
                        
                        if (rcx_6 == 4)
                            rdi = &rdi[2]
                            *rdi = 0x2f
                            
                            while (rbx u> rax)
                                rbx -= 1
                                
                                if (*rbx == 0x2f)
                                    break
                            
                            goto label_142c891b7_1
                    
                    if ((0x2e != *rdi || 0 != rdi[1])
                            && (0x2e != *rdi || 0x2e != rdi[1] || 0 != rdi[2]))
                        char i
                        
                        do
                            char rax_10 = *rdi
                            rdi = &rdi[1]
                            *rbx = rax_10
                            rbx = &rbx[1]
                            i = *rdi
                            
                            if (i == 0)
                                break
                        while (i != 0x2f)
                    label_142c891b7:
                        *rbx = 0
                    else
                        *rdi = 0
                        *rax = 0
                else
                    rdi = &rdi[3]
                    
                    while (rbx u> rax)
                        rbx -= 1
                        
                        if (*rbx == 0x2f)
                            break
                    
                label_142c891b7_1:
                    *rbx = 0
            else
                rdi = &rdi[1]
                *rdi = 0x2f
        else
            rdi = &rdi[3]
    else
        rdi = &rdi[2]
while (*rdi != 0)

if (rax_4 != 0)
    void* rdx_5 = rax_4 - r12 + arg1
    bool cond:1_1
    
    do
        cond:1_1 = *(rdx_5 + rbp + 1) != 0
        rbp += 1
    while (cond:1_1)
    memcpy(rbx, rdx_5, rbp.d + 1)

data_143ccb8a0(r12)
return rax
