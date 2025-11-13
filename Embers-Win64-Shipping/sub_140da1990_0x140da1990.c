// 函数: sub_140da1990
// 地址: 0x140da1990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_518
int64_t rax_1 = __security_cookie ^ &var_518
int64_t* r14 = arg2
int64_t* rdx = arg1
int32_t var_4f4 = 0
int32_t r12 = 0
uint64_t result
char var_4f8
uint128_t var_4b8
uint128_t var_4a8
uint128_t var_498
uint128_t var_488

if (data_143e2435c == 0)
    int32_t i = 0
    void** rcx_38 = nullptr
    int32_t i_1 = 0
    void** var_4e8_2 = nullptr
    uint64_t r13
    r13.b = 0
    
    while (i s< rdx[1].d)
        int64_t rax_42 = *rdx
        int64_t* rdi_2 = *(rcx_38 + rax_42 + 8)
        void* r15_1 = *(rcx_38 + rax_42)
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        char var_458 = arg4
        void* var_330_1 = nullptr
        int32_t var_328_1 = 0
        int32_t var_324_1 = 4
        char var_320_1 = 0
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        int64_t var_78[0x7]
        uint128_t* rax_43 = sub_140e190b0(r15_1, &var_78, arg5)
        uint128_t var_478_1 = *rax_43
        uint128_t var_468_1 = rax_43[1]
        var_488 = rax_43[2]
        uint64_t var_4c8_2 = rax_43[3].q
        
        if (rdi_2 != 0)
            int32_t rax_44 = rdi_2[1].d
            rdi_2[1].d = rax_44
            
            if (rax_44 == 0)
                (**rdi_2)(rdi_2)
                int32_t temp4_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        if (*(r15_1 + 0x1b8) != 0)
            int64_t* rcx_42 = *(r15_1 + 0x1b0)
            
            if (rcx_42 != 0 && (*(*rcx_42 + 0x28))(rcx_42) != 0)
                int64_t* rcx_43
                
                if (*(r15_1 + 0x1b8) == 0)
                    rcx_43 = nullptr
                else
                    rcx_43 = *(r15_1 + 0x1b0)
                
                (*(*rcx_43 + 0x48))(rcx_43, &var_4f8)
                *(r15_1 + 0x1a8) = var_4f8
        
        if ((*(r15_1 + 0x1a8) & var_458) == 0)
            goto label_140da1fed
        
        int64_t rsi_4 = sx.q(var_328_1)
        int32_t rax_52 = (rsi_4 + 1).d
        int32_t var_328_2 = rax_52
        void var_450
        
        if (rax_52 s> var_324_1)
            sub_140dbcd70(&var_450, rsi_4.d)
        
        int64_t rcx_45 = rsi_4 * 9
        void* rdx_7 = &var_450
        
        if (var_330_1 != 0)
            rdx_7 = var_330_1
        
        *(rdx_7 + (rcx_45 << 3)) = var_478_1
        uint128_t zmm0 = var_488
        *(rdx_7 + (rcx_45 << 3) + 0x10) = var_468_1
        *(rdx_7 + (rcx_45 << 3) + 0x20) = zmm0
        *(rdx_7 + (rcx_45 << 3) + 0x30) = var_4c8_2
        *(rdx_7 + (rcx_45 << 3) + 0x38) = r15_1
        *(rdx_7 + (rcx_45 << 3) + 0x40) = rdi_2
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        label_140da1fed:
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp9_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
        
        var_4a8.q = r15_1
        var_4a8:8.q = rdi_2
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        char var_1d8
        int512_t zmm1_1 = sub_140d94680(&var_1d8, &var_4a8, &var_458)
        int64_t rax_56 = *r14
        void var_1d0
        
        if (r15_1 != rax_56)
            int64_t* rsi_5 = r14[1]
            r12 |= 1
            
            if (rsi_5 != 0)
                rsi_5[1].d += 1
            
            var_4b8.q = rax_56
            var_4b8:8.q = rsi_5
            
            if (rsi_5 != 0)
                int32_t rax_57 = rsi_5[1].d
                rsi_5[1].d = rax_57
                
                if (rax_57 == 0)
                    (**rsi_5)(rsi_5)
                    int32_t temp13_1 = *(rsi_5 + 0xc)
                    *(rsi_5 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        (*(*rsi_5 + 8))(rsi_5, 1)
            
            void* rdx_9 = &var_1d0
            int32_t j = 0
            char var_318 = arg4
            void* var_1f0_1 = nullptr
            int32_t var_1e8_1 = 0
            void* var_b0
            
            if (var_b0 != 0)
                rdx_9 = var_b0
            
            int32_t var_1e4_1 = 4
            char var_1e0_1 = 0
            int32_t var_a8
            sub_140d90c10(&var_4b8, rdx_9 + sx.q(var_a8 - 1) * 0x48, &var_318, arg4, zmm1_1)
            sub_140dbd470(&var_318)
            r14 = zx.q(var_1e8_1)
            void var_310
            
            if (r14.d s> 0)
                do
                    void* rdx_11 = &var_310
                    
                    if (var_1f0_1 != 0)
                        rdx_11 = var_1f0_1
                    
                    sub_140d99900(&var_1d8, rdx_11 + sx.q(j) * 0x48)
                    r14 = zx.q(var_1e8_1)
                    j += 1
                while (j s< r14.d)
            
            sub_140d94d20(&var_310)
        
        if (r15_1 == rax_56 || r14.d s> 0)
            r14.b = 1
        else
            r14.b = 0
        
        if ((r12.b & 1) != 0)
            int64_t* rsi_6 = var_4b8:8.q
            r12 &= 0xfffffffe
            
            if (rsi_6 != 0)
                rsi_6[1].d -= 1
                
                if (rsi_6[1].d == 1)
                    (**rsi_6)(rsi_6)
                    int32_t temp17_1 = *(rsi_6 + 0xc)
                    *(rsi_6 + 0xc) -= 1
                    
                    if (temp17_1 == 1)
                        (*(*rsi_6 + 8))(rsi_6, 1)
        
        if (r14.b != 0)
            sub_140d965b0(arg3, &var_1d8)
            r13.b = 1
            r14 = arg2
        else if (r13.b != 0)
            r14 = arg2
        else
            r14 = arg2
            var_498.q = *r14
            void* rax_75 = r14[1]
            var_498:8.q = rax_75
            
            if (rax_75 != 0)
                *(rax_75 + 8) += 1
            
            r13 = zx.q(sub_140da1990(sub_140e12730(r15_1), &var_498, arg3, zx.q(arg4)))
        
        void var_88
        sub_140596d80(&var_88)
        int64_t* var_90
        
        if (var_90 != 0)
            var_90[1].d -= 1
            
            if (var_90[1].d == 1)
                int64_t rdx_14 = *var_90
                (*rdx_14)(var_90, rdx_14)
                int32_t temp33_1 = *(var_90 + 0xc)
                *(var_90 + 0xc) -= 1
                
                if (temp33_1 == 1)
                    (*(*var_90 + 8))(var_90, 1)
        
        sub_140d94d20(&var_1d0)
        arg5 = sub_140d94d20(&var_450)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp36_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp36_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        i = i_1 + 1
        rdx = arg1
        rcx_38 = &var_4e8_2[2]
        i_1 = i
        var_4e8_2 = rcx_38
        
        if (r13.b != 0)
            break
    
    int64_t* rbx_4 = r14[1]
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp2_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    result = zx.q(r13.b)
else
    int64_t* rdi_1 = r14[1]
    int64_t* rsi_1 = *r14
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int64_t* var_4e0_1 = rsi_1
    int64_t* var_4d8_1 = rdi_1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    *arg3 = arg4
    
    while (true)
        if (rsi_1[0x37].d != 0)
            int64_t* rcx_2 = rsi_1[0x36]
            
            if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
                int64_t* rcx_3
                
                if (rsi_1[0x37].d == 0)
                    rcx_3 = nullptr
                else
                    rcx_3 = rsi_1[0x36]
                
                (*(*rcx_3 + 0x48))(rcx_3, &var_4f8)
                rsi_1[0x35].b = var_4f8
        
        char rbx_1 = rsi_1[0x35].b
        
        if ((*arg3 & rbx_1) == 0)
            sub_140dbbb40(&arg3[8], 0)
            
            if (rdi_1 != 0)
            label_140da1e30:
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp6_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        else
            if (rdi_1 != 0)
                rdi_1[1].d += 1
            
            int128_t* rax_8 = sub_140e12190(rsi_1)
            var_498 = *rax_8
            var_4a8 = rax_8[1]
            var_4b8 = rax_8[2]
            uint64_t var_4e8_1 = rax_8[3].q
            
            if (rdi_1 != 0)
                int32_t rax_9 = rdi_1[1].d
                rdi_1[1].d = rax_9
                
                if (rax_9 == 0)
                    (**rdi_1)(rdi_1)
                    int32_t temp8_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            uint128_t zmm1
            
            if ((*arg3 & rbx_1) != 0)
                void* rbx_2 = &arg3[8]
                int64_t r14_1 = sx.q(*(rbx_2 + 0x128))
                int32_t rax_12 = (r14_1 + 1).d
                *(rbx_2 + 0x128) = rax_12
                
                if (rax_12 s> *(rbx_2 + 0x12c))
                    sub_140dbcd70(rbx_2, r14_1.d)
                
                void* rax_13 = *(rbx_2 + 0x120)
                int64_t rcx_8 = r14_1 * 9
                zmm1 = var_4a8
                
                if (rax_13 != 0)
                    rbx_2 = rax_13
                
                *(rbx_2 + (rcx_8 << 3)) = var_498
                arg5 = var_4b8
                *(rbx_2 + (rcx_8 << 3) + 0x10) = zmm1
                *(rbx_2 + (rcx_8 << 3) + 0x20) = arg5
                *(rbx_2 + (rcx_8 << 3) + 0x30) = var_4e8_1
                *(rbx_2 + (rcx_8 << 3) + 0x38) = rsi_1
                *(rbx_2 + (rcx_8 << 3) + 0x40) = rdi_1
                
                if (rdi_1 != 0)
                    rdi_1[1].d += 1
            
            int64_t* rbx_3 = rsi_1[0x4e]
            
            if (rbx_3 == 0)
                goto label_140da1c84
            
            int32_t rax_14 = rbx_3[1].d
            
            if (rax_14 != 0)
                rbx_3[1].d = rax_14 + 1
                
                if (rbx_3 == 0)
                    goto label_140da1c84
                
                int64_t* r14_2 = rsi_1[0x4d]
                
                if (r14_2 == 0)
                    goto label_140da1c84
                
                if ((*(*r14_2 + 0x158))(r14_2, rsi_1) == 0)
                    sub_140dbbb40(&arg3[8], 0)
                else
                    zmm1 = var_4e0_1.o
                    rbx_3[1].d += 1
                    int64_t* var_4c0_1 = rbx_3
                    int64_t* var_4c8_1
                    var_4c8_1.o = zmm1
                    int64_t* rsi_2 = _mm_bsrli_si128(zmm1, 8).q
                    var_4e0_1.o = r14_2.o
                    
                    if (rsi_2 != 0)
                        rsi_2[1].d -= 1
                        
                        if (rsi_2[1].d == 1)
                            (**rsi_2)(rsi_2)
                            int32_t temp27_1 = *(rsi_2 + 0xc)
                            *(rsi_2 + 0xc) -= 1
                            
                            if (temp27_1 == 1)
                                (*(*rsi_2 + 8))(rsi_2, 1)
                    
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp26_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp26_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                    
                    if (rdi_1 != 0)
                        rdi_1[1].d -= 1
                        
                        if (rdi_1[1].d == 1)
                            (**rdi_1)(rdi_1)
                            int32_t temp35_1 = *(rdi_1 + 0xc)
                            *(rdi_1 + 0xc) -= 1
                            
                            if (temp35_1 == 1)
                                (*(*rdi_1 + 8))(rdi_1, 1)
                                rdi_1 = var_4d8_1
                                rsi_1 = var_4e0_1
                                continue
                    
                    rdi_1 = var_4d8_1
                    rsi_1 = var_4e0_1
                    continue
                
                goto label_140da1cfd
            
            rbx_3 = nullptr
        label_140da1c84:
            
            if ((*(*rsi_1 + 0x208))(rsi_1) != 0)
                if (rdi_1 != 0)
                    rdi_1[1].d += 1
                
                if (&arg3[0x140] == &var_488)
                label_140da1d57:
                    
                    if (rdi_1 != 0)
                        rdi_1[1].d -= 1
                        
                        if (rdi_1[1].d == 1)
                            (**rdi_1)(rdi_1)
                            int32_t temp19_1 = *(rdi_1 + 0xc)
                            *(rdi_1 + 0xc) -= 1
                            
                            if (temp19_1 == 1)
                                (*(*rdi_1 + 8))(rdi_1, 1)
                else
                    *(arg3 + 0x140) = rsi_1
                    int64_t* rsi_3 = *(arg3 + 0x148)
                    
                    if (rdi_1 == rsi_3)
                        goto label_140da1d57
                    
                    *(arg3 + 0x148) = rdi_1
                    
                    if (rsi_3 != 0)
                        rsi_3[1].d -= 1
                        
                        if (rsi_3[1].d == 1)
                            (**rsi_3)(rsi_3)
                            int32_t temp25_1 = *(rsi_3 + 0xc)
                            *(rsi_3 + 0xc) -= 1
                            
                            if (temp25_1 == 1)
                                (*(*rsi_3 + 8))(rsi_3, 1)
                
                sub_140dbd470(arg3)
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp24_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp24_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp30_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp30_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
                    
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp34_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp34_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
                
                sub_140597060(arg2)
                result.b = 1
                break
            
            sub_140dbbb40(&arg3[8], 0)
            
            if (rbx_3 != 0)
            label_140da1cfd:
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp15_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp15_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp14_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp14_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
                
                goto label_140da1e30
        
        sub_140597060(arg2)
        result.b = 0
        break
__security_check_cookie(rax_1 ^ &var_518)
return result
