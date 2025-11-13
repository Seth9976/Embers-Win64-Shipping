// 函数: sub_1425e3510
// 地址: 0x1425e3510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
arg1[1] = 0
int64_t* r15 = arg2
arg1[2] = 0
void*** result = arg1
*arg1 = &data_143449b38
arg1[3] = 0
arg1[4] = 0
arg1[6] = *arg2
void* rax_1 = arg2[1]
arg1[7] = rax_1

if (rax_1 != 0)
    *(rax_1 + 0xc) += 1

__builtin_memset(&arg1[8], 0, 0x40)
void* r14 = &arg1[8]
void* r13 = &result[0x1e]
void* rcx = arg1 + 0x80
*(rcx + 0x1c) = 0x80
void* rax_2 = *(rcx + 0x10)

if (rax_2 != 0)
    rcx = rax_2

__builtin_memset(rcx, 0, 0x1c)
result[0x14].d = 0xffffffff
*(result + 0xa4) = 0
result[0x16] = 0
result[0x17].d = 0
result[0x18] = 0
result[0x19] = 0
result[0x1a] = 2
result[0x1b] = 0
result[0x1c] = 0
result[0x1d] = 2
*r13 = 0
*(r13 + 8) = 0
result[0x20] = 0
result[0x21] = 0
result[0x22] = 2
result[0x23] = 0
result[0x24] = 0
result[0x25] = 2
result[0x26] = 0
result[0x27] = 0
result[0x28] = 2
result[0x29] = 0
result[0x2a] = 0
result[0x2b] = 2
result[0x2c] = 0
int16_t* var_118 = nullptr
int32_t var_110 = 0
sub_140af2b60()

if (sub_140b2acc0(&data_143dbb3f0, u"SessionFilter=", &var_118, 1) != 0)
    int32_t rax_4 = sub_140a23cf0(&var_118, &data_142e5c1c0, 0, 0, 0xffffffff)
    int32_t r14_1 = rax_4
    
    if (rax_4 != 0xffffffff)
        while (true)
            int32_t rdi_2
            int16_t* r15_1
            
            if (var_110 == 0)
                r15_1 = &data_142d40450
                rdi_2 = 0
            else
                r15_1 = var_118
                rdi_2 = var_110 - 1
            
            if (r14_1 s< 0)
                rdi_2 = 0
            else if (r14_1 s< rdi_2)
                rdi_2 = r14_1
            
            int32_t rax_5 = 0
            int64_t var_108 = 0
            int64_t var_100_1 = 0
            int64_t rsi_1 = 0
            
            if (r15_1 != 0 && *r15_1 != 0 && rdi_2 s> 0)
                if (rdi_2 + 1 s> 0)
                    sub_1405947f0(&var_108, rdi_2 + 1)
                    rax_5 = var_100_1:4.d
                    rbx = var_100_1.d
                    rsi_1 = var_108
                
                rbx += rdi_2 + 1
                var_100_1.d = rbx
                
                if (rbx s> rax_5)
                    sub_140594770(&var_108)
                    rbx = var_100_1.d
                    rsi_1 = var_108
                
                UnDecorator::getReferenceType(rsi_1, r15_1, rdi_2 * 2)
                *(rsi_1 + (sx.q(rbx) << 1) - 2) = 0
            
            int64_t rdi_3 = sx.q(*(r13 + 8))
            int32_t rax_7 = (rdi_3 + 1).d
            *(r13 + 8) = rax_7
            
            if (rax_7 s> *(r13 + 0xc))
                sub_1405a4f90(r13)
            
            int64_t* rdi_5 = (rdi_3 << 4) + *r13
            *rdi_5 = 0
            rdi_5[1].d = rbx
            
            if (rbx != 0)
                sub_1405a4c70(rdi_5, rbx, 0)
                memcpy(*rdi_5, rsi_1, rbx * 2)
            else
                *(rdi_5 + 0xc) = 0
            
            int32_t rax_9 = var_110
            int32_t rdx_6 = rax_9 - 1
            
            if (rax_9 == 0)
                rdx_6 = 0
            
            int32_t rdx_7 = rdx_6 - r14_1
            int32_t rcx_8 = rax_9 - 1
            
            if (rax_9 == 0)
                rcx_8 = 0
            
            int32_t r8_5
            
            if (rdx_7 - 1 s>= 0)
                r8_5 = rcx_8
                
                if (rdx_7 s<= rcx_8)
                    r8_5 = rdx_7 - 1
            else
                r8_5 = 0
            
            int32_t rcx_9 = rcx_8 - r8_5
            int32_t rbx_2 = rax_9 - 1
            
            if (rax_9 == 0)
                rbx_2 = 0
            
            if (rcx_9 s>= 0)
                if (rcx_9 s< rbx_2)
                    rbx_2 = rcx_9
                
                if (rbx_2 != 0)
                    if (rax_9 != rbx_2)
                        int16_t* rcx_12 = var_118
                        memmove(rcx_12, &rcx_12[sx.q(rbx_2)], (rax_9 - rbx_2) * 2)
                        rax_9 = var_110
                    
                    var_110 = rax_9 - rbx_2
            
            r14_1 = sub_140a23cf0(&var_118, &data_142e5c1c0, 0, 0, 0xffffffff)
            
            if (rsi_1 != 0)
                sub_140a74f90(rsi_1)
            
            if (r14_1 == 0xffffffff)
                break
            
            rbx = 0
        
        result = arg1
        r15 = arg2
    
    int64_t rbx_3 = sx.q(*(r13 + 8))
    int32_t rax_12 = (rbx_3 + 1).d
    *(r13 + 8) = rax_12
    
    if (rax_12 s> *(r13 + 0xc))
        sub_1405a4f90(r13)
    
    int64_t* rbx_5 = (rbx_3 << 4) + *r13
    *rbx_5 = 0
    int16_t* rsi_2 = var_118
    rbx_5[1].d = var_110
    
    if (var_110 != 0)
        sub_1405a4c70(rbx_5, var_110, 0)
        memcpy(*rbx_5, rsi_2, var_110 * 2)
    else
        *(rbx_5 + 0xc) = 0
    
    r14 = &result[8]

