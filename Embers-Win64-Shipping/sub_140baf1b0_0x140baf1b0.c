// 函数: sub_140baf1b0
// 地址: 0x140baf1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x298))
int64_t* r12 = *(*(arg1 + 0x290) + (rdi << 3) - 8)
*(arg1 + 0x298) = (rdi - 1).d
int32_t i_1
sub_140ba6bd0(arg1 + 0x2a0, &i_1, r12)
int64_t i_2 = sx.q(i_1)
int64_t rbx = 0
void* const rbp_1

if (i_2.d == 0xffffffff)
    rbp_1 = nullptr
else
    rbp_1 = i_2 * 0x38 + *(arg1 + 0x2a0)

*(arg1 + 0x340) = *(rbp_1 + 8)
*(arg1 + 0x348) = *(rbp_1 + 0x10)

if (*(arg1 + 0x358) != *(arg1 + 0x384))
    int32_t rax_5 = *(arg1 + 0x35c)
    *(arg1 + 0x358) = 0
    
    if (rax_5 s< 0 && rax_5 != 0)
        sub_140638cc0(arg1 + 0x350, 0)
    
    *(arg1 + 0x380) = 0xffffffff
    *(arg1 + 0x384) = 0
    sub_140774790(arg1 + 0x360)
    int64_t rcx_3 = sx.q(*(arg1 + 0x398))
    void* rdi_1 = arg1 + 0x388
    void* rax_6 = *(rdi_1 + 8)
    
    if (rcx_3 s> 0)
        if (rax_6 != 0)
            rdi_1 = rax_6
        
        __builtin_memset(rdi_1, 0xffffffff, rcx_3 << 2)

void* rcx_4 = *(*(arg1 + 0x1d8) + 0x3a0)
*(rcx_4 + 0x138) -= *(rbp_1 + 0x10)
sub_140b9d6a0(rcx_4, 0)
void* rdi_2 = *(arg1 + 0x50)
void* const rdi_3

if (*(rdi_2 + 0x2a2) == 0)
    rdi_3 = nullptr
else
    rdi_3 = *(rdi_2 + 0x2d8)

if (*(r12 + 0x61) == 0)
    int512_t zmm1
    zmm1.o = zx.o(0)
    (*(*r12 + 8))(r12, zmm1)

sub_140bb0fd0(rdi_3, *(arg1 + 0x340), *(arg1 + 0x348), 0, r12)
int32_t i = *(rbp_1 + 0x18)
i_1 = i

while (i s<= *(rbp_1 + 0x1c))
    sub_140bb5c10(arg1 + 0x2f0, i)
    void arg_10
    sub_14077a5e0(arg1 + 0x350, &arg_10, &i_1, nullptr)
    i += 1
    i_1 = i

int32_t* rdi_4 = *(rbp_1 + 0x20)
uint64_t r14_2 = sx.q(*(rbp_1 + 0x28)) << 2 u>> 2

if (rdi_4 u> &rdi_4[sx.q(*(rbp_1 + 0x28))])
    r14_2 = 0

if (r14_2 != 0)
    do
        int64_t* rcx_10 = *(arg1 + 0x1d8) + 0x340
        int32_t var_40_1 = *rdi_4 + 1
        void* var_48 = arg1
        int32_t var_3c_1 = 2
        sub_140bb6ac0(rcx_10, &var_48)
        rbx += 1
        rdi_4 = &rdi_4[1]
    while (rbx != r14_2)

return sub_140bb5e70(arg1 + 0x2a0, r12) __tailcall
