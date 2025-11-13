// 函数: sub_1423d1f50
// 地址: 0x1423d1f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xa78)

if (rcx != 0)
    sub_141e742d0(rcx, arg2)

int64_t* i = *(arg1 + 0xc38)

for (void* rdi = &i[sx.q(*(arg1 + 0xc40))]; i != rdi; i = &i[1])
    void* r13_1 = *i
    int64_t var_38
    (*(*arg2 + 0x38))(arg2, r13_1 + 0x1a0, arg1, 0, var_38)
    void* j = *(r13_1 + 0x1a8)
    
    for (void* r15_2 = sx.q(*(r13_1 + 0x1b0)) * 0x38 + j; j != r15_2; j += 0x38)
        (*(*arg2 + 0x40))(arg2, *(j + 0x28), zx.q(*(j + 0x30)), arg1, 0)
    
    (*(*arg2 + 0x40))(arg2, *(r13_1 + 0x1c8), zx.q(*(r13_1 + 0x1d0)), arg1, 0)
    var_38 = 0
    (*(*arg2 + 0x40))(arg2, *(r13_1 + 0x1f0), zx.q(*(r13_1 + 0x1f8)), arg1, 0)
    (*(*arg2 + 0x38))(arg2, r13_1 + 0x210, arg1, 0)
    (*(*arg2 + 0x38))(arg2, r13_1 + 0x218, arg1, 0)
    int64_t j_1 = *(r13_1 + 0x220)
    
    for (int64_t r15_5 = (sx.q(*(r13_1 + 0x228)) << 4) + j_1; j_1 != r15_5; j_1 += 0x10)
        (*(*arg2 + 0x38))(arg2, j_1, arg1, 0)
    
    (*(*arg2 + 0x38))(arg2, r13_1 + 0x278, arg1, 0)

return sub_140594850() __tailcall
