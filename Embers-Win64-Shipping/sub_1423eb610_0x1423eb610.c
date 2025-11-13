// 函数: sub_1423eb610
// 地址: 0x1423eb610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg4

if (*arg4 == 0 && arg4[1] == 0 && arg4[2] == 0 && arg4[3] == 0)
    void arg_8
    int32_t rbx_1 = *((*(*arg1 + 0x18))(arg1, &arg_8) + 4)
    void arg_10
    int32_t rcx_1 = *(*(*arg1 + 0x18))(arg1, &arg_10)
    *rdi = 0
    rdi[1].d = rcx_1
    *(rdi + 0xc) = rbx_1

arg2[1].d = 0

if (*(arg2 + 0xc) s<= 0xffffffff)
    sub_14061cd70(arg2, 0)

uint128_t zmm0 = *rdi
int32_t rax_5 = arg3[1].d
int128_t zmm1 = *arg3
uint128_t var_a0 = zmm0
uint64_t* var_e0 = arg2
int128_t zmm2 = arg1.o
uint64_t var_80 = rax_5.q
int128_t var_b0 = zmm2
int128_t var_90 = zmm1

if (sub_140a80f40() == 0)
    uint32_t rax_7
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_7.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_7.b == 0))
        void var_40
        void** rax_8 = sub_1423d7800(&var_40, nullptr, 0xff)
        int128_t zmm1_1 = *arg3
        void* rcx_6 = *rax_8
        *(rcx_6 + 0x10) = arg1.o
        *(rcx_6 + 0x20) = zmm0
        *(rcx_6 + 0x30) = zmm1_1
        *(rcx_6 + 0x40) = rax_5.q
        void* rcx_7 = *rax_8
        int64_t* rdi_1 = *(rcx_7 + 0x50)
        
        if (rdi_1 != 0)
            rdi_1[9].d += 1
        
        sub_14080ccb0(rcx_7, rax_8[1], rax_8[2].d, 1)
        
        if (rdi_1 != 0)
            rdi_1[9].d -= 1
            
            if (rdi_1[9].d == 1)
                sub_140a2f6e0(rdi_1)
    else
        zmm1 = *arg3
        uint128_t var_78 = arg1.o
        int128_t var_58_1 = zmm1
        uint128_t var_68_1 = zmm0
        uint64_t var_48_1 = rax_5.q
        sub_1423d0ae0(&var_78, &data_143f02b98, zmm2, arg5)
else
    sub_1423d0ae0(&var_b0, &data_143f02b98, zmm2, arg5)

sub_1419a21e0(0)
int64_t result
result.b = arg2[1].d s> 0
return result
