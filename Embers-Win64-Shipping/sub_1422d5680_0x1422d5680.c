// 函数: sub_1422d5680
// 地址: 0x1422d5680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t i = arg2
int32_t temp1
int32_t temp2
temp1:temp2 = sx.q(arg2 - 2)
int128_t* r9 = arg1
uint64_t result = zx.q((temp2 - temp1) s>> 1)
int32_t result_1 = result.d
int32_t var_80
int128_t zmm1

if (result.d s>= 0)
    int32_t rcx = ((result << 1) + 1).d
    var_80 = rcx
    
    do
        int32_t r12_1 = result.d
        
        if (rcx s< i)
            uint64_t rsi_1
            
            do
                int32_t r15_1 = r12_1 * 2
                rsi_1 = zx.q(r15_1 + 1)
                
                if ((rsi_1 + 1).d s< i)
                    int64_t rax_7 = sx.q(rsi_1.d) * 2
                    int64_t r14_3 = (sx.q(r15_1) + 2) * 2
                    int64_t* rdi_1 = *(r9 + (rax_7 << 3) + 8)
                    
                    if (rdi_1 != 0)
                        rdi_1[1].d += 1
                    
                    int64_t* r13_1 = *(r9 + (r14_3 << 3))
                    int64_t* r14_4 = *(r9 + (r14_3 << 3) + 8)
                    
                    if (r14_4 != 0)
                        r14_4[1].d += 1
                    
                    int32_t rax_9 = (*(**(r9 + (rax_7 << 3)) + 0x58))()
                    int64_t rdx_1 = *r13_1
                    int32_t rbx_1
                    rbx_1.b = (*(rdx_1 + 0x58))(r13_1, rdx_1) s> rax_9
                    
                    if (r14_4 != 0)
                        r14_4[1].d -= 1
                        
                        if (r14_4[1].d == 1)
                            (**r14_4)(r14_4)
                            int32_t rax_13 = *(r14_4 + 0xc)
                            *(r14_4 + 0xc) -= 1
                            
                            if (rax_13 == 1)
                                (*(*r14_4 + 8))(r14_4, 1)
                    
                    if (rdi_1 != 0)
                        rdi_1[1].d -= 1
                        
                        if (rdi_1[1].d == 1)
                            (**rdi_1)(rdi_1)
                            int32_t rax_17 = *(rdi_1 + 0xc)
                            *(rdi_1 + 0xc) -= 1
                            
                            if (rax_17 == 1)
                                (*(*rdi_1 + 8))(rdi_1, 1)
                    
                    r9 = arg1
                    
                    if (rbx_1.b != 0)
                        rsi_1 = zx.q(r15_1)
                    
                    rsi_1 = zx.q(rsi_1.d + 1)
                
                int128_t* r15_4 = &r9[sx.q(r12_1)]
                int128_t* r12_4 = &r9[sx.q(rsi_1.d)]
                int64_t* rdi_2 = *(r12_4 + 8)
                
                if (rdi_2 != 0)
                    rdi_2[1].d += 1
                
                int64_t* r14_5 = *(r15_4 + 8)
                int64_t* r13_2 = *r15_4
                
                if (r14_5 != 0)
                    r14_5[1].d += 1
                
                int32_t rax_20 = (*(**r12_4 + 0x58))()
                int64_t rdx_2 = *r13_2
                int32_t rbx_2
                rbx_2.b = (*(rdx_2 + 0x58))(r13_2, rdx_2) s> rax_20
                
                if (r14_5 != 0)
                    r14_5[1].d -= 1
                    
                    if (r14_5[1].d == 1)
                        (**r14_5)(r14_5)
                        int32_t rax_24 = *(r14_5 + 0xc)
                        *(r14_5 + 0xc) -= 1
                        
                        if (rax_24 == 1)
                            (*(*r14_5 + 8))(r14_5, 1)
                
                if (rdi_2 != 0)
                    rdi_2[1].d -= 1
                    
                    if (rdi_2[1].d == 1)
                        (**rdi_2)(rdi_2)
                        int32_t rax_28 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (rax_28 == 1)
                            (*(*rdi_2 + 8))(rdi_2, 1)
                
                if (rbx_2.b == 0)
                    i = arg2
                    break
                
                if (r15_4 != r12_4)
                    zmm1 = *r15_4
                    int128_t var_78_1 = zmm1
                    *r15_4 = *r12_4
                    *r12_4 = zmm1
                
                i = arg2
                r9 = arg1
                r12_1 = rsi_1.d
            while (((rsi_1 << 1) + 1).d s< i)
            r9 = arg1
            result = zx.q(result_1)
            rcx = var_80
        
        result = zx.q(result.d - 1)
        rcx -= 2
        result_1 = result.d
        var_80 = rcx
    while (result.d s>= 0)

