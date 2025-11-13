// 函数: sub_140a35cd0
// 地址: 0x140a35cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[1].d
int32_t i_1 = rax - 1

if (rax == 0)
    i_1 = 0

int64_t i = sx.q(i_1)

if (i_1 s> 0)
    do
        if (iswspace(*(*arg1 + (i << 1) - 2)) == 0)
            break
        
        i_1 -= 1
        i -= 1
    while (i s> 0)

int32_t result = arg1[1].d
int32_t rbx = result - 1

if (result == 0)
    rbx = -1

int32_t rcx_1 = result - 1

if (result == 0)
    rcx_1 = -1

if (result == 0)
    rbx = 0

if (result == 0)
    rcx_1 = 0

int32_t rbx_1 = rbx - i_1
int32_t rcx_2 = rcx_1 - i_1

if (rcx_1 - i_1 s>= 0)
    if (rcx_2 s< rbx_1)
        rbx_1 = rcx_2
    
    if (rbx_1 != 0)
        int32_t rcx_4 = result - rbx_1
        
        if (rcx_4 != i_1)
            int64_t r9_1 = *arg1
            memmove(r9_1 + (sx.q(i_1) << 1), r9_1 + (sx.q(rbx_1 + i_1) << 1), (rcx_4 - i_1) * 2)
            result = arg1[1].d
        
        arg1[1].d = result - rbx_1
        return sub_1405a50a0(arg1)

return result
