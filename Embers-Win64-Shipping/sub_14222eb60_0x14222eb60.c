// 函数: sub_14222eb60
// 地址: 0x14222eb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg4
sub_14222c330(arg1)
sub_1417cbaf0()
int64_t var_38
sub_140d21830(arg1, &var_38, 0, 0)
int64_t* rax = sub_142565030()
void* rax_1 = rax[0x23]

if (rax_1 == 0)
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    rax_1 = rax[0x23]

char rcx_2 = *(arg1 + 0x8c)
char rax_2 = *(rax_1 + 0xad)

if (rcx_2 != 0)
    rax_2 = rcx_2

int64_t r14 = 0

if (rax_2 != 3)
    char rax_3 = *(arg1 + 0x89)
    
    if ((rax_3 & 0x10) != 0 && arg2[1].d == 0)
        sub_14222e560(arg1 + 0x58, 0)
    else if ((rax_3 & 0x40) != 0 && arg3[1].d == 0)
        sub_14222e560(arg1 + 0x58, 0)
    
    int32_t i = 0
    
    if (*(arg1 + 0x60) s> 0)
        int64_t* rbx_1 = nullptr
        void* r15_1 = nullptr
        
        do
            void* rbp_1 = r15_1 + *(arg1 + 0x58)
            char rax_5 = *(arg1 + 0x89)
            
            if ((rax_5 & 0x10) != 0)
                int64_t rdx_2 = *(rbx_1 + *arg2)
                *(rbp_1 + 0xa0) = rdx_2
                sub_1417c7cf0(data_143ef85a8, rdx_2, &var_38)
                rax_5 = *(arg1 + 0x89)
            
            if ((rax_5 & 0x40) != 0)
                int64_t rdx_3 = *(rbx_1 + *arg3)
                *(rbp_1 + 0xa8) = rdx_3
                sub_1417c7cf0(data_143ef85a8, rdx_3, &var_38)
            
            i += 1
            r15_1 += 0xb0
            rbx_1 = &rbx_1[1]
        while (i s< *(arg1 + 0x60))
        
        r15 = arg4

int64_t* rsi_1 = *r15
uint64_t r12_2 = sx.q(r15[1].d) << 3 u>> 3

if (rsi_1 u> &rsi_1[r15[1]])
    r12_2 = 0

if (r12_2 != 0)
    do
        int64_t rbp_2 = *rsi_1
        
        if (rbp_2 != 0)
            int64_t r15_2 = sx.q(*(arg1 + 0xd8))
            int32_t rax_10 = (r15_2 + 1).d
            *(arg1 + 0xd8) = rax_10
            
            if (rax_10 s> *(arg1 + 0xdc))
                sub_1405a4d70(arg1 + 0xd0)
            
            *(*(arg1 + 0xd0) + (r15_2 << 3)) = rbp_2
            sub_1417c7cf0(data_143ef85a8, rbp_2, &var_38)
        
        rsi_1 = &rsi_1[1]
        r14 += 1
    while (r14 != r12_2)

int64_t result = sub_1417cc630()

if ((*(arg1 + 0x89) & 0x20) == 0)
    result = sub_14222edb0(arg1 + 0xa8)

*(arg1 + 0x8a) |= 1
int64_t rcx_9 = var_38

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
