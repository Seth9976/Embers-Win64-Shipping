// 函数: sub_14082a370
// 地址: 0x14082a370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg3 + 0x50) == 0)
    return 0

void*** result_1 = j_sub_140a82f30(0x70)
int32_t i = 0
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    *result = &data_142dd6c10
    result[1] = 0
    void* rcx = *(arg4 + 0x778)
    char rax_1 = *(rcx + 0x38)
    result[2].b = rax_1
    
    if (rax_1 != 0)
        result[3] = *(arg4 + 0x728)
    else
        void* rax_2 = *(rcx + 0x98)
        result[3] = rax_2
        *(rax_2 + 8) += 1
    
    *result = &data_142dd8f30
    result[0xc] = 0
    result[0xd].d = 0
    *(result + 0x6c) = 8

int32_t rax_4 = sub_14082fce0(arg1)
void* r13 = *(**(arg1 + 0x208) + (sx.q(rax_4) << 3))
int32_t rdx_1 = *(r13 + 0x30)
result[0xd].d = 0

if (rdx_1 s> *(result + 0x6c))
    sub_140775b80(&result[4], rdx_1)

result[1] = *(arg1 + 0x1d8)

if (*(r13 + 0x30) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t* rcx_4 = *(r14_1 + *(arg1 + 0x1c8))
        int64_t rax_9 = (*(*rcx_4 + 0x280))(rcx_4)
        int64_t rbp_1 = sx.q(result[0xd].d)
        int32_t rcx_5 = (rbp_1 + 1).d
        result[0xd].d = rcx_5
        
        if (rcx_5 s> *(result + 0x6c))
            sub_1407752f0(&result[4], rbp_1.d)
        
        void* rcx_7 = result[0xc]
        void* rdx_3 = &result[4]
        
        if (rcx_7 != 0)
            rdx_3 = rcx_7
        
        i += 1
        r14_1 = &r14_1[1]
        *(rdx_3 + (rbp_1 << 3)) = rax_9
    while (i s< *(r13 + 0x30))

return result
