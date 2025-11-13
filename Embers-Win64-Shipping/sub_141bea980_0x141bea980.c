// 函数: sub_141bea980
// 地址: 0x141bea980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
sub_141beee70(arg1)
int32_t rcx
rcx.b = sub_140b5b8a0(arg1[0x25].d, 0) == 0
int64_t* var_1a0
int64_t var_188
int64_t rcx_5
int64_t* rdx_3
int32_t r15

if ((*(arg1 + 0x12c) != 0 | rcx.b) == 0)
label_141beaa27:
    int64_t* rax_6 = arg1[0x22]
    rcx_5 = arg1[0x21]
    int64_t var_1a8 = rcx_5
    var_1a0 = rax_6
    
    if (rax_6 != 0)
        rax_6[1].d += 1
    
    rdx_3 = &var_1a8
    int32_t var_198_1 = arg1[0x23].d
    r15 = 2
    char var_190_1 = 1
    var_188 = 0
    int32_t var_180_1 = 0
else
    void* rax_1 = sub_140d3c6e0(&arg1[0x24])
    
    if (rax_1 == 0)
        goto label_141beaa27
    
    if (sub_140d1fd20(rax_1, arg1[0x25]) == 0)
        goto label_141beaa27
    
    int64_t var_1e8 = arg1[0x25]
    void var_a0
    int64_t* rax_5 = sub_141b70480(&var_a0, sub_140d3c6e0(&arg1[0x24]), &var_1e8)
    rdx_3 = rax_5
    r15 = 1
    rcx_5 = *rax_5

int64_t var_d0 = rcx_5
int64_t* rax_8 = rdx_3[1]

if (rax_8 != 0)
    rax_8[1].d += 1

int32_t var_c0 = rdx_3[2].d
char var_b8 = rdx_3[3].b
int64_t var_b0 = 0
int32_t var_a8 = 0
sub_1407473e0(&var_b0, &rdx_3[4])

if ((r15.b & 2) != 0)
    r15 &= 0xfffffffd
    sub_140745b20(&var_188)
    
    if (var_1a0 != 0)
        var_1a0[1].d -= 1
        
        if (var_1a0[1].d == 1)
            (**var_1a0)(var_1a0)
            int32_t rax_13 = *(var_1a0 + 0xc)
            *(var_1a0 + 0xc) -= 1
            
            if (rax_13 == 1)
                (*(*var_1a0 + 8))(var_1a0, 1)

if ((r15.b & 1) != 0)
    r15 &= 0xfffffffe
    void var_80
    sub_140745b20(&var_80)
    int64_t* var_98
    
    if (var_98 != 0)
        var_98[1].d -= 1
        
        if (var_98[1].d == 1)
            (**var_98)(var_98)
            int32_t rax_17 = *(var_98 + 0xc)
            *(var_98 + 0xc) -= 1
            
            if (rax_17 == 1)
                (*(*var_98 + 8))(var_98, 1)

int32_t rcx_14
rcx_14.b = sub_140b5b8a0(arg1[0x2a].d, 0) == 0
int64_t* var_170
int64_t var_158
int64_t rcx_19
int64_t* rdx_7
int32_t r14

if ((*(arg1 + 0x154) != 0 | rcx_14.b) == 0)
label_141beabc2:
    int64_t* rax_25 = arg1[0x27]
    rcx_19 = arg1[0x26]
    int64_t var_178 = rcx_19
    var_170 = rax_25
    
    if (rax_25 != 0)
        rax_25[1].d += 1
    
    rdx_7 = &var_178
    int32_t var_168_1 = arg1[0x28].d
    r14 = 8
    char var_160_1 = 1
    var_158 = 0
    int32_t var_150_1 = 0
else
    void* rax_20 = sub_140d3c6e0(&arg1[0x29])
    
    if (rax_20 == 0)
        goto label_141beabc2
    
    if (sub_140d1fd20(rax_20, arg1[0x2a]) == 0)
        goto label_141beabc2
    
    int64_t var_1e0 = arg1[0x2a]
    void var_70
    int64_t* rax_24 = sub_141b70480(&var_70, sub_140d3c6e0(&arg1[0x29]), &var_1e0)
    rdx_7 = rax_24
    r14 = 4
    rcx_19 = *rax_24

