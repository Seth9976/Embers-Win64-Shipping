// 函数: sub_141c45340
// 地址: 0x141c45340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[3])
int32_t rax = *(arg1 + 0xc)
void* rdi = *arg1
int32_t i_3 = arg1[1].d

if (rax s< 0)
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx_3 = *(rdi + 0x10)
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            int64_t rcx_4 = *rdi
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            rdi += 0x20
            i = i_3
            i_3 -= 1
        while (i != 1)
        rax = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (rax != 0)
        sub_1405a51b0(arg1, 0)
else
    if (i_3 != 0)
        int32_t i_1
        
        do
            int64_t rcx_1 = *(rdi + 0x10)
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            int64_t rcx_2 = *rdi
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rdi += 0x20
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

int64_t i_4 = 4
int64_t* result
int64_t i_2

do
    int64_t rdi_1 = sx.q(arg1[1].d)
    uint32_t r14_1 = zx.d(*(arg2 + 2))
    int32_t rax_1 = (rdi_1 + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4e40(arg1)
    
    result = sub_141c30fb0((rdi_1 << 5) + *arg1, r14_1)
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
*(arg1 + 0x14) = 1
arg1[2].d = 0

if (arg1 == -0x18)
    return result

return LeaveCriticalSection(&arg1[3])
