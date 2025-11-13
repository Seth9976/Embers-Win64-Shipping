// 函数: sub_1409f1960
// 地址: 0x1409f1960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int32_t i_3 = arg1[1].d
int64_t* rsi = *arg1

if (i_3 != 0)
    int32_t i
    
    do
        int32_t j_3 = rsi[1].d
        int64_t* rbx_1 = *rsi
        
        if (j_3 != 0)
            int32_t j
            
            do
                int64_t rcx = *rbx_1
                
                if (rcx != 0)
                    sub_140a74f90(rcx)
                
                rbx_1 = &rbx_1[2]
                j = j_3
                j_3 -= 1
            while (j != 1)
            rbx_1 = *rsi
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        rsi = &rsi[2]
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t i_2 = arg2[1].d
void* r13_1 = *arg2
int32_t r8 = *(arg1 + 0xc)
arg1[1].d = i_2
int32_t i_4 = i_2

if (i_2 == 0 && r8 == 0)
    *(arg1 + 0xc) = 0
    return arg1

sub_1405a4be0(arg1, i_2, r8)
int64_t* r15_1 = *arg1

if (i_2 == 0)
    return arg1

int32_t i_1

do
    *r15_1 = 0
    int32_t j_2 = *(r13_1 + 8)
    void* rdi_1 = *r13_1
    r15_1[1].d = j_2
    
    if (j_2 != 0)
        sub_1405a4be0(r15_1, j_2, 0)
        int64_t* rbx_2 = *r15_1
        int32_t j_1
        
        do
            *rbx_2 = 0
            int64_t rsi_1 = sx.q(*(rdi_1 + 8))
            int64_t r12_1 = *rdi_1
            rbx_2[1].d = rsi_1.d
            
            if (rsi_1.d != 0)
                sub_1409da0d0(rbx_2, rsi_1.d, 0)
                memcpy(*rbx_2, r12_1, (rsi_1 * 0x60).d)
            else
                *(rbx_2 + 0xc) = 0
            
            rbx_2 = &rbx_2[2]
            rdi_1 += 0x10
            j_1 = j_2
            j_2 -= 1
        while (j_1 != 1)
        i_2 = i_4
    else
        *(r15_1 + 0xc) = 0
    
    r15_1 = &r15_1[2]
    r13_1 += 0x10
    i_1 = i_2
    i_2 -= 1
    i_4 = i_2
while (i_1 != 1)
return arg1
