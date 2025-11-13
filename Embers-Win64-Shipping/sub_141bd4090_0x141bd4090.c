// 函数: sub_141bd4090
// 地址: 0x141bd4090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
char rbx = *(arg1 + 0x120)
int32_t var_220 = 0
void var_200
int64_t* rax_2 = sub_141b7a440(&var_200)
*(rax_2 + 0x1b1) = rbx
rax_2[0x36].b = *(arg1 + 0x121)
*(rax_2 + 0x1b4) = *(arg1 + 0x124)
rax_2[0x37].d = *(arg1 + 0x128)
void*** rax_6 = j_sub_140a82f30(0x9b8)
void*** rdi = rax_6

if (rax_6 == 0)
    rdi = nullptr
else
    rax_6[1].d = 1
    *(rax_6 + 0xc) = 1
    *rdi = &data_1430849a0
    
    if (rdi != -0x10)
        sub_141b7be50(&rdi[2])

void* var_218 = &rdi[2]
sub_140918950(&var_218, &rdi[2])
int64_t var_258 = 0x9a8
char var_248
char* var_208 = &var_248
void var_230
void** rax_7 = sub_141b8a3e0(&var_218, &var_230, rax_2, sub_140e23ed0(&rdi[2], "SRetainerWidget"))
int64_t* rcx_5 = rax_7[1]

if (rcx_5 != 0)
    rcx_5[1].d += 1

uint128_t var_240

if (arg1 + 0x140 == &var_240)
label_141bd41f8:
    
    if (rcx_5 != 0)
        rcx_5[1].d -= 1
        
        if (rcx_5[1].d == 1)
            (**rcx_5)(rcx_5)
            int32_t temp2_1 = *(rcx_5 + 0xc)
            *(rcx_5 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_5 + 8))(rcx_5, 1)
else
    *(arg1 + 0x140) = *rax_7
    int64_t* rbx_2 = *(arg1 + 0x148)
    
    if (rcx_5 == rbx_2)
        goto label_141bd41f8
    
    *(arg1 + 0x148) = rcx_5
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp6_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* var_228

if (var_228 != 0)
    var_228[1].d -= 1
    
    if (var_228[1].d == 1)
        (**var_228)(var_228)
        int32_t temp5_1 = *(var_228 + 0xc)
        *(var_228 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_228 + 8))(var_228, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp8_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*rdi)[1](rdi, 1)

int64_t* var_58

if (var_58 != 0)
    var_58[1].d -= 1
    
    if (var_58[1].d == 1)
        (**var_58)(var_58)
        int32_t temp9_1 = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_58 + 8))(var_58, 1)

sub_140ddea30(&var_200)
void* rcx_16 = *(arg1 + 0x140)
*(rcx_16 + 0x8f0) = 1
bool rax_17 = data_1439ec460 != 0

if (*(rcx_16 + 0x8f1) != rax_17)
    *(rcx_16 + 0x8f1) = rax_17
    sub_140db2e20(rcx_16 + 0x390)

if (*(arg1 + 0x110) s> 0)
    int64_t* rcx_19 = *(**(arg1 + 0x108) + 0x30)
    int64_t* rdx_4
    int32_t rdi_2
    
    if (rcx_19 == 0)
        uint128_t zmm0_1 = data_143e244b0.o
        var_240 = zmm0_1
        void* rax_19 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_19 != 0)
            *(rax_19 + 8) += 1
        
        rdx_4 = &var_240
        rdi_2 = 2
    else
        var_248 = 0
        var_240:8.q = &var_248
        var_240.q = sub_141b970e0
        sub_141befea0(rcx_19, &var_230, &var_240)
        rdx_4 = &var_230
        rdi_2 = 1
    
    sub_141be09f0(*(arg1 + 0x140), rdx_4)
    
    if ((rdi_2.b & 2) != 0)
        int64_t* rbx_6 = var_240:8.q
        rdi_2 &= 0xfffffffd
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t temp14_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
    
    if ((rdi_2.b & 1) != 0 && var_228 != 0)
        var_228[1].d -= 1
        
        if (var_228[1].d == 1)
            (**var_228)(var_228)
            int32_t temp15_1 = *(var_228 + 0xc)
            *(var_228 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*var_228 + 8))(var_228, 1)

int64_t* rbx_8 = *(arg1 + 0x148)

if (rbx_8 != 0)
    rbx_8[1].d += 1

*arg2 = *(arg1 + 0x140)
arg2[1] = rbx_8

if (rbx_8 != 0)
    rbx_8[1].d += 1
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t temp11_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (temp11_1 == 1)
                int64_t r8_4 = *rbx_8
                (*(r8_4 + 8))(rbx_8, 1, r8_4)

__security_check_cookie(rax_1 ^ &var_278)
return arg2
