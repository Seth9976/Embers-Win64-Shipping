// 函数: sub_141479710
// 地址: 0x141479710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* i = *(arg1 + 0x618)
int64_t result = sx.q(*(arg1 + 0x620))

for (; i != &i[result]; i = &i[1])
    if (*i == arg2)
        goto label_141479d9d

if (*(arg1 + 0x530) != 0)
    result = *(arg2 + 8)

if (*(arg1 + 0x530) == 0 || (*(result + 0x3a) & 0x20) != 0)
    int64_t result_2 = *(arg2 + 8)
    int32_t rcx = 1
    char r12_1 = 0
    int32_t result_3 = 0
    char rax_2 = (*(arg1 + 0x570)).b
    int32_t result_4 = 0
    int64_t* var_60_1 = nullptr
    int32_t var_54_1 = 1
    int64_t var_68
    
    if ((rax_2 & 0x40) == 0 || *(arg1 + 0x534) s< 0 || (rax_2 & 0x10) == 0)
        int32_t rdi_1 = 0
        
        if (*(arg3 + 8) s> 0)
            while (true)
                int64_t rsi_2 = sx.q(rdi_1) * 0x5240 + *arg3
                result_4 = result_3 + 1
                
                if (result_3 + 1 s> rcx)
                    sub_140915c70(&var_68, result_3)
                
                int64_t* rcx_2 = &var_68
                
                if (var_60_1 != 0)
                    rcx_2 = var_60_1
                
                rdi_1 += 1
                rcx_2[sx.q(result_3)] = rsi_2
                result_3 = result_4
                
                if (rdi_1 s>= *(arg3 + 8))
                    break
                
                rcx = var_54_1
    else
        result_3 = 1
        result_4 = 1
        var_68 = *(arg1 + 0x48)
    
    int64_t rdi_2 = sx.q(*(arg2 + 0x110))
    char r11 = 0
    i.b = 0
    result = sx.q(result_3)
    char r10 = 0
    char var_96_1 = 0
    char i_1 = 0
    int32_t r8_1 = rol.d(1, rdi_2.b)
    char var_97_1 = 0
    int64_t result_1 = result
    int32_t var_94_1 = r8_1
    
    if (result_3 s> 0)
        int64_t rsi_3 = 0
        int64_t r13_2 = rdi_2 * 2
        int128_t zmm6 = 0x3f800000
        int128_t zmm0
        int128_t zmm1
        int128_t zmm2
        
        do
            int64_t* rax_7 = &var_68
            
            if (var_60_1 != 0)
                rax_7 = var_60_1
            
            int64_t* rbx_1 = rax_7[rsi_3]
            int64_t rbp_1 = rbx_1[0x2cb]
            int32_t rcx_4 = *(rbp_1 + (r13_2 << 3) + 8)
            
            if (test_bit(rcx_4, 0xf))
                goto label_141479aaf
            
            if (zmm6.d f<= *(rbx_1 + 0x2bc))
                goto label_141479957
            
            zmm2.d = (*(result_2 + 0xc0)).d f- *(rbx_1 + 0xa3c)
            zmm1.d = (*(result_2 + 0xc4)).d f- rbx_1[0x148].d
            zmm0.d = (*(result_2 + 0xc8)).d f- *(rbx_1 + 0xa44)
            zmm2.d = zmm2.d f* zmm2.d
            zmm1.d = zmm1.d f* zmm1.d
            zmm0.d = zmm0.d f* zmm0.d
            zmm1.d = zmm1.d f+ zmm2.d
            zmm1.d = zmm1.d f+ zmm0.d
            result, zmm6 =
                sub_141458f90(rbx_1, zmm1, *(result_2 + 0x138), *(result_2 + 0x134), arg2)
            
            if (result.b == 0)
                r8_1 = var_94_1
            label_141479957:
                void* rcx_6 = rbx_1[0x2b5]
                void* rcx_7
                
                if (rcx_6 != 0 && rdi_2.d s>= 0 && rdi_2.d s< *(rcx_6 + 0x3b0))
                    rcx_7 = rcx_6 + 0x398
                    void* rax_8 = *(rcx_7 + 0x10)
                    
                    if (rax_8 != 0)
                        rcx_7 = rax_8
                    
                    int32_t rax_9 = rdi_2.d
                    
                    if (rdi_2.d s< 0)
                        rax_9 = (rdi_2 + 0x1f).d
                    
                    result = sx.q(rax_9 s>> 5)
                
                if (rcx_6 == 0 || rdi_2.d s< 0 || rdi_2.d s>= *(rcx_6 + 0x3b0)
                        || (*(rcx_7 + (result << 2)) & r8_1) == 0)
                    if (rbx_1[0x17c].b == 0)
                    label_141479a1d:
                        int64_t* r10_1 = *(arg2 + 8)
                        
                        if (rbx_1[0x169].d == *(rbx_1 + 0xb74))
                        label_141479a8f:
                            i = zx.q(i_1)
                            r10 = var_97_1
                            r11 = var_96_1
                            void var_78
                            *(rbp_1 + (r13_2 << 3)) = *(*(*r10_1 + 0x70))(r10_1, &var_78, rbx_1)
                            rcx_4 = *(rbp_1 + (r13_2 << 3) + 8)
                        label_141479aaf:
                            char rdx_12 = *(rbp_1 + (r13_2 << 3) + 2)
                            rax_7.b = (rdx_12 & 3) != 0
                            r12_1 |= rax_7.b
                            
                            if ((rdx_12 & 0x70) == 0 || (rdx_12 & 2) != 0)
                                rax_7.b = 0
                            else
                                rax_7.b = 1
                            
                            result.b = (rcx_4 u>> 3).b & 1
                            i.b |= result.b
                            var_96_1 = r11 | rax_7.b
                            i_1 = i.b
                            var_97_1 = r10 | ((rcx_4 u>> 0xe).b & 1)
                        else
                            void* r9_2 = &rbx_1[0x16f]
                            void* r8_4 = *(r9_2 + 8)
                            int64_t rcx_9 = sx.q(*(r10_1 + 0x104))
                            
                            if (r8_4 != 0)
                                r9_2 = r8_4
                            
                            result = zx.q(*(r9_2 + (((sx.q(rbx_1[0x171].d) - 1) & rcx_9) << 2)))
                            
                            if (result.d == 0xffffffff)
                                goto label_141479a8f
                            
                            int64_t r9_3 = rbx_1[0x168]
                            
                            while (true)
                                int64_t r8_5 = sx.q(result.d) * 3
                                
                                if (*(r9_3 + (r8_5 << 2)) == rcx_9.d)
                                    break
                                
                                result = zx.q(*(r9_3 + (r8_5 << 2) + 4))
                                
                                if (result.d == 0xffffffff)
                                    goto label_141479a8f
                            
                            if (result.d == 0xffffffff)
                                goto label_141479a8f
                    else
                        result = zx.q(rbx_1[0x173].d)
                        
                        if (result.d != *(rbx_1 + 0xbc4))
                            void* r9 = &rbx_1[0x179]
                            void* r8_2 = *(r9 + 8)
                            int64_t rcx_8 = sx.q(*(*(arg2 + 8) + 0x104))
                            
                            if (r8_2 != 0)
                                r9 = r8_2
                            
                            result = zx.q(*(r9 + (((sx.q(rbx_1[0x17b].d) - 1) & rcx_8) << 2)))
                            
                            if (result.d != 0xffffffff)
                                int64_t r9_1 = rbx_1[0x172]
                                
                                while (true)
                                    int64_t r8_3 = sx.q(result.d) * 3
                                    
                                    if (*(r9_1 + (r8_3 << 2)) == rcx_8.d)
                                        break
                                    
                                    result = zx.q(*(r9_1 + (r8_3 << 2) + 4))
                                    
                                    if (result.d == 0xffffffff)
                                        goto label_141479af3
                                
                                if (result.d != 0xffffffff)
                                    goto label_141479a1d
            
        label_141479af3:
            r8_1 = var_94_1
            rsi_3 += 1
            i = zx.q(i_1)
            r10 = var_97_1
            r11 = var_96_1
        while (rsi_3 s< result_1)
        
        char i_2 = i.b
        int64_t r12_2 = 0
        
        if (i_2 != 0)
            int64_t* rax_15 = &var_68
            
            if (var_60_1 != 0)
                rax_15 = var_60_1
            
            sub_1413adb90(arg2, (*(**rax_15 + 0x30)).d, 0)
            
            if ((*(arg2 + 0x120) & 2) != 0)
                sub_1413ae430(arg2)
            
            result = sub_1413a07e0(arg2)
            
            if (result.b != 0)
                result = sub_1413938e0(arg2)
        
        if (r12_1 != 0 && i_2 != 0)
            i_2 = 0
            
            if (*(arg2 + 0x50) s<= 0)
            label_141479cc2:
                int64_t rsi_4 = sx.q(*(arg1 + 0x610))
                int32_t rax_22 = (rsi_4 + 1).d
                *(arg1 + 0x610) = rax_22
                
                if (rax_22 s> *(arg1 + 0x614))
                    sub_14083a310(arg1 + 0x608, rsi_4.d)
                
                result = *(arg1 + 0x608)
                *(result + (rsi_4 << 3)) = arg2
            else
                int64_t result_5 = sx.q(result_4)
                
                if (result_5 s<= 0)
                    goto label_141479cc2
                
                int128_t zmm4 = data_1439b6df0
                
                do
                    int64_t* rax_17 = &var_68
                    
                    if (var_60_1 != 0)
                        rax_17 = var_60_1
                    
                    int64_t* rdx_16 = rax_17[r12_2]
                    result = result_2
                    zmm0.d = (*(result + 0xc0)).d f- *(rdx_16 + 0xa3c)
                    zmm2.d = (*(result + 0xc4)).d f- rdx_16[0x148].d
                    int128_t zmm3
                    zmm3.d = (*(result + 0xc8)).d f- *(rdx_16 + 0xa44)
                    
                    if ((*(arg1 + 0x570) & 0x40) != 0)
                        zmm1 = *(result + 0xd8)
                        zmm2.d = zmm2.d f* zmm2.d
                        zmm0.d = zmm0.d f* zmm0.d
                        zmm3.d = zmm3.d f* zmm3.d
                        zmm2.d = zmm2.d f+ zmm0.d
                        zmm1.d = zmm1.d f* zmm1.d
                        zmm0.d = zmm4.d f* zmm4.d
                        zmm2.d = zmm2.d f+ zmm3.d
                        zmm2.d = zmm2.d f* zmm0.d
                        zmm2.d = zmm2.d f* rdx_16[0x1ac].d
                    
                    if ((*(arg1 + 0x570) & 0x40) == 0 || not(zmm1.d f<= zmm2.d))
                        void* rcx_17 = &rdx_16[0x2b7]
                        void* rax_18 = *(rcx_17 + 0x10)
                        
                        if (rax_18 != 0)
                            rcx_17 = rax_18
                        
                        int32_t rax_19 = rdi_2.d
                        
                        if (rdi_2.d s< 0)
                            rax_19 = (rdi_2 + 0x1f).d
                        
                        if ((*(rcx_17 + (sx.q(rax_19 s>> 5) << 2)) & var_94_1) != 0)
                            result = rdx_16[0x2cb]
                        
                        if ((*(rcx_17 + (sx.q(rax_19 s>> 5) << 2)) & var_94_1) == 0
                                || (*(result + (r13_2 << 3) + 8) & 1) != 0)
                            result = sub_1414a5fc0(arg1, rdx_16, var_97_1, arg2)
                            zmm4 = data_1439b6df0
                            i_2 |= result.b
                    
                    r12_2 += 1
                while (r12_2 s< result_5)
                
                if (i_2 == 0)
                    goto label_141479cc2
            
            if (arg4 != 0)
                result = sub_141479670(
                    *(*(arg1 + 0x48) + 0x18d0) + 0x48 + sx.q(*(*(arg1 + 0x5c0) + 0x28)) * 0x78, 
                    arg2, rdi_2.d)
            
            i_2 = i_1
        
        if (var_96_1 != 0 && i_2 != 0)
            int64_t rdi_3 = sx.q(*(arg1 + 0x630))
            int32_t rax_25 = (rdi_3 + 1).d
            *(arg1 + 0x630) = rax_25
            
            if (rax_25 s> *(arg1 + 0x634))
                sub_14083a310(arg1 + 0x628, rdi_3.d)
            
            result = *(arg1 + 0x628)
            *(result + (rdi_3 << 3)) = arg2
    
    if (var_60_1 != 0)
        result = sub_140a74f90(var_60_1)

label_141479d9d:
__security_check_cookie(rax_1 ^ &var_c8)
return result
