// 函数: sub_1406e7290
// 地址: 0x1406e7290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_38 = nullptr
int64_t var_30 = 0
sub_1405947f0(&var_38, 0x14)
int32_t rax = var_30.d + 0x14
var_30.d = rax

if (rax s> 0)
    sub_140594770(&var_38)

sub_1405a7220(var_38, 0x14, "DiscordRichPresence", 0x14, 0x3f)
sub_140b7c510()
int64_t r9 = data_143e19eb0
int64_t var_18
int64_t* rcx_3 = *(*(r9 + 0x38))(&data_143e19eb0, &var_18, &var_38, r9)
int64_t var_28
int64_t* rax_3 = (*(*rcx_3 + 0x18))(rcx_3, &var_28)
int32_t rdx_3 = rax_3[1].d
int32_t rdx_4 = neg.d(rdx_3)
int16_t* var_68 = *rax_3
*rax_3 = 0
int32_t rcx_5 = rax_3[1].d
int32_t rcx_6 = *(rax_3 + 0xc)
rax_3[1] = 0
int32_t rdx_7 = sbb.d(rdx_4, rdx_4, rdx_3 != 0) + 8 + rcx_5

if (rdx_7 s> rcx_6)
    sub_1405947f0(&var_68, rdx_7)

int32_t rcx_9 = sub_140a2cf70(&var_68, u"Source", 6)
int16_t* var_48 = var_68
int32_t rdx_9 = rcx_5 + sbb.d(rcx_9, rcx_9, rcx_5 != 0) + 0xc
var_68 = nullptr
int32_t var_60
var_60.q = 0

if (rdx_9 s> rcx_6)
    sub_1405947f0(&var_48, rdx_9)

int32_t rcx_14 = sub_140a2cf70(&var_48, u"ThirdParty", 0xa)
int16_t* var_58 = var_48
int32_t rdx_11 = rcx_5 + sbb.d(rcx_14, rcx_14, rcx_5 != 0) + 8
var_48 = nullptr
int32_t var_40
var_40.q = 0

if (rdx_11 s> rcx_6)
    sub_1405947f0(&var_58, rdx_11)

int32_t rcx_19 = sub_140a2cf70(&var_58, u"x86_64", 6)
int32_t var_70 = rcx_5
int16_t* var_78 = var_58
int32_t rdx_13 = rcx_5 + sbb.d(rcx_19, rcx_19, rcx_5 != 0) + 0x16
var_58 = nullptr
int32_t var_6c = rcx_6
int32_t var_50
var_50.q = 0

if (rdx_13 s> rcx_6)
    sub_1405947f0(&var_78, rdx_13)

sub_140a2cf70(&var_78, u"discord_game_sdk.dll", 0x14)
int16_t* rcx_24 = var_58

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int16_t* rcx_25 = var_48

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

int16_t* rcx_26 = var_68

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int64_t rcx_27 = var_28

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp5_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

int16_t* rcx_30 = var_38

if (rcx_30 != 0)
    sub_140a74f90(rcx_30)

char rax_15 = sub_140b16090(&var_78)
HMODULE result

if (rax_15 == 0)
    int64_t* rax_16 = sub_140b251a0(&var_18)
    int32_t rdx_14 = rax_16[1].d
    int32_t rdx_15 = neg.d(rdx_14)
    var_68 = *rax_16
    *rax_16 = 0
    int32_t rcx_34 = rax_16[1].d
    int32_t rcx_35 = *(rax_16 + 0xc)
    rax_16[1] = 0
    int32_t rdx_18 = sbb.d(rdx_15, rdx_15, rdx_14 != 0) + 0xa + rcx_34
    
    if (rdx_18 s> rcx_35)
        sub_1405947f0(&var_68, rdx_18)
    
    int32_t rcx_38 = sub_140a2cf70(&var_68, u"Binaries", 8)
    var_48 = var_68
    int32_t rdx_20 = rcx_34 + sbb.d(rcx_38, rcx_38, rcx_34 != 0) + 7
    var_68 = nullptr
    int32_t var_60_1
    var_60_1.q = 0
    
    if (rdx_20 s> rcx_35)
        sub_1405947f0(&var_48, rdx_20)
    
    int32_t rcx_43 = sub_140a2cf70(&var_48, u"Win64", 5)
    var_30.d = rcx_34
    var_38 = var_48
    var_48 = nullptr
    var_30:4.d = rcx_35
    int32_t var_40_1
    var_40_1.q = 0
    int32_t rdx_22 = sbb.d(rcx_43, rcx_43, rcx_34 != 0) + 0x16 + rcx_34
    
    if (rdx_22 s> rcx_35)
        sub_1405947f0(&var_38, rdx_22)
    
    sub_140a2cf70(&var_38, u"discord_game_sdk.dll", 0x14)
    int16_t* rcx_47 = var_78
    
    if (rcx_47 != 0)
        sub_140a74f90(rcx_47)
    
    int16_t* rcx_48 = var_48
    var_78 = var_38
    var_70 = var_30.d
    int32_t var_6c_1 = var_30:4.d
    int64_t var_30_1 = 0
    var_38 = nullptr
    
    if (rcx_48 != 0)
        sub_140a74f90(rcx_48)
    
    int16_t* rcx_49 = var_68
    
    if (rcx_49 != 0)
        sub_140a74f90(rcx_49)
    
    int64_t rcx_50 = var_18
    
    if (rcx_50 != 0)
        sub_140a74f90(rcx_50)
    
    result = sub_140b16090(&var_78)

if (rax_15 != 0 || result.b != 0)
    int16_t* const rcx_52 = &data_142d40450
    
    if (var_70 != 0)
        rcx_52 = var_78
    
    result = sub_140b67ab0(rcx_52)
    *(arg1 + 8) = result

int16_t* rcx_53 = var_78

if (rcx_53 == 0)
    return result

return sub_140a74f90(rcx_53)
