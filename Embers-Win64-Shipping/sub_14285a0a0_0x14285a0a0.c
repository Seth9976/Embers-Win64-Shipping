// 函数: sub_14285a0a0
// 地址: 0x14285a0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* i = *arg1
int32_t rbx = 0

for (; i != 0; i = i[2])
    if (i[1].d != 0)
        void* rax_1 = *i
        
        if (*(rax_1 + 0x44) s> rbx)
            rbx = *(rax_1 + 0x44)

int64_t rsi = sx.q(rbx)
int64_t rax_2 = sub_1428a6a70((rsi << 2) + 4)

if (rax_2 == 0)
    sub_1428a5670((rax_2 + 0x14).d, 0xe7, (rax_2 + 0x41).d, "ssl\ssl_ciph.c", 0x3a1)
    return 0

for (int64_t* i_1 = *arg1; i_1 != 0; i_1 = i_1[2])
    if (i_1[1].d != 0)
        int64_t rcx_2 = sx.q(*(*i_1 + 0x44))
        *(rax_2 + (rcx_2 << 2)) += 1

if (rbx s>= 0)
    int64_t temp0_1
    
    do
        if (*(rax_2 + (rsi << 2)) s> 0)
            int64_t* r8_2 = *arg2
            int64_t* r10_1 = *arg1
            int64_t* rbp_1 = r8_2
            
            if (r8_2 != 0)
                int64_t* rdx_1 = r10_1
                int64_t* rax_5
                
                do
                    int64_t* rdi_1 = r10_1
                    rax_5 = rdx_1
                    
                    if (rdx_1 == 0)
                        break
                    
                    void** r11_1 = &rdx_1[2]
                    rdx_1 = rdx_1[2]
                    
                    if ((rsi s< 0 || rbx == *(*rax_5 + 0x44)) && rax_5[1].d != 0 && rax_5 != r8_2)
                        void* rcx_4 = rax_5[3]
                        bool cond:0_1 = rax_5 != r10_1
                        r10_1 = rdx_1
                        int64_t* r9_2 = rdx_1
                        
                        if (cond:0_1)
                            r10_1 = rdi_1
                        
                        if (rcx_4 != 0)
                            *(rcx_4 + 0x10) = rdx_1
                            r9_2 = *r11_1
                        
                        if (r9_2 != 0)
                            r9_2[3] = rax_5[3]
                        
                        r8_2[2] = rax_5
                        rax_5[3] = r8_2
                        r8_2 = rax_5
                        *r11_1 = nullptr
                while (rax_5 != rbp_1)
            
            *arg1 = r10_1
            *arg2 = r8_2
        
        rbx -= 1
        temp0_1 = rsi
        rsi -= 1
    while (temp0_1 - 1 s>= 0)

sub_1428a6780(rax_2)
return 1
