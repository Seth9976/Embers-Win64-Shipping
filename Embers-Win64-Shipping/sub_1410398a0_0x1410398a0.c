// 函数: sub_1410398a0
// 地址: 0x1410398a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* r13 = arg1
void* rax = *(arg2 + 0xc8)
uint128_t zmm2 = *(rax + 0x98)
int32_t zmm1 = (*(rax + 0xb8)).d
int32_t var_78 = zmm2.d
int64_t rcx = _mm_bsrli_si128(zmm2, 8).q
uint32_t j_3 = (rcx u>> 0x30).d
uint32_t j_2 = j_3
uint64_t i_3 = zx.q((rcx u>> 0x20).w)
int64_t r12 = *(**(r13 + 0x20) + 0x9d8)
void*** result_2 = j_sub_140a82f30(0x218)
void*** result = result_2

if (result_2 == 0)
    result = nullptr
else
    int32_t rax_4 = *(arg2 + 0x30)
    int32_t rcx_2 = *(arg2 + 0x3c)
    int128_t zmm0_1 = *(arg2 + 0x20)
    int32_t rdi_1 = *(arg2 + 0x40)
    *result = &data_142d3ff08
    result[1].d = 0
    *(result + 0xc) = 0
    result[2].w = 0x100
    result[3] = 0
    *(result + 0x3c) = rcx_2
    *(result + 0x20) = zmm0_1
    result[6].d = rax_4
    result[9] = &result[0xa]
    *(result + 0x34) = j_2
    result[7].d = 1
    result[8].d = rdi_1
    result[0xa] = -0x3810000020000000
    result[0xb] = 0
    result[0xc].d = var_78
    *result = &data_142ef5918
    result[0xd].d = 1
    sub_14103fda0(&result[0xe], r12)
    *(result + 0x20c) &= 0xfffffffe
    *result = &data_142f01328
    result[0xe] = &data_142f01380
    result[0x41].d = rdi_1
    result[0x42].b = 0

uint32_t rbx_2
rbx_2.b = (zmm1 u>> 1).b & 1
void*** result_1 = result

if ((zmm1.b & 1) != 0)
    result[0x30].b = 0
    *(result + 0x184) = j_2
    sub_14105aad0(&result[0xe], j_2)
    
    if (i_3.d != 0)
        int32_t r12_1 = 0
        uint64_t i_2 = i_3
        uint64_t i
        
        do
            if (j_2 != 0)
                uint64_t j_1 = zx.q(j_2)
                int32_t rdi_2 = r12_1
                uint64_t j
                
                do
                    if (rdi_2 u< result[0x2f].d)
                        void* rcx_5 = &result[0x2d]
                        void* rax_7 = *(rcx_5 + 8)
                        
                        if (rax_7 != 0)
                            rcx_5 = rax_7
                        
                        int64_t rax_8 = sx.q(rdi_2)
                        void* rbx_3 = *(rcx_5 + (rax_8 << 3))
                        *(rcx_5 + (rax_8 << 3)) = 0
                        
                        if (rbx_3 != 0)
                            int32_t rax_9 = *(rbx_3 + 0x68)
                            *(rbx_3 + 0x68) -= 1
                            
                            if (rax_9 == 1)
                                char rax_10
                                
                                if (*(rbx_3 + 0x70) == 0 && data_143f0f1d0 == 0)
                                    rax_10 = sub_1405949a0()
                                
                                if (*(rbx_3 + 0x70) != 0 || (data_143f0f1d0 == 0 && rax_10 != 0))
                                    (**(rbx_3 + 0x60))(rbx_3 + 0x60, 1)
                                else
                                    bool z_1
                                    
                                    if (0 == *(rbx_3 + 0x6c))
                                        *(rbx_3 + 0x6c) = 1
                                        z_1 = true
                                    else
                                        *(rbx_3 + 0x6c)
                                        z_1 = false
                                    
                                    if (z_1)
                                        sub_1405dcc10(&data_143f02390, rbx_3 + 0x60)
                    
                    rdi_2 += 1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                j_2 = j_3
            
            r12_1 += j_2
            i = i_2
            i_2 -= 1
        while (i != 1)
        r13 = arg1

if (rbx_2.b != 0)
    int32_t i_1 = 0
    int64_t rbp = 0x118
    
    do
        void* rbx_4 = *(result + rbp + 0x70)
        *(result + rbp + 0x70) = 0
        
        if (rbx_4 != 0)
            int32_t rax_13 = *(rbx_4 + 0x68)
            *(rbx_4 + 0x68) -= 1
            
            if (rax_13 == 1)
                char rax_14
                
                if (*(rbx_4 + 0x70) == 0 && data_143f0f1d0 == 0)
                    rax_14 = sub_1405949a0()
                
                if (*(rbx_4 + 0x70) != 0 || (data_143f0f1d0 == 0 && rax_14 != 0))
                    (**(rbx_4 + 0x60))(rbx_4 + 0x60, 1)
                else
                    bool z_2
                    
                    if (0 == *(rbx_4 + 0x6c))
                        *(rbx_4 + 0x6c) = 1
                        z_2 = true
                    else
                        *(rbx_4 + 0x6c)
                        z_2 = false
                    
                    if (z_2)
                        sub_1405dcc10(&data_143f02390, rbx_4 + 0x60)
        
        int32_t rcx_8 = result[0x35].d
        
        if (i_1 + 1 u>= rcx_8)
            rcx_8 = i_1 + 1
        
        result[0x35].d = rcx_8
        i_1 += 1
        rbp += 8
    while (i_1 u< 4)
    
    r13 = arg1

sub_14104e6c0(r13, &result_1, &arg_10)
return result
