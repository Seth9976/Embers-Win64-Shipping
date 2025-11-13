// 函数: sub_1419459d0
// 地址: 0x1419459d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void**** result = arg2
int32_t rsi = arg7
int32_t r12 = arg4
int32_t r13 = arg3

if (rsi == 0)
    int32_t rdx = arg5
    int32_t rax_1 = arg4
    rsi = 1
    
    if (arg3 u> arg4)
        rax_1 = arg3
    
    if (rax_1 u> rdx)
        rdx = rax_1
    
    arg2 = zx.q(rdx u>> 1)
    
    while (arg2.d != 0)
        rsi += 1
        arg2 = zx.q(arg2.d u>> 1)

int64_t rcx = sx.q(data_1439c74c8)
void*** rbx = nullptr
arg7 = 0
int32_t r15

if (0x400 - rcx.d s<= 1)
    memcpy(&arg7, &data_143efbd00 + (rcx << 2), (0x400 - rcx.d) << 2)
    data_143effa28(0x400, &data_143efbd00)
    r15 = 1 - (0x400 - rcx.d)
    memcpy(&(&arg7)[sx.q(0x400 - rcx.d)], &data_143efbd00, r15 << 2)
else
    r15 = (rcx + 1).d
    arg7 = *(&data_143efbd00 + (rcx << 2))

arg2.b = 1
data_1439c74c8 = r15
void* rax_4 = sub_14190d690(arg1, arg2.b)
int32_t r8_4 = data_1439c7498 - 1
int64_t rdx_2 = sx.q(r8_4) * 5
int64_t rcx_5 = *(rax_4 + 8)
int32_t rax_5 = arg7
int32_t var_e8

if (*(rcx_5 + (rdx_2 << 3) + 0x10) != 0x806f || *(rcx_5 + (rdx_2 << 3) + 0x14) != rax_5)
    var_e8 = rsi
    sub_14190a090(arg1, rax_4, r8_4, 0x806f, rax_5, 0)

data_143effb50(0x806f, 0x2802, 0x2901)
data_143effb50(0x806f, 0x2803, 0x2901)
data_143effb50(0x806f, 0x8072, 0x2901)
data_143effb50(0x806f, 0x2800, 0x2600)
data_143effb50(0x806f, 0x2801, 0x2700)

if (data_143efbce5 != 0)
    data_143effb50(0x806f, 0x84fe, 1)

data_143effb50(0x806f, 0x813c, 0)
data_143effb50(0x806f, 0x813d, zx.q(rsi - 1))
int32_t var_68 = 0
int32_t var_64 = rsi - 1
sub_141904ca0(arg1 + 0x15b68, &arg7, &var_68)
uint64_t rax_7 = zx.q(arg6)
void* r14_1 = rax_7 * 0x1c + &data_143efeda0
uint64_t r15_3 = zx.q(arg8 u>> 4) & 1
void* rax_9 = r14_1 + (r15_3 << 2)

if (*rax_9 == 0)
    sub_140af98a0("Unknown", 0x67b, Texture format '%s' not supported.", 
        (&data_1439c85e0)[rax_7 * 5])
    sub_140afbb40()

if (*(rax_4 + 0x428) != 0)
    data_143effcd8(0x88ec, 0)
    *(rax_4 + 0x428) = 0

int64_t* rcx_8 = *arg9
int32_t var_84
int64_t var_70

if (rcx_8 == 0)
    var_70 = 0
    var_84 = 0
else
    int64_t rax_11 = (*(*rcx_8 + 8))(rcx_8)
    int64_t* rcx_9 = *arg9
    var_70 = rax_11
    
    if (rcx_9 == 0)
        var_84 = 0
    else
        int64_t rdx_5 = *rcx_9
        var_84 = (*(rdx_5 + 0x10))(rcx_9, rdx_5)

int32_t rax_13 = *(r14_1 + 0x14)
int32_t r10 = *(r14_1 + 0x10)
int32_t r8_7 = *(r14_1 + (r15_3 << 2) + 8)
int64_t rax_14 = data_143f00358
uint64_t rbp_2 = 0
int32_t var_88 = 0
int32_t var_78 = r10
int64_t var_d0

if (rax_14 != 0)
    rax_14(0x806f, zx.q(rsi), r8_7, zx.q(r13), r12, arg5, var_e8)
