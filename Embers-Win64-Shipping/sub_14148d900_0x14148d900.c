// 函数: sub_14148d900
// 地址: 0x14148d900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = arg1
void* r15
void* var_40 = r15
int64_t var_88 = 0
TEB* gsbase
void* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143ee1d20 s> *(rdi_1 + 0x14))
    _Init_thread_header(&data_143ee1d20)
    
    if (data_143ee1d20 == 0xffffffff)
        int64_t* rcx_24 = data_143db18d0
        
        if (rcx_24 == 0)
            sub_140a53c40()
            rcx_24 = data_143db18d0
        
        int64_t r8_6
        r8_6.b = 1
        int64_t* rax_41 =
            (*(*rcx_24 + 0xb0))(rcx_24, r.Mobile.EnableStaticAndCSMShadowReceivers", r8_6)
        int64_t rax_42
        
        if (rax_41 == 0)
            rax_42 = 0
        else
            int64_t rdx_10 = *rax_41
            rax_42 = (*(rdx_10 + 0x58))(rax_41, rdx_10)
        
        data_143ee1d18 = rax_42
        _Init_thread_footer(&data_143ee1d20)

int32_t rcx = *(data_143ee1d18 + 4)
int32_t arg_18 = rcx

if (data_143ee1d30 s> *(rdi_1 + 0x14))
    _Init_thread_header(&data_143ee1d30)
    
    if (data_143ee1d30 == 0xffffffff)
        int64_t* rcx_26 = data_143db18d0
        
        if (rcx_26 == 0)
            sub_140a53c40()
            rcx_26 = data_143db18d0
        
        int64_t r8_7
        r8_7.b = 1
        int64_t* rax_44 =
            (*(*rcx_26 + 0xb0))(rcx_26, r.Mobile.EnableMovableLightCSMShaderCulling", r8_7)
        int64_t rax_45
        
        if (rax_44 == 0)
            rax_45 = 0
        else
            int64_t rdx_11 = *rax_44
            rax_45 = (*(rdx_11 + 0x58))(rax_44, rdx_11)
        
        data_143ee1d28 = rax_45
        _Init_thread_footer(&data_143ee1d30)
    
    rcx = arg_18

uint32_t rbp = *(data_143ee1d28 + 4)
void* rax_5 = *(r14 + 8)
uint32_t arg_20 = rbp
int64_t* rsi = rax_5 + 0xfa0
int64_t* var_90 = rsi
uint64_t r13

if (rsi != rax_5 + 0xfb8)
    uint64_t rax_6 = rax_5 + 0xfb8
    
    do
        r13 = *rsi
        
        if (r13 != 0)
            int64_t* rdi_2 = *(r13 + 0x20)
            
            if (rdi_2 != 0)
                if (rcx != 0)
                    rax_6 = (*(*rdi_2 + 0x98))(rdi_2)
                
                void* rbx
                
                if (rcx == 0 || rax_6.b == 0)
                    rbx.b = 0
                else
                    rbx.b = 1
                
                if (rbp == 1 && (rdi_2[0x27].b & 2) != 0)
                    rax_6 = sub_1412c75b0(r13)
                
                if (rbp != 1 || (rdi_2[0x27].b & 2) == 0 || rax_6.b == 0)
                    rax_6.b = 0
                else
                    rax_6 = zx.q(rbp.b)
                
                if (rbx.b != 0 || rax_6.b != 0)
                    void* rbp_1 = *(r14 + 0xa0)
                    int32_t r12_1 = *(*(r14 + 8) + 0xdc0)
                    r15 = sx.q(*(r14 + 0xa8)) * 0x5240 + rbp_1
                    
                    if (rbp_1 != r15)
                        uint32_t rsi_2 = (r12_1 + 0x1f) u>> 5
                        
                        do
                            rbx = *(rbp_1 + 0x18d0) + 0x48 + sx.q(*(r13 + 0x28)) * 0x78
                            int32_t* r14_1 = rbx + 0x18
                            *r14_1 = r12_1
                            uint64_t rcx_6 = zx.q((*(rbx + 0x1c) + 0x1f) u>> 5)
                            
                            if (rsi_2 u<= rcx_6.d)
                                void* rax_15 = *(rbx + 0x10)
                                
                                if (rax_15 != 0)
                                    rbx = rax_15
                                
                                if (rcx_6.d u> 8)
                                    memset(rbx, 0, zx.q(rcx_6.d) << 2)
                                else if (rcx_6.d != 0)
                                    __builtin_memset(rbx, 0, rcx_6 << 2)
                            else
                                sub_1410b36b0(rbx, 0, rsi_2, 4)
                                *(rbx + 0x1c) = rsi_2 << 5
                                void* rax_13 = *(rbx + 0x10)
                                
                                if (rax_13 != 0)
                                    rbx = rax_13
                                
                                if (rsi_2 u> 8)
                                    memset(rbx, 0, zx.q(rsi_2) << 2)
                                else if (rsi_2 != 0)
                                    __builtin_memset(rbx, 0, zx.q(rsi_2) << 2)
                                
                                uint64_t rdx = zx.q(rsi_2 - 1)
                                *(rbx + (rdx << 2)) &= 0xffffffff u>> ((neg.d(*r14_1)).b & 0x1f)
                            
                            rbp_1 += 0x5240
                        while (rbp_1 != r15)
                        
                        rsi = var_90
                        r14 = arg1
                    
                    rbp = arg_20
                
                rax_6 = rax_5 + 0xfb8
        
        rcx = arg_18
        rsi = &rsi[1]
        var_90 = rsi
    while (rsi != rax_6)

sub_14148dfd0(r14, arg2, &data_143e8efc0, &data_143e8efd0, &data_143e8efe0)
void* rcx_16
int128_t zmm6
rcx_16, zmm6 = sub_14128c8e0(r14)
r15.b = 0
void** r12_3 = *(r14 + 8) + 0xfa0
int64_t rdi_5 = 3

if (r12_3 u> &r12_3[3])
    rdi_5 = 0

if (r12_3 u<= &r12_3[3])
    int128_t var_58_1 = zmm6
    int64_t rax_17 = rdi_5
    zmm6 = 0x3727c5ac
    int64_t rdi_8
    
    do
        void* rdi_6 = *r12_3
        
        if (rdi_6 != 0)
            int64_t* rsi_3 = *(rdi_6 + 0x20)
            
            if (rsi_3 != 0)
                if (arg_18 == 0)
                    r13.b = 0
                else
                    char rax_19
                    rax_19, rcx_16 = (*(*rsi_3 + 0x98))(rsi_3)
                    
                    if (rax_19 == 0)
                        r13.b = 0
                    else
                        r13.b = 1
                
                float zmm0_1
                
                if (rbp != 1 || (rsi_3[0x27].b & 2) == 0)
                    r14.b = 0
                else
                    void* rax_20 = *(rdi_6 + 0x20)
                    zmm0_1 = *(rax_20 + 0x30)
                    
                    if (zmm0_1 * zmm0_1 f>= zmm6.d)
                    label_14148dc57:
                        char rax_21
                        
                        if ((*(rax_20 + 0x138) & 4) != 0)
                            rax_21 = sub_14122cc00(rdi_6)
                        
                        if ((*(rax_20 + 0x138) & 4) == 0 || rax_21 == 0)
                            r14.b = 1
                        else
                            r14.b = 0
                    else
                        zmm0_1 = *(rax_20 + 0x34)
                        
                        if (zmm0_1 * zmm0_1 f>= zmm6.d)
                            goto label_14148dc57
                        
                        zmm0_1 = *(rax_20 + 0x38)
                        
                        if (not(zmm0_1 * zmm0_1 f< zmm6.d))
                            goto label_14148dc57
                        
                        r14.b = 0
                    
                    rbp = zx.d(*(*(rdi_6 + 0x20) + 0x138))
                    char rbx_3
                    
                    if ((rbp.b & 8) == 0)
                        rcx_16.b = 0
                        rbx_3 = rbp.b & 0x10
                    else
                        rbx_3 = rbp.b & 0x10
                        
                        if (rbx_3 == 0)
                            rcx_16.b = 0
                            rbx_3 = rbp.b & 0x10
                        else if (sub_14122cc00(rdi_6) != 0)
                            rcx_16.b = 0
                            rbx_3 = rbp.b & 0x10
                        else
                            rcx_16.b = 1
                    
                    if (r14.b == 0 || rbx_3 == 0
                            || ((*(*(rdi_6 + 0x20) + 0x138) & 4) != 0 && rcx_16.b == 0))
                        r14.b = 0
                    else
                        r14.b = 1
                
                if (r15.b != 0)
                    r15.b = 1
                else if (arg_20 == 1 || (rsi_3[0x27].b & 2) == 0)
                    r15.b = 0
                else
                    void* rax_25 = *(rdi_6 + 0x20)
                    zmm0_1 = *(rax_25 + 0x30)
                    
                    if (zmm0_1 * zmm0_1 f>= zmm6.d)
                    label_14148dd1b:
                        char rax_26
                        
                        if ((*(rax_25 + 0x138) & 4) != 0)
                            rax_26 = sub_14122cc00(rdi_6)
                        
                        if ((*(rax_25 + 0x138) & 4) == 0 || rax_26 == 0)
                            rbp.b = 1
                        else
                            rbp.b = 0
                    else
                        zmm0_1 = *(rax_25 + 0x34)
                        
                        if (zmm0_1 * zmm0_1 f>= zmm6.d)
                            goto label_14148dd1b
                        
                        zmm0_1 = *(rax_25 + 0x38)
                        
                        if (not(zmm0_1 * zmm0_1 f< zmm6.d))
                            goto label_14148dd1b
                        
                        rbp.b = 0
                    
                    char rsi_4 = *(*(rdi_6 + 0x20) + 0x138)
                    char rbx_4
                    
                    if ((rsi_4 & 8) == 0)
                        rcx_16.b = 0
                        rbx_4 = rsi_4 & 0x10
                    else
                        rbx_4 = rsi_4 & 0x10
                        
                        if (rbx_4 == 0)
                            rcx_16.b = 0
                            rbx_4 = rsi_4 & 0x10
                        else if (sub_14122cc00(rdi_6) != 0)
                            rcx_16.b = 0
                            rbx_4 = rsi_4 & 0x10
                        else
                            rcx_16.b = 1
                    
                    if (rbp.b == 0 || rbx_4 == 0
                            || ((*(*(rdi_6 + 0x20) + 0x138) & 4) != 0 && rcx_16.b == 0))
                        r15.b = 0
                    else
                        r15.b = 1
                
                if (r13.b != 0 || r14.b != 0)
                    r14 = arg1
                    rcx_16, zmm6 = sub_141480d60(r14, rdi_6)
                else
                    r14 = arg1
                
                rax_17 = rdi_5
        
        r12_3 = &r12_3[1]
        rbp = arg_20
        rdi_8 = var_88 + 1
        var_88 = rdi_8
    while (rdi_8 != rax_17)

void* i = *(r14 + 0xa0)

for (void* rdx_4 = sx.q(*(r14 + 0xa8)) * 0x5240 + i; i != rdx_4; i += 0x5240)
    *(i + 0x4810) &= 0xfffffffd
    *(i + 0x4810) |= (zx.d(r15.b) & 1) * 2

void* rdx_6 = *(r14 + 8) + 0xee8
*(r14 + 0x3d8) = 0
int64_t* var_80
sub_1407453e0(&var_80, rdx_6)
void* result_1
void* result = result_1
int32_t var_64
int32_t rcx_20 = var_64

if (rcx_20 s< *(result + 0x18))
    while (*(r14 + 0x3d8) == 0)
        int64_t rax_37
        rax_37.b = *(sx.q(*(*(*var_80 + sx.q(rcx_20) * 0x30 + 0x20) + 0x28)) * 0x70 + *(r14 + 0x2f0)
            + 0x28) s> 0
        *(r14 + 0x3d8) = rax_37.b
        int32_t var_74
        int32_t var_68 = var_68 & not.d(var_74)
        void var_78
        sub_14059bdd0(&var_78)
        result = result_1
        rcx_20 = var_64
        
        if (rcx_20 s>= *(result + 0x18))
            break

return result
