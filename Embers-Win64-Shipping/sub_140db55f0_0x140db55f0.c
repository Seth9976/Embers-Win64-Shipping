// 函数: sub_140db55f0
// 地址: 0x140db55f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = data_143e20d28
sub_140b34200("FastPathUpdate", rbx)
char rax = data_143e24361
uint64_t r15
r15.b = 0
data_143e24361 = 1
int32_t rax_1 = arg1[0x6b].d
int64_t rbp = sx.q(rax_1 - 1)

if (rax_1 - 1 s>= 0)
    int64_t temp1_1
    
    do
        void* rax_3 = arg1[0x6a]
        void* rcx = &arg1[0x38]
        
        if (rax_3 != 0)
            rcx = rax_3
        
        int64_t r8_1 = sx.q(*(rcx + (rbp << 2)))
        int64_t* rbx_2 = arg1[2] + (r8_1 << 5)
        char r10_1 = *(rbx_2 + 0x1b)
        
        if ((r10_1 & 5) == 0)
            void* rdx_1 = *rbx_2
            
            if (rdx_1 != 0)
                char rcx_3 = rbx_2[3].b
                int32_t r14_1 = -1
                int128_t* rsi_1 = *(arg2 + 0x10)
                char rax_4 = rcx_3 & 0x50
                r15 = zx.q(r15.b)
                
                if (rax_4 != 0)
                    r15 = 1
                
                int512_t zmm3
                
                if (rax_4 != 0)
                    int32_t rax_5
                    rax_5, zmm3 = sub_140dbb7f0(rbx_2, rsi_1, r8_1, *(arg2 + 0x20))
                    r14_1 = rax_5
                else if ((r10_1 & 4) == 0)
                    if ((rcx_3 & 8) != 0)
                        sub_140e10250(rdx_1, zx.o(rsi_1[2].q), *(rsi_1 + 0x28))
                        rcx_3 = rbx_2[3].b
                    
                    if ((rcx_3 & 4) != 0)
                        int64_t* rcx_6 = *rbx_2
                        zmm3.o = *(rsi_1 + 0x28)
                        (*(*rcx_6 + 8))(rcx_6, &rcx_6[0x18], zx.o(rsi_1[2].q), zmm3)
                int32_t rax_7 = *(arg1 + 0x37c)
                
                if (r14_1 s>= rax_7)
                    rax_7 = r14_1
                
                *(arg1 + 0x37c) = rax_7
                char rax_8 = *(rbx_2 + 0x1b) | 1
                bool cond:2_1 = rbx_2[3].b == 0
                *(rbx_2 + 0x1b) = rax_8
                
                if (cond:2_1)
                    *(rbx_2 + 0x1b) = rax_8 & 0xfd
                else if ((rax_8 & 6) == 0)
                    sub_140db8590(&arg1[4], rbx_2)
                
                if (*(arg1 + 0x381) != 0)
                    break
        
        temp1_1 = rbp
        rbp -= 1
    while (temp1_1 - 1 s>= 0)

data_143e24361 = rax

if (*(arg1 + 0x381) != 0)
    int64_t r8_2 = *arg1
    *(arg1 + 0x37c) = (*(r8_2 + 0x20))(arg1, arg2, r8_2)

sub_140b38680("FastPathUpdate", rbx)
return zx.q(r15.b)
