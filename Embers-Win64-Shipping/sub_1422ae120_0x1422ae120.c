// 函数: sub_1422ae120
// 地址: 0x1422ae120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = 0
int32_t arg_8 = 0
uint128_t var_18

if (data_143f52f10 != 0)
    uint128_t zmm0 = data_143f52f10.o
    var_18 = zmm0
    void* rax_1 = _mm_bsrli_si128(zmm0, 8).q
    data_143f52f18 = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    sub_141ec9410(data_143f5b298, &var_18)
    int64_t* rbx_1 = data_143f52f18
    data_143f52f10 = 0
    
    if (rbx_1 != 0)
        data_143f52f18 = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

void*** rax_4 = j_sub_140a82f30(0x1a0)
int64_t var_28
void*** rdi

if (rax_4 == 0)
    rdi = nullptr
else
    var_28 = 0
    int32_t var_20_1 = 0
    sub_1405947f0(&var_28, 0x10)
    int32_t rcx_5 = var_20_1 + 0x10
    var_20_1 = rcx_5
    
    if (rcx_5 s> 0)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, u"HealthSnapshots", 0x20)
    rdi = sub_141eb5da0(rax_4, sub_140b21590(&arg_8), &var_28)
    rsi = 1

int64_t* rax_7 = j_sub_140a82f30(0x18)
int64_t* rbx_3 = rax_7

if (rax_7 == 0)
    rbx_3 = nullptr
else
    rax_7[1].d = 1
    *(rax_7 + 0xc) = 1
    *rbx_3 = &data_142e4cf50
    rbx_3[2] = rdi

var_18:8.q = rbx_3
data_143f52f10 = rdi
int64_t* rdi_1 = data_143f52f18
var_18.q = 0

if (rbx_3 == rdi_1)
label_1422ae2d3:
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp4_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
else
    var_18:8.q = 0
    data_143f52f18 = rbx_3
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
        
        rbx_3 = var_18:8.q
        goto label_1422ae2d3

if ((rsi & 1) != 0)
    int64_t rcx_14 = var_28
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)

void* rax_12 = data_143f52f18
var_18 = data_143f52f10.o

if (rax_12 != 0)
    *(rax_12 + 8) += 1

sub_141eb8e00(data_143f5b298, &var_18)
jump(**data_143f52f10)
