// 函数: sub_141d7f790
// 地址: 0x141d7f790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
int64_t* rcx = *(arg1[5] + 0x38)
int64_t rax_2

if (rcx == 0)
    rax_2 = 0
else
    rax_2 = (*(*rcx + 0x30))(rcx)

arg1[0xb] = rax_2
int32_t rsi = data_14399fa48

if (rax_2 != 0)
    void* rcx_1 = data_143f5b298
    int64_t rdx_1 = 0
    int64_t* rax_3 = *(rcx_1 + 0xc38)
    uint64_t r9_2 = sx.q(*(rcx_1 + 0xc40)) << 3 u>> 3
    
    if (rax_3 u> &rax_3[sx.q(*(rcx_1 + 0xc40))])
        r9_2 = 0
    
    if (r9_2 != 0)
        do
            void* r8_1 = *rax_3
            
            if (arg1[0xb] == *(r8_1 + 0x278))
                data_14399fa48 = *(r8_1 + 0x230)
            
            rax_3 = &rax_3[1]
            rdx_1 += 1
        while (rdx_1 != r9_2)

int64_t* rax_4
float zmm0[0x4]
rax_4, zmm0 = j_sub_140a82f30(0x88)

if (rax_4 != 0)
    int64_t var_18 = arg1[5]
    void* rcx_7 = arg1[6]
    void* var_10_1 = rcx_7
    
    if (rcx_7 != 0)
        *(rcx_7 + 8) += 1
    
    rdi = sub_141d73df0(rax_4, &var_18, arg1[7], 2, zmm0, 3)

void* rdx_3 = arg1[0xc]

if (rdx_3 != rdi)
    arg1[0xc] = rdi
    sub_141d75b40(&arg1[0xc], rdx_3)

int64_t result = sub_141d83cf0(arg1)
data_14399fa48 = rsi
return result
