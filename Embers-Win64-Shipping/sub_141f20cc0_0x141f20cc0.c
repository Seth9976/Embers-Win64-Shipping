// 函数: sub_141f20cc0
// 地址: 0x141f20cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = data_143f3af18
int32_t rbx = 0

if (rdx s<= 0)
    return 

int64_t* rax_1 = data_143f3af10
int64_t* rcx

while (true)
    rcx = *rax_1
    
    if (rcx[3] == arg1)
        break
    
    rbx += 1
    rax_1 = &rax_1[1]
    
    if (rbx s>= rdx)
        return 

(*(*rcx + 0x20))(rcx, 1)
int32_t rax_3 = data_143f3af18
int32_t rcx_3 = rax_3 - rbx - 1

if (rcx_3 s>= 1)
    rcx_3 = 1

if (rcx_3 != 0)
    int64_t rcx_4 = data_143f3af10
    memcpy(rcx_4 + (sx.q(rbx) << 3), rcx_4 + (sx.q(rax_3 - rcx_3) << 3), rcx_3 << 3)
    rax_3 = data_143f3af18

data_143f3af18 = rax_3 - 1
