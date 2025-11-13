// 函数: sub_14228cba0
// 地址: 0x14228cba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x1d8))(arg1, &data_1439a9428)
(*(*arg1 + 0x1d8))(arg1, &data_1439a9478)
sub_1408db5d0(arg1, arg2 + 0x10, arg3)
sub_1408db650(arg1, arg2 + 0x30, arg3)
int512_t zmm1 = sub_14228ce00(arg1, arg2 + 0x40, arg3)
int64_t* rcx_4 = arg1[1]
int32_t* r8 = *rcx_4

if (&r8[1] u<= rcx_4[1])
    *(arg2 + 0x78) = *r8
    int64_t* rax_4 = arg1[1]
    *rax_4 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2 + 0x78, zmm1)
else
    (*(*arg1 + 0x150))(arg1, arg2 + 0x78, 4)

sub_1408db650(arg1, arg2 + 0x7c, zmm1)
int512_t zmm1_1 = sub_14228ce00(arg1, arg2 + 0x88, zmm1)

for (int32_t i = 0; i u< 6; i += 1)
    zmm1_1 = sub_14228ce00(arg1, arg2 + 0xc0 + sx.q(i) * 0x38, zmm1_1)

sub_14228ce00(arg1, arg2 + 0x248, sub_14228ce00(arg1, arg2 + 0x210, zmm1_1))
int32_t rax_7
int512_t zmm1_3
rax_7, zmm1_3 = sub_140b4e7c0(arg1, &data_1439a9428)

if (rax_7 s>= 2)
    int64_t* rcx_13 = arg1[0xe]
    char rax_9
    
    if (rcx_13 != 0)
        rax_9 = (*(*rcx_13 + 0xd8))(rcx_13, 5)
    
    if (rcx_13 == 0 || rax_9 != 0)
        sub_14228ce00(arg1, arg2 + 0x2b8, sub_14228ce00(arg1, arg2 + 0x280, zmm1_3))
    else
        int64_t var_40
        __builtin_memset(&var_40, 0, 0x29)
        void** const var_48 = &data_143314ec0
        zmm1_3.o = zx.o(0)
        sub_14228ce00(arg1, &var_48, sub_14228ce00(arg1, &var_48, zmm1_3))
        int128_t var_28
        sub_1405d1550(&var_28:8)
        sub_14081c9d0(&var_28)
        int64_t rcx_18 = var_40
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)

int32_t rax_10
int512_t zmm1_6
rax_10, zmm1_6 = sub_140b4e7c0(arg1, &data_1439a9478)

if (rax_10 s>= 0x22)
    void* rdx_14 = arg2 + 0x2f8
    
    if (arg2 == -0x2f0)
        rdx_14 = nullptr
    
    sub_14228b250(arg1, rdx_14, zmm1_6)
    void* rdx_15 = arg2 + 0x318
    
    if (arg2 == -0x310)
        rdx_15 = nullptr
    
    sub_14228b090(arg1, rdx_15, zmm1_6)

if ((arg1[5].b & 1) != 0)
    if (data_1439c7a08 s>= 3)
        (*(*(arg2 + 0x280) + 0x18))(arg2 + 0x280)
        (*(*(arg2 + 0x2b8) + 0x18))(arg2 + 0x2b8)
    
    *(arg2 + 0x2c) = 0

return arg1
