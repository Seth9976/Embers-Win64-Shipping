// 函数: sub_14186b7e0
// 地址: 0x14186b7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x30) = 0
int64_t* rcx = *(arg1 + 0x38)
(*(*rcx + 0x10))(rcx)

if (*(arg1 + 0x40) != 0)
    while (true)
        void* rcx_1 = *(arg1 + 0x40)
        
        if (rcx_1 != 0)
            int64_t* rcx_2 = *(rcx_1 + 0x70)
            
            if ((*(*rcx_2 + 0x20))(rcx_2, 0xffffffff, 0) != 0)
                break

sub_140a4fc50(*(arg1 + 0x38))
sub_141866020(arg1 + 0x50)
int64_t* rdi = *(arg1 + 0x48)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

int32_t i_2 = *(arg1 + 0x28)
int64_t* rdi_1 = *(arg1 + 0x20)

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_7 = *rdi_1
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        rdi_1 = &rdi_1[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rdi_1 = *(arg1 + 0x20)

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

int32_t i_3 = *(arg1 + 0x18)
int64_t* rdi_2 = *(arg1 + 0x10)

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_9 = *rdi_2
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rdi_2 = &rdi_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rdi_2 = *(arg1 + 0x10)

if (rdi_2 != 0)
    sub_140a74f90(rdi_2)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
