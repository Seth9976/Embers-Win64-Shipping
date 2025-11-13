// 函数: sub_140e8c780
// 地址: 0x140e8c780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630(&data_142e7b648)
EnterCriticalSection(&arg1[0xab])
int32_t r14 = data_143e20d28
sub_140b34200("Tick", r14)
uint128_t zmm0
zmm0.q = arg1[0x6b] f- arg1[0x6c]
float zmm6[0x4] = _mm_cvtpd_ps(zmm0)

if (arg2 == 1)
    int64_t* rdi_1 = arg1[0x16]
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int512_t zmm1_1
    zmm1_1, zmm6 = sub_140e208e0(arg1[0x15])
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp2_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    zmm1_1.o = zmm6
    sub_140e8cc90(arg1, zmm1_1)

sub_140e8c8e0(arg1, arg2, zmm6)

if (arg2 == 1)
    int64_t* rdi_2 = arg1[0x16]
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    sub_140e208e0(arg1[0x15])
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp3_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

sub_140b38680("Tick", r14)

if (arg1 != -0x558)
    LeaveCriticalSection(&arg1[0xab])

return sub_140b37f60(&data_142e7b648) __tailcall
