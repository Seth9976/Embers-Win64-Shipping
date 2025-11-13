// 函数: sub_1423c28f0
// 地址: 0x1423c28f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void* rsi = arg1
char rcx = (data_1439c7a34).b
int32_t var_68 = 1
int128_t var_78 = zx.o(0)
int64_t* rcx_1 = data_143f0f180
int32_t var_54 = (1 << rcx) - 1
char var_50 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int128_t var_64 = data_143dbb1e0
void* var_f8
(*(*rcx_1 + 0x578))(rcx_1, &var_f8, &data_143f02b98, zx.q(*(rsi + 0xb8)), *(rsi + 0xbc), 
    *(rsi + 0xc4), *(rsi + 0xcc), *(rsi + 0xc0), 1, 
    (sbb.d(arg2, arg2, *(rsi + 0xe0) != 0) & 0x10) | 0x80000, &var_78)
sub_1408c8cf0(rsi + 0x10, var_f8)
void* rax_9 = *(rsi + 0xb0)
int64_t var_100
int32_t var_f0
void* var_e8
int128_t entry_zmm3

if (rax_9 != 0)
    var_100 = *(rax_9 + 0x18)
    int128_t zmm2_1 = sub_140b63b70(&var_100, &var_f0)
    int64_t* rcx_4 = data_143f0f180
    int16_t* const r8_1 = &data_142d40450
    
    if (var_e8.d != 0)
        r8_1 = var_f0.q
    
    (*(*rcx_4 + 0x2e8))(rcx_4, *(rsi + 0x10), r8_1)
    int64_t rcx_5 = var_f0.q
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    entry_zmm3 =
        sub_14198ac20(&data_143f02b98, *(*(rsi + 0xb0) + 0x90), *(rsi + 0x10), entry_zmm3, zmm2_1)

int32_t rcx_6 = 0
int32_t var_ec = 1
var_f0 = 0
int32_t r10_1 = *(rsi + 0x70)
void* r9_1 = rsi + 0x58
int32_t r13 = 0
var_e8 = r9_1
int32_t r8_3 = 0
int32_t var_e0 = 0xffffffff
int64_t var_dc = 0

if (r10_1 != 0)
    void* rax_12 = *(r9_1 + 0x10)
    
    if (rax_12 != 0)
        r9_1 = rax_12
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10_1 - 1)
    int32_t rdx_11 = *r9_1
    
    if (rdx_11 != 0)
    label_1423c2acc:
        int32_t rax_19 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_1
        char temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_19)
        int32_t var_ec_1 = rax_19
        int32_t rax_20
        
        if (rax_19 == 0)
            rax_20 = 0x20
        else
            rax_20 = 0x1f - temp0_1
        
        var_dc.d = r8_3 - rax_20 + 0x1f
        
        if (r8_3 - rax_20 + 0x1f s> r10_1)
            var_dc.d = r10_1
    else
        while (true)
            int64_t rdx_12 = sx.q(rcx_6)
            r8_3 += 0x20
            rcx_6 += 1
            var_dc:4.d = r8_3
            var_f0 = rcx_6
            
            if (rdx_12.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r9_1 + (rdx_12 << 2) + 4)
            var_e0 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_1423c2acc
        
        var_dc.d = r10_1

double zmm2[0x2] = var_e0.o
double var_98[0x2] = var_f0.o
uint32_t rax_23 = (zmm2[0] u>> 0x20).d
double var_88[0x2] = zmm2
var_f0.o = (rsi + 0x48).o
int64_t var_d0 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_e0.o = var_98
int32_t var_140
int32_t var_108

