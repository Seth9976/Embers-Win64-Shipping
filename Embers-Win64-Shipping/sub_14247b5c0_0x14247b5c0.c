// 函数: sub_14247b5c0
// 地址: 0x14247b5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg4
int32_t i_1 = arg4
int64_t* result = arg2

if (arg4 != 0)
    int32_t* r14_1 = arg3 + 0x40
    int32_t i
    
    do
        int64_t* result_1 = result
        
        if (result_1 != &r14_1[-0x10])
            int64_t rbx_1 = sx.q(r14_1[-0xe])
            int64_t rdi_1 = *(r14_1 - 0x40)
            int32_t r8 = *(result_1 + 0xc)
            result_1[1].d = rbx_1.d
            
            if (rbx_1.d != 0 || r8 != 0)
                sub_140808f70(result_1, rbx_1.d, r8)
                memcpy(*result_1, rdi_1, (rbx_1 * 0x18).d)
            else
                *(result_1 + 0xc) = 0
        
        result_1[2] = *(r14_1 - 0x30)
        result_1[3] = *(r14_1 - 0x28)
        result_1[4].b = r14_1[-8].b
        *(result_1 + 0x21) = *(r14_1 - 0x1f)
        
        if (&r14_1[-6] != &result_1[5])
            int32_t j_1 = result_1[6].d
            int32_t rbp_1 = r14_1[-4]
            int64_t* rbx_2 = result_1[5]
            
            if (j_1 != 0)
                int32_t j
                
                do
                    j_sub_140a74f90(*rbx_2)
                    rbx_2 = &rbx_2[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            result_1[6].d = 0
            
            if (*(result_1 + 0x34) != rbp_1)
                sub_140638c50(&result_1[5], rbp_1)
            
            int64_t* rbx_3 = *(r14_1 - 0x18)
            int64_t r12_2 = 0
            uint64_t r13_2 = sx.q(r14_1[-4]) << 3 u>> 3
            
            if (rbx_3 u> &rbx_3[sx.q(r14_1[-4])])
                r13_2 = 0
            
            if (r13_2 != 0)
                do
                    int128_t* rbp_2 = *rbx_3
                    int128_t* rax_8 = j_sub_140a82f30(0x20)
                    int128_t* rsi = rax_8
                    
                    if (rax_8 == 0)
                        rsi = nullptr
                    else
                        *rax_8 = *rbp_2
                        rax_8[1] = rbp_2[1]
                    
                    int64_t rbp_3 = sx.q(result_1[6].d)
                    int32_t rax_9 = (rbp_3 + 1).d
                    result_1[6].d = rax_9
                    
                    if (rax_9 s> *(result_1 + 0x34))
                        sub_140638870(&result_1[5])
                    
                    rbx_3 = &rbx_3[1]
                    r12_2 += 1
                    *(result_1[5] + (rbp_3 << 3)) = rsi
                while (r12_2 != r13_2)
                
                result_1 = result
            
            i_1 = i_2
        
        if (&result_1[7] != &r14_1[-2])
            uint32_t count = *r14_1
            int64_t rdi_3 = *(r14_1 - 8)
            int32_t r8_3 = *(result_1 + 0x44)
            result_1[8].d = count
            
            if (count != 0 || r8_3 != 0)
                sub_1405da9e0(&result_1[7], count, r8_3)
                memcpy(result_1[7], rdi_3, count)
            else
                *(result_1 + 0x44) = 0
        
        result = &result[9]
        r14_1 = &r14_1[0x12]
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)

result.b = 1
return result
