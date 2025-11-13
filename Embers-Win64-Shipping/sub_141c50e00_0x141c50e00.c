// 函数: sub_141c50e00
// 地址: 0x141c50e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1->__offset(0x140).d s> 0)
    int32_t i = 0
    int64_t* rdi_1 = nullptr
    
    do
        int64_t rax_2 = arg1->__offset(0x138).q
        int64_t* rcx = *(rdi_1 + rax_2)
        
        if (rcx != 0)
            (*(*rcx + 0x10))(rcx, 1)
            rax_2 = arg1->__offset(0x138).q
        
        *(rdi_1 + rax_2) = 0
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< arg1->__offset(0x140).d)
    
    arg1->__offset(0x140).d = 0
    
    if (arg1->__offset(0x144).d s<= 0xffffffff)
        sub_1405c5570(arg1 + 0x138, 0)

sub_140a4fc50(arg1->__offset(0x78).q)
int64_t rcx_3 = arg1->__offset(0x198).q

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1->__offset(0x188).q

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1->__offset(0x178).q

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1->__offset(0x168).q

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1->__offset(0x158).q

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_140596e10(arg1 + 0x148)
int64_t rcx_9 = arg1->__offset(0x138).q

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

arg1->__offset(0x130).d = 0
int64_t rcx_10 = arg1->__offset(0x128).q

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

sub_141c50120(arg1 + 0xe8)
sub_141c4fad0(arg1 + 0xd8)
sub_141c4fba0(&arg1[5])
int64_t rcx_14 = arg1->__offset(0xb8).q

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = arg1->__offset(0xa8).q

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

DeleteCriticalSection(arg1 + 0x80)
int64_t i_2 = 2
void* __offset(_RTL_CRITICAL_SECTION, 0x70) rsi_1 = arg1 + 0x70
int64_t i_1

do
    rsi_1 -= 0x10
    sub_1405d5770(rsi_1)
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
int64_t rcx_18 = arg1->__offset(0x40).q

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int64_t* rdi_2 = arg1->__offset(0x38).q

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rsi_2 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rsi_2 == 1)
            (*(*rdi_2 + 8))(rdi_2, zx.q(rsi_2))

return DeleteCriticalSection(arg1) __tailcall
