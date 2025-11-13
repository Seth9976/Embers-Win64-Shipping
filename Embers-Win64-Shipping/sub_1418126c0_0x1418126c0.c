// 函数: sub_1418126c0
// 地址: 0x1418126c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
void* r10 = &data_143efa090
int64_t r9 = 0
int64_t i_1 = 0x100
int64_t i

do
    r10 += 8
    uint64_t rdx_2 = r9 u>> 1
    uint64_t rcx_1 = rdx_2 ^ 0xc96c5795d7870f42
    
    if ((r9.b & 1) == 0)
        rcx_1 = rdx_2
    
    uint64_t rax_4 = rcx_1 u>> 1
    uint64_t rdx_4 = rax_4 ^ 0xc96c5795d7870f42
    rcx_1.b &= 1
    
    if (rcx_1.b == 0)
        rdx_4 = rax_4
    
    uint64_t rax_6 = rdx_4 u>> 1
    uint64_t rcx_3 = rax_6 ^ 0xc96c5795d7870f42
    rdx_4.b &= 1
    
    if (rdx_4.b == 0)
        rcx_3 = rax_6
    
    uint64_t rax_8 = rcx_3 u>> 1
    uint64_t rdx_6 = rax_8 ^ 0xc96c5795d7870f42
    rcx_3.b &= 1
    
    if (rcx_3.b == 0)
        rdx_6 = rax_8
    
    uint64_t rax_10 = rdx_6 u>> 1
    uint64_t rcx_5 = rax_10 ^ 0xc96c5795d7870f42
    rdx_6.b &= 1
    
    if (rdx_6.b == 0)
        rcx_5 = rax_10
    
    uint64_t rax_12 = rcx_5 u>> 1
    uint64_t rdx_8 = rax_12 ^ 0xc96c5795d7870f42
    rcx_5.b &= 1
    
    if (rcx_5.b == 0)
        rdx_8 = rax_12
    
    uint64_t rax_14 = rdx_8 u>> 1
    uint64_t r8_2 = rax_14 ^ 0xc96c5795d7870f42
    rdx_8.b &= 1
    
    if (rdx_8.b == 0)
        r8_2 = rax_14
    
    uint64_t rcx_7 = r8_2 u>> 1
    uint64_t rax_16 = rcx_7 ^ 0xc96c5795d7870f42
    r8_2.b &= 1
    
    if (r8_2.b == 0)
        rax_16 = rcx_7
    
    r9 += 1
    *(r10 - 8) = rax_16
    i = i_1
    i_1 -= 1
while (i != 1)
bool cond:0 = data_143efa8e8 != 0
int16_t* const rcx_8 = &data_142d40450
int16_t* const rax_17 = &data_142d40450
uint64_t var_50 = 0

if (cond:0)
    rax_17 = data_143efa8e0

bool cond:1 = data_143efa8f8 != 0
int16_t* const var_38 = rax_17
int16_t* const rax_18 = &data_142d40450

if (cond:1)
    rax_18 = data_143efa8f0

int16_t* const var_30 = rax_18

if (data_143efa908.d != 0)
    rcx_8 = data_143efa900

int16_t* const var_28 = rcx_8
int64_t var_48 = 0
sub_140b0f5f0(&var_50, &var_38, (i_1 + 3).d)

if (arg1 + 8 == &var_50)
    uint64_t rcx_11 = var_50
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
else
    int64_t rcx_10 = *(arg1 + 8)
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    *(arg1 + 8) = var_50
    *(arg1 + 0x10) = var_48.d
    *(arg1 + 0x14) = var_48:4.d

sub_141839190(arg1)
sub_140af2b60()
char rax_22 = sub_140b21a10(&data_143dbb3f0, u"skipbuildpatchprereq")
void* rcx_13 = data_143ddb400
char var_58 = 0
sub_140af2fd0(rcx_13, u"Portal.BuildPatch", u"skipbuildpatchprereq", &var_58, &data_143de5780)

