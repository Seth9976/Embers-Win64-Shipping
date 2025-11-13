// 函数: sub_1405aeff0
// 地址: 0x1405aeff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
int64_t* rdi = *arg1

if (rax != rdi)
    *arg2 = 0
    *arg1 = rax
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t rsi_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*rdi + 8))(rdi, zx.q(rsi_1))

return arg1
