// 函数: sub_142865ee0
// 地址: 0x142865ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
void* r13 = *(arg1 + 0x488)
int32_t rbx_1 = *(r13 + 0x1c) & 0x30000
sub_1428a6780(*(r13 + 0x1b8))
char const (*** rbp)[0x17] = nullptr
*(r13 + 0x1b8) = 0
*(r13 + 0x1c0) = 0
int32_t rdx_1 = *(arg1 + 0x38)
int16_t* rsi_1

if (rdx_1 == 0)
    rsi_1 = *(r13 + 0x1a8)

int64_t i_3

if (rdx_1 != 0 || rsi_1 == 0 || rbx_1 != 0)
    rsi_1 = *(r13 + 0x198)
    
    if (rsi_1 == 0 || rbx_1 != 0)
        void* rax_1 = *(arg1 + 0x488)
        int32_t rcx_2 = *(rax_1 + 0x1c) & 0x30000
        
        if (rcx_2 == 0x10000)
            i_3 = 1
            rsi_1 = &data_1434dc724
        else if (rcx_2 == 0x20000)
            rsi_1 = &data_1434dc726
            i_3 = 1
        else if (rcx_2 == 0x30000)
            i_3 = 2
            rsi_1 = &data_1434dc724
        else
            if (rdx_1 == 0)
                rsi_1 = *(rax_1 + 0x1a8)
            
            if (rdx_1 != 0 || rsi_1 == 0)
                rsi_1 = *(rax_1 + 0x198)
                
                if (rsi_1 == 0)
                    rsi_1 = &data_1434dc6f0
                    i_3 = 0x1a
                else
                    i_3 = *(rax_1 + 0x1a0)
            else
                i_3 = *(rax_1 + 0x1b0)
    else
        i_3 = *(r13 + 0x1a0)
else
    i_3 = *(r13 + 0x1b0)

int16_t* rcx_3
int64_t i_2

if ((*(arg1 + 0x5c4) & 0x400000) != 0 || rbx_1 != 0)
    void* rax_3 = *(arg1 + 0xa8)
    rcx_3 = rsi_1
    i_2 = i_3
    rsi_1 = *(rax_3 + 0x2e8)
    i_3 = *(rax_3 + 0x2f8)
else
    void* rax_2 = *(arg1 + 0xa8)
    rcx_3 = *(rax_2 + 0x2e8)
    i_2 = *(rax_2 + 0x2f8)

void** r14_1 = nullptr
int64_t r12 = 0
int16_t* r15 = rcx_3

if (i_2 != 0)
    int64_t i_1 = i_2
    int64_t i
    
    do
        void* rbx_2 = &data_1434dc750
        int64_t rax_4 = 0
        
        while (*(rbx_2 + 8) != *r15)
            rax_4 += 1
            rbx_2 += 0x28
            
            if (rax_4 u>= 0x1a)
                rbx_2 = nullptr
                break
        
        if (sub_142864400(arg1, 0x5000c, rbx_2) != 0)
            int64_t rcx_6 = 0
            int16_t* rax_6 = rsi_1
            
            if (i_3 != 0)
                do
                    if (*r15 == *rax_6)
                        r12 += 1
                        
                        if (r14_1 != 0)
                            *r14_1 = rbx_2
                            r14_1 = &r14_1[1]
                        
                        break
                    
                    rcx_6 += 1
                    rax_6 = &rax_6[1]
                while (rcx_6 u< i_3)
        
        r15 = &r15[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r12 != 0)
    char const (*** rax_7)[0x17] = sub_1428a6730(r12 << 3)
    rbp = rax_7
    
    if (rax_7 == 0)
        sub_1428a5670((rax_7 + 0x14).d, 0x277, (rax_7 + 0x41).d, "ssl\t1_lib.c", 0x6ac)
        return 0
    
    r12 = sub_142864310(arg1, rax_7, rcx_3, i_2, rsi_1, i_3)

*(r13 + 0x1b8) = rbp
*(r13 + 0x1c0) = r12
return 1
