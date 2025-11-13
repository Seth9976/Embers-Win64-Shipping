// 函数: sub_141e0fe70
// 地址: 0x141e0fe70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
void* const r14
int128_t zmm6

if (arg1 == 0)
    r14 = nullptr
else
    void* rsi_1 = arg1[4]
    
    if (rsi_1 != 0)
        void* rax_1 = sub_142591550()
        void* rdx_1 = *(rsi_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* r8_1
            r8_1.b = 1
            zmm6 = sub_141f3e990(arg1[4], 1, r8_1.b)
    
    r14 = arg1[0x48]
    
    if (r14 == 0)
        void* rax_5 = (*(*arg1 + 0x300))(arg1)
        arg1[0x48] = rax_5
        r14 = rax_5

int32_t rdx_2 = arg1[0x10].d
*(r14 + 0x660) = 0

if (rdx_2 s> *(r14 + 0x664))
    sub_1405a5130(r14 + 0x658, rdx_2)

int64_t* rsi_2 = arg1[0xf]
int64_t* result = &rsi_2[arg1[0x10]]
uint64_t r15_1 = sx.q(arg1[0x10].d) << 3 u>> 3

if (rsi_2 u> result)
    r15_1 = 0

if (r15_1 != 0)
    int64_t rbp
    int64_t arg_8 = rbp
    int128_t var_28_1 = zmm6
    int128_t zmm7
    int128_t var_38_1 = zmm7
    int128_t zmm8
    int128_t var_48_1 = zmm8
    
    do
        result = *rsi_2
        void* rdx_3 = *result
        
        if (rdx_3 != 0)
            zmm7 = result[0x29].d
            
            if (not(zmm7.d f<= 9.99999975e-06f))
                zmm8 = result[0x2a].d
                
                if (zmm8.d f!= 0f)
                    rbp.b = 0
                else
                    rbp.b = 1
                
                zmm6 = result[0x25].d
                char rbx_1 = result[5].b
                int128_t var_88
                sub_140d3a3a0(&var_88, rdx_3)
                rbp.b ^= 1
                char var_74_1 = rbx_1
                int64_t rbx_2 = sx.q(*(r14 + 0x660))
                int32_t var_80_1 = zmm7.d
                int32_t var_7c_1 = zmm8.d
                int32_t var_78_1 = zmm6.d
                int32_t rax_7 = (rbx_2 + 1).d
                char var_73_1 = rbp.b
                *(r14 + 0x660) = rax_7
                
                if (rax_7 s> *(r14 + 0x664))
                    sub_1405a4df0(r14 + 0x658)
                
                result = *(r14 + 0x658)
                int64_t rcx_6 = rbx_2 * 3
                *(result + (rcx_6 << 3)) = var_88
                result[rcx_6 + 2] = var_78_1.q
        
        rsi_2 = &rsi_2[1]
        rdi += 1
    while (rdi != r15_1)

return result
