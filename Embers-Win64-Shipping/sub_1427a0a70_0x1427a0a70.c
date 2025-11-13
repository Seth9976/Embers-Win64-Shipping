// 函数: sub_1427a0a70
// 地址: 0x1427a0a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t var_b8 = 0
int64_t var_b0 = 0
int64_t* rax_4 = (*(*arg1 + 0x280))()
void* rbx = nullptr
var_b8 = 0
int64_t var_b0_1 = 0
void* result_1 = (*(*rax_4 + 0x280))(rax_4, &data_143f88aa0, &var_b8, 0)
void* const result = result_1
void* rax_5
int64_t rax_6
void* rdx

if (result_1 != 0)
    rax_5 = sub_1427bf9e0()
    rdx = *(result + 0x10)
    rax_6 = sx.q(*(rax_5 + 0x38))

if (result_1 == 0 || rax_6.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
    result = nullptr

int64_t rcx_2 = var_b8

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

void* rsi = nullptr

if (arg4 != 0)
    void* rax_9 = (*(*arg4 + 8))(arg4)
    void* rax_10 = sub_140d41340()
    void* rdx_1 = *(rax_9 + 0x10)
    int64_t rcx_4 = sx.q(*(rax_10 + 0x38))
    
    if (rcx_4.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rcx_4 << 3)) == rax_10 + 0x30)
        rsi = rax_9

*(result + 0x48) = rsi
void* rax_13

if (rsi == 0)
    rax_13 = nullptr
else
    rax_13 = sub_140d21950(rsi, sub_1427baa40())

*(result + 0x50) = rax_13
sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
var_b8 = 0
void* rax_15 = sub_140d2dfc0(sub_1427c0d10(), arg1, 0, 0, 0, 0, 0, 0, 0)
void* r14_2 = nullptr

if (arg5 != 0)
    int64_t rdx_5 = *arg5
    void* rax_16 = (*(rdx_5 + 8))(arg5, rdx_5)
    void* rax_17 = sub_140d41340()
    void* rdx_6 = *(rax_16 + 0x10)
    int64_t rcx_9 = sx.q(*(rax_17 + 0x38))
    
    if (rcx_9.d s<= *(rdx_6 + 0x38) && *(*(rdx_6 + 0x30) + (rcx_9 << 3)) == rax_17 + 0x30)
        r14_2 = rax_16

*(rax_15 + 0x48) = r14_2
void* rax_20

if (r14_2 == 0)
    rax_20 = nullptr
else
    rax_20 = sub_140d21950(r14_2, sub_1427baa40())

*(rax_15 + 0x50) = rax_20
void* r14_3 = nullptr

if (arg6 != 0)
    void* rax_22 = (*(*arg6 + 8))(arg6)
    void* rax_23 = sub_140d41340()
    void* rdx_9 = *(rax_22 + 0x10)
    int64_t rcx_12 = sx.q(*(rax_23 + 0x38))
    
    if (rcx_12.d s<= *(rdx_9 + 0x38) && *(*(rdx_9 + 0x30) + (rcx_12 << 3)) == rax_23 + 0x30)
        r14_3 = rax_22

*(rax_15 + 0x58) = r14_3
void* rax_26

if (r14_3 == 0)
    rax_26 = nullptr
else
    rax_26 = sub_140d21950(r14_3, sub_1427ba960())

*(rax_15 + 0x60) = rax_26
*(result + 0x58) = rax_15
void* rax_28

if (rax_15 == 0)
    rax_28 = nullptr
else
    rax_28 = sub_140d21950(rax_15, sub_1427baf50())

*(result + 0x60) = rax_28
void* rax_29 = sub_1427a34d0(arg2, arg1)

if (arg1[0xc] != 0)
    int64_t* var_a0_1 = arg1
    void** const var_68 = &data_142d42ed8
    int64_t (* rdx_14)(int64_t* arg1, char* arg2) = sub_1427a2560
    void*** var_78_1 = nullptr
    int64_t (* var_88)(int64_t* arg1, char* arg2) = sub_1427a2560
    void*** rax_30 = nullptr
    int128_t var_60_1 = arg2.o
    
    if (rax_29 + 0x40 != &var_88)
        int128_t zmm2_1 = *(rax_29 + 0x40)
        int128_t zmm3_1 = *(rax_29 + 0x50)
        int128_t zmm4_1 = *(rax_29 + 0x60)
        int128_t zmm5_1 = *(rax_29 + 0x70)
        *(rax_29 + 0x40) = var_88.o
        int128_t zmm0_1 = var_68.o
        *(rax_29 + 0x50) = var_78_1.o
        *(rax_29 + 0x60) = zmm0_1
        var_88.o = zmm2_1
        rdx_14 = var_88
        var_78_1.o = zmm3_1
        rax_30 = var_78_1
        *(rax_29 + 0x70) = var_60_1
        var_68.o = zmm4_1
        var_60_1 = zmm5_1
    
    if (rdx_14 != 0)
        void** const* rcx_17 = &var_68
        
        if (rax_30 != 0)
            rcx_17 = rax_30
        
        (*rcx_17)[2](rcx_17, rdx_14)

*(result + 0x68) = rax_29
void* rax_33

if (rax_29 == 0)
    rax_33 = nullptr
else
    rax_33 = sub_140d21950(rax_29, sub_1427babc0())

void* rsi_3 = nullptr
*(result + 0x70) = rax_33

if (arg7 != 0)
    void* rax_35 = (*(*arg7 + 8))(arg7)
    void* rax_36 = sub_140d41340()
    void* rdx_16 = *(rax_35 + 0x10)
    int64_t rcx_20 = sx.q(*(rax_36 + 0x38))
    
    if (rcx_20.d s<= *(rdx_16 + 0x38) && *(*(rdx_16 + 0x30) + (rcx_20 << 3)) == rax_36 + 0x30)
        rsi_3 = rax_35

*(result + 0x78) = rsi_3

if (rsi_3 != 0)
    rbx = sub_140d21950(rsi_3, sub_1427bad50())

*(result + 0x80) = rbx
int64_t rsi_4 = sx.q(arg1[0x21].d)
int32_t rcx_22 = (rsi_4 + 1).d
arg1[0x21].d = rcx_22

if (rcx_22 s> *(arg1 + 0x10c))
    sub_1405a4d70(&arg1[0x20])

*(arg1[0x20] + (rsi_4 << 3)) = result
__security_check_cookie(rax_1 ^ &var_108)
return result
