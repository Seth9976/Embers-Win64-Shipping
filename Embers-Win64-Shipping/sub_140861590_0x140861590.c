// 函数: sub_140861590
// 地址: 0x140861590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 == 0)
    arg1[2].d = 0
    
    if (*(arg1 + 0x14) != 0)
        sub_1405c5570(&arg1[1], 0)
    
    arg1[4].d = 0
    
    if (*(arg1 + 0x24) != 0)
        sub_1405c5570(&arg1[3], 0)
    
    arg1[7].d = 0

uint64_t result = sub_1405948b0(arg2)
int32_t zmm1 = *(result + 0x520)
int32_t rdx = *(*arg1 + 0x28)
float zmm0

if (rdx != 1)
    if (rdx == 2)
        zmm0 = data_14396ff0c
        goto label_14086162e
    
    if (rdx == 3)
        zmm0 = data_14396ff10
        goto label_14086162e
    
    if (rdx != 4)
        return result
    
    goto label_140861639

zmm0 = data_14396ff08
label_14086162e:
result.b = zmm1 f>= zmm0 f+ arg1[7].d

if (result.b != 0)
label_140861639:
    int32_t rdx_7 = arg1[2].d
    int32_t rbx_1 = 0
    arg1[7].d = zmm1
    void* r8
    
    if (rdx_7 s> 0)
        int64_t rdi_1 = 0
        
        do
            result = arg1[1]
            r8 = *(rdi_1 + result)
            
            if (r8 != 0)
                int32_t rax = *(r8 + 0xc)
                void* const rax_4
                
                if (rax s>= data_143e1d9b4)
                    rax_4 = nullptr
                else
                    uint32_t rdx_4 = zx.d(rax.w)
                    
                    if (rax s< 0)
                        rax += 0xffff
                        rdx_4 -= 0x10000
                    
                    rax_4 = *(data_143e1d9a0 + (sx.q(rax s>> 0x10) << 3)) + sx.q(rdx_4) * 0x18
                
                result = zx.q(*(rax_4 + 8) u>> 0x1d)
            
            if (r8 == 0 || ((result.b & 1) == 0 && *(r8 + 0x408) != 0))
                rbx_1 += 1
                rdi_1 += 8
            else
                int32_t rdx_6 = *(r8 + 0x5b0)
                *(r8 + 0x5b0) = 0xffffffff
                result, r8 = sub_1408614a0(arg1, rdx_6)
            
            rdx_7 = arg1[2].d
        while (rbx_1 s< rdx_7)
    
    int64_t r13
    r13.b = 0
    arg1[6].d = 0
    
    if (rdx_7 s> *(arg1 + 0x34))
        result, r8 = sub_1405dadb0(&arg1[5], rdx_7)
    
    uint64_t r12
    r12.b = 0
    int32_t i = 0
    char arg_8 = 0
    
    if (arg1[2].d s> 0)
        uint64_t rdi_2 = 0
        int128_t zmm6 = zx.o(0)
        char var_70
        int512_t zmm3
        
        do
            result = arg1[1]
            void* r15_1 = *(rdi_2 + result)
            
            if (r15_1 != 0)
                void* r10_1 = *(r15_1 + 0x408)
                r13 = sx.q(arg1[6].d)
                int32_t* rdx_9 = arg1[3] + rdi_2
                int32_t* arg_18 = rdx_9
                void* r12_1 = r10_1 + 0x448
                int32_t rax_6 = (r13 + 1).d
                arg1[6].d = rax_6
                
                if (rax_6 s> *(arg1 + 0x34))
                    sub_1405a4cf0(&arg1[5])
                    rdx_9 = arg_18
                
                *(arg1[5] + (r13 << 2)) = i
                
                if ((*(r12_1 + 0x20) & 2) == 0 || zmm6.d f>= *(r12_1 + 0x28))
                    r13.b = 0
                else
                    r13.b = 1
                
                var_70 = 0
                r8, zmm3, zmm6 = sub_140864010(arg2, r10_1, r12_1, *arg1, r15_1, 0, rdx_9)
                result.b = arg_18[1].b & 1
                r12.b = arg_8 | result.b
                arg_8 = r12.b
            
            i += 1
            rdi_2 += 8
        while (i s< arg1[2].d)
        
        int32_t i_3 = 0
        
        if (r13.b != 0)
            arg_8.q = arg1
            int32_t r9_3
            result, r8, r9_3 = sub_140842110(arg1[5], arg1[6].d, arg_8, &arg_8)
            int32_t i_1 = 0
            
            if (arg1[6].d s> 0)
                int64_t r13_1 = 0
                
                do
                    int64_t rcx_12 = sx.q(*(arg1[5] + r13_1))
                    int64_t rax_9 = arg1[3]
                    zmm3.o = *(rax_9 + (rcx_12 << 3))
                    void* rbx_2 = rax_9 + (rcx_12 << 3)
                    rdi_2 = zx.q(*(rbx_2 + 4))
                    var_70.q = rbx_2
                    void* var_78
                    var_78.d = i_1
                    result = sub_1408699e0(arg2, *arg1, 
                        *(*(arg1[1] + (rcx_12 << 3)) + 0x408) + 0x448, r9_3, var_78)
                    rdi_2.b ^= *(rbx_2 + 4)
                    r13_1 += 4
                    rdi_2.b u>>= 1
                    i_1 += 1
                    rdi_2.b &= 1
                    rdi_2.b |= *(rbx_2 + 4)
                    *(rbx_2 + 4) = rdi_2.b
                    rdi_2.b &= 1
                    r12.b |= rdi_2.b
                while (i_1 s< arg1[6].d)
                
                i_3 = 0
        
        if (r12.b != 0 && arg1[2].d s> 0)
            uint64_t result_1 = 0
            int32_t i_2
            
            do
                rdi_2.b = 0
                int64_t* rcx_15 = *(arg1[1] + (result_1 << 3))
                
                if (rcx_15 != 0)
                    int64_t rdx_14 = arg1[3]
                    char rax_12 = *(rdx_14 + (result_1 << 3) + 4)
                    
                    if ((rax_12 & 1) != 0)
                        rax_12 &= 0xfe
                        *(rdx_14 + (result_1 << 3) + 4) = rax_12
                        
                        if ((rax_12 & 2) == 0)
                            r8.b = 1
                            sub_140749510(rcx_15, 0, r8)
                        else
                            int32_t r8_4 = *(*arg1 + 0x2c)
                            
                            if (r8_4 == 0)
                                sub_140752420(rcx_15, 0)
                                rdi_2.b = 1
                            else if (r8_4 == 1)
                                sub_140752390(rcx_15, 0)
                                rdi_2.b = 1
                            else
                                r8 = zx.q(r8_4 - 2)
                                
                                if (r8_4 == 2)
                                    int64_t rdx_15
                                    rdx_15.b = 1
                                    sub_140752420(rcx_15, rdx_15.b)
                                else if (r8.d == 1)
                                    sub_140752390(rcx_15, r8.b)
                
                char temp3_1 = rdi_2.b
                i_2 = i_3 + 1
                result = result_1 + 1
                
                if (temp3_1 != 0)
                    i_2 = i_3
                
                if (temp3_1 != 0)
                    result = result_1
                
                i_3 = i_2
                result_1 = result
            while (i_2 s< arg1[2].d)

return result
