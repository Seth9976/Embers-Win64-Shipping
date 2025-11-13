// 函数: sub_141d8b6d0
// 地址: 0x141d8b6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x48) == 0)
    return 

uint64_t rax = *(arg1 + 0x50)

if (rax == 0 || *(rax + 8) s<= 0 || *(arg1 + 0x78) == 0
        || (*(*(arg1 + 0x10) + 0x58))(arg1 + 0x10).b != 0)
    return 

EnterCriticalSection(arg1 + 0x150)
void* rcx_2 = *(arg1 + 0x98)

if (rcx_2 != 0)
    bool z_1
    
    if (0 == *(rcx_2 + 8))
        *(rcx_2 + 8) = 0
        z_1 = true
    else
        *(rcx_2 + 8)
        z_1 = false
    
    if (not(z_1))
        data_14399fa54 += 1
        int512_t zmm1_1
        int128_t zmm6_1
        zmm1_1, zmm6_1 = sub_1419668e0(&data_143f02b98)
        zmm1_1.o = zmm6_1
        sub_141d8b820(arg1)
        void* rax_2 = *(arg1 + 0x98)
        *(rax_2 + 8)
        *(rax_2 + 8) = 0
        int128_t zmm2_1
        int128_t zmm3_1
        zmm2_1, zmm3_1 = sub_14196d390(&data_143f02b98)
        int32_t rdi_1 = data_143f029c8
        sub_140b34200("FlushRHIThreadFlushResourcesTotal", rdi_1)
        
        if (data_143f02bac u> 0)
            j_sub_14196ef60(&data_143f02b88, &data_143f02b98, zmm2_1, zmm3_1)
        
        sub_14198b230()
        sub_14198b3f0()
        int64_t rdx_2
        rdx_2.b = 1
        sub_14198b7d0()
        sub_141971910()
        sub_1419712f0(0)
        sub_140b38680("FlushRHIThreadFlushResourcesTotal", rdi_1)

if (arg1 != -0x150)
    LeaveCriticalSection(arg1 + 0x150)
