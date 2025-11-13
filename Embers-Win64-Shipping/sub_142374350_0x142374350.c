// 函数: sub_142374350
// 地址: 0x142374350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_141e644e0()

if (rax == 0)
    *(arg1 + 0x40) = 1
    return rax

int64_t rax_1 = sx.q(*(arg1 + 0x30))
int64_t** rdi = *(arg1 + 0x28)
void* rbp = &rdi[rax_1]

if (rdi == rbp)
    *(arg1 + 0x40) = 1
else
    do
        int64_t* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            sub_140cd85e0(rbx_1)
            
            if (arg2 != 0)
                int64_t rdx
                rdx.b = 1
                (*(*rbx_1 + 0x2e0))(rbx_1, rdx)
            
            void* rax_3 = sub_1425a2090()
            void* rdx_1 = rbx_1[2]
            rax_1 = sx.q(*(rax_3 + 0x38))
            
            if (rax_1.d s<= *(rdx_1 + 0x38))
                int64_t rcx_2 = rax_1
                rax_1 = *(rdx_1 + 0x30)
                
                if (*(rax_1 + (rcx_2 << 3)) == rax_3 + 0x30)
                    int64_t* rbx_2 = rbx_1[0xe]
                    
                    if (rbx_2 != 0)
                        sub_140cd85e0(rbx_2)
                        rax_1 = sub_142374470(rbx_2, 0)
        
        rdi = &rdi[1]
    while (rdi != rbp)
    
    *(arg1 + 0x40) = 1

return rax_1
