// 函数: sub_1426cb410
// 地址: 0x1426cb410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg1 + 0x30)

if (rax != 0)
    int64_t* r9_1 = *(rax + 0xd8)
    int64_t r10_1 = sx.q(*(rax + 0xe0))
    int64_t* r8_1 = r9_1
    void* rcx_1 = &r9_1[r10_1]
    
    if (r9_1 != rcx_1)
        do
            if (*r8_1 == arg1)
                int32_t r8_3 = ((r8_1 - r9_1) s>> 3).d
                
                if (r8_3 != 0xffffffff)
                    void* rcx_2 = &r9_1[sx.q(r8_3)]
                    memmove(rcx_2, rcx_2 + 8, (r10_1.d - r8_3 - 1) << 3)
                    *(rax + 0xe0) -= 1
                
                break
            
            r8_1 = &r8_1[1]
        while (r8_1 != rcx_1)

sub_140745b20(arg1 + 0x20)
int64_t* rcx_4 = *(arg1 + 8)

if (rcx_4 != 0)
    int32_t temp0_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_4 + 8))(rcx_4, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
