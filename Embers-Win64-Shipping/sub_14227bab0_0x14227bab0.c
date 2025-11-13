// 函数: sub_14227bab0
// 地址: 0x14227bab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* rdi = nullptr
int32_t i = 0
int32_t var_e8 = 0
void* result_1 = nullptr
int32_t result_2 = 0
int32_t var_6c = 4

if (arg1[0x24].d s> 0)
    int64_t rsi_1 = 0
    
    do
        int32_t* rcx_1 = arg1[0x23] + rsi_1
        
        if (*(rcx_1 + 8) == 0)
            sub_140bb5c10(&arg1[0x25], *rcx_1)
        else
            sub_1419f6440(&arg1[0x25], rcx_1, &rcx_1[2])
        
        i += 1
        rsi_1 += 0x10
    while (i s< arg1[0x24].d)

arg1[0x24].d = 0

if (*(arg1 + 0x124) != 0)
    sub_1405a5410(&arg1[0x23], 0)

sub_14227ec70(arg1, &arg1[0x11])
void* rax_2 = arg1[0x11]
int64_t* var_48 = nullptr
int32_t i_5 = 0
int32_t var_3c = 4
void var_98
void* var_68

if (rax_2 != 0)
    i_5 = 1
    var_68 = rax_2
    *(rax_2 + 0x48) += 1
    int64_t result_6 = sx.q(result_2)
    int32_t result_3 = (result_6 + 1).d
    result_2 = result_3
    
    if (result_3 s> var_6c)
        sub_14083a490(&var_98, result_6.d)
    
    void* result_4 = &var_98
    
    if (result_1 != 0)
        result_4 = result_1
    
    void* r12_1 = result_4 + (result_6 << 3)
    int64_t* var_e0
    int32_t var_d8
    int64_t* rbx
    
    if (r12_1 == 0)
        rbx = var_e0
    else
        int64_t* rax_3 = sub_140a84c80(0, 0x30, 0)
        var_e0 = rax_3
        rbx = rax_3
        var_d8 = 3
        
        if (rax_3 != 0)
            rbx[1] = arg1
            *rbx = &data_142d3fe58
            rbx[2] = sub_142276a40
            rbx[4] = sub_140a387b0()
            *rbx = &data_142d3feb0
        
        void var_c8
        int64_t* rax_5 = sub_14199c5a0(&var_c8, &var_68, 2)
        int64_t* rsi_3 = *rax_5 + 0x10
        *rsi_3 = 0
        rsi_3[1].d = 0
        
        if (&var_e0 != rsi_3 && rbx != 0)
            int64_t r8_2 = *rbx
            (*(r8_2 + 0x40))(rbx, rsi_3, r8_2)
        
        rsi_3[2].d = 2
        void* rcx_9 = *rax_5
        int32_t r8_3 = rax_5[2].d
        int64_t* rdx_8 = rax_5[1]
        void* rax_6 = *(rcx_9 + 0x30)
        *r12_1 = rax_6
        
        if (rax_6 != 0)
            *(rax_6 + 0x48) += 1
            rbx = var_e0
        
        sub_140978a40(rcx_9, rdx_8, r8_3, 1)
        rdi = 1
    
    if ((rdi.b & 1) != 0)
        if (var_d8 == 0)
            goto label_14227bce4
        
        if (rbx != 0)
            (*(*rbx + 0x38))(rbx, 0)
            int64_t* rax_8 = sub_140a84c80(rbx, 0, 0)
            rbx = rax_8
            var_e0 = rax_8
        label_14227bce4:
            
            if (rbx != 0)
                sub_140a74f90(rbx)
    
    rdi = var_48

int32_t i_3 = i_5
int64_t* rbx_1 = &var_68

if (rdi != 0)
    rbx_1 = rdi

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t* rcx_13 = *rbx_1
        
        if (rcx_13 != 0)
            rcx_13[9].d -= 1
            
            if (rcx_13[9].d == 1)
                sub_140a2f6e0(rcx_13)
        
        rbx_1 = &rbx_1[1]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rdi = var_48

if (rdi != 0)
    sub_140a74f90(rdi)

void* result = zx.q(result_2)

if (result.d != 0)
    int64_t* rcx_18
    
    if (result.d s<= 1)
        result = &var_98
        rcx_18 = arg1[0x13]
        
        if (result_1 != 0)
            result = result_1
        
        void* rdx_12 = *result
        arg1[0x13] = rdx_12
        
        if (rdx_12 != 0)
            *(rdx_12 + 0x48) += 1
        
        goto label_14227be8d
    
    int32_t rbx_3
    
    if (sub_140b011d0() == 0)
        rbx_3 = 2
    else if (sub_140b70ca0() s< 3)
        rbx_3 = 2
    else if (sub_140a54810() == 0)
        rbx_3 = 2
    else
        sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, u"SingleThreadedPhysics") != 0)
            rbx_3 = 2
        else
            int32_t rax_14 = data_143f525f0
            bool cond:2_1
            
            if (rax_14 == 0x400)
                if (data_143cf0848 == 0 || data_143f525fc != 1)
                    cond:2_1 = data_14399e5cc != 0
                    goto label_14227bdc0
                
                rbx_3 = data_143f525f8 | 0xff
            else if (rax_14 != 0x800)
                rbx_3 = data_143f525f4 | rax_14 | 0xff
            else
                cond:2_1 = data_14399e5c8 != 0
            label_14227bdc0:
                
                if (cond:2_1)
                    rbx_3 = data_143f525f4 | rax_14 | 0xff
                else
                    rbx_3 = data_143f525f8 | 0xff
    
    void var_b0
    void** rax_15 = sub_140a22cb0(&var_b0, &var_98, 2)
    *(*rax_15 + 0x10) = rbx_3
    void* rcx_17 = *rax_15
    int32_t r8_4 = rax_15[2].d
    int64_t* rdx_10 = rax_15[1]
    int64_t* rbx_6 = *(rcx_17 + 0x18)
    int64_t* var_d0 = rbx_6
    
    if (rbx_6 != 0)
        rbx_6[9].d += 1
    
    sub_1408c3b70(rcx_17, rdx_10, r8_4, 1)
    result = &var_d0
    
    if (&arg1[0x13] != &var_d0)
        rcx_18 = arg1[0x13]
        arg1[0x13] = rbx_6
    label_14227be8d:
        
        if (rcx_18 != 0)
            result = zx.q(rcx_18[9].d)
            rcx_18[9].d -= 1
            
            if (result.d == 1)
                result = sub_140a2f6e0(rcx_18)
    else if (rbx_6 != 0)
        result = zx.q(rbx_6[9].d)
        rbx_6[9].d -= 1
        
        if (result.d == 1)
            result = sub_140a2f6e0(var_d0)

int64_t** result_5 = result_1
int64_t** result_7 = &var_98
int32_t i_4 = result_2

if (result_5 != 0)
    result_7 = result_5

if (i_4 != 0)
    int32_t i_2
    
    do
        int64_t* rcx_19 = *result_7
        
        if (rcx_19 != 0)
            result = zx.q(rcx_19[9].d)
            rcx_19[9].d -= 1
            
            if (result.d == 1)
                result = sub_140a2f6e0(rcx_19)
        
        result_7 = &result_7[1]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

if (result_1 != 0)
    result = sub_140a74f90(result_1)

__security_check_cookie(rax_1 ^ &var_108)
return result
