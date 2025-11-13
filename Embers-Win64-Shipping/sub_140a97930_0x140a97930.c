// 函数: sub_140a97930
// 地址: 0x140a97930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e63698
int16_t r10 = *(sub_140aae970() + 0x120)
*arg1 = &data_142e638c8
arg1[1].w = r10
arg1[2].d = *arg2
arg1[3] = *(arg2 + 8)
arg1[3] = *(arg2 + 8)
arg1[3].d = arg2[2]
arg1[3] = *(arg2 + 8)
arg1[7].b = 0

if (arg2[0xa].b != 0)
    arg1[4] = *(arg2 + 0x10)
    void* rax_7 = *(arg2 + 0x18)
    arg1[5] = rax_7
    
    if (rax_7 != 0)
        *(rax_7 + 8) += 1
    
    arg1[6].d = arg2[8]
    arg1[7].b = 1

arg1[0xb].b = 0
arg1[0xc] = *arg4
arg1[0xd] = arg4[1]
arg4[1] = 0
*arg4 = 0

if (arg3 != 0 && arg3 != &arg1[8])
    if (arg1[0xb].b != 0)
        arg1[0xb].b = 0
    
    *(arg1 + 0x40) = *arg3
    arg1[0xa] = arg3[1].q
    arg1[0xb].b = 1

if (arg2[0xa].b != 0)
    arg2[0xa].b = 0
    int64_t* rdi_1 = *(arg2 + 0x18)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rax_14 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_14 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rdi_2 = arg4[1]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rsi_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, zx.q(rsi_1))

return arg1
