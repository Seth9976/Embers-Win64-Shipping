// 函数: sub_140a1d5e0
// 地址: 0x140a1d5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e51948
void* rbx = arg1[0xfb]
int64_t rdi = sx.q(arg1[0xfc].d)
void* rbp_2 = (rdi << 6) + rbx

if (rbx != rbp_2)
    do
        void* rax_1 = *(rbx + 0x10)
        void* rcx = rbx + 0x20
        
        if (rax_1 != 0)
            rcx = rax_1
        
        (*rbx)((*(*rcx + 8))(rcx))
        rbx += 0x40
    while (rbx != rbp_2)
    
    rdi = zx.q(arg1[0xfc].d)

int64_t* rbx_1 = arg1[0xfb]

if (rdi.d != 0)
    int32_t i
    
    do
        if (*rbx_1 != 0)
            void* rax_4 = rbx_1[2]
            void* rcx_2 = &rbx_1[4]
            
            if (rax_4 != 0)
                rcx_2 = rax_4
            
            (*(*rcx_2 + 0x10))(rcx_2)
        
        rbx_1 = &rbx_1[8]
        i = rdi.d
        rdi = zx.q(rdi.d - 1)
    while (i != 1)

arg1[0xfc].d = 0

if (*(arg1 + 0x7e4) != 0)
    sub_1405a52a0(&arg1[0xfb], 0)

int32_t rax_7 = arg1[0xf7].d
int32_t rdi_1 = 0

if (rax_7 s> 0)
    void* rbx_2 = &arg1[1]
    
    do
        int64_t* rcx_4 = *rbx_2
        (*(*rcx_4 + 0x48))(rcx_4, 0xffffffff)
        rax_7 = arg1[0xf7].d
        rbx_2 += 0x18
        rdi_1 += 1
    while (rdi_1 s< rax_7)

int32_t i_1 = 0

if (rax_7 s> 0)
    void* rbx_3 = &arg1[2]
    
    do
        if (i_1 s> *(arg1 + 0x7cc))
            int64_t* rcx_5 = *rbx_3
            (*(*rcx_5 + 0x18))(rcx_5)
            int64_t* rcx_6 = *rbx_3
            
            if (rcx_6 != 0)
                (*(*rcx_6 + 0x20))(rcx_6, 1)
            
            *rbx_3 = 0
        
        *(rbx_3 + 8) = 0
        i_1 += 1
        rbx_3 += 0x18
    while (i_1 s< arg1[0xf7].d)

uint32_t dwTlsIndex = *(arg1 + 0x7d4)
data_143cf8c40 = 0
*(arg1 + 0x7c4) = 0
TlsFree(dwTlsIndex)
int64_t i_3 = 3
void* rdi_2 = &arg1[0x1b4]
int64_t i_2

do
    rdi_2 -= 0x1e8
    `vector destructor iterator'(rdi_2, 0xd0, 2, sub_140594850)
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
sub_1405d5770(&arg1[0xfb])
*arg1 = &data_142e51748
return &data_142e51748
