// 函数: sub_140ac3380
// 地址: 0x140ac3380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int64_t* r15 = *(*arg2 + 8)

if ((r15[5].b & 2) != 0)
    char var_2c8 = 0xc
    int64_t* rcx = r15[1]
    char* rdx = *rcx
    
    if (&rdx[1] u> rcx[1])
        (*(*r15 + 0x150))(r15, &var_2c8, 1)
    else
        var_2c8 = *rdx
        int64_t* rax_5 = r15[1]
        *rax_5 += 1

int64_t* rcx_2

if ((r15[5].b & 2) != 0)
    rcx_2 = *(arg1 + 0x10)

int64_t var_2a8
int64_t* rax_8

if ((r15[5].b & 2) == 0 || rcx_2 == 0)
    var_2a8 = 0
    rax_8 = &var_2a8
else
    rax_8 = (*(*rcx_2 + 0x18))(rcx_2, &var_2a8)

int64_t var_2b0 = *rax_8
int64_t* rcx_3 = *(*arg2 + 8)
(*(*rcx_3 + 0x140))(rcx_3, &var_2b0)
int64_t var_298 = 0
int64_t var_290 = 0
uint64_t result = zx.q(r15[5].b)
uint64_t result_1
int32_t var_2b8
void** var_288
char var_25f
void** var_1c8

if ((result.b & 1) == 0)
    if ((result.b & 2) != 0)
        int32_t rcx_22
        rcx_22.b = sub_140b5b8a0(var_2b0.d, 0).b == 0
        result.b = var_2b0:4.d != 0
        result.b |= rcx_22.b
        
        if (result.b != 0)
            int64_t rbx_4 = var_2b0
            sub_140aae890()
            int512_t zmm1_2 = sub_140aabe40(&data_143dba020, &result_1, rbx_4)
            int32_t rax_26 = var_2b8
            uint64_t result_5 = result_1
            
            if (rax_26 == 0)
            label_140ac3788:
                
                if (result_5 != 0)
                    zmm1_2 = sub_140a74f90(result_5)
            else
                if (result_5 != 0)
                    (*(*result_5 + 0x28))(result_5)
                    rax_26 = var_2b8
                    result_5 = result_1
                
                if (rax_26 == 0)
                    goto label_140ac3788
                
                if (result_5 != 0)
                    (*(*result_5 + 0x38))(result_5, 0)
                    result_5 = result_1
                    
                    if (result_5 != 0)
                        uint64_t result_3 = sub_140a84c80(result_5, 0, 0)
                        result_5 = result_3
                        result_1 = result_3
                    
                    int32_t var_2b8_2 = 0
                    goto label_140ac3788
            
            var_2a8 = 0
            memset(&var_288, 0, 0x90)
            sub_140b4c2a0(&var_288)
            int64_t var_1f8_2 = 0
            var_288 = &data_142d6ad48
            int64_t* var_1f0_2 = &var_298
            int64_t var_1e8_2 = 0
            sub_140b552b0(&var_288, 1)
            var_288[0x1b](&var_288, 0)
            sub_140b4cb20(&var_1c8, &var_288)
            int64_t* rbx_5 = *(arg1 + 0x10)
            int64_t* rax_30 = SymBuffer::end(&var_1c8, &var_2a8)
            int64_t r8_4 = *rbx_5
            (*(r8_4 + 0x20))(rbx_5, *rax_30, r8_4)
            sub_140ac1bb0(*arg2, &var_298, zmm1_2)
            
            if ((var_25f & 1) != 0)
                *(r15 + 0x29) |= 1
            
            sub_140b4cbb0(&var_1c8)
            result = sub_140b4cb40(&var_288)
        
    label_140ac3850:
        int64_t rcx_33 = var_298
        
        if (rcx_33 != 0)
            result = sub_140a74f90(rcx_33)
    
    __security_check_cookie(rax_1 ^ &var_2e8)
    return result

if (arg1 + 0x10 != &result_1)
    *(arg1 + 0x10) = 0
    int64_t* rbx_1 = *(arg1 + 0x18)
    
    if (rbx_1 != 0)
        *(arg1 + 0x18) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int32_t rcx_6
