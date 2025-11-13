// 函数: sub_14210efb0
// 地址: 0x14210efb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx = nullptr
void* r13_2 = (sx.q(arg2) << 6) + arg1
int64_t i_2 = sx.q(*(r13_2 + 8))

if (arg3 != 0)
    arg4[1].d = 0
    
    if (*(arg4 + 0xc) != i_2.d)
        sub_1405a5410(arg4, i_2.d)
    
    arg5[1].d = 0
    
    if (*(arg5 + 0xc) != i_2.d)
        sub_1405a5410(arg5, i_2.d)

int64_t i_1 = i_2

if (i_2.d s<= 0)
    return 

int64_t i

do
    int128_t* r15_1 = *(r13_2 + 0x10)
    
    if (*(r15_1 + rbx + 8) == 2)
        int64_t rbp = sx.q(arg4[1].d)
        int32_t rax_1 = (rbp + 1).d
        arg4[1].d = rax_1
        
        if (rax_1 s> *(arg4 + 0xc))
            sub_1405a4f90(arg4)
        
        *(*arg4 + rbp * 0x10) = *(r15_1 + rbx)
        int64_t rbp_1 = sx.q(arg5[1].d)
        int64_t r15_2 = *(r13_2 + 0x20)
        int32_t rax_3 = (rbp_1 + 1).d
        arg5[1].d = rax_3
        
        if (rax_3 s> *(arg5 + 0xc))
            sub_1405a4f90(arg5)
        
        *(*arg5 + rbp_1 * 0x10) = *(rbx + r15_2)
    
    rbx = &rbx[1]
    i = i_1
    i_1 -= 1
while (i != 1)
