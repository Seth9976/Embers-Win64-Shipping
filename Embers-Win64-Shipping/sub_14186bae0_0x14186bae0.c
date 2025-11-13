// 函数: sub_14186bae0
// 地址: 0x14186bae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe7620
*(arg1 + 0x44)
*(arg1 + 0x44) = 1

if (arg1[9] != 0)
    while (true)
        void* rcx = arg1[9]
        
        if (rcx != 0)
            int64_t* rcx_1 = *(rcx + 0x70)
            
            if ((*(*rcx_1 + 0x20))(rcx_1, 0xffffffff, 0) != 0)
                break

int64_t rcx_2 = arg1[0x14]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

DeleteCriticalSection(&arg1[0xb])
int64_t* rdi = arg1[0xa]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

*arg1 = &data_142e85a30

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
