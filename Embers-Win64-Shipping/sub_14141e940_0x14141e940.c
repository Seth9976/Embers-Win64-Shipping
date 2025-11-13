// 函数: sub_14141e940
// 地址: 0x14141e940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f01c92 == 0)
    return 

int32_t rcx = 3

if (data_1439c7a38 s<= 3)
    rcx = data_1439c7a38

for (int64_t i = sx.q(rcx - 1); i s>= 1; i -= 1)
    void* rax_1 = (&data_143ed2e18)[i]
    int64_t* rcx_2 = (&data_143ed2e20)[i]
    (&data_143ed2e20)[i] = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 0x48) += 1
    
    if (rcx_2 != 0)
        rcx_2[9].d -= 1
        
        if (rcx_2[9].d == 1)
            sub_140a2f6e0(rcx_2)

int64_t* arg_20
int64_t* rax_3 = sub_141980430(arg2, &arg_20, 0)

if (&data_143ed2e20 != rax_3)
    int64_t* rcx_4 = data_143ed2e20
    data_143ed2e20 = *rax_3
    *rax_3 = 0
    
    if (rcx_4 != 0)
        rcx_4[9].d -= 1
        
        if (rcx_4[9].d == 1)
            sub_140a2f6e0(rcx_4)

int64_t* rcx_5 = arg_20

if (rcx_5 != 0)
    rcx_5[9].d -= 1
    
    if (rcx_5[9].d == 1)
        sub_140a2f6e0(rcx_5)

if (*(arg2 + 0x14) u> 0)
    j_sub_14196ef60(&data_143f02b88, arg2, arg3, arg4)

jump(*(*data_143f0f180 + 0x6d0))
