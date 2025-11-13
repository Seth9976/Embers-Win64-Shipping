// 函数: sub_1409be810
// 地址: 0x1409be810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
uint64_t var_38 = 0
int32_t var_2c = 0
uint64_t r12 = 0
int64_t rdi = 0
uint64_t r13 = 0

if (&var_38 != arg2)
    rdi = sx.q(arg2[1].d)
    int64_t rbp_1 = *arg2
    int32_t var_30_1 = rdi.d
    
    if (rdi.d != 0)
        sub_1405c4a90(&var_38, rdi.d, 0)
        r12 = var_38
        memcpy(r12, rbp_1, (rdi << 2).d)
        rdi = zx.q(var_30_1)
        r13 = r12

void*** rax = j_sub_140a82f30(0x18)
void*** r15 = rax

if (rax == 0)
    r15 = nullptr
else
    *r15 = &data_142e3f7b8
    r15[1] = 0
    r15[2].d = rdi.d
    
    if (rdi.d != 0)
        sub_1405c4a90(&r15[1], rdi.d, 0)
        memcpy(r15[1], r13, rdi.d << 2)
    else
        *(r15 + 0x14) = 0

void*** arg_8 = r15
sub_1409afc10(arg1, &arg_8)
int32_t* i = *arg2

for (void* rbp_2 = &i[sx.q(arg2[1].d)]; i != rbp_2; i = &i[1])
    sub_141ce11b0(*(arg1 + 0x28), *i)

int64_t* rdi_1 = *(arg1 + 0x3b8)
uint64_t r15_2 = sx.q(*(arg1 + 0x3c0)) << 3 u>> 3

if (rdi_1 u> &rdi_1[sx.q(*(arg1 + 0x3c0))])
    r15_2 = 0

if (r15_2 != 0)
    do
        int64_t* rcx_6 = *rdi_1
        (*(*rcx_6 + 0x368))(rcx_6, arg1, arg2)
        rbx += 1
        rdi_1 = &rdi_1[1]
    while (rbx != r15_2)

int32_t* result = sub_140992690(arg1 + 0x428, arg2)

if (r12 == 0)
    return result

return sub_140a74f90(r12)