if (rax_23 s< r10_1)
    int32_t i_2
    int32_t i = i_2
    
    do
        void* r14_2 = sx.q(i) * 0x178 + *var_f0.q
        
        if (*(r14_2 + 0x168) s> 0)
            int32_t j = 0
            int64_t rdi_1 = 0
            
            do
                void* rax_26 = *(r14_2 + 0x160)
                void* rcx_8 = r14_2 + 0x10
                
                if (rax_26 != 0)
                    rcx_8 = rax_26
                
                if (*(rcx_8 + rdi_1 + 0x10) s> 0)
                    int32_t rsi_1 = data_143f029c8
                    void* r12_1 = var_f8
                    sub_140b34200("FlushRHIThreadTotal", rsi_1)
                    
                    if (data_143f02bac u> 0)
                        zmm2, entry_zmm3 =
                            j_sub_14196ef60(&data_143f02b88, &data_143f02b98, zmm2, entry_zmm3)
                    
                    sub_14198b230()
                    
                    if (data_143f01c92 != 0)
                        sub_14198b3f0()
                    
                    int64_t rdx_14
                    rdx_14.b = 1
                    sub_14198b7d0()
                    sub_140b38680("FlushRHIThreadTotal", rsi_1)
                    int64_t* rcx_12 = data_143f0f180
                    var_140.q = &var_108
                    sub_1423c0d50(arg1, r14_2 + 8, j, 
                        (*(*rcx_12 + 0x298))(rcx_12, r12_1, zx.q(r13), zx.q(j), 1, var_140, 0), 
                        var_108)
                    int32_t rsi_2 = data_143f029c8
                    void* r12_2 = var_f8
                    sub_140b34200("FlushRHIThreadTotal", rsi_2)
                    
                    if (data_143f02bac u> 0)
                        zmm2, entry_zmm3 =
                            j_sub_14196ef60(&data_143f02b88, &data_143f02b98, zmm2, entry_zmm3)
                    
                    sub_14198b230()
                    
                    if (data_143f01c92 != 0)
                        sub_14198b3f0()
                    
                    int64_t rdx_19
                    rdx_19.b = 1
                    sub_14198b7d0()
                    sub_140b38680("FlushRHIThreadTotal", rsi_2)
                    int64_t* rcx_18 = data_143f0f180
                    int32_t var_148_2
                    var_148_2.b = 0
                    (*(*rcx_18 + 0x2a0))(rcx_18, r12_2, zx.q(r13), zx.q(j), var_148_2)
                
                j += 1
                rdi_1 += 0x18
            while (j s< *(r14_2 + 0x168))
            
            r13 += 1
        
        var_dc:4.d &= not.d(var_e8:4.d)
        sub_14059bdd0(&var_e8)
        i = i_2
    while (i s< *(var_e0.q + 0x18))
    
    rsi = arg1

int32_t i_1 = 0

if (*(rsi + 0xa0) s> 0)
    int64_t rcx_20 = 0
    var_100 = 0
    
    do
        void* r14_4 = *(rsi + 0x98) + rcx_20
        
        if (*(r14_4 + 0x160) s> 0)
            int32_t j_1 = 0
            int64_t rdi_2 = 0
            
            do
                void* rax_33 = *(r14_4 + 0x158)
                void* rcx_21 = r14_4 + 8
                
                if (rax_33 != 0)
                    rcx_21 = rax_33
                
                if (*(rcx_21 + rdi_2 + 0x10) s> 0)
                    int32_t rsi_3 = data_143f029c8
                    void* r13_1 = var_f8
                    sub_140b34200("FlushRHIThreadTotal", rsi_3)
                    
                    if (data_143f02bac u> 0)
                        zmm2, entry_zmm3 =
                            j_sub_14196ef60(&data_143f02b88, &data_143f02b98, zmm2, entry_zmm3)
                    
                    sub_14198b230()
                    
                    if (data_143f01c92 != 0)
                        sub_14198b3f0()
                    
                    int64_t rdx_23
                    rdx_23.b = 1
                    sub_14198b7d0()
                    sub_140b38680("FlushRHIThreadTotal", rsi_3)
                    int64_t* rcx_25 = data_143f0f180
                    var_140.q = &var_108
                    sub_1423c0d50(arg1, r14_4, j_1, 
                        (*(*rcx_25 + 0x298))(rcx_25, r13_1, zx.q(i_1), zx.q(j_1), 1, var_140, 0), 
                        var_108)
                    int32_t rsi_4 = data_143f029c8
                    void* r13_2 = var_f8
                    sub_140b34200("FlushRHIThreadTotal", rsi_4)
                    
                    if (data_143f02bac u> 0)
                        zmm2, entry_zmm3 =
                            j_sub_14196ef60(&data_143f02b88, &data_143f02b98, zmm2, entry_zmm3)
                    
                    sub_14198b230()
                    
                    if (data_143f01c92 != 0)
                        sub_14198b3f0()
                    
                    int64_t rdx_28
                    rdx_28.b = 1
                    sub_14198b7d0()
                    sub_140b38680("FlushRHIThreadTotal", rsi_4)
                    int64_t* rcx_31 = data_143f0f180
                    int32_t var_148_4
                    var_148_4.b = 0
                    (*(*rcx_31 + 0x2a0))(rcx_31, r13_2, zx.q(i_1), zx.q(j_1), var_148_4)
                
                j_1 += 1
                rdi_2 += 0x18
            while (j_1 s< *(r14_4 + 0x160))
            
            rsi = arg1
            rcx_20 = var_100
        
        rcx_20 += 0x168
        i_1 += 1
        var_100 = rcx_20
    while (i_1 s< *(rsi + 0xa0))

int64_t* rcx_32 = data_143f0f180
char var_c0 = *(rsi + 0xd0)
char var_bf = *(rsi + 0xd4)
char var_be = *(rsi + 0xd8)
char var_bd = *(rsi + 0xdc)
int32_t var_b4 = 0x7f7fffff
int64_t var_bc = 0
int64_t var_b0 = 0
char var_a8 = 0
(*(*rcx_32 + 0x28))(rcx_32, 0x7f7fffff, &var_c0)
sub_1405d1600(rsi + 0x18, &var_100)
sub_1405d1550(&var_100)
int64_t result = sub_1405d1550(&var_f8)
__security_check_cookie(rax_1 ^ &var_168)
return result
