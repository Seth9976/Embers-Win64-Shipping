// 函数: sub_141ecb5d0
// 地址: 0x141ecb5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = *(arg2 + 0x10)
void* rsi = nullptr
void* const rbx = arg4
void* rdi = nullptr
void* rcx

if (rax != 0 && *rax == 1)
    rcx = *(rax + 8)

if (rax == 0 || *rax != 1 || rcx == 0)
    int32_t* rax_6 = arg1[2]
    
    if (rax_6 != 0 && *rax_6 == 7)
        int64_t* r14_1 = *(rax_6 + 8)
        
        if (r14_1 != 0)
            void arg_10
            void* rax_9 = sub_140d3c6e0((*(*r14_1 + 8))(r14_1, &arg_10))
            rdi = rax_9
            
            if (rax_9 == 0 || (*(rax_9 + 0x209) & 2) == 0)
                *(rbx + 0x5c) = 0xffffffff
                *(rbx + 0x78) = 0
                arg4 = nullptr
            else
                *(rbx + 0x5c) = (*(*r14_1 + 0x10))(r14_1)
                *(rbx + 0x78) = *(*(*r14_1 + 0x18))(r14_1, &arg4)
else
    int32_t* rax_1 = sub_14227b210(rcx, arg1)
    *(rbx + 0x5c) = *rax_1
    void* rax_3 = sub_140d3c6e0(&rax_1[0x40])
    
    if (rax_3 != 0)
        *(rbx + 0x78) = *(rax_3 + 0x80)
    
    rdi = sub_140d3c6e0(&rax_1[0x3e])

sub_140d3a3a0(&arg4, nullptr)
void* const result = arg4
*(rbx + 0x60) = result

if (rdi != 0)
    sub_140d3a3a0(rbx + 0x68, *(rdi + 0xa0))
    result = sub_140d3a3a0(rbx + 0x70, rdi)
    
    if (arg5 != 0)
        result = (*(*arg1 + 0xd0))(arg1, zx.q(arg3))
        
        if (result != 0)
            int32_t* rax_15 = *(result + 0x10)
            
            if (rax_15 != 0 && *rax_15 == 2)
                rsi = *(rax_15 + 8)
            
            result = sub_140d3a3a0(rbx + 0x60, rsi)

*(rbx + 4) = 0xffffffff
return result
