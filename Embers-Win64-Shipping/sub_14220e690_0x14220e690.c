// 函数: sub_14220e690
// 地址: 0x14220e690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_1 = *arg1 + 0xf0
uint64_t var_80 = 0
int32_t var_78 = 0
int32_t rax = sub_142259140(rcx_1, &var_80)
int16_t* rcx_2 = *arg1
int32_t var_f8 = rax
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x33)
int512_t zmm1 = sub_1422119d0(rcx_2, &var_b8)
void arg_18
char rbx = *sub_142230430(sub_140d3c6e0(*arg1 + 0x100), &arg_18, zmm1)
uint32_t result = sub_142216be0(*arg1)
int16_t var_88

if (result != 0)
    bool var_86_1 = ((result - 1) & 0xfffffffd) == 0
    
    if (data_143a2f080 != 0)
        result -= 2
        
        if (result u<= 1)
            result = zx.d(var_88:1.b)
            var_88.b = 1
            
            if (rbx == 3)
                result = 1
            
            var_88:1.b = result.b

char arg_8 = 0
uint32_t result_1 = 0

if (var_78 s> 0)
    result = 0
    
    do
        void* rdi_2 = *arg1
        int64_t r14_1 = var_80 + (sx.q(result) << 3)
        int16_t* rax_4 = sub_142217ac0(rdi_2, r14_1)
        int64_t var_f0
        __builtin_memset(&var_f0, 0, 0x33)
        int16_t var_c0_1
        
        if (rax_4 == rdi_2)
            var_c0_1.d = var_88.d
            var_f0.o = var_b8.o
            int64_t var_e0_1
            int64_t var_a8
            var_e0_1.o = var_a8.o
            int64_t var_d0_1
            int64_t var_98
            var_d0_1.o = var_98.o
        else
            int512_t zmm1_1 = sub_1422119d0(rax_4, &var_f0)
            void* rdi_1
            
            if (sub_140d3e110(&rax_4[0x80]) == 0)
                rdi_1.b = 0
            else
                rdi_1.b = *sub_142230430(sub_140d3c6e0(&rax_4[0x80]), &arg_18, zmm1_1) == 3
            
            int32_t rax_8 = sub_142216be0(rax_4)
            
            if (rax_8 != 0)
                bool var_be_1 = ((rax_8 - 1) & 0xfffffffd) == 0
                
                if (data_143a2f080 != 0 && rax_8 - 2 u<= 1)
                    char rax_10 = var_c0_1:1.b
                    var_c0_1.b = 1
                    
                    if (rdi_1.b != 0)
                        rax_10 = 1
                    
                    var_c0_1:1.b = rax_10
            
            rdi_2 = *arg1
        int64_t rdx
        int64_t var_50_1 = rdx
        uint32_t* var_60 = &result_1
        int32_t* var_58_1 = &var_f8
        int64_t* var_48_1 = &var_f0
        char* var_40_1 = &arg_8
        uint32_t** var_68_1 = &var_60
        int64_t (* var_70)(int64_t* arg1, int64_t* arg2) = j_sub_14220c8b0
        sub_14226a000(rdi_2, r14_1, &var_70)
        result = result_1 + 1
        result_1 = result
    while (result s< var_78)
    
    if (arg_8 != 0)
        result = sub_1422273b0(*arg1)

uint64_t rcx_18 = var_80

if (rcx_18 == 0)
    return result

return sub_140a74f90(rcx_18)
