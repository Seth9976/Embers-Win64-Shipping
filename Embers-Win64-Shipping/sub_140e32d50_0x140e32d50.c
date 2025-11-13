// 函数: sub_140e32d50
// 地址: 0x140e32d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
int16_t* r15 = *(arg1 + 0x20)
void*** rax = j_sub_140a82f30(0x70)
void*** rdi = rax
uint32_t arg_8 = rax.d

if (rax == 0)
    rdi = nullptr
else
    __builtin_memset(&rax[1], 0, 0x30)
    rax[7].d = 0xff00ff
    *(rax + 0x3c) = 0
    *(rax + 0x44) = 1
    __builtin_memset(&rax[0xa], 0, 0x1d)
    *rdi = &data_142ed6558

void*** rax_1 = j_sub_140a82f30(0x18)
arg_8 = rax_1.d

if (rax_1 == 0)
    rax_1 = nullptr
else
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rax_1 = &data_142e151a8
    rax_1[2] = rdi

void*** var_40 = rax_1
void*** rax_2 = j_sub_140a82f30(0x68)
void*** rdi_1 = rax_2
arg_8 = rax_2.d

if (rax_2 == 0)
    rdi_1 = nullptr
else
    __builtin_memset(&rax_2[1], 0, 0x30)
    rax_2[7].d = 0xff00ff
    *(rax_2 + 0x3c) = 0
    *(rax_2 + 0x44) = 1
    rax_2[0xa] = 0
    rax_2[0xb] = 0
    *rdi_1 = &data_142ed6300
    rdi_1[0xc].w = 0x100

void*** rax_3 = j_sub_140a82f30(0x18)
arg_8 = rax_3.d

if (rax_3 == 0)
    rax_3 = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rax_3 = &data_142e151a8
    rax_3[2] = rdi_1

void*** var_50 = rax_3
int64_t r13
r13.b = 0

if (*r15 == 0 && r15[1] == 1)
    uint32_t rcx = 0
    arg_8 = 0
    void* rdi_2 = &r15[3]
    int32_t i = 0
    
    if (0 u< r15[2])
        do
            char rax_4 = *rdi_2
            uint32_t r14_1 = 0x100
            
            if (rax_4 != 0)
                r14_1 = zx.d(rax_4)
            
            if (*(rdi_2 + 6) == 0x20 && r14_1 u> rcx)
                if ((**rdi)(rdi, zx.q(*(rdi_2 + 0xc)) + r15, sx.q(*(rdi_2 + 8))) == 0)
                    if ((**rdi_1)(rdi_1, zx.q(*(rdi_2 + 0xc)) + r15, sx.q(*(rdi_2 + 8))) == 0)
                        rcx = arg_8
                    else
                        *(arg1 + 0x3c) = (*rdi_1)[5](rdi_1)
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q((*rdi_1)[6](rdi_1))
                        *(arg1 + 0x40) = (temp5_1 - temp4_1) s>> 1
                        *(arg1 + 0x3a) = (*rdi_1)[8](rdi_1)
                        rcx = r14_1
                        arg_8 = rcx
                        r13.b = 1
                        *(arg1 + 0x78) = 0
                        *(arg1 + 0x70) = *(rdi_2 + 0xc)
                        *(arg1 + 0x74) = *(rdi_2 + 8)
                else
                    *(arg1 + 0x3c) = (*rdi)[5](rdi)
                    *(arg1 + 0x40) = (*rdi)[6](rdi)
                    *(arg1 + 0x3a) = (*rdi)[8](rdi)
                    rcx = r14_1
                    arg_8 = rcx
                    r13.b = 1
                    *(arg1 + 0x78) = 1
                    *(arg1 + 0x70) = *(rdi_2 + 0xc)
                    *(arg1 + 0x74) = *(rdi_2 + 8)
            
            i += 1
            rdi_2 += 0x10
        while (i s< zx.d(r15[2]))
        
        if (r13.b != 0)
            uint128_t var_38
            uint128_t zmm0_1
            
            if (*(arg1 + 0x78) == 0)
                zmm0_1 = rdi_1.o
                var_38 = zmm0_1
                void*** rdi_4 = _mm_bsrli_si128(zmm0_1, 8).q
                var_50 = rdi_4
                
                if (rdi_4 != 0)
                    rdi_4[1].d += 1
                
                void*** rsi_2 = rdi_4
                
                if (arg1 + 0x60 != &var_38)
                    *(arg1 + 0x60) = var_38.q
                    var_38.q = 0
                    int64_t* r14_3 = *(arg1 + 0x68)
                    
                    if (rdi_4 != r14_3)
                        var_38:8.q = 0
                        *(arg1 + 0x68) = rdi_4
                        rsi_2 = nullptr
                        
                        if (r14_3 != 0)
                            r14_3[1].d -= 1
                            
                            if (r14_3[1].d == 1)
                                (**r14_3)(r14_3)
                                int32_t temp12_1 = *(r14_3 + 0xc)
                                *(r14_3 + 0xc) -= 1
                                
                                if (temp12_1 == 1)
                                    (*(*r14_3 + 8))(r14_3, 1)
                
                if (rsi_2 != 0)
                    rsi_2[1].d -= 1
                    
                    if (rsi_2[1].d == 1)
                        (**rsi_2)(rsi_2)
                        int32_t temp8_1 = *(rsi_2 + 0xc)
                        *(rsi_2 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*rsi_2)[1](rsi_2, 1)
            else
                zmm0_1 = rdi.o
                var_38 = zmm0_1
                void*** rdi_3 = _mm_bsrli_si128(zmm0_1, 8).q
                var_40 = rdi_3
                
                if (rdi_3 != 0)
                    rdi_3[1].d += 1
                
                void*** rsi_1 = rdi_3
                
                if (arg1 + 0x60 != &var_38)
                    *(arg1 + 0x60) = var_38.q
                    var_38.q = 0
                    int64_t* r14_2 = *(arg1 + 0x68)
                    
                    if (rdi_3 != r14_2)
                        var_38:8.q = 0
                        *(arg1 + 0x68) = rdi_3
                        rsi_1 = nullptr
                        
                        if (r14_2 != 0)
                            r14_2[1].d -= 1
                            
                            if (r14_2[1].d == 1)
                                (**r14_2)(r14_2)
                                int32_t temp13_1 = *(r14_2 + 0xc)
                                *(r14_2 + 0xc) -= 1
                                
                                if (temp13_1 == 1)
                                    (*(*r14_2 + 8))(r14_2, 1)
                
                if (rsi_1 != 0)
                    rsi_1[1].d -= 1
                    
                    if (rsi_1[1].d == 1)
                        (**rsi_1)(rsi_1)
                        int32_t temp10_1 = *(rsi_1 + 0xc)
                        *(rsi_1 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*rsi_1)[1](rsi_1, 1)

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp2_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*var_50)[1](var_50, 1)

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        void** r8_3 = *var_40
        (*r8_3)(var_40, arg2, r8_3)
        int32_t temp3_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp3_1 == 1)
            void** r8_4 = *var_40
            r8_4[1](var_40, 1, r8_4)

return zx.q(r13.b)
