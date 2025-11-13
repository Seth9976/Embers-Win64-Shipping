// 函数: sub_140bc8b00
// 地址: 0x140bc8b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = Concurrency::details::are_vista_sync_apis_available()
sub_140bc86a0()
int64_t* rcx_3

if (rax == 0)
    void*** rax_5 = j_sub_140a82f30(0x3b0)
    void* rbx_1 = nullptr
    void*** rax_6
    
    if (rax_5 == 0)
        rax_6 = nullptr
    else
        rax_6 = sub_140b94190(rax_5, 0, &data_1439a9900)
    
    rcx_3 = data_143e1a820
    
    if (rax_6 != 0)
        rbx_1 = &rax_6[1]
    
    data_143e1a820 = rbx_1
    goto label_140bc8bb1

int64_t rax_1 = sub_140aae600()
void*** rax_2 = j_sub_140a82f30(0xc00460)
void*** rcx_2

if (rax_2 == 0)
    rcx_2 = nullptr
else
    rcx_2 = sub_140bbeea0(rax_2, rax_1, &data_1439a9900)

void* rax_4 = &rcx_2[1]
rcx_3 = data_143e1a820

if (rcx_2 == 0)
    rax_4 = nullptr

if (rcx_3 != rax_4)
    data_143e1a820 = rax_4
label_140bc8bb1:
    
    if (rcx_3 != 0)
        (**rcx_3)(rcx_3, 1)

data_143e1a818 += 1
void*** rax_8 = sub_140a84c80(0, 0x20, 0)

if (rax_8 != 0)
    *rax_8 = &data_142d43dd8
    rax_8[1] = sub_140bbde20
    rax_8[3] = sub_140a387b0()
    *rax_8 = &data_142d43e30

if (rax_8 != 0)
    sub_140599630(&data_14399fb08, 1)
    void arg_8
    (*rax_8)[6](rax_8, &arg_8)
    int64_t rdi_1 = sx.q(data_14399fb10)
    int32_t rax_11 = (rdi_1 + 1).d
    bool cond:1_1 = rax_11 s<= data_14399fb14
    data_14399fb10 = rax_11
    
    if (not(cond:1_1))
        sub_1405a4f90(&data_14399fb08)
    
    void**** rax_14 = (rdi_1 << 4) + data_14399fb08
    *rax_14 = rax_8
    rax_14[1].d = 2

jump(*(*data_143e1a820 + 8))
