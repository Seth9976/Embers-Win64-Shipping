// 函数: sub_141867c50
// 地址: 0x141867c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
CRITICAL_SECTION** rbx
CRITICAL_SECTION** arg_10 = rbx
*arg1 = &data_142fe7f68
arg1[0x28].d = 0
int64_t* rcx = arg1[0x2d]
(*(*rcx + 0x10))(rcx)
int64_t* rcx_1 = arg1[0x30]
(*(*rcx_1 + 0x10))(rcx_1)

if (arg1[0x2e] != 0)
    while (true)
        void* rcx_2 = arg1[0x2e]
        
        if (rcx_2 != 0)
            int64_t* rcx_3 = *(rcx_2 + 0x70)
            
            if ((*(*rcx_3 + 0x20))(rcx_3, 0xffffffff, 0) != 0)
                break

sub_140a4fc50(arg1[0x30])
int64_t r9 = sub_140a4fc50(arg1[0x2d])
char var_58 = 0xff

while (true)
    void* rsi_1 = *arg1[0x2b]
    
    if (rsi_1 == 0)
        break
    
    uint64_t rax_7 = zx.q(*(rsi_1 + 0x20))
    CRITICAL_SECTION** var_60
    
    if (rax_7.d u> 0xff)
    label_141867d93:
        sub_140af98a0("Unknown", 0x189, u"Unrecognized TUnion subtype", r9)
        sub_140afbb40()
        rbx = zx.q(var_58)
    else if (rax_7.d == 0xff)
        rbx = zx.q(var_58)
    else
        if (rax_7.d u> 5)
            goto label_141867d93
        
        switch (rax_7)
            case 0
                rbx.b = 0
                var_60 = *(rsi_1 + 0x18)
                var_58 = 0
            case 1
                rbx.b = 1
                var_60 = *(rsi_1 + 0x18)
                var_58 = 1
            case 2, 3, 4, 5
                rbx.b = 2
                var_58 = 2
    
    void* rbp_1 = arg1[0x2b]
    arg1[0x2b] = rsi_1
    char var_38_1 = 0xff
    void var_50
    uint128_t zmm1_1
    r9, zmm1_1 = sub_141869140(rsi_1 + 8, &var_50)
    
    if (rbp_1 != 0)
        r9, zmm1_1 = sub_14186c530(rbp_1, 1)
    
    if (rbx.b == 0)
        int64_t var_80_1 = 0
        CRITICAL_SECTION* rcx_10 = *var_60
        rcx_10->__offset(0x80).o = 0xa.o
        int128_t entry_zmm2
        int128_t entry_zmm3
        entry_zmm2, entry_zmm3 = sub_1405fc0f0(rcx_10, zmm1_1, entry_zmm2, entry_zmm3)
        void var_78
        r9 = sub_14186ad20(&var_78, var_60)
    else if (rbx.b == 1 && var_60 != 0)
        r9 = (*var_60)->DebugInfo(var_60, 1)

sub_1405ec6a0(&arg1[0x2e])
sub_141866150(&arg1[0x2a])
arg1[0x27].d = 0
int64_t rcx_15 = arg1[0x26]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

sub_14094b3a0(&arg1[0x1e])
int64_t* rcx_17 = arg1[0x1d]

if (rcx_17 != 0)
    (**rcx_17)(rcx_17, 1)

DeleteCriticalSection(&arg1[0x16])

if (arg1[0xe] != 0)
    void* rax_10 = arg1[0x10]
    void* rcx_19 = &arg1[0x12]
    
    if (rax_10 != 0)
        rcx_19 = rax_10
    
    (*(*rcx_19 + 0x10))(rcx_19)

DeleteCriticalSection(&arg1[8])
int64_t rcx_21 = arg1[4]

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

*arg1 = &data_142e85a30
__security_check_cookie(rax_1 ^ &var_a8)
return &data_142e85a30
