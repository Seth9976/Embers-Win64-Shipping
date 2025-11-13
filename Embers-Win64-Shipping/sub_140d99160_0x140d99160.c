// 函数: sub_140d99160
// 地址: 0x140d99160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0x360)
int64_t** i = *(result + 0x38)

for (void* r14_2 = &i[sx.q(*(result + 0x40)) * 2]; i != r14_2; i = &i[2])
    int64_t* rax = *i
    int64_t* j = *rax
    result = sx.q(rax[1].d)
    
    for (void* rdi_2 = result * 0x58 + j; j != rdi_2; j = &j[0xb])
        int64_t* rcx = *j
        
        if (rcx != 0)
            result = (*(*rcx + 8))(rcx, arg2)

return result
