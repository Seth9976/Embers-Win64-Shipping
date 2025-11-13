// 函数: sub_1418ad7d0
// 地址: 0x1418ad7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
*(arg1 + 0xfc)
*(arg1 + 0xfc) = 0
int32_t i_1 = arg2[1].d
int32_t r12 = 0
int64_t* rbx = *arg2

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_14061cd70(arg2, 0)

if ((*(arg1 + 0x50) & 0xfffffffd) == 0)
    int64_t* rcx_2 = *(arg1 + 0x38)
    (*(*rcx_2 + 0x48))(rcx_2, arg1 + 0x58)

int64_t var_a8
sub_141835260(arg1 + 0x58, &var_a8, arg1 + 0xa8)
int64_t* rcx_4 = *(arg1 + 0x30)
(*(*rcx_4 + 0x28))(rcx_4, 0)
int64_t* rcx_5 = *(arg1 + 0x38)
int64_t rbx_2 = **(arg1 + 0x30)
int64_t rax_7 = (*(*rcx_5 + 0x70))(rcx_5, &var_a8)
(*(rbx_2 + 0x30))(*(arg1 + 0x30), rax_7)
int32_t rcx_7 = 0
uint64_t r15
r15.b = *(arg1 + 0x50) u< 2
*(arg1 + 0x100) = 0
char var_178 = r15.b
int32_t var_170 = 0
int32_t var_16c = 1
int32_t r8_1 = 0
void var_98
void* var_168 = &var_98
int32_t var_160 = 0xffffffff
int64_t var_15c = 0
void* var_88
int32_t var_80

if (var_80 != 0)
    void* r9_1 = &var_98
    
    if (var_88 != 0)
        r9_1 = var_88
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(var_80 - 1)
    int32_t rdx_6 = *r9_1
    
    if (rdx_6 != 0)
    label_1418ad94a:
        int32_t rax_14 = ((rdx_6 - 1) & rdx_6) ^ rdx_6
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_14)
        int32_t var_16c_1 = rax_14
        int32_t var_150_1 = temp0_1
        int32_t rax_15
        
        if (rax_14 == 0)
            rax_15 = 0x20
        else
            rax_15 = 0x1f - temp0_1
        
        int32_t rax_16 = r8_1 - rax_15 + 0x1f
        
        if (rax_16 s> var_80)
            rax_16 = var_80
        
        var_15c.d = rax_16
    else
        while (true)
            int64_t rax_11 = sx.q(rcx_7)
            r8_1 += 0x20
            rcx_7 += 1
            var_15c:4.d = r8_1
            var_170 = rcx_7
            
            if (rax_11.d s>= ((temp3_1 & 0x1f) + temp4_1) s>> 5)
                var_15c.d = var_80
                break
            
            rdx_6 = *(r9_1 + (rax_11 << 2) + 4)
            int32_t var_160_1 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_1418ad94a

int128_t zmm6 = 0x3dcccccd
int128_t var_e8 = var_170.o
int32_t var_b4 = var_80
int128_t var_d8 = 0xffffffff
uint64_t rax_18 = (0xffffffff << (var_80.b & 0x1f)).q u>> 0x20
uint64_t var_140 = rax_18
int64_t zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
int128_t var_138 = (&var_a8).o
int128_t var_128 = var_e8
int64_t var_118 = zmm2

