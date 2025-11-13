// 函数: sub_1419be210
// 地址: 0x1419be210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg3
int32_t i_1 = arg3
arg1[1].d = i_1
void* r13 = arg2

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

int64_t rax_1 = sub_1405a4be0(arg1, arg3 + arg5, arg4)
uint64_t r15_1 = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        *r15_1 = 0
        int32_t j_1 = *(r13 + 8)
        void* rdi_1 = *r13
        *(r15_1 + 8) = j_1
        
        if (j_1 != 0)
            rax_1 = sub_1405a4be0(r15_1, j_1, 0)
            int64_t* rbx = *r15_1
            int32_t j
            
            do
                *rbx = 0
                int32_t rsi_1 = *(rdi_1 + 8)
                int64_t r12_1 = *rdi_1
                rbx[1].d = rsi_1
                
                if (rsi_1 != 0)
                    sub_1405a4c70(rbx, rsi_1, 0)
                    rax_1 = memcpy(*rbx, r12_1, rsi_1 * 2)
                else
                    *(rbx + 0xc) = 0
                
                rbx = &rbx[2]
                rdi_1 += 0x10
                j = j_1
                j_1 -= 1
            while (j != 1)
            i_1 = i_2
        else
            *(r15_1 + 0xc) = 0
        
        r15_1 += 0x10
        r13 += 0x10
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)

return rax_1
