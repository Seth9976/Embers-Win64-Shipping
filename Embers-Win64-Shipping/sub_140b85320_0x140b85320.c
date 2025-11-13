// 函数: sub_140b85320
// 地址: 0x140b85320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
uint64_t rdi = 0
int64_t var_278 = 0
int32_t var_270 = 0
sub_1405947f0(&var_278, 9)
int32_t rax_2 = var_270 + 9
var_270 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_278)

UnDecorator::getReferenceType(var_278, u"Contents", 0x12)
int64_t* rax_3 = sub_140b750d0(arg2, &var_278)
uint64_t var_248 = 0
int32_t i_2 = rax_3[1].d
int64_t rbx_1 = *rax_3
int32_t i_3 = i_2

if (i_2 != 0)
    sub_14061cb30(&var_248, i_2, 0)
    rdi = var_248
    uint64_t rcx_5 = rdi
    int64_t rbx_2 = rbx_1 - rdi
    int32_t i
    
    do
        *rcx_5 = *(rbx_2 + rcx_5)
        void* rax_5 = *(rbx_2 + rcx_5 + 8)
        *(rcx_5 + 8) = rax_5
        
        if (rax_5 != 0)
            *(rax_5 + 8) += 1
        
        rcx_5 += 0x10
        i = i_2
        i_2 -= 1
    while (i != 1)
    i_2 = i_3

int64_t rcx_6 = var_278

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

uint64_t r15 = rdi
int64_t rax_8 = (sx.q(i_2) << 4) + rdi
int64_t* rsi
int64_t* var_18 = rsi
var_278 = rax_8

if (rdi == rax_8)
label_140b85671:
    rsi.b = 1
else
    while (true)
        int64_t* rdi_1 = *(r15 + 8)
        int64_t* rcx_7 = *r15
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int64_t* rax_10 = (**rcx_7)(rcx_7)
        rsi = rax_10[1]
        int64_t* r12_1 = *rax_10
        
        if (rsi != 0)
            rsi[1].d += 1
        
        int64_t var_218 = 0
        int64_t var_210_1 = 0
        void var_208
        sub_140b77b60(&var_208)
        int64_t var_268 = 0
        int32_t var_260_1 = 0
        sub_1405947f0(&var_268, 5)
        int32_t rax_11 = var_260_1 + 5
        var_260_1 = rax_11
        
        if (rax_11 s> 0)
            sub_140594770(&var_268)
        
        UnDecorator::getReferenceType(var_268, u"File", 0xa)
        int64_t var_230
        int64_t* rax_12
        int512_t zmm1_1
        rax_12, zmm1_1 = sub_140b75430(r12_1, &var_230, &var_268)
        
        if (&var_218 != rax_12)
            int64_t rcx_13 = var_218
            
            if (rcx_13 != 0)
                zmm1_1 = sub_140a74f90(rcx_13)
            
            var_218 = *rax_12
            *rax_12 = 0
            var_210_1.d = rax_12[1].d
            var_210_1:4.d = *(rax_12 + 0xc)
            rax_12[1] = 0
        
        int64_t rcx_15 = var_230
        
        if (rcx_15 != 0)
            zmm1_1 = sub_140a74f90(rcx_15)
        
        int64_t rcx_16 = var_268
        
        if (rcx_16 != 0)
            zmm1_1 = sub_140a74f90(rcx_16)
        
        int64_t var_258 = 0
        int32_t var_250_1 = 0
        sub_1405947f0(&var_258, 0xb)
        int32_t rax_15 = var_250_1 + 0xb
        var_250_1 = rax_15
        
        if (rax_15 s> 0)
            sub_140594770(&var_258)
        
        UnDecorator::getReferenceType(var_258, u"Descriptor", 0x16)
        char rax_17 = sub_140b83b20(&var_208, *sub_140b752e0(r12_1, &var_258, zmm1_1), arg3)
        int64_t rcx_22 = var_258
        int64_t* rbx_3
        rbx_3.b = rax_17 == 0
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        if (rbx_3.b != 0)
            sub_140b78990(&var_208)
            int64_t rcx_38 = var_218
            
            if (rcx_38 != 0)
                sub_140a74f90(rcx_38)
            
            if (rsi != 0)
                rsi[1].d -= 1
                
                if (rsi[1].d == 1)
                    (**rsi)(rsi)
                    int32_t temp6_1 = *(rsi + 0xc)
                    *(rsi + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rsi + 8))(rsi, 1)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp8_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            rsi.b = 0
            break
        
        int64_t rbx_4 = sx.q(arg1[1].d)
        int32_t rax_18 = (rbx_4 + 1).d
        arg1[1].d = rax_18
        
        if (rax_18 s> *(arg1 + 0xc))
            sub_140b8a4a0(arg1)
        
        int64_t* rbx_6 = rbx_4 * 0x1c8 + *arg1
        sub_140596d10(rbx_6, &var_218)
        sub_140b77700(&rbx_6[2], &var_208)
        sub_140b78990(&var_208)
        int64_t rcx_27 = var_218
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        if (rsi != 0)
            rsi[1].d -= 1
            
            if (rsi[1].d == 1)
                (**rsi)(rsi)
                int32_t temp10_1 = *(rsi + 0xc)
                *(rsi + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rsi + 8))(rsi, 1)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp11_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        r15 += 0x10
        
        if (r15 == var_278)
            goto label_140b85671

uint64_t r15_1 = var_248

if (i_2 != 0)
    int64_t* rdi_2 = r15_1 + 8
    int32_t i_1
    
    do
        int64_t* rbx_7 = *rdi_2
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t temp3_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    int64_t r8_2 = *rbx_7
                    (*(r8_2 + 8))(rbx_7, 1, r8_2)
        
        rdi_2 = &rdi_2[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (r15_1 != 0)
    sub_140a74f90(r15_1)

__security_check_cookie(rax_1 ^ &var_298)
return zx.q(rsi.b)
