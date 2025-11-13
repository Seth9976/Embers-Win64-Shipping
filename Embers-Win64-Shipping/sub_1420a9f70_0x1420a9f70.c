// 函数: sub_1420a9f70
// 地址: 0x1420a9f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
int64_t* rax_1 = (*(*rcx + 0x38))(rcx)
int64_t r8 = *rax_1
uint64_t rbx

if ((*(r8 + 0x30))(rax_1, arg3, r8) != 0)
    rbx.b = 1
else
    int64_t* rcx_2 = arg2[2]
    int64_t* rax_4 = (*(*rcx_2 + 0x38))(rcx_2)
    int64_t rdx = *rax_4
    
    if ((*(rdx + 0x30))(rax_4, rdx) != 0)
        rbx.b = 1
    else
        int64_t* rcx_4 = arg2[4]
        int64_t* rax_7 = (*(*rcx_4 + 0x38))(rcx_4)
        int64_t rdx_1 = *rax_7
        
        if ((*(rdx_1 + 0x30))(rax_7, rdx_1) != 0)
            rbx.b = 1
        else
            rbx = zx.q(*(arg1 + 0x38))

*(arg1 + 0x38) = rbx.b
int64_t rax_16

if (rbx.b == 0)
    rax_16 = 0
else
    int64_t* rcx_6 = arg2[4]
    int64_t* rdi_1 = arg2[6]
    int64_t rax_10 = (*(*rcx_6 + 0x50))(rcx_6)
    int64_t rdx_2 = *rdi_1
    int64_t rax_11 = (*(rdx_2 + 0x50))(rdi_1, rdx_2)
    int64_t* rcx_8 = arg2[2]
    int64_t rax_13 = (*(*rcx_8 + 0x50))(rcx_8)
    int64_t* rcx_9 = *arg2
    rax_16 = (*(*rcx_9 + 0x50))(rcx_9) + rax_10 + rax_11 + rax_13
    rbx = zx.q(*(arg1 + 0x38))

*(arg1 + 0x10) = rax_16
int64_t* rcx_10 = *arg2

if (rcx_10 != 0)
    int64_t* rax_18 = (*(*rcx_10 + 0x38))(rcx_10)
    int64_t r8_1 = *rax_18
    (*(r8_1 + 0x38))(rax_18, zx.q(rbx.b), r8_1)

int64_t* rcx_12 = arg2[4]

if (rcx_12 != 0)
    int64_t* rax_20 = (*(*rcx_12 + 0x38))(rcx_12)
    int64_t r8_2 = *rax_20
    (*(r8_2 + 0x38))(rax_20, zx.q(rbx.b), r8_2)

int64_t* rcx_14 = arg2[2]

if (rcx_14 != 0)
    int64_t* rax_22 = (*(*rcx_14 + 0x38))(rcx_14)
    int64_t r8_3 = *rax_22
    (*(r8_3 + 0x38))(rax_22, zx.q(rbx.b), r8_3)

int64_t* rcx_16 = arg2[6]

if (rcx_16 != 0)
    int64_t* rax_24 = (*(*rcx_16 + 0x38))(rcx_16)
    int64_t r8_4 = *rax_24
    (*(r8_4 + 0x38))(rax_24, zx.q(rbx.b), r8_4)

void*** rax_25 = sub_142075410()
uint128_t zmm0 = (&rax_25[2]).o
uint128_t var_98 = zmm0
void*** rbx_4 = _mm_bsrli_si128(zmm0, 8).q

if (rbx_4 != 0)
    rbx_4[1].d += 1
    rbx_4 = rax_25

if (arg1 + 0xc0 != &var_98)
    *(arg1 + 0xc0) = var_98.q
    var_98.q = 0
    sub_1405aeff0(arg1 + 0xc8, &var_98:8)
    rbx_4 = rax_25

void* rcx_19 = var_98:8.q

if (rcx_19 != 0)
    int32_t rax_27 = *(rcx_19 + 8)
    *(rcx_19 + 8) -= 1
    
    if (rax_27 == 1)
        int64_t* rbx_5 = var_98:8.q
        (**rbx_5)(rbx_5)
        int32_t rax_29 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (rax_29 == 1)
            int64_t* rcx_21 = var_98:8.q
            (*(*rcx_21 + 8))(rcx_21, 1)
    
    rbx_4 = rax_25

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t rax_33 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rax_33 == 1)
            (*rbx_4)[1](rbx_4, 1)

sub_140a4bff0(arg2, *(arg1 + 0xc0), 0x50)
int64_t* rsi_1 = *(arg1 + 0xc8)
char* rbx_6 = *(arg1 + 0xc0)

if (rsi_1 != 0)
    rsi_1[1].d += 1

char* var_78 = rbx_6

if (rsi_1 != 0)
    rsi_1[1].d += 1

void* var_68 = arg1 + 0x18
int32_t result

if (sub_140a80f40() == 0)
    uint32_t rax_38
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_38.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_38.b == 0))
        void var_48
        void** rax_41 = sub_1420852f0(&var_48, nullptr, 0xff)
        void* rcx_34 = *rax_41
        *(rcx_34 + 0x10) = rbx_6
        *(rcx_34 + 0x18) = rsi_1
        *(rcx_34 + 0x20) = arg1 + 0x18
        void* rcx_35 = *rax_41
        int32_t r8_5 = rax_41[2].d
        int64_t* rdx_12 = rax_41[1]
        int64_t* rbx_9 = *(rcx_35 + 0x30)
        int64_t* arg_10 = rbx_9
        int32_t* r15_2 = &rbx_9[9]
        
        if (rbx_9 != 0)
            *r15_2 += 1
            rbx_9 = arg_10
        
        result = sub_140778000(rcx_35, rdx_12, r8_5, 1)
        
        if (rbx_9 != 0)
            result = *r15_2
            *r15_2 -= 1
            
            if (result == 1)
                result = sub_140a2f6e0(arg_10)
    else
        char* var_60 = rbx_6
        void* var_50_1 = arg1 + 0x18
        result = sub_14207a4c0(&var_60, arg3)
        
        if (rsi_1 != 0)
            result = rsi_1[1].d
            rsi_1[1].d -= 1
            
            if (result == 1)
                (**rsi_1)(rsi_1)
                result = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rsi_1 + 8))(rsi_1, 1)
else
    result = sub_14207a4c0(&var_78, arg3)
    
    if (rsi_1 != 0)
        result = rsi_1[1].d
        rsi_1[1].d -= 1
        
        if (result == 1)
            (**rsi_1)(rsi_1)
            result = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*rsi_1 + 8))(rsi_1, 1)

if (rsi_1 != 0)
    result = rsi_1[1].d
    rsi_1[1].d -= 1
    
    if (result == 1)
        result = (**rsi_1)(rsi_1)
        int32_t rdi_2 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (rdi_2 == 1)
            return (*(*rsi_1 + 8))(rsi_1, zx.q(rdi_2))

return result
