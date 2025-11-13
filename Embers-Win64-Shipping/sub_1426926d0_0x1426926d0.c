// 函数: sub_1426926d0
// 地址: 0x1426926d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x4a8)
int32_t rbx = 0
void* const rsi = arg4
void* const rdi = arg3

if (rax == 0 || *(rax + 8) == 0)
    return 0

if (arg3 == 0)
    rdi = nullptr
else
    void* rax_1 = sub_14269ce80()
    
    if (rax_1 == 0)
        rdi = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdi + 0x38) || *(*(rdi + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rdi = nullptr

int32_t rax_4 = sub_142656a30(arg1, rdi)

if (rsi == 0)
    rsi = nullptr
else
    void* rax_5 = sub_14269ce80()
    
    if (rax_5 == 0)
        rsi = nullptr
    else
        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_6.d s> *(rsi + 0x38) || *(*(rsi + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
            rsi = nullptr

char rax_8 = sub_142656a30(arg1, rsi)
int32_t zmm4 = *(arg1 + 0x414)
void* rax_9 = *(arg1 + 0x4a8)
int128_t zmm1 = *(arg1 + 0x454) ^ data_142d3f780
int32_t var_48 = (*(arg1 + 0x450) ^ data_142d3f780).d
void* r13 = *(rax_9 + 8)
int32_t var_44 = (*(arg1 + 0x458)).d
int128_t zmm0
zmm0.d = (*(arg1 + 0x410)).d f/ zmm4
int32_t var_40 = zmm1.d
uint128_t zmm3
zmm3.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d))).d f* zmm4
int32_t i_1
sub_142670720(&i_1, arg2, &var_48, zmm3)
int32_t var_30
int32_t rdi_1 = var_30
int32_t arg_8 = rdi_1
int32_t var_2c

if (rdi_1 s<= var_2c)
    int32_t var_34
    int32_t rax_11 = var_34
    
    do
        for (int32_t i = i_1; i s<= rax_11; i += 1)
            int32_t rax_12 = sub_142610f80(r13, i, rdi_1)
            int64_t rsi_1 = sx.q(rax_12)
            
            if (rax_12 != 0)
                int64_t r15_1 = 0
                int32_t var_40_1 = rsi_1.d
                var_48.q = 0
                int32_t var_3c_1 = 0
                
                if (rax_12 s> 0)
                    sub_1405a4d70(&var_48)
                    r15_1 = var_48.q
                
                memset(r15_1, 0, rsi_1 << 3)
                int64_t j = 0
                int32_t rax_13 = sub_142611090(r13, i, arg_8, r15_1, rsi_1.d)
                
                if (rax_13 s> 0)
                    do
                        int64_t rax_14 = sub_14260f690(r13, *(r15_1 + (j << 3)))
                        
                        if (rax_14 != 0)
                            void* rax_17 = sub_142610d00(r13, 
                                (rax_14 u>> (*(r13 + 0xa0)).b).d & ((1 << (*(r13 + 0x9c)).b).d - 1))
                            
                            if (rax_17 != 0)
                                void* rax_18 = *(rax_17 + 8)
                                
                                if (rax_18 != 0)
                                    int32_t k_2
                                    
                                    if (arg5 == 0)
                                        k_2 = *(rax_18 + 0x3c)
                                    else
                                        k_2 = *(rax_18 + 0x18)
                                    
                                    if (k_2 s> 0)
                                        char* rdx_14 = *(rax_17 + 0x10) + 0x1f
                                        uint64_t k_1 = zx.q(k_2)
                                        uint64_t k
                                        
                                        do
                                            uint32_t rcx_13 = zx.d(*rdx_14)
                                            
                                            if ((rcx_13 & 0x3f) == rax_4)
                                                *rdx_14 = ((rcx_13.b ^ rax_8) & 0x3f) ^ rcx_13.b
                                                rbx += 1
                                            
                                            rdx_14 = &rdx_14[0x20]
                                            k = k_1
                                            k_1 -= 1
                                        while (k != 1)
                        
                        j += 1
                    while (j s< sx.q(rax_13))
                
                if (r15_1 != 0)
                    sub_140a74f90(r15_1)
                
                rdi_1 = arg_8
            
            rax_11 = var_34
        
        rdi_1 += 1
        arg_8 = rdi_1
    while (rdi_1 s<= var_2c)

return zx.q(rbx)
