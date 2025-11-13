// 函数: sub_142372180
// 地址: 0x142372180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x40) == 0)
    *(arg1 + 0x40) = 0
    return 

if (sub_141e644e0() == 0)
    *(arg1 + 0x40) = 0
    return 

int64_t** rdi = *(arg1 + 0x28)
void* rbp = &rdi[sx.q(*(arg1 + 0x30))]

if (rdi == rbp)
    *(arg1 + 0x40) = 0
    return 

do
    int64_t* rbx_1 = *rdi
    
    if (rbx_1 != 0)
        sub_140cd85e0(rbx_1)
        
        if (arg2 != 0)
            int64_t rdx
            rdx.b = 1
            (*(*rbx_1 + 0x2e8))(rbx_1, rdx)
        
        void* rax_3 = sub_1425a2090()
        void* rdx_1 = rbx_1[2]
        int64_t rax_1 = sx.q(*(rax_3 + 0x38))
        
        if (rax_1.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_1 << 3)) == rax_3 + 0x30)
            void* rbx_2 = rbx_1[0xe]
            
            if (rbx_2 != 0)
                void var_38
                sub_141f7bed0(rbx_2 + 0x238, sub_141f79600(&var_38))
                sub_141f7baf0(&var_38)
    
    rdi = &rdi[1]
while (rdi != rbp)

*(arg1 + 0x40) = 0
