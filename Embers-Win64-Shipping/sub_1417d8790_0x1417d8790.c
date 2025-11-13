// 函数: sub_1417d8790
// 地址: 0x1417d8790
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
    
    if (result.d s<= *(rbx + 0x2b4))
        result = memcpy(rdi + rbx[0x54], rbp, count)
        int32_t rcx_3 = *(rbx + 0x2bc) + count
        bool cond:0_1 = rbx[0x58].b != 0
        *(rbx + 0x2bc) = rcx_3
        
        if (not(cond:0_1) && rcx_3 == *(rbx + 0x2b4))
            result = zx.q(rbx[0x56].d)
            
            if (rbx[0x57].d == result.d)
                rbx[0x58].b = 1
                return sub_1417e8180(rbx)

return result
