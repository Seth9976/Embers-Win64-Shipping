// 函数: sub_141ecfc70
// 地址: 0x141ecfc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143a2d63c == 0 || sub_140b011d0().b == 0)
    return 

int32_t rax_3 = (*(arg1 + 0x2e0) + 1) & 0x80000001

if (rax_3 s< 0)
    rax_3 = ((rax_3 - 1) | 0xfffffffe) + 1

void* rbx_3 = sx.q(rax_3) * 0x60 + arg1 + 0x220

if (*(rbx_3 + 0x58) s<= 0)
    return 

int32_t rbp_1 = data_143f3a688
sub_140b34200("StatWaitForAllAsyncTraceTasks", rbp_1)
int64_t* rax_6 = sub_140a242a0()
void* rbx_4 = rbx_3 + 0x30
int64_t r9_1 = *rax_6
(*(r9_1 + 0x48))(rax_6, rbx_4, 2, r9_1)
int32_t rcx_2 = *(rbx_4 + 0x2c)
void* r14_1 = rbx_4 + 0x28
void* rax_7 = *(rbx_4 + 0x20)
int32_t i_2 = *r14_1

if (rcx_2 s< 0)
    void* rsi_1 = rbx_4
    
    if (rax_7 != 0)
        rsi_1 = rax_7
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t* rcx_4 = *rsi_1
            
            if (rcx_4 != 0)
                rcx_4[9].d -= 1
                
                if (rcx_4[9].d == 1)
                    sub_140a2f6e0(rcx_4)
            
            rsi_1 += 8
            i = i_2
            i_2 -= 1
        while (i != 1)
        rcx_2 = *(rbx_4 + 0x2c)
    
    *r14_1 = 0
    
    if (rcx_2 != 0)
        sub_14085a940(rbx_4, 0)
else
    if (rax_7 != 0)
        rbx_4 = rax_7
    
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t* rcx_3 = *rbx_4
            
            if (rcx_3 != 0)
                rcx_3[9].d -= 1
                
                if (rcx_3[9].d == 1)
                    sub_140a2f6e0(rcx_3)
            
            rbx_4 += 8
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *r14_1 = 0

sub_140b38680("StatWaitForAllAsyncTraceTasks", rbp_1)
