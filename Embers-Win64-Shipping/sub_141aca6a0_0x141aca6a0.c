// 函数: sub_141aca6a0
// 地址: 0x141aca6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
uint64_t rax = sub_140d3e110(arg1 + 0x10)

if (rax.b == 0)
    if (*(arg1 + 0x18) != 0 && arg2 != 0)
        void* rsi_2 = *(arg2 + 0xc0)
        
        if (rsi_2 != 0)
            void* rax_3 = sub_142591550()
            void* rdx_1 = *(rsi_2 + 0x10)
            rax = sx.q(*(rax_3 + 0x38))
            
            if (rax.d s<= *(rdx_1 + 0x38))
                uint64_t rcx_6 = rax
                rax = *(rdx_1 + 0x30)
                
                if (*(rax + (rcx_6 << 3)) == rax_3 + 0x30)
                    return sub_141a919e0(&arg_8, rsi_2, arg2)
    
    *(arg1 + 0x1c) = 0xffffffff
    *(arg1 + 0x20) = 0
    return rax

void* rax_1 = sub_140d3c6e0(arg1 + 0x10)
int32_t* rax_2 = sub_140d3c6e0(arg1 + 0x1c)
int32_t* rbp = rax_2
bool cond:0_1

if (rax_2 == 0)
    cond:0_1 = rax_1 == 0
label_141aca715:
    
    if (cond:0_1)
        return rax_2
else if (rax_2 == rax_1)
    rax_2 = sub_140d3c6e0(arg1 + 0x24)
    
    if (*(rbp + 0x430) == rax_2)
        if (arg2 == 0)
            return rax_2
        
        rax_2 = sub_140d3c6e0(arg1 + 0x34)
        cond:0_1 = *(arg2 + 0x430) == rax_2
        goto label_141aca715
return sub_141acad10(arg1, rax_1, arg2)
