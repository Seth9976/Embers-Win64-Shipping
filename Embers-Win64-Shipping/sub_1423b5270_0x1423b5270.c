// 函数: sub_1423b5270
// 地址: 0x1423b5270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* var_a0 = arg1
void*** rax_2 = nullptr
void** const var_a8 = &data_142da2668
void*** var_b8 = nullptr
int64_t (* rcx)(int64_t* arg1, char* arg2) = sub_1423ab550
int64_t (* var_c8)(int64_t* arg1, char* arg2) = sub_1423ab550

if (arg1 + 0x210 != &var_c8)
    int128_t zmm5 = *(arg1 + 0x210)
    int128_t zmm4 = *(arg1 + 0x220)
    arg4 = *(arg1 + 0x230)
    arg3 = *(arg1 + 0x240)
    *(arg1 + 0x210) = var_c8.o
    int128_t zmm0 = var_a8.o
    *(arg1 + 0x220) = var_b8.o
    int128_t var_98
    arg5 = var_98
    int128_t var_88_1 = zmm5
    *(arg1 + 0x230) = zmm0
    var_c8.o = zmm5
    rcx = var_c8
    var_b8.o = zmm4
    rax_2 = var_b8
    *(arg1 + 0x240) = arg5
    int128_t var_78_1 = zmm4
    int128_t var_68_1 = arg4
    int128_t var_58_1 = arg3
    var_a8.o = arg4
    int128_t var_98_1 = arg3

if (rcx != 0)
    void** const* rcx_1 = &var_a8
    
    if (rax_2 != 0)
        rcx_1 = rax_2
    
    (*rcx_1)[2](rcx_1, arg5, arg3, arg4)

int64_t r13 = sx.q(*(arg1 + 8))
int64_t* rcx_3 = *(*arg2 + 0xd0) + 0x18
int64_t* var_d0 = rcx_3
void*** result = sx.q(*(arg2[1] + 0x60))
void*** result_1 = result

if (r13 s< result)
    while (*(arg1 + 0x54) == 0)
        void* rbp_1 = *(*rcx_3 + (r13 << 3))
        *(arg1 + 0x50) += 1
        void* rsi_1 = arg1 + 0x108
        void* rax_7 = *(rsi_1 + 0x70)
        void* r15_1 = arg1 + 0x188
        void* r14_1 = *(r15_1 + 0x70)
        
        if (rax_7 != 0)
            rsi_1 = rax_7
        
        int32_t rdi_1
        rdi_1.b = *(arg1 + 0x208) != 0
        int64_t rax_8
        int128_t zmm1
        rax_8, zmm1 = sub_140bc7f20(rbp_1 + 0x10)
        result = sub_140bc4910(rbp_1 + 0x10, 0, rax_8, rdi_1 + 0x201, zmm1, arg1 + 0x210, 
            *(rsi_1 + (r13 << 3)))
        rcx_3 = var_d0
        
        if (r14_1 != 0)
            r15_1 = r14_1
        
        *(r15_1 + (r13 << 3)) = result
        r13 += 1
        
        if (r13 s>= result_1)
            break

__security_check_cookie(rax_1 ^ &var_108)
return result
