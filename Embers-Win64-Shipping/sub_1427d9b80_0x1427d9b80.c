// 函数: sub_1427d9b80
// 地址: 0x1427d9b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t** rbx = arg1
int64_t* rdi = arg4
sub_1427e5d10(arg1, *arg3)
int32_t* result = rbx[0xb]
int32_t arg_8
int32_t* result_1 = &arg_8
int64_t i = *rdi
arg_8 = 0x1b5

if (result != 0)
    result_1 = result

if (i != 0)
    int128_t zmm6
    int128_t var_38_1 = zmm6
    int128_t zmm7
    int128_t var_48_1 = zmm7
    int128_t zmm8
    int128_t var_58_1 = zmm8
    int128_t zmm9
    int128_t var_68_1 = zmm9
    int128_t zmm10
    int128_t var_78_1 = zmm10
    int128_t zmm11
    int128_t var_88_1 = zmm11
    
    do
        sub_1427e4f10(rbx)
        int32_t* r8 = *rbx
        char rax = rbx[9].b
        int64_t i_1 = i
        uint64_t rcx_1 = zx.q(r8[4])
        char var_b8_1 = 0
        
        if ((r8[5] & 0x7fffffff) u> rcx_1.d)
            result = *(r8 + 8)
            void* rdx_2 = &result[rcx_1 * 6]
            
            if (rdx_2 != 0)
                *rdx_2 = i_1.o
                *(rdx_2 + 0x10) = rax.q
            
            r8[4] += 1
        else
            result = sub_1427e5380(r8, &i_1)
        
        int32_t rsi = rdi[1].d
        char* var_c8 = nullptr
        
        if (rbx[9].b != 0)
            int32_t* rdx_3 = *rbx
            char const* const rdx_4
            
            if (rdx_3[4] == 0)
                rdx_4 = "bad__repx__name"
            else
                rdx_4 = *(*(rdx_3 + 8) + zx.q(rdx_3[4] - 1) * 0x18)
            
            int64_t* rcx_5 = rbx[5]
            result = (*(*rcx_5 + 0x10))(rcx_5, rdx_4, &var_c8)
            
            if (result.b != 0)
                char* rcx_6 = var_c8
                
                if (rcx_6 != 0 && *rcx_6 != 0)
                    void* arg_20 = rcx_6
                    int128_t zmm0_2 = sub_1427e6ee0(rcx_6, &arg_20)
                    int128_t zmm0_3 = sub_1427e6ee0(arg_20, &arg_20)
                    int128_t zmm0_4 = sub_1427e6ee0(arg_20, &arg_20)
                    int128_t zmm0_5 = sub_1427e6ee0(arg_20, &arg_20)
                    int128_t zmm0_6 = sub_1427e6ee0(arg_20, &arg_20)
                    int128_t zmm0_7 = sub_1427e6ee0(arg_20, &arg_20)
                    int128_t zmm0_1 = sub_1427e6ee0(arg_20, &arg_20)
                    int64_t rcx_13 = rbx[6]
                    int32_t var_a8 = zmm0_2.d
                    int32_t var_a4_1 = zmm0_3.d
                    int32_t var_a0_1 = zmm0_4.d
                    int32_t var_9c_1 = zmm0_5.d
                    int32_t var_98_1 = zmm0_6.d
                    int32_t var_94_1 = zmm0_7.d
                    int32_t var_90_1 = zmm0_1.d
                    result = arg3[2](rcx_13, zx.q(rsi), &var_a8)
        
        int32_t* rdx_13 = *rbx
        
        if (rdx_13[4] != 0)
            if (*(*(rdx_13 + 8) + zx.q(rdx_13[4] - 1) * 0x18 + 8) != 0
                    && *(*(rdx_13 + 8) + zx.q(rdx_13[4] - 1) * 0x18 + 0x10) != 0)
                int64_t* rcx_16 = rbx[5]
                (*(*rcx_16 + 0x48))(rcx_16)
            
            result = *rbx
            result[4] -= 1
        
        int32_t* rdx_14 = *rbx
        rbx[9].b = 1
        
        if (rdx_14[4] != 0)
            result = *(rdx_14 + 8)
            char rdx_15 = rbx[9].b
            
            if (result[zx.q(rdx_14[4] - 1) * 6 + 4].b == 0)
                rdx_15 = 0
            
            rbx[9].b = rdx_15
        
        *result_1 += 1
        rdi = &rdi[2]
        i = *rdi
    while (i != 0)

int32_t* rdx_16 = *rbx

if (rdx_16[4] != 0)
    if (*(*(rdx_16 + 8) + zx.q(rdx_16[4] - 1) * 0x18 + 8) != 0
            && *(*(rdx_16 + 8) + zx.q(rdx_16[4] - 1) * 0x18 + 0x10) != 0)
        int64_t* rcx_20 = rbx[5]
        (*(*rcx_20 + 0x48))(rcx_20)
    
    result = *rbx
    result[4] -= 1

int32_t* rdx_17 = *rbx
rbx[9].b = 1

if (rdx_17[4] != 0)
    result = *(rdx_17 + 8)
    char rdx_18 = rbx[9].b
    
    if (result[zx.q(rdx_17[4] - 1) * 6 + 4].b == 0)
        rdx_18 = 0
    
    rbx[9].b = rdx_18

return result