while (true)
    int64_t rcx_11 = sx.q(var_128:0xc.d)
    
    if (rcx_11.d != rax_18.d || var_128.q != &var_98)
        rax_18.b = 0
    else
        rax_18.b = 1
    
    int64_t* rdx_7 = var_138.q
    
    if (rax_18.b == 0 || rdx_7 != &var_a8)
        rax_18.b = 1
    else
        rax_18.b = 0
    
    if (rax_18.b == 0)
        break
    
    int64_t* r14_1 = *rdx_7 + rcx_11 * 0x18
    bool z_1
    
    if (0 == *(arg1 + 0xfc))
        *(arg1 + 0xfc) = 0
        z_1 = true
    else
        *(arg1 + 0xfc)
        z_1 = false
    
    if (not(z_1))
        break
    
    int64_t* rcx_13 = *(arg1 + 0x38)
    void* rax_21 = (*(*rcx_13 + 0x68))(rcx_13, r14_1)
    char rax_23
    
    if (r15.b == 0)
        int64_t* rcx_14 = *(arg1 + 0x38)
        rax_23 = (*(*rcx_14 + 0x90))(rcx_14, r14_1)
    
    if (r15.b != 0 || rax_23 != 0)
        r15.b = 1
    
    int64_t* rcx_15 = *(arg1 + 0x30)
    (*(*rcx_15 + 8))(rcx_15, r14_1, *(rax_21 + 0x58))
    int32_t rbx_4
    
    if (r15.b == 0)
        sub_141840270()
        bool z_2
        
        if (0 == *(arg1 + 0xf8))
            *(arg1 + 0xf8) = 0
            z_2 = true
        else
            *(arg1 + 0xf8)
            z_2 = false
        
        if (not(z_2))
            bool z_4
            
            do
                bool z_3
                
                if (0 == *(arg1 + 0xfc))
                    *(arg1 + 0xfc) = 0
                    z_3 = true
                else
                    *(arg1 + 0xfc)
                    z_3 = false
                
                if (not(z_3))
                    break
                
                zmm6 = sub_140b73230(zmm6)
                sub_141840270()
                
                if (0 == *(arg1 + 0xf8))
                    *(arg1 + 0xf8) = 0
                    z_4 = true
                else
                    *(arg1 + 0xf8)
                    z_4 = false
            while (not(z_4))
        
        int64_t* rcx_17 = *(arg1 + 0x30)
        (*(*rcx_17 + 0x10))(rcx_17, r14_1, 0)
        int16_t* var_100
        int16_t** rax_30 = sub_1418abd30(arg1, &var_100, r14_1)
        int16_t* rdx_15
        
        if (rax_30[1].d == 0)
            rdx_15 = &data_142d40450
        else
            rdx_15 = *rax_30
        
        int64_t* rcx_19 = *(arg1 + 0x28)
        int64_t var_148
        char rax_32 = (*(*rcx_19 + 0x18))(rcx_19, rdx_15, &var_148)
        int16_t* rcx_20 = var_100
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        if (rax_32 == 0)
            rbx_4 = 2
        else
            rbx_4 = 5
            
            if (var_148 == *(rax_21 + 0x58))
                rbx_4 = 0
        
        int64_t* rcx_21 = *(arg1 + 0x30)
        (*(*rcx_21 + 0x10))(rcx_21, r14_1)
        *(arg1 + 0x100) += *(rax_21 + 0x58)
        int64_t* rcx_22 = *(arg1 + 0x30)
        (*(*rcx_22 + 0x28))(rcx_22, *(arg1 + 0x100))
    else
        int32_t rax_25
        rax_25, zmm6 = sub_1418ad470(arg1, r14_1, rax_21)
        rbx_4 = rax_25
    
    int64_t* rcx_23 = *(arg1 + 0x30)
    (*(*rcx_23 + 0x18))(rcx_23, r14_1, zx.q(rbx_4))
    
    if (rbx_4 != 0)
        int64_t rsi_1 = sx.q(arg2[1].d)
        int32_t rax_37 = (rsi_1 + 1).d
        arg2[1].d = rax_37
        
        if (rax_37 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        sub_140596d10((rsi_1 << 4) + *arg2, r14_1)
        int32_t rax_38 = r12
        r12 = rbx_4
        
        if (rax_38 != 0)
            r12 = rax_38
    else if (r15.b != 0)
        int32_t var_110
        sub_140598750(arg1 + 0xa8, &var_110)
        int64_t* var_108
        sub_140596d10(var_108, r14_1)
        var_108[2].d = 0xffffffff
        int32_t rax_39 = var_108[1].d
        int16_t* rdx_23
        
        if (rax_39 == 0)
            rdx_23 = &data_142d40450
        else
            rdx_23 = *var_108
        
        int32_t rcx_30 = rax_39 - 1
        
        if (rax_39 == 0)
            rcx_30 = 0
        
        void var_14c
        sub_14059a6d0(arg1 + 0xa8, &var_14c, sub_1405969c0(rcx_30, rdx_23), var_108, var_110, 
            nullptr)
    
    var_128:8.d &= not.d(var_138:0xc.d)
    sub_14059bdd0(&var_138:8)
    rax_18 = var_140
    r15 = zx.q(var_178)

bool z_5

if (0 == *(arg1 + 0xfc))
    *(arg1 + 0xfc) = 0
    z_5 = true
else
    *(arg1 + 0xfc)
    z_5 = false

if (not(z_5) && r12 == 0)
    r12 = 1

int32_t var_60 = 0
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

sub_14059ad90(&var_a8, 0)

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t rcx_36 = var_a8

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

__security_check_cookie(rax_1 ^ &var_1a8)
return zx.q(r12)