int32_t var_b0 = 0
int64_t (* var_b8)(void* arg1, char* arg2, int64_t* arg3) = sub_1425e5b90
int32_t var_58 = 0
uint64_t (* var_60)(void* arg1, int64_t* arg2, int64_t* arg3) = sub_1425e5120
int64_t arg_18
sub_140b58170(&arg_18, "FSessionManager", 1)
int64_t var_a8 = *r15
int64_t* rax_14 = r15[1]

if (rax_14 != 0)
    *(rax_14 + 0xc) += 1

int64_t var_6c = arg_18
char var_98 = 0
int64_t var_90 = 0
int32_t var_88 = 0
void** var_80 = nullptr
int32_t var_74 = 0
char var_70 = 0
int64_t* rax_16 = sub_140a242a0()
int64_t r8_10 = *rax_16
int32_t var_64 = (*(r8_10 + 0x10))(rax_16, 0, r8_10)
void*** rax_18 = j_sub_140a82f30(0x20)
void*** rbx_6 = rax_18

if (rax_18 == 0)
    rbx_6 = nullptr
else
    rbx_6[1] = result
    *rbx_6 = &data_143449bb0
    *(rbx_6 + 0x10) = var_60.o

void*** rax_19 = j_sub_140a82f30(0x18)

if (rax_19 == 0)
    rax_19 = nullptr
else
    rax_19[1].d = 1
    *rax_19 = &data_142d42e98
    *(rax_19 + 0xc) = 1
    rax_19[2] = rbx_6

int32_t var_78 = 1
sub_1405a4f90(&var_80)
void** rdi_7 = var_80
*rdi_7 = rbx_6
rdi_7[1] = rax_19
int64_t var_d0_1 = 0
int64_t var_d8_1 = 0
void*** rax_22 = j_sub_140a82f30(0x20)
void*** rbx_7 = rax_22

if (rax_22 == 0)
    rbx_7 = nullptr
else
    rbx_7[1] = result
    *rbx_7 = &data_143449bc0
    *(rbx_7 + 0x10) = var_b8.o

void*** rax_23 = j_sub_140a82f30(0x18)

if (rax_23 == 0)
    rax_23 = nullptr
else
    rax_23[1].d = 1
    *rax_23 = &data_142d42e98
    *(rax_23 + 0xc) = 1
    rax_23[2] = rbx_7

int64_t rbx_8 = sx.q(var_78)
int32_t rax_24 = (rbx_8 + 1).d
int32_t var_78_1 = rax_24

if (rax_24 s> var_74)
    sub_1405a4f90(&var_80)
    rdi_7 = var_80

int64_t rcx_23 = rbx_8 * 2
rdi_7[rcx_23] = rbx_7
rdi_7[rcx_23 + 1] = rax_23
int64_t var_c0_1 = 0
int64_t var_c8_1 = 0
int64_t var_e8
sub_141ffcd60(&var_a8, &var_e8)
int64_t* var_e0

if (r14 != &var_e8)
    *r14 = var_e8
    var_e8 = 0
    sub_1405aeff0(r14 + 8, &var_e0)

int64_t* rcx_26 = var_e0

if (rcx_26 != 0)
    rcx_26[1].d -= 1
    
    if (rcx_26[1].d == 1)
        int64_t* rbx_9 = var_e0
        (**rbx_9)(rbx_9)
        int32_t rax_30 = *(rbx_9 + 0xc)
        *(rbx_9 + 0xc) -= 1
        
        if (rax_30 == 1)
            int64_t* rcx_28 = var_e0
            (*(*rcx_28 + 8))(rcx_28, 1)

sub_140596e10(&var_80)
sub_140745b20(&var_90)

if (rax_14 != 0)
    int32_t rsi_3 = *(rax_14 + 0xc)
    *(rax_14 + 0xc) -= 1
    
    if (rsi_3 == 1)
        (*(*rax_14 + 8))(rax_14, zx.q(rsi_3))

int32_t var_b0_1 = 0
void*** var_f8 = nullptr
int64_t (* var_b8_1)(void* arg1) = sub_1425e6070
void*** rax_34 = sub_140a84c80(0, 0x30, 0)
var_f8 = rax_34
int32_t var_f0 = 3

if (rax_34 != 0)
    rax_34[1] = result
    *rax_34 = &data_143449cb8
    *(rax_34 + 0x10) = var_b8_1.o
    rax_34[5] = sub_140a387b0()

void arg_20
result[0x2c] = *sub_140a208a0(sub_140b18f30(), &arg_20, &var_f8, 0x3f800000)
void*** rax_39

if (var_f0 == 0)
    rax_39 = var_f8
label_1425e3c44:
    
    if (rax_39 != 0)
        sub_140a74f90(rax_39)
else
    void*** rcx_34 = var_f8
    
    if (rcx_34 != 0)
        (*rcx_34)[7](rcx_34, 0)
        rax_39 = var_f8
        
        if (rax_39 != 0)
            rax_39 = sub_140a84c80(rax_39, 0, 0)
            var_f8 = rax_39
        
        int32_t var_f0_1 = 0
        goto label_1425e3c44
sub_1425e6c10(result)
int16_t* rcx_38 = var_118

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

return result
