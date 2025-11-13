// 函数: sub_140a360c0
// 地址: 0x140a360c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int16_t* rdi = nullptr
int32_t result
int32_t rdx_1

while (true)
    rdx_1 = arg1[1].d
    result = rdx_1 - 1
    
    if (rdx_1 == 0)
        result = 0
    
    if (rbx s>= result)
        break
    
    result = iswspace(*(rdi + *arg1))
    
    if (result == 0)
        rdx_1 = arg1[1].d
        break
    
    rbx += 1
    rdi = &rdi[1]

int32_t rdi_1 = rdx_1 - 1

if (rdx_1 == 0)
    rdi_1 = 0

if (rbx s>= 0)
    if (rbx s< rdi_1)
        rdi_1 = rbx
    
    if (rdi_1 != 0)
        if (rdx_1 != rdi_1)
            int64_t rcx_1 = *arg1
            memmove(rcx_1, rcx_1 + (sx.q(rdi_1) << 1), (rdx_1 - rdi_1) * 2)
            rdx_1 = arg1[1].d
        
        arg1[1].d = rdx_1 - rdi_1
        return sub_1405a50a0(arg1)

return result
