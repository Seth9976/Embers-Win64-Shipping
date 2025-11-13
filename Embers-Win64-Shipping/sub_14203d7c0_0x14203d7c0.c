// 函数: sub_14203d7c0
// 地址: 0x14203d7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x70) = 0
void* rdi = data_143f5b298
int32_t var_20 = 0
void*** rax = sub_140a84c80(0, 0x30, 0)

if (rax != 0)
    *rax = &data_1432a4e08
    sub_140d3a3a0(&rax[1], arg1)
    *(rax + 0x10) = sub_14201b428.o
    rax[5] = sub_140a387b0()
    *rax = &data_1432a4e60

void arg_8

if (rax != 0)
    sub_140599630(rdi + 0x9d8, 1)
    (*rax)[6](rax, &arg_8)
    int64_t rsi_1 = sx.q(*(rdi + 0x9e0))
    int32_t rax_3 = (rsi_1 + 1).d
    *(rdi + 0x9e0) = rax_3
    
    if (rax_3 s> *(rdi + 0x9e4))
        sub_1405a4f90(rdi + 0x9d8)
    
    void** rax_6 = (rsi_1 << 4) + *(rdi + 0x9d8)
    *rax_6 = rax
    rax_6[1].d = 3

int32_t var_20_1 = 0
uint64_t* rdi_3 = data_143f5b298 + 0x9f0
void*** rax_7 = sub_140a84c80(0, 0x30, 0)

if (rax_7 != 0)
    *rax_7 = &data_142e345f8
    sub_140d3a3a0(&rax_7[1], arg1)
    *(rax_7 + 0x10) = sub_14201b434.o
    rax_7[5] = sub_140a387b0()
    *rax_7 = &data_142e34650

if (rax_7 != 0)
    sub_140599630(rdi_3, 1)
    (*rax_7)[6](rax_7, &arg_8)
    int64_t rsi_2 = sx.q(rdi_3[1].d)
    int32_t rax_10 = (rsi_2 + 1).d
    rdi_3[1].d = rax_10
    
    if (rax_10 s> *(rdi_3 + 0xc))
        sub_1405a4f90(rdi_3)
    
    void** rax_13 = (rsi_2 << 4) + *rdi_3
    *rax_13 = rax_7
    rax_13[1].d = 3

int64_t* rcx_9 = *(sub_1423de390(data_143f5b298, arg1) + 0x218)

if (rcx_9 != 0)
    jump(*(*rcx_9 + 0x2c8))

return 0
