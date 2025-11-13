// 函数: sub_1417ce9d0
// 地址: 0x1417ce9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int64_t* rbx = *arg1
int32_t i_3 = arg1[1].d

if (i_3 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t i_2 = arg2[1].d
void* rdi = *arg2
int32_t r8 = *(arg1 + 0xc)
arg1[1].d = i_2

if (i_2 != 0 || r8 != 0)
    sub_1405a4be0(arg1, i_2, r8)
    int64_t* rbx_1 = *arg1
    
    if (i_2 != 0)
        int32_t i_1
        
        do
            *rbx_1 = 0
            int64_t rsi_1 = sx.q(*(rdi + 8))
            int64_t r12_1 = *rdi
            rbx_1[1].d = rsi_1.d
            
            if (rsi_1.d != 0)
                sub_1407c3650(rbx_1, rsi_1.d, 0)
                memcpy(*rbx_1, r12_1, (rsi_1 * 0xc).d)
            else
                *(rbx_1 + 0xc) = 0
            
            rbx_1 = &rbx_1[2]
            rdi += 0x10
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
else
    *(arg1 + 0xc) = 0

return arg1
