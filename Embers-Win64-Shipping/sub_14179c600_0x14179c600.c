// 函数: sub_14179c600
// 地址: 0x14179c600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* r14 = arg4
int64_t (* var_e8)(int64_t* arg1, int32_t* arg2) = arg5
int64_t var_c0
int64_t r9 = sub_1409afea0(arg3, &var_c0)
int64_t* var_b0 = &var_c0
int64_t (* var_a8)(int64_t* arg1, int32_t* arg2) = arg1
int32_t arg_28
int32_t* var_a0 = &arg_28
int64_t** var_f0 = &var_b0
int64_t (* var_f8)(int64_t* arg1, int32_t* arg2) = sub_1417a8e90
int32_t var_b8
sub_1417487a0(var_b8, &var_f8, 0, r9)
int32_t var_6c = 0x80
int64_t rcx_2 = 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t i = 0
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0

if (*(arg1 + 0x1a0) s> 0)
    int64_t* r12_1 = nullptr
    
    do
        int64_t rax_2 = *(arg1 + 0x198)
        int64_t* j = *(r12_1 + rax_2)
        
        for (void* r14_1 = &j[sx.q(*(r12_1 + rax_2 + 8))]; j != r14_1; j = &j[1])
            int64_t* rdi_1 = *j
            int64_t* rcx_3 = nullptr
            
            if (*(rdi_1 + 0xc) u>= 2)
                rcx_3 = rdi_1
            
            if (rcx_3 != 0)
                void* rdx_2 = *rcx_3
                int64_t r8 = sx.q(rcx_3[1].d)
                void var_d8
                
                if (*(r8 + *(rdx_2 + 0x398)) == 4
                        && *sub_1408296b0(&var_98, &var_d8, rdi_1) == 0xffffffff
                        && *(r8 + *(rdx_2 + 0x368)) == 0)
                    sub_140b9b5d0(&var_98, &var_f8)
                    char* var_100_1 = nullptr
                    uint32_t rcx_7 = (rdi_1 u>> 4).d
                    int32_t rdx_6 = (0x9e3779b9 - rcx_7) ^ rcx_7 << 8
                    *var_f0 = rdi_1
                    var_f0[1].d = 0xffffffff
                    int32_t r8_4 = neg.d(rdx_6 + rcx_7) ^ rdx_6 u>> 0xd
                    int32_t rcx_10 = (rcx_7 - rdx_6 - r8_4) ^ r8_4 u>> 0xc
                    int32_t rdx_9 = (rdx_6 - rcx_10 - r8_4) ^ rcx_10 << 0x10
                    int32_t r8_7 = (r8_4 - rdx_9 - rcx_10) ^ rdx_9 u>> 5
                    int32_t rcx_13 = (rcx_10 - rdx_9 - r8_7) ^ r8_7 u>> 3
                    int32_t rdx_12 = (rdx_9 - rcx_13 - r8_7) ^ rcx_13 << 0xa
                    void var_d4
                    sub_140824480(&var_98, &var_d4, (r8_7 - rdx_12 - rcx_13) ^ rdx_12 u>> 0xf, 
                        var_f0, var_f8.d, var_100_1)
        
        i += 1
        r12_1 = &r12_1[2]
    while (i s< *(arg1 + 0x1a0))
    
    rcx_2 = var_58
    r14 = arg4

if (not(data_1439b8e60 f>= 1f))
    int512_t zmm1
    zmm1.o = arg_28
    int64_t* rbx_1 = *(arg1 + 0x260)
    
    if (rbx_1[0x11].b != 0)
        sub_14175a890(rbx_1, 0)
    
    sub_14177a2d0(arg1 + 0x110, &rbx_1[0x36])
    int64_t* rbx_2 = *(arg1 + 0xf0)
    int64_t rdi_2 = 0
    uint64_t rsi_3 = sx.q(*(arg1 + 0xf8)) << 3 u>> 3
    
    if (rbx_2 u> &rbx_2[sx.q(*(arg1 + 0xf8))])
        rsi_3 = 0
    
    if (rsi_3 != 0)
        do
            int64_t* rcx_18 = *rbx_2
            (*(*rcx_18 + 0x38))(rcx_18)
            rdi_2 += 1
            rbx_2 = &rbx_2[1]
        while (rdi_2 != rsi_3)
    
    int64_t* rbx_3 = *(arg1 + 0x260)
    
    if (rbx_3[0x11].b != 0)
        sub_14175a890(rbx_3, 0)
    
    int64_t r9_2 = sub_14177e3e0(arg1 + 0x110, &rbx_3[0x39])
    int64_t rdi_3 = 0
    int64_t* rbx_4 = *(arg1 + 0xf0)
    uint64_t rsi_5 = sx.q(*(arg1 + 0xf8)) << 3 u>> 3
    
    if (rbx_4 u> &rbx_4[sx.q(*(arg1 + 0xf8))])
        rsi_5 = 0
    
    if (rsi_5 != 0)
        do
            int64_t* rcx_21 = *rbx_4
            r9_2 = (*(*rcx_21 + 0x40))(rcx_21)
            rdi_3 += 1
            rbx_4 = &rbx_4[1]
        while (rdi_3 != rsi_5)
    
    var_f8 = arg1
    int32_t* var_f0_1 = &arg_28
    int64_t (** var_e0_1)(int64_t* arg1, int32_t* arg2) = &var_f8
    var_e8 = sub_1417a8c60
    sub_1417487a0(*(arg3 + 8) - *(arg3 + 0x34), &var_e8, 0, r9_2)
    rcx_2 = var_58

int32_t var_50_1 = 0

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t var_90
bool cond:0 = var_90:4.d == 0
var_90.d = 0

if (not(cond:0))
    sub_1405a5410(&var_98, 0)

int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
int64_t var_88
sub_14059a8e0(&var_88, 0)
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t rcx_27 = var_98

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

int64_t rcx_28 = var_c0

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

r14[9].d = 0
int64_t rcx_29 = r14[8]

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

r14[1].d = 0

if (*(r14 + 0xc) != 0)
    sub_1405a5410(r14, 0)

r14[6].d = 0xffffffff
*(r14 + 0x34) = 0
void* result = sub_14059a8e0(&r14[2], 0)
int64_t rcx_32 = r14[4]

if (rcx_32 != 0)
    result = sub_140a74f90(rcx_32)

int64_t rcx_33 = *r14

if (rcx_33 != 0)
    result = sub_140a74f90(rcx_33)

__security_check_cookie(rax_1 ^ &var_128)
return result