else if (rsi != 0)
    int32_t rdi_4 = 0
    
    do
        char rcx_10 = rdi_4.b
        var_d0 = 0
        int32_t rdx_8 = arg5 s>> rcx_10
        int32_t rax_16 = r12 s>> rcx_10
        int32_t r9_4 = r13 s>> rcx_10
        
        if (rdx_8 u<= 1)
            rdx_8 = 1
        
        if (rax_16 u<= 1)
            rax_16 = 1
        
        if (r9_4 u<= 1)
            r9_4 = 1
        
        data_143effc00(0x806f, zx.q(rdi_4), zx.q(r8_7), r9_4, rax_16, rdx_8, 0, r10, rax_13, 0)
        r10 = var_78
        rdi_4 += 1
    while (rdi_4 u< rsi)
    
    rbp_2 = 0

int64_t r9_5 = var_70
int64_t* r15_8

if (r9_5 == 0)
    r15_8 = arg9
else
    int32_t rdi_5 = 0
    
    if (rsi != 0)
        do
            char rcx_11 = rdi_5.b
            uint32_t r15_7 = r13 u>> rcx_11
            int32_t r8_9 = *(rax_7 * 0x28 + 0x1439c85e8)
            
            if (r15_7 s<= 1)
                r15_7 = 1
            
            uint32_t r12_1 = r12 u>> rcx_11
            
            if (r12_1 s<= 1)
                r12_1 = 1
            
            uint32_t r13_2 = arg5 u>> rcx_11
            int32_t rcx_12 = *(rax_7 * 0x28 + &data_1439c85ec)
            
            if (r13_2 s<= 1)
                r13_2 = 1
            
            int32_t rcx_16 = divs.dp.d(sx.q(rcx_12 - 1 + r12_1), rcx_12)
                * divs.dp.d(sx.q(r8_9 - 1 + r15_7), r8_9) * r13_2 * (&data_1439c85f4)[rax_7 * 0xa]
            int32_t rax_25 = rcx_16 + rbp_2.d
            
            if (rax_25 u> var_84)
                break
            
            int64_t rbp_4 = rbp_2 + r9_5
            int32_t var_c8
            
            if (*(r14_1 + 0x18) == 0)
                data_143effac0(0xcf5, 1)
                var_c8.q = rbp_4
                var_d0.d = *(r14_1 + 0x14)
                data_143effc08(0x806f, zx.q(rdi_5), 0, 0, 0, r15_7, r12_1, r13_2, *(r14_1 + 0x10), 
                    var_d0, var_c8)
                data_143effac0(0xcf5, 4)
            else
                var_c8.q = rbp_4
                var_d0.d = rcx_16
                data_143effc40(0x806f, zx.q(rdi_5), 0, 0, 0, r15_7, r12_1, r13_2, *rax_9, var_d0, 
                    var_c8)
            rbp_2 = zx.q(rax_25)
            rdi_5 += 1
            r12 = arg4
            r13 = arg3
            r9_5 = var_70
        while (rdi_5 u< rsi)
        
        r12 = arg4
        r13 = arg3
    
    r15_8 = arg9
    int64_t* rcx_17 = *r15_8
    (*(*rcx_17 + 0x18))(rcx_17)

int32_t rdi_6 = 0
char r14_3

if ((arg8.b & 1) != 0)
    rdi_6 = 0x8ce0
    r14_3 = arg6
else if ((arg8.b & 4) != 0)
    r14_3 = arg6
    rdi_6 = 0x8d00
    
    if (r14_3 == 0xb)
        rdi_6 = 0x821a
else if ((arg8.b & 2) == 0)
    r14_3 = arg6
else
    r14_3 = arg6
    
    if (r14_3 != 0xb)
        int32_t rax_36 = 0x8d00
        
        if (((r14_3 - 0xc) & 0xf7) != 0)
            rax_36 = 0x8ce0
        
        rdi_6 = rax_36
    else
        rdi_6 = 0x821a

void*** rax_31 = j_sub_140a82f30(0xf0)

if (rax_31 != 0)
    void* var_90_1 = &r15_8[2]
    int64_t var_98_1 = 0
    int32_t var_a0_1 = arg8
    rbx = sub_1419291c0(rax_31, arg1, arg7, 0x806f, rdi_6, r13, r12, arg5, rsi, 1, 1, 1, 
        zx.d(r14_3), 0, 1)

sub_141941370(rbx, arg8)
*result = rbx

if (rbx != 0)
    rbx[1].d += 1

return result
