// 函数: sub_1421e2710
// 地址: 0x1421e2710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbp = zx.d(*(arg1 + 8))
void* rbx = *(arg1 + 0x28)
int64_t rdx
int512_t zmm1
rdx, zmm1 = sub_140b33630("Effects")

if (rbp == 0)
    sub_1421f5160(rbx)
    rdx = sub_1421dfa70(rbx)

if (*(rbx + 0x78) != 0)
    void** rdi_1 = *(rbx + 0x68)
    int64_t rsi_1 = 0
    uint64_t r14_2 = sx.q(*(rbx + 0x70)) << 3 u>> 3
    
    if (rdi_1 u> &rdi_1[sx.q(*(rbx + 0x70))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            rdx, zmm1 = sub_1421da730(rbx, *rdi_1)
            rsi_1 += 1
            rdi_1 = &rdi_1[1]
        while (rsi_1 != r14_2)
    
    *(rbx + 0x70) = 0
    
    if (*(rbx + 0x74) s<= 0xffffffff)
        rdx = sub_1405c5570(rbx + 0x68, 0)
    
    int64_t* var_48 = nullptr
    int64_t* var_50_1 = &var_48
    zmm1.o = arg2
    int64_t rdx_2
    int512_t zmm1_1
    int128_t zmm6_1
    rdx_2, zmm1_1, zmm6_1 = sub_1421d6700(rbx, rdx, arg3, rbp, rbx + 0x58)
    int64_t* rax_4 = var_48
    
    if (rax_4 != 0)
        rax_4[9].d -= 1
        
        if (rax_4[9].d == 1)
            rdx_2, zmm1_1, zmm6_1 = sub_140a2f6e0(var_48)
    
    char rax_5
    
    if (data_143f4d2c8 == 0 && data_143a2ece0 != 0)
        rax_5, rdx_2, zmm1_1 = sub_140b011d0()
    
    if (data_143f4d2c8 != 0 || data_143a2ece0 == 0 || rax_5 == 0 || data_143a2dc68 == 0)
        int64_t* var_40 = nullptr
        int64_t* var_50_3 = &var_40
        zmm1_1.o = zmm6_1
        sub_1421d6700(rbx, rdx_2, arg3, rbp, rbx + 0x48)
        int64_t* rax_8 = var_40
        
        if (rax_8 != 0)
            rax_8[9].d -= 1
            
            if (rax_8[9].d == 1)
                sub_140a2f6e0(var_40)
    else
        zmm1_1.o = zmm6_1
        sub_1421d5fb0(rbx, rbx + 0x48, arg3, rbp, rbx + 0x48, arg4)

return sub_140b37f60("Effects") __tailcall
