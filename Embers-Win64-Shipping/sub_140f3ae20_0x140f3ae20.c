// 函数: sub_140f3ae20
// 地址: 0x140f3ae20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
*(arg1 + 0x420) = *(arg2 + 0x1b0)
int64_t rax_3 = *(arg2 + 0x1b8)
*(arg1 + 0x4cc) &= 0xe5
*(arg1 + 0x428) = rax_3
*(arg1 + 0x390) = 0
*(arg1 + 0x3c4) = 0
*(arg1 + 0x400) = data_143dbb1f0.d
*(arg1 + 0x404) = data_143dbb1f0:4.d.d
sub_1407473e0(arg1 + 0x408, arg2 + 0x208)
int32_t rax_4 = *(arg2 + 0x1d0)
*(arg1 + 0x4cc) &= 0x1f
char rcx_1 = *(arg1 + 0x4cc)
*(arg1 + 0x418) = rax_4
*(arg1 + 0x430) = *(arg2 + 0x218)
*(arg1 + 0x3b8) = 0
*(arg1 + 0x3f4) = *(arg2 + 0x1f0)
*(arg1 + 0x4cc) = ((*(arg2 + 0x1f1) ^ rcx_1) & 1) ^ rcx_1
*(arg1 + 0x4c8) = *(arg2 + 0x1f4)
*(arg1 + 0x3f8) = *(arg2 + 0x1fc)
*(arg1 + 0x3fc) = *(arg2 + 0x1f8)
char rax_11 = *(arg2 + 0x200)
*(arg1 + 0x4cd) &= 0xfe
*(arg1 + 0x29) |= 0x40
*(arg1 + 0x3fd) = rax_11
void* rax_12 = *(arg2 + 0x1c0)
void* var_238
char var_228
int64_t* var_220
int32_t var_208
char var_200

if (rax_12 == 0)
    int64_t** rax_18 = sub_140f42180(arg1, &var_228)
    
    if (arg1 + 0x3a8 != rax_18)
        *(arg1 + 0x3a8) = *rax_18
        *rax_18 = nullptr
        int64_t rcx_11 = rax_18[1]
        int64_t* rbx_3 = *(arg1 + 0x3b0)
        
        if (rcx_11 != rbx_3)
            rax_18[1] = 0
            *(arg1 + 0x3b0) = rcx_11
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp4_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t* rbx_4 = var_220
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp1_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    var_200 = 1
    int64_t var_1f8_1 = 0
    *(*(arg1 + 0x3a8) + 0x522) = *(arg2 + 0x1d6)
    int32_t zmm1_1 = *(arg2 + 0x1dc)
    void* rcx_17 = *(arg1 + 0x3a8)
    var_208 = *(arg2 + 0x1d8)
    int32_t var_204_1 = zmm1_1
    int32_t var_1f0 = 0
    sub_140f61640(rcx_17, &var_208)
    var_1f8_1.b = 1
    var_208.o = *(arg2 + 0x1e0)
    var_1f0.q = 0
    int32_t var_1e8_1 = 0
    sub_140f60470(*(arg1 + 0x3a8), &var_208)
    sub_140745b20(&var_1f0)
    void* rcx_20 = *(arg1 + 0x3a8)
    char rax_24 = *(arg2 + 0x1d4)
    var_228 = rax_24
    char var_227_1 = 1
    *(rcx_20 + 0x4b8) = rax_24
    *(rcx_20 + 0x4b9) = 1
    var_220 = nullptr
    int32_t var_218_1 = 0
    sub_1407473e0(rcx_20 + 0x4c0, &var_220)
    sub_140745b20(&var_220)
    sub_140f607e0(*(arg1 + 0x3a8), *(arg2 + 0x1d5))
    *(arg1 + 0x4cc) &= 0xfb
else
    int64_t* rbx_1 = *(arg2 + 0x1c8)
    var_238 = rax_12
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (&var_238 != arg1 + 0x3a8)
        var_238.o = *(arg1 + 0x3a8)
        *(arg1 + 0x3a8) = var_238.o
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    void* rbx_2 = *(arg1 + 0x3a8)
    var_238 = sub_140f5c2b0
    int64_t* var_230_1
    var_230_1.d = 0
    var_228.o = var_238.o
    sub_1407473e0(rbx_2 + 0x508, sub_140f1bc90(&var_238, arg1, &var_228))
    void* rax_17
    
    if (var_230_1.d == 0)
        rax_17 = var_238
    label_140f3b03d:
        
        if (rax_17 != 0)
            sub_140a74f90(rax_17)
    else
        void* rcx_6 = var_238
        
        if (rcx_6 != 0)
            (*(*rcx_6 + 0x38))(rcx_6, 0)
            rax_17 = var_238
            
            if (rax_17 != 0)
                rax_17 = sub_140a84c80(rax_17, 0, 0)
                var_238 = rax_17
            
            var_230_1.d = 0
            goto label_140f3b03d
    *(arg1 + 0x4cc) |= 4

char rbx_5 = *(arg2 + 0x95)
void var_1e0
int64_t* rax_25 = sub_140e4fe80(&var_1e0)
*(rax_25 + 0x95) = rbx_5
rax_25[0x34].d = *(arg1 + 0x418)
var_238 = arg2 + 0x1a0
void*** rax_26 = sub_140f1d0f0()
var_200.q = rax_26
var_208.q = &rax_26[2]
sub_140918950(&var_208, &rax_26[2])
int64_t var_248 = 0x2e0
void** var_1f8_2 = &var_238
int128_t zmm1_2 = sub_140e23ed0(&rax_26[2], "SScrollPanel")

if (rax_26 != 0)
    rax_26[1].d += 1

if (arg1 + 0x398 == &var_228)
label_140f3b28e:
    
    if (rax_26 != 0)
        rax_26[1].d -= 1
        
        if (rax_26[1].d == 1)
            (**rax_26)(rax_26)
            int32_t temp8_1 = *(rax_26 + 0xc)
            *(rax_26 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*rax_26)[1](rax_26, 1)
else
    *(arg1 + 0x398) = &rax_26[2]
    void*** rsi_2 = *(arg1 + 0x3a0)
    
    if (rax_26 == rsi_2)
        goto label_140f3b28e
    
    *(arg1 + 0x3a0) = rax_26
    
    if (rsi_2 != 0)
        rsi_2[1].d -= 1
        
        if (rsi_2[1].d == 1)
            (**rsi_2)(rsi_2)
            int32_t temp12_1 = *(rsi_2 + 0xc)
            *(rsi_2 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*rsi_2)[1](rsi_2, 1)

sub_140f28430(&var_208, &var_228, rax_25, zmm1_2)
int64_t* rbx_7 = var_220

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        (**rbx_7)(rbx_7)
        int32_t temp11_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rbx_7 + 8))(rbx_7, 1)

int64_t* rbx_8 = var_200.q

if (rbx_8 != 0)
    rbx_8[1].d -= 1
    
    if (rbx_8[1].d == 1)
        (**rbx_8)(rbx_8)
        int32_t temp13_1 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*rbx_8 + 8))(rbx_8, 1)

sub_140ddea30(&var_1e0)

if (*(arg1 + 0x418) != 1)
    sub_140f3ec80(arg1)
else
    sub_140f423a0(arg1)

int64_t result = sub_140f61190(*(arg1 + 0x3a8), (zx.o(0)).d, 1f)
__security_check_cookie(rax_1 ^ &var_268)
return result
