// 函数: sub_142097c30
// 地址: 0x142097c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg3

if (*(arg1 + 0x4e8) != 0)
    return 

if (*(arg1 + 0x4c0) == 0)
    int32_t i
    
    do
        i = rand()
        *(arg1 + 0x4c0) = i
    while (i == 0)

void* rax_1 = *(arg1 + 0xa8)

if (rax_1 == 0)
    rax_1 = sub_141ee69e0(arg1)

uint32_t r12_1

if (rax_1 == 0)
    r12_1 = data_1439c7a08
else
    r12_1 = zx.d(*(rax_1 + 0x118))

uint64_t rax_4

if (arg4 == 0 && r12_1 s> 1)
    TEB* gsbase
    
    if (data_143f47ca8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f47ca8)
        
        if (data_143f47ca8 == 0xffffffff)
            int64_t* rcx_23 = data_143db18d0
            
            if (rcx_23 == 0)
                sub_140a53c40()
                rcx_23 = data_143db18d0
            
            int64_t r8_4
            r8_4.b = 1
            int64_t* rax_24 = (*(*rcx_23 + 0xb0))(rcx_23, u"r.GenerateMeshDistanceFields", r8_4)
            
            if (rax_24 != 0)
                int64_t rdx_8 = *rax_24
                rax_24 = (*(rdx_8 + 0x58))(rax_24, rdx_8)
            
            data_143f47ca0 = rax_24
            _Init_thread_footer(&data_143f47ca8)
    
    rax_4.b = *(arg1 + 0x20b) & 0x28
    char rdx
    
    if (rax_4.b != 0x28)
        rdx = 0
    else
        if (*data_143f47ca0 == 0)
            rax_4 = *(arg1 + 0x440)
        
        if (*data_143f47ca0 == 0 && (rax_4 == 0 || (*(rax_4 + 0x94) & 1) == 0))
            rdx = 0
        else
            rdx = 1
    
    int64_t rax_5
    uint64_t r8
    
    if (data_143f0f21f != 0)
        r8 = zx.q(data_143f0f1a0)
        rax_5 = sx.q(r8.d)
    
    if (data_143f0f21f == 0 || ((*(&data_143f025fc + rax_5 * 0x14) u>> 0x13).b & 1) == 0)
        rax_4.b = 0
    else
        rax_4.b = test_bit(data_143f13cd8, r8)
    
    rax_4.b |= rdx

int64_t rsi

if (arg4 != 0 || (r12_1 s> 1 && rax_4.b != 0))
    rsi.b = 1
else
    rsi.b = 0

if (r15 != 0)
    int64_t* rax_7 = j_sub_140a82f30(0xd0)
    int64_t* rdi_1
    
    if (rax_7 == 0)
        rdi_1 = nullptr
    else
        rdi_1 = build_tree(rax_7, r15, r12_1.b, rsi.b, arg5)
    
    int64_t* rax_9 = j_sub_140a82f30(0x18)
    int64_t* rbx_1 = rax_9
    
    if (rax_9 == 0)
        rbx_1 = nullptr
    else
        rax_9[1].d = 1
        *(rax_9 + 0xc) = 1
        *rbx_1 = &data_1432bc1f0
        rbx_1[2] = rdi_1
    
    int64_t* var_98 = rdi_1
    int64_t* var_90 = rbx_1
    
    if (arg1 + 0x4e8 != &var_98)
        *(arg1 + 0x4e8) = rdi_1
        var_98 = nullptr
        sub_1405aeff0(arg1 + 0x4f0, &var_90)
        rbx_1 = var_90
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rdi_2 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_2))
    
    return 

int64_t* var_a8 = r15
arg5 = zx.o(0)
int128_t var_78
__builtin_memset(&var_78, 0, 0x18)
int32_t i_4 = 0
int64_t var_a0_1 = 0
int64_t* var_58_1 = zx.o(0).q
int64_t var_48_1 = (zx.o(0)).q
int64_t var_38_1 = 0
char var_30_1 = 1
sub_141a00740(&var_78, 0, 0)

if (arg2 != 0)
    sub_14209fb70(arg1 + 0x4f8)
    arg5 = sub_142080d10(arg1, &var_78, &var_a8)
    i_4 = var_a0_1.d
    r15 = var_a8

int64_t* rax_12 = j_sub_140a82f30(0xd0)
int64_t* rsi_1

if (rax_12 == 0)
    rsi_1 = nullptr
else
    rsi_1 = build_tree(rax_12, &var_78, r12_1.b, rsi.b, arg5)

int64_t* rax_14 = j_sub_140a82f30(0x18)
int64_t* rbx_2 = rax_14

if (rax_14 == 0)
    rbx_2 = nullptr
else
    rax_14[1].d = 1
    *(rax_14 + 0xc) = 1
    *rbx_2 = &data_1432bc1f0
    rbx_2[2] = rsi_1

int64_t* var_88 = rsi_1
int64_t* var_80 = rbx_2

if (arg1 + 0x4e8 != &var_88)
    *(arg1 + 0x4e8) = rsi_1
    var_88 = nullptr
    sub_1405aeff0(arg1 + 0x4f0, &var_80)
    rbx_2 = var_80

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rdi_3 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_3 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_3))
    
    r15 = var_a8
    i_4 = var_a0_1.d

int64_t** r14_1 = *(arg1 + 0x4e8)

if (r14_1 != &var_a8)
    int32_t i_3 = r14_1[1].d
    int64_t* rbx_3 = *r14_1
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            int64_t* rcx_15 = *rbx_3
            
            if (rcx_15 != 0)
                rcx_15[1].d -= 1
                
                if (rcx_15[1].d == 1)
                    (**rcx_15)(rcx_15, 1)
            
            rbx_3 = &rbx_3[1]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rbx_3 = *r14_1
    
    if (rbx_3 != 0)
        sub_140a74f90(rbx_3)
    
    *r14_1 = r15
    r15 = nullptr
    r14_1[1].d = i_4
    i_4 = 0
    *(r14_1 + 0xc) = var_a0_1:4.d

int64_t* rcx_17 = var_78.q

if (rcx_17 != 0)
    (**rcx_17)(rcx_17, 1)

if (var_58_1 != 0)
    (**var_58_1)(var_58_1, 1)

int64_t* var_68

if (var_68 != 0)
    (**var_68)(var_68, 1)

if (var_48_1 != 0)
    (**var_48_1)(var_48_1, 1)

int64_t* rbx_4 = r15

if (i_4 != 0)
    int32_t i_2
    
    do
        int64_t* rcx_21 = *rbx_4
        
        if (rcx_21 != 0)
            rcx_21[1].d -= 1
            
            if (rcx_21[1].d == 1)
                (**rcx_21)(rcx_21, 1)
        
        rbx_4 = &rbx_4[1]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

if (r15 != 0)
    sub_140a74f90(r15)
