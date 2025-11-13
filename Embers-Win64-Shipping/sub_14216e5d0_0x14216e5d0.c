// 函数: sub_14216e5d0
// 地址: 0x14216e5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi
int64_t* arg_18 = rdi
char result_1
int64_t rax_1 = __security_cookie ^ &result_1
*arg4 = 0
char* r12 = arg4
uint64_t result = zx.q(arg2[5].b)
char* var_50 = arg4

if ((result.b & 2) != 0)
    int32_t rdx = arg1[4].d
    
    if (rdx == 0)
        sub_14216d900(arg1)
        rdx = arg1[4].d
    
    (*(*arg2 + 0x150))(arg2, arg1[3], sx.q(rdx))
    result.b = arg1[4].d s> 0
    *r12 = result.b
else if ((result.b & 1) != 0)
    void* r15_1 = &arg1[1]
    uint64_t var_60
    
    if (r15_1 != &var_60)
        *r15_1 = 0
        int64_t* rbx_1 = *(r15_1 + 8)
        
        if (rbx_1 != 0)
            *(r15_1 + 8) = 0
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rcx_3 = arg2[1]
    uint8_t var_67 = 0
    char* rdx_2 = *rcx_3
    
    if (&rdx_2[1] u> rcx_3[1])
        (*(*arg2 + 0x150))(arg2, &var_67, 1)
    else
        var_67 = *rdx_2
        *rcx_3 += 1
    
    if ((*(arg2 + 0x29) & 1) == 0)
        uint8_t rbx_2 = var_67
        
        if ((rbx_2 & 1) == 0)
            rbx_2 u>>= 3
            bool cond:0_1 = rbx_2 != 0
            
            if (rbx_2 == 0)
                int64_t* rax_30 = sub_142168400()
                int64_t* rax_31
                rax_31, arg5 = sub_142168400()
                int64_t r8_5 = *rax_30
                uint8_t rax_33 =
                    (*(*rax_31 + 0x290))(rax_31, *(*(r8_5 + 0x288))(rax_30, &var_50, r8_5))
                rbx_2 = rax_33
                cond:0_1 = rax_33 != 0
            
            rdi.b = cond:0_1
            char* rbx_6
            int512_t zmm1
            
            if (rbx_2 != 0x1f)
                int64_t* rax_34
                rax_34, zmm1 = sub_142168400()
                int64_t r9_1 = *rax_34
                rbx_6 = *(*(r9_1 + 0x298))(rax_34, &var_50, zx.q(rbx_2), r9_1)
                var_50 = rbx_6
            else
                var_60 = 0
                int32_t var_58_1 = 0
                sub_140a1d9d0(arg2, &var_60, arg5)
                uint64_t rdx_18 = &data_142d40450
                
                if (var_58_1 != 0)
                    rdx_18 = var_60
                
                result, zmm1 = sub_140b58260(&var_50, rdx_18, 1)
                bool cond:2_1 = (*(arg2 + 0x29) & 1) != 0
                rbx_6 = *result
                var_50 = rbx_6
                uint32_t rcx_35
                
                if (not(cond:2_1))
                    result = sub_140b5b8a0(rbx_6.d, 0)
                    rcx_35.b = (rbx_6 u>> 0x20).d == 0
                
                if (cond:2_1 || (rcx_35.b & result.b) != 0)
                    rdi.b = 0
                
                uint64_t rcx_36 = var_60
                
                if (rcx_36 != 0)
                    result, zmm1 = sub_140a74f90(rcx_36)
            
            if (rdi.b != 0)
                var_60 = 0
                int32_t var_58_2 = 0
                sub_140a1d9d0(arg2, &var_60, zmm1)
                
                if ((*(arg2 + 0x29) & 1) == 0)
                    int32_t rcx_39
                    rcx_39.b = sub_140b5b8a0(rbx_6.d, 0).b == 0
                    result.b = var_50:4.d != 0
                    rcx_39.b |= result.b
                    
                    if (rcx_39.b != 0)
                        sub_14217e3a0(arg1, rbx_6, &var_60)
                        result.b = var_58_2 s> 1
                        *r12 = result.b
                
                uint64_t rcx_41 = var_60
                
                if (rcx_41 != 0)
                    sub_140a74f90(rcx_41)
        else if ((rbx_2 & 2) != 0)
            *r12 = 1
        else
            rbx_2 u>>= 3
            bool cond:3_1 = rbx_2 != 0
            int64_t var_48
            
            if (rbx_2 == 0)
                int64_t* rax_7 = sub_142168400()
                int64_t* rax_8
                rax_8, arg5 = sub_142168400()
                int64_t r8_1 = *rax_7
                uint8_t rax_10 =
                    (*(*rax_8 + 0x290))(rax_8, *(*(r8_1 + 0x288))(rax_7, &var_48, r8_1))
                rbx_2 = rax_10
                cond:3_1 = rax_10 != 0
            
            rdi.b = cond:3_1
            int64_t var_58
            int64_t rbx_4
            
            if (rbx_2 != 0x1f)
                int64_t* rax_11 = sub_142168400()
                int64_t r9 = *rax_11
                rbx_4 = *(*(r9 + 0x298))(rax_11, &var_48, zx.q(rbx_2), r9)
                var_48 = rbx_4
            else
                var_60 = 0
                var_58 = 0
                sub_140a1d9d0(arg2, &var_60, arg5)
                int16_t* const rdx_7 = &data_142d40450
                
                if (var_58.d != 0)
                    rdx_7 = var_60
                
                result = sub_140b58260(&var_48, rdx_7, 1)
                bool cond:5_1 = (*(arg2 + 0x29) & 1) != 0
                rbx_4 = *result
                var_48 = rbx_4
                uint32_t rcx_11
                
                if (not(cond:5_1))
                    result = sub_140b5b8a0(rbx_4.d, 0)
                    rcx_11.b = (rbx_4 u>> 0x20).d == 0
                
                if (cond:5_1 || (rcx_11.b & result.b) != 0)
                    rdi.b = 0
                
                uint64_t rcx_12 = var_60
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
            
            if (rdi.b != 0)
                int64_t* rcx_14 = arg2[1]
                result_1 = 0
                char* rdx_9 = *rcx_14
                
                if (&rdx_9[1] u> rcx_14[1])
                    (*(*arg2 + 0x150))(arg2, &result_1, 1)
                else
                    result_1 = *rdx_9
                    *rcx_14 += 1
                
                if ((*(arg2 + 0x29) & 1) == 0)
                    result = zx.q(result_1)
                    
                    if (result.b != 0)
                        uint64_t rax_15 = zx.q(zx.d(result.b) + 0xf)
                        int64_t rax_16 = rax_15 + 0xf
                        
                        if (rax_16 u<= zx.q(rax_15.d))
                            rax_16 = 0xffffffffffffff0
                        
                        int64_t rax_17 = rax_16 & 0xfffffffffffffff0
                        __chkstk(rax_17)
                        void var_88
                        void* r15_4 = (&var_88 - rax_17 + 0x2f) & 0xfffffffffffffff0
                        (*(*arg2 + 0x150))(arg2, r15_4, zx.q(result_1))
                        
                        if ((*(arg2 + 0x29) & 1) == 0)
                            uint32_t i_1 = zx.d(result_1)
                            int32_t rdx_12 = 0
                            var_60 = 0
                            var_58:4.d = 0
                            var_58.d = 0
                            result = zx.q(i_1 * 2)
                            
                            if (result.d != 0)
                                sub_1405947f0(&var_60, result.d)
                                rdx_12 = var_58.d
                            
                            if (i_1 != 0)
                                uint32_t i
                                
                                do
                                    uint8_t rsi_2 = *r15_4
                                    int16_t rdi_1 = 0x37
                                    uint16_t rcx_19 = zx.w(rsi_2 u>> 4)
                                    
                                    if (rcx_19.b u<= 9)
                                        rdi_1 = 0x30
                                    
                                    if (rdi_1 != neg.w(rcx_19))
                                        int32_t r14_1 = rdx_12 - 1
                                        
                                        if (rdx_12 s<= 0)
                                            r14_1 = 0
                                        
                                        int32_t rax_20
                                        rax_20.b = rdx_12 s<= 0
                                        int32_t rax_22 = rax_20 + 1 + rdx_12
                                        var_58.d = rax_22
                                        
                                        if (rax_22 s> var_58:4.d)
                                            sub_140594770(&var_60)
                                        
                                        int64_t rcx_21 = sx.q(r14_1)
                                        *(var_60 + (rcx_21 << 1)) = rdi_1 + rcx_19
                                        *(var_60 + (rcx_21 << 1) + 2) = 0
                                        rdx_12 = var_58.d
                                    
                                    int16_t rdi_2 = 0x37
                                    result = zx.q(rsi_2) & 0xf
                                    
                                    if (result.b u<= 9)
                                        rdi_2 = 0x30
                                    
                                    if (rdi_2 != neg.w(result.w))
                                        int32_t rsi_3 = rdx_12 - 1
                                        
                                        if (rdx_12 s<= 0)
                                            rsi_3 = 0
                                        
                                        int32_t rax_25
                                        rax_25.b = rdx_12 s<= 0
                                        int32_t rax_27 = rax_25 + 1 + rdx_12
                                        var_58.d = rax_27
                                        
                                        if (rax_27 s> var_58:4.d)
                                            sub_140594770(&var_60)
                                        
                                        int64_t rcx_23 = sx.q(rsi_3)
                                        *(var_60 + (rcx_23 << 1)) = rdi_2 + result.w
                                        *(var_60 + (rcx_23 << 1) + 2) = 0
                                        rdx_12 = var_58.d
                                    
                                    r15_4 += 1
                                    i = i_1
                                    i_1 -= 1
                                while (i != 1)
                            
                            if (rdx_12 != 0 && rdx_12 - 1 s> 0)
                                int32_t rcx_24
                                rcx_24.b = sub_140b5b8a0(rbx_4.d, 0).b == 0
                                result.b = var_48:4.d != 0
                                rcx_24.b |= result.b
                                
                                if (rcx_24.b != 0)
                                    sub_140a35810(&var_60)
                                    sub_14217e3a0(arg1, rbx_4, &var_60)
                            
                            uint64_t rcx_27 = var_60
                            
                            if (rcx_27 != 0)
                                sub_140a74f90(rcx_27)
                            
                            r12 = var_50
                    
                    if (result_1 == 0)
                        result.b = 1
                        *r12 = 1
                    else
                        int64_t* rcx_28 = *r15_1
                        
                        if (rcx_28 != 0)
                            result = (*(*rcx_28 + 0x28))(rcx_28)
                        
                        if (rcx_28 != 0 && result.b != 0)
                            result.b = 1
                            *r12 = 1
                        else
                            result.b = 0
                            *r12 = 0

result.b = 1
__security_check_cookie(rax_1 ^ &result_1)
return result
