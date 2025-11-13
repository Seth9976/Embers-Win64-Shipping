// 函数: sub_1424c92c0
// 地址: 0x1424c92c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* result = arg2

if (arg4 != 0)
    int64_t* r14_1 = arg3 + 0x68
    int32_t i
    
    do
        *result = r14_1[-0xd]
        result[1] = r14_1[-0xc]
        *(result + 0x10) = *(r14_1 - 0x58)
        *(result + 0x20) = *(r14_1 - 0x48)
        
        if (&result[6] != &r14_1[-7])
            int64_t rbx_1 = sx.q(r14_1[-6].d)
            int64_t rdi_1 = r14_1[-7]
            int32_t r8 = *(result + 0x3c)
            result[7].d = rbx_1.d
            
            if (rbx_1.d != 0 || r8 != 0)
                sub_140808f70(&result[6], rbx_1.d, r8)
                memcpy(result[6], rdi_1, (rbx_1 * 0x18).d)
            else
                *(result + 0x3c) = 0
        
        result[8] = r14_1[-5]
        result[9] = r14_1[-4]
        result[0xa].b = r14_1[-3].b
        *(result + 0x51) = *(r14_1 - 0x17)
        
        if (&r14_1[-2] != &result[0xb])
            int32_t j_1 = result[0xc].d
            int32_t rbp_1 = r14_1[-1].d
            int64_t* rbx_2 = result[0xb]
            
            if (j_1 != 0)
                int32_t j
                
                do
                    j_sub_140a74f90(*rbx_2)
                    rbx_2 = &rbx_2[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            result[0xc].d = 0
            
            if (*(result + 0x64) != rbp_1)
                sub_140638c50(&result[0xb], rbp_1)
            
            int64_t* rbx_3 = r14_1[-2]
            int64_t r12_2 = 0
            uint64_t r13_2 = sx.q(r14_1[-1].d) << 3 u>> 3
            
            if (rbx_3 u> &rbx_3[r14_1[-1]])
                r13_2 = 0
            
            if (r13_2 != 0)
                do
                    int128_t* rbp_2 = *rbx_3
                    int128_t* rax_10 = j_sub_140a82f30(0x20)
                    int128_t* rsi_1 = rax_10
                    
                    if (rax_10 == 0)
                        rsi_1 = nullptr
                    else
                        *rax_10 = *rbp_2
                        rax_10[1] = rbp_2[1]
                    
                    int64_t rbp_3 = sx.q(result[0xc].d)
                    int32_t rax_11 = (rbp_3 + 1).d
                    result[0xc].d = rax_11
                    
                    if (rax_11 s> *(result + 0x64))
                        sub_140638870(&result[0xb])
                    
                    rbx_3 = &rbx_3[1]
                    r12_2 += 1
                    *(result[0xb] + (rbp_3 << 3)) = rsi_1
                while (r12_2 != r13_2)
        
        sub_14081d8c0(&result[0xd], r14_1)
        result = &result[0xf]
        r14_1 = &r14_1[0xf]
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