if (rax_22 != 0)
    sub_140b19e60()
    sub_140b1f640(&data_1439a8bd0, 
        BuildPatchServicesModule: Setup to skip prerequisites install via commandline.")

char rax_23 = var_58

if (rax_23 != 0)
    sub_140b19e60()
    sub_140b1f640(&data_1439a8bd0, 
        BuildPatchServicesModule: Setup to skip prerequisites install via config.")
    rax_23 = var_58

if (rax_22 != 0 || rax_23 != 0)
    rax_23 = 1

*(arg1 + 0x18) = rax_23
var_50 = 0
uint64_t rax_24 = sub_140a84c80(0, 0x30, 0)
var_50 = rax_24
var_48.d = 3

if (rax_24 != 0)
    *(rax_24 + 8) = arg1
    *rax_24 = &data_142d42fd0
    *(rax_24 + 0x10) = sub_141851350
    *(rax_24 + 0x20) = sub_140a387b0()

void var_40
*(arg1 + 0x90) = *sub_140a208a0(sub_140b18f30(), &var_40, &var_50, zx.o(0))
uint64_t rax_29

if (var_48.d == 0)
    rax_29 = var_50
label_141812993:
    
    if (rax_29 != 0)
        sub_140a74f90(rax_29)
else
    uint64_t rcx_16 = var_50
    
    if (rcx_16 != 0)
        (*(*rcx_16 + 0x38))(rcx_16, 0)
        rax_29 = var_50
        
        if (rax_29 != 0)
            rax_29 = sub_140a84c80(rax_29, 0, 0)
            var_50 = rax_29
        
        var_48.d = 0
        goto label_141812993
int64_t* rax_30 = sub_140a84c80(0, 0x30, 0)

if (rax_30 != 0)
    rax_30[1] = arg1
    *rax_30 = &data_142d3fe58
    rax_30[2] = sub_141845400
    rax_30[4] = sub_140a387b0()
    *rax_30 = &data_142d3feb0

if (rax_30 != 0)
    sub_140599630(&data_14399fce8, 1)
    (*(*rax_30 + 0x30))(rax_30, &var_40)
    int64_t rsi_1 = sx.q(data_14399fcf0)
    int32_t rax_33 = (rsi_1 + 1).d
    bool cond:3_1 = rax_33 s<= data_14399fcf4
    data_14399fcf0 = rax_33
    
    if (not(cond:3_1))
        sub_1405a4f90(&data_14399fce8)
    
    void** rax_36 = (rsi_1 << 4) + data_14399fce8
    *rax_36 = rax_30
    rax_36[1].d = 3

sub_141889820()
int64_t* rax_37 = sub_140a84c80(0, 0x20, 0)

if (rax_37 != 0)
    rax_37[1] = arg1
    *rax_37 = &data_142fe5ac8
    rax_37[3] = sub_140a387b0()
    *rax_37 = &data_142fe5b20

uint64_t* result = &var_50

if (&var_50 != arg1 + 0x98)
    if (rax_37 != 0)
        result = (*(*rax_37 + 0x40))(rax_37, arg1 + 0x98)
    else if (*(arg1 + 0xa0) != 0)
        uint64_t* rcx_21 = *(arg1 + 0x98)
        
        if (rcx_21 != 0)
            result = (*(*rcx_21 + 0x38))(rcx_21, 0)
            uint64_t* rcx_22 = *(arg1 + 0x98)
            
            if (rcx_22 != 0)
                result = sub_140a84c80(rcx_22, 0, 0)
                *(arg1 + 0x98) = result
            
            *(arg1 + 0xa0) = 0

if (rax_37 != 0)
    (*(*rax_37 + 0x38))(rax_37, 0)
    result = sub_140a84c80(rax_37, 0, 0)
    
    if (result != 0)
        result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_88)
return result
