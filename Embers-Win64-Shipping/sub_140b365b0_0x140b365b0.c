// 函数: sub_140b365b0
// 地址: 0x140b365b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x50) == 0)
    return 

if (*(arg1 + 0x51) != 0)
    int64_t* rbx_1 = *(arg1 + 0x58)
    sub_140b26350(rbx_1, 1)
    sub_140b26350(rbx_1, 1)
    int64_t* rcx_2 = *(arg1 + 0x58)
    (*(*rcx_2 + 0x60))(rcx_2)

void* rbx_2 = *(arg1 + 0x58)
int64_t rdx_2 = sx.q(*(rbx_2 + 0x68))
int64_t* r9_1 = *(rbx_2 + 0x60)

if (r9_1[rdx_2 - 1] == arg1)
    *(rbx_2 + 0x68) = (rdx_2 - 1).d
else
    void* rax_2 = &r9_1[rdx_2]
    int64_t* rcx_3 = r9_1
    
    if (r9_1 != rax_2)
        while (*rcx_3 != arg1)
            rcx_3 = &rcx_3[1]
            
            if (rcx_3 == rax_2)
                goto label_140b36668
        
        int32_t rcx_5 = ((rcx_3 - r9_1) s>> 3).d
        
        if (rcx_5 != 0xffffffff)
            int32_t rax_5 = rdx_2.d - rcx_5 - 1
            
            if (rax_5 s>= 1)
                rax_5 = 1
            
            if (rax_5 != 0)
                memcpy(&r9_1[sx.q(rcx_5)], &r9_1[sx.q(rdx_2.d - rax_5)], rax_5 << 3)
                rdx_2 = zx.q(*(rbx_2 + 0x68))
            
            *(rbx_2 + 0x68) = (rdx_2 - 1).d

label_140b36668:
int64_t rax = sx.q(*(rbx_2 + 0x68))

if (rax.d == 0)
    return 

int128_t* rbx_3 = *(*(rbx_2 + 0x60) + (rax << 3) - 8)
sub_140b389c0(rbx_3, zx.o(0), rbx_3 + 0x18)
sub_140b26350(*(rbx_3 + 0x58), 0)
