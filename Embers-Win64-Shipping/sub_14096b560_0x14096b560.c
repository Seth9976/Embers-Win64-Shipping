// 函数: sub_14096b560
// 地址: 0x14096b560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void* rsi = nullptr
void* r13 = arg1
int64_t* rdx = *(arg1 + 0x88)
int64_t rcx = data_143f5b298
int64_t var_158 = 0
int64_t var_148 = 0
int64_t var_128 = 0
int64_t* var_120 = nullptr
sub_1423de540(rcx, rdx, 0)
int64_t* rax_2 = sub_14093f850(&var_148)
wchar16 const* const var_110 = u"FindSessionsCallback"

if (rax_2 == 0)
    int64_t var_150_1 = 0
    int16_t* var_138
    sub_140a2e390(&var_138, %s - Invalid or uninitialized OnlineSubsystem", FindSessionsCallback")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_130
    
    if (var_130 != 0)
        rcx_3 = var_138
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_138
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

sub_140971be0(&var_128, sub_140d3c6e0(r13 + 0x50))

if (var_128 != 0 && rax_2 != 0)
    int64_t* var_108
    (*(*rax_2 + 0x20))(rax_2, &var_108)
    int64_t* rcx_8 = var_108
    
    if (rcx_8 != 0)
        (*(*rcx_8 + 0x188))(rcx_8, r13 + 0x68)
    
    int64_t* var_100
    
    if (var_100 != 0)
        var_100[1].d -= 1
        
        if (var_100[1].d == 1)
            (**var_100)(var_100)
            int32_t rdi_1 = *(var_100 + 0xc)
            *(var_100 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_100 + 8))(var_100, zx.q(rdi_1))

void* var_168 = nullptr
int32_t i_1 = 0
int32_t var_160 = 0
int32_t r15 = 0
int32_t var_15c = 0
void* rax_9

if (arg2 != 0)
    rax_9 = *(r13 + 0x70)

void* const rax_21

if (arg2 == 0 || rax_9 == 0)
    rax_21 = 0x40
else
    void* r14_1 = *(rax_9 + 8)
    void* r12_2 = sx.q(*(rax_9 + 0x10)) * 0xb8 + r14_1
    
    if (r14_1 != r12_2)
        do
            void** var_f8
            sub_1409198b0(&var_f8)
            sub_14094dc80(&var_f8, r14_1)
            int32_t rax_11 = *(r14_1 + 0xb0)
            int64_t i_2 = sx.q(i_1)
            i_1 = (i_2 + 1).d
            
            if (i_1 s> r15)
                sub_14092f900(&var_168)
                r15 = var_15c
                rsi = var_168
            
            void*** rdi_3 = i_2 * 0xb8 + rsi
            *rdi_3 = &data_142e20cf8
            int64_t var_f0
            rdi_3[1] = var_f0
            void* var_e8
            rdi_3[2] = var_e8
            
            if (var_e8 != 0)
                *(var_e8 + 8) += 1
            
            void var_e0
            sub_140596d10(&rdi_3[3], &var_e0)
            void var_d0
            sub_140919960(&rdi_3[5], &var_d0)
            int64_t var_60
            rdi_3[0x13] = var_60
            void* var_58
            rdi_3[0x14] = var_58
            
            if (var_58 != 0)
                *(var_58 + 8) += 1
            
            int32_t var_50
            rdi_3[0x15].d = var_50
            int32_t var_4c
            *(rdi_3 + 0xac) = var_4c
            rdi_3[0x16].d = rax_11
            sub_14091b530(&var_f8)
            r14_1 += 0xb8
        while (r14_1 != r12_2)
        
        r13 = arg1
    
    rax_21 = 0x30

int64_t result = sub_140954dc0(rax_21 + r13, &var_168)
void* rdi_4 = rsi

if (i_1 != 0)
    int32_t i
    
    do
        result = sub_14091b530(rdi_4)
        rdi_4 += 0xb8
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rsi != 0)
    result = sub_140a74f90(rsi)

if (var_120 != 0)
    var_120[1].d -= 1
    
    if (var_120[1].d == 1)
        result = (**var_120)(var_120)
        int32_t temp3_1 = *(var_120 + 0xc)
        *(var_120 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*var_120 + 8))(var_120, 1)

__security_check_cookie(rax_1 ^ &var_188)
return result
