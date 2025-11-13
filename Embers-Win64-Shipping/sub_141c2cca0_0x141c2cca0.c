// 函数: sub_141c2cca0
// 地址: 0x141c2cca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rsi = nullptr
char arg_1d = *arg3
int32_t rax_1 = *(arg3 + 4)
char arg_1c = 1
int32_t rcx = 0

if (rax_1 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rax_1)
    rcx = temp0_1 + 1

int32_t arg_18 = rcx
arg_18.q = arg_18.q
int64_t* var_68
sub_141c39e90(&var_68, &arg_18, &data_143f34940)
int64_t* r14 = var_68
int64_t* rdi = r14
int32_t var_60
void* r15 = &r14[sx.q(var_60)]

if (r14 != r15)
    do
        int64_t* rcx_3 = *rdi
        int64_t arg_20
        (*(*rcx_3 + 0x28))(rcx_3, &arg_20, &arg_18)
        int64_t rbx_1 = arg_20
        
        if (rbx_1 != 0)
            arg_20 = 0
            
            if (r14 != 0)
                sub_140a74f90(r14)
            
            if (rbx_1 == 0)
                goto label_141c2cd40
            
            void*** rax_6 = j_sub_140a82f30(0x18)
            
            if (rax_6 == 0)
                rax_6 = nullptr
            else
                rax_6[1].d = 1
                *rax_6 = &data_142d42ea8
                *(rax_6 + 0xc) = 1
                rax_6[2] = rbx_1
            
            var_68.d = *(arg3 + 8)
            var_68:4.d = *(arg3 + 0xc)
            int32_t var_60_1 = *(arg3 + 0x10)
            int32_t var_5c_1 = *(arg3 + 0x14)
            void*** rax_11 = j_sub_140a82f30(0xd8)
            
            if (rax_11 != 0)
                uint128_t zmm0_1 = rbx_1.o
                uint128_t var_48 = zmm0_1
                void* rcx_6 = _mm_bsrli_si128(zmm0_1, 8).q
                
                if (rcx_6 != 0)
                    *(rcx_6 + 8) += 1
                
                rsi = sub_141c31090(rax_11, &var_68, &var_48)
            
            *arg2 = rsi
            
            if (rax_6 != 0)
                rax_6[1].d -= 1
                
                if (rax_6[1].d == 1)
                    (**rax_6)(rax_6)
                    int32_t temp1_1 = *(rax_6 + 0xc)
                    *(rax_6 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*rax_6)[1](rax_6, 1)
            
            goto label_141c2cd5e
        
        rdi = &rdi[1]
    while (rdi != r15)

if (r14 != 0)
    sub_140a74f90(r14)

label_141c2cd40:
*arg2 = nullptr
label_141c2cd5e:
return arg2
