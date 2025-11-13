// 函数: sub_140913700
// 地址: 0x140913700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xd0) = arg2

if (*(arg1 + 8) != data_143e2b8a8.d || *(arg1 + 0xc) != data_143e2b8a8:4.w)
    void*** rax_2 = j_sub_140a82f30(0x48)
    void*** rbx_1 = rax_2
    
    if (rax_2 == 0)
        rbx_1 = nullptr
    else
        rbx_1[1].b = 1
        *rbx_1 = &data_142e1d0c0
        *(rbx_1 + 0xc) = *(arg1 + 8)
        rbx_1[4] = 0
        rbx_1[5].b = 0
        rbx_1[3] = int.q(fconvert.t(10000000.0))
        rbx_1[7] = 0
        rbx_1[8].d = 0
        rbx_1[6] = sub_140a6e140(rbx_1, u"FTcpListener", 0x2000, 0, -1, 0)
    
    *(arg1 + 0x30) = rbx_1
    int32_t var_10_1 = 0
    int64_t* (* var_18)(void* arg1, int64_t arg2, int64_t* arg3) = sub_140910620
    void*** rax_4 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_4 != 0)
        int128_t zmm0_1 = var_18.o
        *rax_4 = &data_142e1d4c8
        *(rax_4 + 0x10) = zmm0_1
        rax_4[1] = arg1 - 8
        rax_4[5] = sub_140a387b0()
    
    if (&var_18 != &rbx_1[7])
        if (rax_4 != 0)
            (*rax_4)[8](rax_4, &rbx_1[7])
        else if (rbx_1[8].d != 0)
            int64_t* rcx_5 = rbx_1[7]
            
            if (rcx_5 != 0)
                (*(*rcx_5 + 0x38))(rcx_5, 0)
                int64_t rcx_6 = rbx_1[7]
                
                if (rcx_6 != 0)
                    rbx_1[7] = sub_140a84c80(rcx_6, 0, 0)
                
                rbx_1[8].d = 0
    
    if (rax_4 != 0)
        (*rax_4)[7](rax_4, 0)
        int64_t rax_10 = sub_140a84c80(rax_4, 0, 0)
        
        if (rax_10 != 0)
            sub_140a74f90(rax_10)

int32_t* i = *(arg1 + 0x10)

for (void* rsi_2 = &i[sx.q(*(arg1 + 0x18)) * 2]; i != rsi_2; i = &i[2])
    sub_14090e610(arg1 - 8, i)

int64_t* result
result.b = 1
return result
