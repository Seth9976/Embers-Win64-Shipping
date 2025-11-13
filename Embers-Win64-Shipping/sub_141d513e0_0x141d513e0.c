// 函数: sub_141d513e0
// 地址: 0x141d513e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)

if (rcx != 0)
    (*(*rcx + 0x90))(rcx)

int64_t rbx = 0
uint64_t rdi
uint64_t arg_10 = rdi
int64_t* result
void* rdx_1

while (true)
    result = *(arg1 + 0x158)
    rdx_1 = *result
    
    if (rdx_1 == 0)
        break
    
    rdi = zx.q(*(rdx_1 + 8))
    int64_t rcx_1 = *(arg1 + 0x158)
    *(arg1 + 0x158) = rdx_1
    *(rdx_1 + 8) = 0
    j_sub_140a74f90(rcx_1)
    arg2, arg3 = sub_141d4f960(arg1, rdi.d)

int64_t* rcx_3 = *(arg1 + 0x130)

if (rcx_3 != 0)
    int128_t var_38_1 = arg3
    int64_t* rax_3 = (*(*rcx_3 + 0x10))(rcx_3, rdx_1)
    int64_t rdx_4 = *rax_3
    (*(rdx_4 + 0x10))(rax_3, rdx_4)
    arg3 = arg2
    
    if (arg2.d f!= 0f)
        *(arg1 + 0x108) = arg2.d
    else
        arg3 = *(arg1 + 0x108)
    
    int64_t* rcx_5 = *(arg1 + 0x130)
    int64_t arg_8
    int64_t* rcx_6
    
    if (rcx_5 != 0)
        int64_t* rax_5 = (*(*rcx_5 + 0x10))(rcx_5)
        int64_t r8_1 = *rax_5
        int64_t rcx_8 = *(*(r8_1 + 0x30))(rax_5, &arg_8, r8_1)
        
        if (rcx_8 - *(arg1 + 0x30) s>= 0)
            rbx = rcx_8 - *(arg1 + 0x30)
        
        rcx_6 = *(arg1 + 0x130)
    else
        rcx_6 = nullptr
    
    arg3.d f- 0f
    int128_t zmm8
    
    if (not(arg3.d f<= 0f))
        int64_t var_130_1 = rbx
        zmm8 = 1.o
        arg3 = 2.o
    else if (arg3.d f>= 0f)
        int64_t var_110_1 = rbx
        arg3 = 1.o
        int64_t var_100_1 = rbx
        zmm8 = 1.o
    else
        zmm8 = 2.o
        int64_t var_120_1 = rbx
        arg3 = 1.o
    
    int64_t* rax_8 = (*(*rcx_6 + 0x28))()
    rdi.b = 0
    int64_t rbx_1 = arg_8
    int512_t zmm6
    
    while (true)
        int128_t var_c8 = arg3
        int128_t var_b8_1 = zmm8
        sub_141d4f6e0(arg1, rax_8, &var_c8)
        int128_t var_a8 = arg3
        int128_t var_98_1 = zmm8
        sub_141d50050(arg1, rax_8, &var_a8)
        int128_t var_88 = arg3
        int128_t var_78_1 = zmm8
        int32_t zmm0
        result, zmm0, zmm6 = sub_141d502d0(arg1, rax_8, &var_88)
        
        if (*(arg1 + 0xc0) == -0x8000000000000000)
            break
        
        int64_t* rcx_13 = *(arg1 + 0x130)
        int64_t* rax_10 = (*(*rcx_13 + 0x10))(rcx_13)
        int64_t r8_5 = *rax_10
        result = (*r8_5)(rax_10, 0, r8_5)
        
        if (result.b == 0)
            break
        
        int64_t* rcx_15 = *(arg1 + 0x130)
        
        if (rcx_15 != 0)
            int64_t* rax_12 = (*(*rcx_15 + 0x10))(rcx_15)
            int64_t rdx_9 = *rax_12
            result = (*(rdx_9 + 0x18))(rax_12, rdx_9)
        
        if (rcx_15 == 0 || result.d != 4)
            int64_t* rcx_17 = *(arg1 + 0x130)
            
            if (rcx_17 == 0)
                break
            
            int64_t* rax_14 = (*(*rcx_17 + 0x10))(rcx_17)
            int64_t rdx_10 = *rax_14
            result = (*(rdx_10 + 0x18))(rax_14, rdx_10)
            
            if (result.d != 3)
                break
            
            int64_t* rcx_19 = *(arg1 + 0x130)
            
            if (rcx_19 != 0)
                int64_t* rax_16 = (*(*rcx_19 + 0x10))(rcx_19)
                int64_t rdx_11 = *rax_16
                result = (*(rdx_11 + 0x10))(rax_16, rdx_11)
                
                if (zmm0 f< 0f)
                    break
            
            if (*(arg1 + 0xb8) == 0)
                break
            
            result = *(arg1 + 0x128)
            
            if (*(arg1 + 0xc0) s< result)
                break
        
        if (rdi.b == 0)
            rdi.b = 1
            void var_f8
            rbx_1 = *sub_140b29d90(&var_f8)
        else
            result = int.q(0x4187d78400000000)
            void arg_20
            
            if (*sub_140b29d90(&arg_20) - rbx_1 s>= result)
                break
        
        arg3 = sub_140b73230(zx.o(0))
    
    zmm6.o = var_38_1

return result
