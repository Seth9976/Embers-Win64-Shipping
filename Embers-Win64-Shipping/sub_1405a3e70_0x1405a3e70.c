// 函数: sub_1405a3e70
// 地址: 0x1405a3e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
int32_t r12 = 0
int32_t var_2a8 = 0
var_2a8.q = data_143e29f28
void* rax_3 = data_143f5b298
int64_t* i = *(rax_3 + 0xc38)
int64_t result = sx.q(*(rax_3 + 0xc40))

for (void* rbx_1 = &i[result]; i != rbx_1; i = &i[1])
    result = *i
    int64_t rsi_1 = *(result + 0x278)
    
    if (rsi_1 != 0)
        result = sub_14243ade0(rsi_1)
        
        if (result.b != 0)
            void* rax_4 = sub_142436920(rsi_1)
            uint128_t var_290
            int64_t r15_1
            
            if (rax_4 == 0)
                r12 |= 2
                result = &var_290
                arg1 = zx.o(0)
                r15_1 = 0
                var_290 = arg1
            else
                r12 |= 1
                void var_1a8
                result = sub_142029ad0(rax_4, &var_1a8)
                r15_1 = *result
            
            int64_t* r14_1 = *(result + 8)
            *(result + 8) = 0
            *result = 0
            
            if ((r12.b & 2) != 0)
                int64_t* rdi_1 = var_290:8.q
                r12 &= 0xfffffffd
                
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        result = (**rdi_1)(rdi_1)
                        int32_t temp2_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            result = (*(*rdi_1 + 8))(rdi_1, 1)
            
            if ((r12.b & 1) != 0)
                r12 &= 0xfffffffe
                int64_t* var_1a0
                
                if (var_1a0 != 0)
                    var_1a0[1].d -= 1
                    
                    if (var_1a0[1].d == 1)
                        result = (**var_1a0)(var_1a0)
                        int32_t temp4_1 = *(var_1a0 + 0xc)
                        *(var_1a0 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            result = (*(*var_1a0 + 8))(var_1a0, 1)
            
            if (r15_1 != 0)
                void var_198
                sub_140d947e0(&var_198)
                
                if (r14_1 != 0)
                    r14_1[1].d += 1
                
                int64_t var_280 = r15_1
                int64_t* var_278_1 = r14_1
                
                if (r14_1 != 0)
                    r14_1[1].d += 1
                
                int64_t* r15_2 = var_2a8.q
                arg1 = sub_140e649d0(r15_2, &var_280, &var_198, data_1439ae51c, arg1)
                
                if (r14_1 != 0)
                    r14_1[1].d -= 1
                    
                    if (r14_1[1].d == 1)
                        (**r14_1)(r14_1)
                        int32_t temp7_1 = *(r14_1 + 0xc)
                        *(r14_1 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*(*r14_1 + 8))(r14_1, 1)
                
                result = sub_140db3500(&var_198)
                
                if (result.b != 0)
                    int64_t* var_2a0
                    sub_1424373a0(rsi_1, &var_2a0)
                    int32_t result_1
                    result = zx.q(result_1)
                    
                    while (true)
                        int64_t* rdx_4 = var_2a0
                        int64_t rcx_13
                        
                        if (result.d s< 0 || result.d s>= rdx_4[1].d)
                            rcx_13.b = 0
                        else
                            rcx_13.b = 1
                        
                        if (rcx_13.b == 0)
                            break
                        
                        void* rax_12
                        rax_12, rcx_13 = sub_140d3c6e0(*rdx_4 + (sx.q(result.d) << 3))
                        
                        if (rax_12 != 0)
                            void* rsi_2 = *(rax_12 + 0x298)
                            
                            if (rsi_2 != 0)
                                void* rax_13
                                rax_13, rcx_13, arg1 = sub_142531230()
                                void* rdx_5 = *(rsi_2 + 0x10)
                                int64_t rax_14 = sx.q(*(rax_13 + 0x38))
                                
                                if (rax_14.d s<= *(rdx_5 + 0x38)
                                        && *(*(rdx_5 + 0x30) + (rax_14 << 3)) == rax_13 + 0x30)
                                    int32_t rax_16 = sub_140e69900(r15_2, zx.q(*(rsi_2 + 0xb8)))
                                    char var_268
                                    sub_140e7b570(r15_2, &var_198, 
                                        sub_140596b00(&var_268, rsi_2 + 0x1a0), rax_16, 0xa)
                                    int32_t var_1b4 = var_1b4 & 0xffffff00
                                    var_268 = 0
                                    arg1 = zx.o(0)
                                    int64_t var_260_1 = 0
                                    int64_t var_258_1 = 0
                                    char var_248_1 = 0
                                    int64_t var_240
                                    __builtin_memset(&var_240, 0, 0x88)
                                    int32_t var_1b8_1 = 0x20702
                                    sub_1405979f0(rsi_2 + 0x1a0, &var_268)
                                    sub_140597700(&var_268)
                        
                        result = zx.q(result_1 + 1)
                        result_1 = result.d
                
                int32_t j_5
                int32_t j_2 = j_5
                void* var_48
                
                if (j_2 != 0)
                    int64_t* rsi_4 = var_48 + 8
                    int32_t j
                    
                    do
                        int64_t* rdi_4 = *rsi_4
                        
                        if (rdi_4 != 0)
                            rdi_4[1].d -= 1
                            
                            if (rdi_4[1].d == 1)
                                result = (**rdi_4)(rdi_4)
                                int32_t temp12_1 = *(rdi_4 + 0xc)
                                *(rdi_4 + 0xc) -= 1
                                
                                if (temp12_1 == 1)
                                    result = (*(*rdi_4 + 8))(rdi_4, 1)
                        
                        rsi_4 = &rsi_4[2]
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                
                if (var_48 != 0)
                    result, arg1 = sub_140a74f90(var_48)
                
                int64_t* var_50
                
                if (var_50 != 0)
                    var_50[1].d -= 1
                    
                    if (var_50[1].d == 1)
                        result = (**var_50)(var_50)
                        int32_t temp11_1 = *(var_50 + 0xc)
                        *(var_50 + 0xc) -= 1
                        
                        if (temp11_1 == 1)
                            result = (*(*var_50 + 8))(var_50, 1)
                
                void* var_70
                void* rcx_28 = var_70
                void var_190
                void* rsi_5 = &var_190
                int32_t j_4
                int32_t j_3 = j_4
                
                if (rcx_28 != 0)
                    rsi_5 = rcx_28
                
                if (j_3 != 0)
                    void* rsi_6 = rsi_5 + 0x40
                    int32_t j_1
                    
                    do
                        int64_t* rdi_6 = *rsi_6
                        
                        if (rdi_6 != 0)
                            rdi_6[1].d -= 1
                            
                            if (rdi_6[1].d == 1)
                                result = (**rdi_6)(rdi_6)
                                int32_t temp15_1 = *(rdi_6 + 0xc)
                                *(rdi_6 + 0xc) -= 1
                                
                                if (temp15_1 == 1)
                                    result = (*(*rdi_6 + 8))(rdi_6, 1)
                        
                        rsi_6 += 0x48
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
                    rcx_28 = var_70
                
                if (rcx_28 != 0)
                    result, arg1 = sub_140a74f90(rcx_28)
            
            if (r14_1 != 0)
                r14_1[1].d -= 1
                
                if (r14_1[1].d == 1)
                    result = (**r14_1)(r14_1)
                    int32_t temp5_1 = *(r14_1 + 0xc)
                    *(r14_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        result = (*(*r14_1 + 8))(r14_1, 1)

__security_check_cookie(rax_1 ^ &var_2d8)
return result
