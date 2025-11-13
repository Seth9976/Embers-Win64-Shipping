// 函数: sub_140a72300
// 地址: 0x140a72300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143db95d8 != 0)
    return 

data_143db95d8 = 1

while (true)
    int64_t rbx_1 = data_143ddb3f0
    void*** rax_1 = malloc(0x240)
    void*** rcx_1 = rax_1
    
    if (rax_1 == 0)
        rcx_1 = nullptr
    else
        *rax_1 = &data_142e621b8
        rax_1[1] = rbx_1
        *(rax_1 + 0x14) = 0
        rax_1[3].d = 0
        rax_1[0xc] = 0
        rax_1[0x1d] = 0
        rax_1[0x2e] = 0
        rax_1[0x3f] = 0
    
    bool z_1
    
    if (rbx_1 == data_143ddb3f0)
        data_143ddb3f0 = rcx_1
        z_1 = true
    else
        data_143ddb3f0
        z_1 = false
    
    if (z_1)
        break
    
    if (rcx_1 != 0)
        (**rcx_1)(rcx_1, 1)
