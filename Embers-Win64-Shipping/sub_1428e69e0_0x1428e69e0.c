// 函数: sub_1428e69e0
// 地址: 0x1428e69e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t result_1 = 1
int32_t* r13 = arg2
int32_t rax_1 = sub_142898c70(arg2) - 1
*arg1 = 0
int32_t i = 0
int32_t r14 = 0
int32_t rbp = 0

if (not(test_bit(arg3, 8)))
    i = rax_1 + 1

if (not(test_bit(arg3, 9)))
    r14 = rax_1 + 1

if (not(test_bit(arg3, 0xa)))
    rbp = rax_1 + 1

if (rax_1 == 0)
    return 2

int32_t r12 = rax_1 - 1
int32_t r15_1 = r12

if (r12 s>= 0)
    int32_t temp0_1
    
    do
        int64_t* rax_3 = sub_142898ea0(r13, r15_1)
        sub_1428ae8e0(rax_3, 0xffffffff, 0)
        
        if (sub_1428f28b0(rax_3) == 0)
            return 0
        
        temp0_1 = r15_1
        r15_1 -= 1
    while (temp0_1 - 1 s>= 0)

int32_t rbx_2 = r12

if (r12 s>= 0)
    while (i s> 0 || (result_1.b & 2) == 0)
        int64_t* rax_5 = sub_142898ea0(r13, rbx_2)
        int32_t rax_6 = sub_1428aea30(rax_5)
        
        if (test_bit(rax_6, 0xb))
            return -1
        
        void* rax_7 = sub_1428f28b0(rax_5)
        
        if ((result_1.b & 1) != 0 && *(rax_7 + 8) == 0)
            result_1 = 2
        
        if (i s> 0)
            int32_t i_1 = i - 1
            
            if ((rax_6.b & 0x20) != 0)
                i_1 = i
            
            i = i_1
            int32_t i_2 = *(rax_7 + 0x14)
            
            if (i_2 s>= 0 && i_2 s< i_1)
                i = i_2
        
        int32_t temp1_1 = rbx_2
        rbx_2 -= 1
        r13 = arg2
        
        if (temp1_1 - 1 s< 0)
            break

int32_t result = result_1 | 4

if (i != 0)
    result = result_1

if ((result.b & 1) == 0)
    return result

int64_t* rax_9 = sub_1428a6a70(0x30)
int64_t* r13_2 = rax_9

if (rax_9 != 0)
    int64_t rbx_3 = sx.q(rax_1 + 1)
    void* rax_10 = sub_1428a6a70(rbx_3 << 5)
    *r13_2 = rax_10
    
    if (rax_10 != 0)
        r13_2[1].d = rbx_3.d
        int64_t* rax_12 = sub_14292b530(nullptr, sub_1428a9570(0x2ea), 0)
        
        if (rax_12 != 0)
            if (sub_14292b660(rax_10, rax_12, nullptr, r13_2) != 0)
                if (r12 s>= 0)
                    void* rdi_1 = rax_10 + 0x18
                    int32_t temp2_1
                    
                    do
                        int64_t* rax_14 = sub_142898ea0(arg2, r12)
                        int32_t rax_15 = sub_1428aea30(rax_14)
                        int64_t* rax_16 = sub_1428f28b0(rax_14)
                        sub_1428a3ba0(rax_14)
                        rdi_1 += 0x20
                        *(rdi_1 - 0x18) = rax_14
                        
                        if (*rax_16 == 0)
                            *rdi_1 |= 0x200
                        
                        int32_t rsi_1 = rax_15 & 0x20
                        
                        if (r14 != 0)
                            int32_t rax_17 = r14 - 1
                            
                            if (rsi_1 != 0)
                                rax_17 = r14
                            
                            r14 = rax_17
                            int32_t rax_18 = rax_16[2].d
                            
                            if (rax_18 s>= 0 && rax_18 s< rax_17)
                                r14 = rax_18
                        else if (rsi_1 == 0 || r12 == 0)
                            *rdi_1 |= 0x200
                        
                        if (rbp != 0)
                            int32_t rax_19 = rbp - 1
                            
                            if (rsi_1 != 0)
                                rax_19 = rbp
                            
                            rbp = rax_19
                            int32_t rax_20 = rax_16[3].d
                            
                            if (rax_20 s>= 0 && rax_20 s< rax_19)
                                rbp = rax_20
                        else
                            *rdi_1 |= 0x400
                        
                        temp2_1 = r12
                        r12 -= 1
                    while (temp2_1 - 1 s>= 0)
                    r13_2 = rax_9
                
                *arg1 = r13_2
                return result
            
            sub_14292b4d0(rax_12)
        
        sub_1428e6540(r13_2)
    else
        sub_1428a6780(r13_2)
        sub_1428a5670(0x22, 0xac, 0x41, "crypto\x509v3\pcy_tree.c", 0xb4)
else
    sub_1428a5670(0x22, 0xac, 0x41, "crypto\x509v3\pcy_tree.c", 0xa7)

return 0
