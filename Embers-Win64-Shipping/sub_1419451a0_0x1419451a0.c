// 函数: sub_1419451a0
// 地址: 0x1419451a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void**** result = arg2
int32_t rbp = arg7
void* rbx = arg1

if (rbp == 0)
    int32_t rax_1 = arg4
    rbp = 1
    
    if (arg3 u> arg4)
        rax_1 = arg3
    
    for (uint32_t i = rax_1 u>> 1; i != 0; i u>>= 1)
        rbp += 1

int64_t rcx = sx.q(data_1439c74c8)
void*** rsi = nullptr
arg7 = 0
int32_t r13

if (0x400 - rcx.d s<= 1)
    memcpy(&arg7, &data_143efbd00 + (rcx << 2), (0x400 - rcx.d) << 2)
    data_143effa28(0x400, &data_143efbd00)
    r13 = 1 - (0x400 - rcx.d)
    memcpy(&(&arg7)[sx.q(0x400 - rcx.d)], &data_143efbd00, r13 << 2)
    rbx = arg1
else
    r13 = (rcx + 1).d
    arg7 = *(&data_143efbd00 + (rcx << 2))

arg2.b = 1
data_1439c74c8 = r13
void* rax_4 = sub_14190d690(rbx, arg2.b)
int32_t r8_4 = data_1439c7498 - 1
int64_t rdx_1 = sx.q(r8_4) * 5
int64_t rcx_5 = *(rax_4 + 8)
int32_t rax_5 = arg7
int32_t var_c8

if (*(rcx_5 + (rdx_1 << 3) + 0x10) != 0x8c1a || *(rcx_5 + (rdx_1 << 3) + 0x14) != rax_5)
    var_c8 = rbp
    sub_14190a090(rbx, rax_4, r8_4, 0x8c1a, rax_5, 0)

data_143effb50(0x8c1a, 0x2802, 0x2901)
data_143effb50(0x8c1a, 0x2803, 0x2901)
int32_t rbx_2 = 0x2600
data_143effb50(0x8c1a, 0x2800, 0x2600)

if (rbp u> 1)
    rbx_2 = 0x2700

data_143effb50(0x8c1a, 0x2801, zx.q(rbx_2))

if (data_143efbce5 != 0)
    data_143effb50(0x8c1a, 0x84fe, 1)

data_143effb50(0x8c1a, 0x813c, 0)
data_143effb50(0x8c1a, 0x813d, zx.q(rbp - 1))
int32_t var_50 = 0
int32_t var_4c = rbp - 1
sub_141904ca0(arg1 + 0x15b68, &arg7, &var_50)
uint64_t rax_7 = zx.q(arg6)
void* r13_2 = rax_7 * 0x1c + &data_143efeda0
uint64_t rbx_5 = zx.q(arg8 u>> 4) & 1

if (*(r13_2 + (rbx_5 << 2)) == 0)
    sub_140af98a0("Unknown", 0x60b, Texture format '%s' not supported.", 
        (&data_1439c85e0)[rax_7 * 5])
    sub_140afbb40()

if (*(rax_4 + 0x428) != 0)
    data_143effcd8(0x88ec, 0)
    *(rax_4 + 0x428) = 0

int64_t* rcx_9 = *arg9
int64_t var_58

if (rcx_9 == 0)
    var_58 = 0
else
    var_58 = (*(*rcx_9 + 8))(rcx_9)

int32_t rax_11 = *(r13_2 + 0x14)
int32_t rdx_4 = *(r13_2 + 0x10)
int32_t rdi_2 = *(r13_2 + (rbx_5 << 2) + 8)
int64_t rax_12 = data_143f00358
int32_t var_68 = 0
int32_t var_60 = rdx_4
int64_t var_b0

if (rax_12 == 0)
    int32_t rbx_6 = 0
    
    if (rbp != 0)
        do
            var_b0 = 0
            char rcx_10 = rbx_6.b
            int32_t rax_14 = arg4 s>> rcx_10
            int32_t r9_4 = arg3 s>> rcx_10
            
            if (rax_14 u<= 1)
                rax_14 = 1
            
            if (r9_4 u<= 1)
                r9_4 = 1
            
            data_143effc00(0x8c1a, zx.q(rbx_6), zx.q(rdi_2), r9_4, rax_14, arg5, 0, rdx_4, rax_11, 
                0)
            rdx_4 = var_60
            rbx_6 += 1
        while (rbx_6 u< rbp)
else
    rax_12(0x8c1a, zx.q(rbp), zx.q(rdi_2), zx.q(arg3), arg4, arg5, var_c8)

if (var_58 != 0)
    data_143effac0(0xcf5, 1)
    int32_t var_64_1 = 0
    int32_t r10_1 = 0
    
    if (rbp != 0)
        uint64_t rax_19 = 0
        
        do
            char rcx_11 = r10_1.b
            uint32_t rdi_4 = arg4 u>> rcx_11
            var_b0.d = *(r13_2 + 0x14)
            uint32_t rdx_7 = rdi_4
            uint32_t rbx_8 = arg3 u>> rcx_11
            uint32_t rcx_12 = rbx_8
            
            if (rdi_4 u<= 1)
                rdx_7 = 1
            
            if (rbx_8 u<= 1)
                rcx_12 = 1
            
            data_143effc08(0x8c1a, zx.q(r10_1), 0, 0, 0, rcx_12, rdx_7, arg5, *(r13_2 + 0x10), 
                var_b0, rax_19 + var_58)
            
            if (rdi_4 u<= 1)
                rdi_4 = 1
            
            if (rbx_8 u<= 1)
                rbx_8 = 1
            
            r10_1 = var_64_1 + 1
            var_64_1 = r10_1
            rax_19 = zx.q(var_68 + rdi_4 * rbx_8 * (&data_1439c85f4)[zx.q(arg6) * 0xa] * arg5)
            var_68 = rax_19.d
        while (r10_1 u< rbp)
    
    data_143effac0(0xcf5, 4)
    int64_t* rcx_13 = *arg9
    (*(*rcx_13 + 0x18))(rcx_13)

int32_t rbx_9 = 0
char r13_4

if ((arg8.b & 1) != 0)
    rbx_9 = 0x8ce0
    r13_4 = arg6
else if ((arg8.b & 4) != 0)
    r13_4 = arg6
    rbx_9 = 0x821a
    
    if (r13_4 != 0xb)
        rbx_9 = 0x8d00
else if ((arg8.b & 2) == 0)
    r13_4 = arg6
else
    r13_4 = arg6
    
    if (r13_4 != 0xb)
        int32_t rax_31 = 0x8d00
        
        if (((r13_4 - 0xc) & 0xf7) != 0)
            rax_31 = 0x8ce0
        
        rbx_9 = rax_31
    else
        rbx_9 = 0x821a

void*** rax_27 = j_sub_140a82f30(0xf0)

if (rax_27 != 0)
    void* var_70_1 = &arg9[2]
    int64_t var_78_1 = 0
    rsi = sub_141928f70(rax_27, arg1, arg7, 0x8c1a, rbx_9, arg3, arg4, arg5, rbp, 1, 1, arg5.b, 
        r13_4, 0, 1, arg8)

sub_141941370(rsi, arg8)
*result = rsi

if (rsi != 0)
    rsi[1].d += 1

return result
