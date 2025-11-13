// 函数: sub_141010160
// 地址: 0x141010160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* rbx = arg1[0xa]
void* result = &rbx[arg1[0xb]]
uint64_t rsi_1 = sx.q(arg1[0xb].d) << 3 u>> 3

if (rbx u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            result = sub_140a74f90(rcx)
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != rsi_1)
    
    rbx = arg1[0xa]

if (rbx != 0)
    result = sub_140a74f90(rbx)

int64_t rcx_2 = *arg1

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2)
