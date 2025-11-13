// 函数: sub_141bd7520
// 地址: 0x141bd7520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int32_t var_208 = 0

if ((*(arg1 + 0x1b4) & 0x20) == 0)
    (*(*arg1 + 0x2c0))()

void (* var_220)(int64_t* arg1, int64_t* arg2)
int32_t* var_218

if (sub_1420fea90(&arg1[0x43]) != 0)
    void* rdi_1 = arg1[0x35]
    var_208.q = arg1
    void (* rax_4)(int64_t* arg1, int64_t* arg2) = *(rdi_1 + 0x28)
    
    if (rax_4 != 0)
        var_220 = rax_4
        sub_141b97000(&var_208, &var_220)
        void* rcx_2 = *(rdi_1 + 0x28)
        var_220 = sub_141b97000
        var_218 = &var_208
        sub_141ba8640(rcx_2, &var_220)

int64_t* rcx_3 = *(arg1[0x35] + 0x28)
void var_1e8
int32_t* rax_6
void (* rcx_4)(int64_t* arg1, int64_t* arg2)
int32_t rbx_1
int32_t* rsi
void (* rdi_2)(int64_t* arg1, int64_t* arg2)

if (rcx_3 == 0)
    int32_t* rax_7 = sub_140e48fc0()
    var_218 = rax_7
    var_220 = &rax_7[4]
    sub_140918950(&var_220, &rax_7[4])
    int64_t var_238_1 = 0x2c8
    void var_227
    void* var_210_1 = &var_227
    sub_140e23ed0(&rax_7[4], "SSpacer")
    int64_t* rax_8
    int128_t zmm1_1
    rax_8, zmm1_1 = sub_140e50180(&var_1e8)
    void* var_1f8
    void (** rax_9)(int64_t* arg1, int64_t* arg2) = sub_140e57660(&var_220, &var_1f8, rax_8, zmm1_1)
    rdi_2 = rax_9[1]
    rcx_4 = *rax_9
    
    if (rdi_2 != 0)
        *(rdi_2 + 8) += 1
    
    rsi = var_218
    rbx_1 = 0x1e
    rax_6 = rdi_2
else
    char var_228 = 0
    char* var_200_1 = &var_228
    var_208.q = sub_141b970e0
    sub_141befea0(rcx_3, &var_220, &var_208)
    rsi = var_218
    rbx_1 = 1
    rcx_4 = var_220
    rax_6 = rsi
    rdi_2 = var_220

*arg2 = rcx_4
arg2[1] = rax_6

if (rax_6 != 0)
    rax_6[2] += 1

if ((rbx_1.b & 0x10) != 0)
    rbx_1 &= 0xffffffef
    
    if (rdi_2 != 0)
        int32_t temp0_1 = *(rdi_2 + 8)
        *(rdi_2 + 8) -= 1
        
        if (temp0_1 == 1)
            (**rdi_2)(rdi_2)
            int32_t temp2_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

if ((rbx_1.b & 8) != 0)
    rbx_1 &= 0xfffffff7
    int64_t* var_1f0
    
    if (var_1f0 != 0)
        var_1f0[1].d -= 1
        
        if (var_1f0[1].d == 1)
            (**var_1f0)(var_1f0)
            int32_t temp4_1 = *(var_1f0 + 0xc)
            *(var_1f0 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_1f0 + 8))(var_1f0, 1)

if ((rbx_1.b & 4) != 0)
    rbx_1 &= 0xfffffffb
    
    if (var_218 != 0)
        int32_t temp3_1 = var_218[2]
        var_218[2] -= 1
        
        if (temp3_1 == 1)
            (**var_218)(var_218)
            int32_t temp5_1 = var_218[3]
            var_218[3] -= 1
            
            if (temp5_1 == 1)
                (*(*var_218 + 8))(var_218, 1)

if ((rbx_1.b & 2) != 0)
    rbx_1 &= 0xfffffffd
    void var_38
    sub_140745b20(&var_38)
    sub_140ddea30(&var_1e8)

if ((rbx_1.b & 1) != 0 && rsi != 0)
    int32_t temp6_1 = rsi[2]
    rsi[2] -= 1
    
    if (temp6_1 == 1)
        (**rsi)(rsi)
        int32_t temp7_1 = rsi[3]
        rsi[3] -= 1
        
        if (temp7_1 == 1)
            int64_t r8_4 = *rsi
            (*(r8_4 + 8))(rsi, 1, r8_4)

__security_check_cookie(rax_1 ^ &var_258)
return arg2