int64_t var_100 = rcx_19
int32_t r14_1 = r14 | r15
int64_t* rax_27 = rdx_7[1]

if (rax_27 != 0)
    rax_27[1].d += 1

int32_t var_f0 = rdx_7[2].d
char var_e8 = rdx_7[3].b
int64_t var_e0 = 0
int32_t var_d8 = 0
sub_1407473e0(&var_e0, &rdx_7[4])

if ((r14_1.b & 8) != 0)
    r14_1 &= 0xfffffff7
    sub_140745b20(&var_158)
    
    if (var_170 != 0)
        var_170[1].d -= 1
        
        if (var_170[1].d == 1)
            (**var_170)(var_170)
            int32_t rax_32 = *(var_170 + 0xc)
            *(var_170 + 0xc) -= 1
            
            if (rax_32 == 1)
                (*(*var_170 + 8))(var_170, 1)

if ((r14_1.b & 4) != 0)
    void var_50
    sub_140745b20(&var_50)
    int64_t* var_68
    
    if (var_68 != 0)
        var_68[1].d -= 1
        
        if (var_68[1].d == 1)
            (**var_68)(var_68)
            int32_t rax_36 = *(var_68 + 0xc)
            *(var_68 + 0xc) -= 1
            
            if (rax_36 == 1)
                (*(*var_68 + 8))(var_68, 1)

sub_140f17c00(arg1[0x88], &var_d0)
sub_140f15a70(arg1[0x88], &var_100)
void* rcx_30 = arg1[0x88]
char var_148 = arg1[0x81].b
char var_147 = 1
int64_t var_140 = 0
int32_t var_138 = 0
sub_140f15c80(rcx_30, &var_148)
void* rcx_31 = arg1[0x88]
char var_130 = *(arg1 + 0x409)
char var_12f = 1
int64_t var_128 = 0
int32_t var_120 = 0
sub_140f15b40(rcx_31, &var_130)
void* rcx_32 = arg1[0x88]
char var_1d8 = *(arg1 + 0x415)
char var_1d7 = 1
int64_t var_1d0 = 0
int32_t var_1c8 = 0
sub_140f152c0(rcx_32, &var_1d8)
sub_140745b20(&var_1d0)
void* rcx_34 = arg1[0x88]
char var_118 = *(arg1 + 0x419)
char var_117 = 1
int64_t var_110 = 0
int32_t var_108 = 0
sub_140f18150(rcx_34, &var_118)
void* rcx_35 = arg1[0x88]
uint32_t var_1c0 = zx.d(*(arg1 + 0x41a))
char var_1bc = 1
int64_t var_1b8 = 0
int32_t var_1b0 = 0
sub_140f15d70(rcx_35, &var_1c0)
sub_140745b20(&var_1b8)
void* rbx_5 = arg1[0x88]
int32_t* rdx_16

if ((*(arg1 + 0x41b) & 1) == 0)
    char arg_19 = 0
    void arg_18
    rdx_16 = &arg_18
else
    rdx_16 = &arg_8
    arg_8.b = *(arg1 + 0x41c)
    arg_8:1.b = 1

sub_140f17d00(rbx_5, rdx_16)
char* rdx_17

if ((*(arg1 + 0x41b) & 2) == 0)
    char arg_21 = 0
    void arg_20
    rdx_17 = &arg_20
else
    char arg_10
    rdx_17 = &arg_10
    arg_10 = *(arg1 + 0x41d)
    char arg_11 = 1

sub_140f17c70(rbx_5, rdx_17)
sub_140745b20(&var_e0)

if (rax_27 != 0)
    rax_27[1].d -= 1
    
    if (rax_27[1].d == 1)
        (**rax_27)(rax_27)
        int32_t rax_47 = *(rax_27 + 0xc)
        *(rax_27 + 0xc) -= 1
        
        if (rax_47 == 1)
            (*(*rax_27 + 8))(rax_27, 1)

int32_t result = sub_140745b20(&var_b0)

if (rax_8 != 0)
    result = rax_8[1].d
    rax_8[1].d -= 1
    
    if (result == 1)
        result = (**rax_8)(rax_8)
        int32_t rdi_1 = *(rax_8 + 0xc)
        *(rax_8 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rax_8 + 8))(rax_8, zx.q(rdi_1))

return result
