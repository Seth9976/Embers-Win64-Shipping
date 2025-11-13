// 函数: sub_141b01b20
// 地址: 0x141b01b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int128_t zmm1 = *arg3
uint128_t zmm0 = zx.o(arg3[1].q)
int32_t rbx = *(arg3 + 0x18)
int128_t var_98 = zmm1
uint64_t var_88 = zmm0.q

if (zmm1.d != 0xffffffff)
    int32_t var_78
    sub_141a644b0(&var_98, &var_78, rbx, *((*(*arg7 + 8))(arg7) + 8) + 0xd0)
    rbx = var_78

zmm0 = var_98
int32_t var_b0 = rbx
uint128_t var_c0 = zmm0
void* var_a8
sub_141a4a790(arg7, &var_a8, &var_c0, &var_b0)
void* rax_5 = nullptr
int32_t var_a0

if (var_a0 s> 0)
    rax_5 = sub_140d3c6e0(var_a8)

int64_t* r9_3 = *(arg6 + 8)
int32_t* rdx_5

if (r9_3[1].d == *(r9_3 + 0x34))
label_141b01c54:
    rdx_5 = nullptr
else
    void* rdx_2 = r9_3[8]
    void* r8_2 = &r9_3[7]
    int32_t rbx_1 = *(arg6 + 0x1c)
    int64_t r11_1 = sx.q(*(arg6 + 0x20))
    int64_t r10_1 = sx.q(*(arg6 + 0x18))
    
    if (rdx_2 != 0)
        r8_2 = rdx_2
    
    int32_t rax_11 = *(r8_2 + (((sx.q(not.d(rbx_1)) ^ r11_1 ^ r10_1) & (sx.q(r9_3[9].d) - 1)) << 2))
    
    if (rax_11 == 0xffffffff)
    label_141b01c54_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_11) << 5) + *r9_3
            
            if (rdx_5[1] == rbx_1 && *rdx_5 == r10_1.d && rdx_5[2] == r11_1.d)
                break
            
            rax_11 = rdx_5[6]
            
            if (rax_11 == 0xffffffff)
                goto label_141b01c54_2
        
        if (rax_11 == 0xffffffff)
        label_141b01c54_2:
            rdx_5 = nullptr

void* rbx_2 = &rdx_5[4]

if (rdx_5 == 0)
    rbx_2 = nullptr

void** const var_d8
void** rbx_3

if (rbx_2 == 0)
    void** rax_12 = j_sub_140a82f30(0x10)
    rbx_3 = rax_12
    
    if (rax_12 == 0)
        rbx_3 = rax_12
    else
        *rbx_3 = &data_142d40488
        *(rbx_3 + 0xc) = 0
        rbx_3[1].d = 0xffffffff
    
    int64_t* rcx_8 = *(arg6 + 8)
    var_d8 = rbx_3
    sub_1406f3ea0(rcx_8, arg6 + 0x18, &var_d8)
    void** const rcx_9 = var_d8
    
    if (rcx_9 != 0)
        (**rcx_9)(rcx_9, 1)
else
    rbx_3 = *rbx_2

int32_t zmm0_1 = *(arg3 + 0x1c)
int64_t var_60 = 0
char var_58 = *(arg5 + 0x54) & 1
char var_4f = 0
char var_50

if (&arg3[2] != &var_50 && *(arg3 + 0x21) != 0)
    var_50 = arg3[2].b
    char var_4f_1 = 1

int64_t result = sub_140d3c6e0(&rbx_3[1])
void** const var_d0
TEB* gsbase

if (result != rax_5)
    uint64_t rdx_7 = zx.q(data_14401b1a0)
    var_d8 = &data_143053a50
    
    if (data_143f2c6f0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx_7 << 3))))
        _Init_thread_header(&data_143f2c6f0)
        
        if (data_143f2c6f0 == 0xffffffff)
            int64_t rax_27 = data_143f2c6e8
            
            if (rax_27 == 0)
                rax_27 = sub_141a54240(&data_143f2c6e8, (rax_27 + 2).d)
            
            data_143f2c6e0 = rax_27
            _Init_thread_footer(&data_143f2c6f0)
    
    var_d0 = data_143f2c6e0
    sub_141af59d0(arg4, arg7, &var_d0, &var_d8)
    var_60 = sub_140d3c6e0(&rbx_3[1])
    (*(*arg7 + 0x20))(arg7, rax_5, &var_60)
    sub_140d3a3a0(&rbx_3[1], rax_5)
    result = sub_141a46600(arg6)
else if (rax_5 != 0 || not(zmm0_1 f<= (zx.o(0)).d))
    uint64_t rdx_11 = zx.q(data_14401b1a0)
    var_d0 = &data_143053a50
    
    if (data_143f2c6f0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx_11 << 3))))
        _Init_thread_header(&data_143f2c6f0)
        
        if (data_143f2c6f0 == 0xffffffff)
            int64_t rax_26 = data_143f2c6e8
            
            if (rax_26 == 0)
                rax_26 = sub_141a54240(&data_143f2c6e8, (rax_26 + 2).d)
            
            data_143f2c6e0 = rax_26
            _Init_thread_footer(&data_143f2c6f0)
    
    var_d8 = data_143f2c6e0
    sub_141af59d0(arg4, arg7, &var_d8, &var_d0)
    result = (*(*arg7 + 0x20))(arg7, rax_5, &var_60)
__security_check_cookie(rax_1 ^ &var_f8)
return result
