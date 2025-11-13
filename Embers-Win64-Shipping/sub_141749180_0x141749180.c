// 函数: sub_141749180
// 地址: 0x141749180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *arg1
int64_t* r9 = nullptr
int64_t* rax = nullptr
char r10 = *(r8 + 0xc)

if (r10 u>= 2)
    rax = r8

if (rax != 0)
    int64_t* rax_1 = nullptr
    
    if (r10 u>= 1)
        rax_1 = r8
    
    if (rax_1 != 0)
        int64_t* rcx = nullptr
        
        if (*(rax_1 + 0xc) u>= 2)
            rcx = rax_1
        
        if (rcx != 0 && *(sx.q(rcx[1].d) + *(*rcx + 0x398)) == 4)
            if (r10 u>= 2)
                r9 = r8
            
            return (sx.q(r9[1].d) << 4) + *(*r9 + 0x3e0)

return (sx.q(r8[1].d) << 4) + *(*r8 + 0x68)