rcx_6.b = sub_140b5b8a0(var_2b0.d, 0).b == 0
result.b = var_2b0:4.d != 0
result.b |= rcx_6.b

if (result.b != 0)
    int64_t rbx_2 = var_2b0
    sub_140aae890()
    int512_t zmm1_1 = sub_140aabe40(&data_143dba020, &result_1, rbx_2)
    result = sub_140ac1bb0(*arg2, &var_298, zmm1_1)
    uint64_t result_2 = result_1
    
    if (var_2b8 == 0)
    label_140ac36e0:
        
        if (result_2 != 0)
            result = sub_140a74f90(result_2)
    else
        if (result_2 != 0)
            result = (*(*result_2 + 0x28))(result_2)
            
            if (result.b != 0)
                memset(&var_288, 0, 0x90)
                sub_140b4c2a0(&var_288)
                int64_t var_1f8_1 = 0
                var_288 = &data_142d6b230
                int64_t* var_1f0_1 = &var_298
                int64_t var_1e8_1 = 0x7fffffffffffffff
                sub_140b55290(&var_288, 1)
                var_288[0x1b](&var_288, 0)
                sub_140b4cb20(&var_1c8, &var_288)
                int64_t* rax_16 = SymBuffer::end(&var_1c8, &var_2a8)
                uint64_t result_4 = 0
                
                if (var_2b8 != 0)
                    result_4 = result_1
                
                int64_t rbx_3 = *rax_16
                (*(*result_4 + 0x48))(result_4, &var_2a8, rbx_3)
                int64_t* var_2a0
                int64_t* rdi_1 = var_2a0
                int64_t* rsi_1 = rdi_1
                
                if (rdi_1 != 0)
                    rdi_1[1].d += 1
                    rdi_1 = var_2a0
                
                void var_1d8
                
                if (arg1 + 0x10 == &var_1d8)
                label_140ac361c:
                    
                    if (rsi_1 != 0)
                        rsi_1[1].d -= 1
                        
                        if (rsi_1[1].d != 1)
                            rdi_1 = var_2a0
                        else
                            (**rsi_1)(rsi_1)
                            int32_t temp4_1 = *(rsi_1 + 0xc)
                            *(rsi_1 + 0xc) -= 1
                            
                            if (temp4_1 != 1)
                                rdi_1 = var_2a0
                            else
                                (*(*rsi_1 + 8))(rsi_1, 1)
                                rdi_1 = var_2a0
                else
                    *(arg1 + 0x10) = var_2a8
                    int64_t* r14_1 = *(arg1 + 0x18)
                    
                    if (rsi_1 == r14_1)
                        goto label_140ac361c
                    
                    *(arg1 + 0x18) = rsi_1
                    
                    if (r14_1 != 0)
                        r14_1[1].d -= 1
                        
                        if (r14_1[1].d != 1)
                            rdi_1 = var_2a0
                        else
                            (**r14_1)(r14_1)
                            int32_t temp7_1 = *(r14_1 + 0xc)
                            *(r14_1 + 0xc) -= 1
                            
                            if (temp7_1 != 1)
                                rdi_1 = var_2a0
                            else
                                (*(*r14_1 + 8))(r14_1, 1)
                                rdi_1 = var_2a0
                
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp6_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
                
                int64_t* rcx_19 = *(arg1 + 0x10)
                (*(*rcx_19 + 0x20))(rcx_19, rbx_3)
                
                if ((var_25f & 1) != 0)
                    *(r15 + 0x29) |= 1
                
                sub_140b4cbb0(&var_1c8)
                result = sub_140b4cb40(&var_288)
            
            result_2 = result_1
        
        if (var_2b8 == 0)
            goto label_140ac36e0
        
        if (result_2 != 0)
            result = (*(*result_2 + 0x38))(result_2, 0)
            result_2 = result_1
            
            if (result_2 != 0)
                result = sub_140a84c80(result_2, 0, 0)
                result_2 = result
                result_1 = result
            
            int32_t var_2b8_1 = 0
            goto label_140ac36e0

goto label_140ac3850
