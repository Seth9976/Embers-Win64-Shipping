// 函数: sub_14224f430
// 地址: 0x14224f430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *(arg1 + 0x10)
int64_t* r8 = nullptr
int64_t* rax = nullptr
char r10 = *(r9 + 0xc)

if (r10 u>= 2)
    rax = r9

int512_t result

if (rax != 0)
    int64_t* rcx = nullptr
    
    if (r10 u>= 1)
        rcx = r9
    
    if (rcx != 0)
        int64_t* rax_1 = nullptr
        
        if (*(rcx + 0xc) u>= 2)
            rax_1 = rcx
        
        if (rax_1 != 0 && *(sx.q(rax_1[1].d) + *(*rax_1 + 0x398)) == 4)
            if (r10 u>= 2)
                r8 = r9
            
            result.o = *(*(*r8 + 0x2d8) + (sx.q(r8[1].d) << 2))
            return result

result.o = zx.o(0)
return result
