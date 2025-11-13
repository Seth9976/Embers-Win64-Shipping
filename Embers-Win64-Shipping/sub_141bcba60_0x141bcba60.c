// 函数: sub_141bcba60
// 地址: 0x141bcba60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141eaa3d0(arg1)
int64_t* rbx_1 = arg1[0x65]
int32_t r12_1 = zx.d(arg2) | 0x34

if (rbx_1 != 0)
    int64_t rbx_2 = *rbx_1
    int64_t rax_1 = sub_140cde0b0()
    (*(rbx_2 + 0x138))(arg1[0x65], 0, rax_1, zx.q(r12_1))
    sub_140cc1620(arg1[0x65])
    arg1[0x65] = 0

int64_t rbp = 0
int64_t* r14 = arg1[0x69]
uint64_t r13_1 = sx.q(arg1[0x6a].d) << 3 u>> 3

if (r14 u> &r14[arg1[0x6a]])
    r13_1 = 0

if (r13_1 != 0)
    do
        int64_t* rdi_1 = *r14
        (*(*rdi_1 + 0x138))(rdi_1, 0, sub_140cde0b0(), zx.q(r12_1))
        sub_140cc1620(rdi_1)
        rbp += 1
        r14 = &r14[1]
    while (rbp != r13_1)

arg1[0x6a].d = 0

if (*(arg1 + 0x354) != 0)
    sub_1405c5570(&arg1[0x69], 0)

arg1[0x66].d &= 0xfffffffb
arg1[0x72] = 0
arg1[0x6d].d = 0xffffffff
*(arg1 + 0x36c) = 0
arg1[0x6f] = 0
arg1[0x71].d = 0

if (*(arg1 + 0x38c) s<= 0xffffffff)
    sub_1405947f0(&arg1[0x70], 0)

int16_t* result = arg1[0x70]

if (result != 0)
    *result = 0

arg1[0x6e].d = 0
int32_t i_1 = arg1[0x68].d
void* rbx_4 = arg1[0x67]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_6 = *(rbx_4 + 0x20)
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = *rbx_4
        
        if (rcx_7 != 0)
            result = sub_140a74f90(rcx_7)
        
        rbx_4 += 0x50
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0x68].d = 0

if (*(arg1 + 0x344) == 0)
    return result

return sub_1405a5310(&arg1[0x67], 0)
