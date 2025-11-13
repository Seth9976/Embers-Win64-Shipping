// 函数: sub_140599630
// 地址: 0x140599630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x14) s> 0)
    return 

if (arg2 != 0)
    arg1[2].d -= 1

if (arg2 != 0 && arg1[2].d s> arg1[1].d)
    return 

int32_t rbp_1 = arg1[1].d
int32_t rdx = rbp_1
int32_t rdi_1 = 0

if (rbp_1 s> 0)
    int64_t rsi_1 = 0
    
    do
        uint64_t rax_1 = *arg1
        
        if (*(rsi_1 + rax_1 + 8) == 0)
            sub_1405a4880(arg1, rdi_1, 1, 1)
        else
            int64_t* rcx = *(rsi_1 + rax_1)
            
            if (rcx == 0)
                sub_1405a4880(arg1, rdi_1, 1, 1)
            else if ((*(*rcx + 0x20))(rcx) != 0)
                sub_1405a4880(arg1, rdi_1, 1, 1)
            else
                rdi_1 += 1
                rsi_1 += 0x10
        
        rdx = arg1[1].d
    while (rdi_1 s< rdx)

int32_t rax = rdx * 2

if (rax s<= 2)
    rax = 2

arg1[2].d = rax

if (rbp_1 s> rax && *(arg1 + 0xc) != rdx)
    return sub_1405a5410(arg1, rdx) __tailcall
