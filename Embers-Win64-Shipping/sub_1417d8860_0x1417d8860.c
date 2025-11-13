// 函数: sub_1417d8860
// 地址: 0x1417d8860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t count = arg3[1].d
int64_t rbp = *arg3
int64_t rdi = sx.q(arg2)
uint64_t result = (*(*arg1 + 0x150))()
int64_t* rbx

if (result == 0)
    rbx = nullptr
else
    rbx = *(result + 0x130)

if (data_143de542a == 0 && rdi.d s>= 0)
    result = zx.q(count + rdi.d)
    
    if (result.d s<= rbx[0x56].d)
        result = memcpy(rdi + rbx[0x52], rbp, count)
        int32_t rcx_3 = rbx[0x57].d + count
        rbx[0x57].d = rcx_3
        
        if (rbx[0x58].b == 0)
            result = zx.q(*(rbx + 0x2b4))
            
            if (*(rbx + 0x2bc) == result.d && rcx_3 == rbx[0x56].d)
                rbx[0x58].b = 1
                return sub_1417e8180(rbx)

return result