int32_t i_1 = i - 1
int32_t i_2 = i_1

if (i_1 s> 0)
    result = &r9[sx.q(i_1)]
    var_80.q = result
    
    do
        if (r9 != result)
            zmm1 = *r9
            int128_t var_68_1 = zmm1
            *r9 = *result
            *result = zmm1
        
        int32_t r12_5 = 0
        
        if (i_1 s> 1)
            uint64_t rsi_2
            
            do
                int32_t r15_5 = r12_5 * 2
                rsi_2 = zx.q(r15_5 + 1)
                
                if ((rsi_2 + 1).d s< i_1)
                    int64_t rax_35 = sx.q(rsi_2.d) * 2
                    int64_t r14_8 = (sx.q(r15_5) + 2) * 2
                    int64_t* rdi_3 = *(r9 + (rax_35 << 3) + 8)
                    
                    if (rdi_3 != 0)
                        rdi_3[1].d += 1
                    
                    int64_t* r13_3 = *(r9 + (r14_8 << 3))
                    int64_t* r14_9 = *(r9 + (r14_8 << 3) + 8)
                    
                    if (r14_9 != 0)
                        r14_9[1].d += 1
                    
                    int32_t rax_37 = (*(**(r9 + (rax_35 << 3)) + 0x58))()
                    int64_t rdx_3 = *r13_3
                    int32_t rbx_3
                    rbx_3.b = (*(rdx_3 + 0x58))(r13_3, rdx_3) s> rax_37
                    
                    if (r14_9 != 0)
                        r14_9[1].d -= 1
                        
                        if (r14_9[1].d == 1)
                            (**r14_9)(r14_9)
                            int32_t rax_41 = *(r14_9 + 0xc)
                            *(r14_9 + 0xc) -= 1
                            
                            if (rax_41 == 1)
                                (*(*r14_9 + 8))(r14_9, 1)
                    
                    if (rdi_3 != 0)
                        rdi_3[1].d -= 1
                        
                        if (rdi_3[1].d == 1)
                            (**rdi_3)(rdi_3)
                            int32_t rax_45 = *(rdi_3 + 0xc)
                            *(rdi_3 + 0xc) -= 1
                            
                            if (rax_45 == 1)
                                (*(*rdi_3 + 8))(rdi_3, 1)
                    
                    r9 = arg1
                    
                    if (rbx_3.b != 0)
                        rsi_2 = zx.q(r15_5)
                    
                    rsi_2 = zx.q(rsi_2.d + 1)
                
                void* r15_8 = &r9[sx.q(r12_5)]
                void* r12_8 = &r9[sx.q(rsi_2.d)]
                int64_t* rbx_4 = *(r12_8 + 8)
                
                if (rbx_4 != 0)
                    rbx_4[1].d += 1
                
                int64_t* r14_10 = *(r15_8 + 8)
                int64_t* r13_4 = *r15_8
                
                if (r14_10 != 0)
                    r14_10[1].d += 1
                
                int32_t rax_48 = (*(**r12_8 + 0x58))()
                int64_t rdx_4 = *r13_4
                int32_t rdi_4
                rdi_4.b = (*(rdx_4 + 0x58))(r13_4, rdx_4) s> rax_48
                
                if (r14_10 != 0)
                    r14_10[1].d -= 1
                    
                    if (r14_10[1].d == 1)
                        (**r14_10)(r14_10)
                        int32_t rax_52 = *(r14_10 + 0xc)
                        *(r14_10 + 0xc) -= 1
                        
                        if (rax_52 == 1)
                            (*(*r14_10 + 8))(r14_10, 1)
                
                if (rbx_4 != 0)
                    rbx_4[1].d -= 1
                    
                    if (rbx_4[1].d == 1)
                        (**rbx_4)(rbx_4)
                        int32_t rax_56 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (rax_56 == 1)
                            (*(*rbx_4 + 8))(rbx_4, 1)
                
                if (rdi_4.b == 0)
                    i_1 = i_2
                    break
                
                if (r15_8 != r12_8)
                    zmm1 = *r15_8
                    int128_t var_58_1 = zmm1
                    *r15_8 = *r12_8
                    *r12_8 = zmm1
                
                i_1 = i_2
                r9 = arg1
                r12_5 = rsi_2.d
            while (((rsi_2 << 1) + 1).d s< i_1)
            r9 = arg1
            result = var_80.q
        
        i_1 -= 1
        result -= 0x10
        i_2 = i_1
        var_80.q = result
    while (i_1 s> 0)

__security_check_cookie(rax_1 ^ &var_b8)
return result
