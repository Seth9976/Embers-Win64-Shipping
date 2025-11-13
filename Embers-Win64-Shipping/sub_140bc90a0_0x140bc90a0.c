// 函数: sub_140bc90a0
// 地址: 0x140bc90a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void var_178
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_178)
int64_t var_158
int64_t* rax_2 = sub_140b251a0(&var_158)
int32_t r8 = rax_2[1].d
int64_t var_188 = *rax_2
*rax_2 = 0
int32_t rcx_2 = rax_2[1].d
int32_t rcx_3 = *(rax_2 + 0xc)
rax_2[1] = 0
int32_t rdx_3 = sbb.d(0, 0, r8 != 0) + 8 + rcx_2

if (rdx_3 s> rcx_3)
    sub_1405947f0(&var_188, rdx_3)

sub_140a2cf70(&var_188, u"global", 6)
void var_138
int128_t var_168 = *sub_140a1dfc0(&var_188, &var_138)
wWinMainCRTStartup(&var_178, &var_168)
int64_t rcx_8 = var_188

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = var_158

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int32_t var_128[0x20]
sub_140ab54c0(*(arg1 + 0x270), &var_128, &var_178)

if (var_128[0] != 0)
    int64_t var_148
    int64_t* rax_4 = sub_140ac6560(&var_128, &var_148)
    int16_t* const r9_1
    
    if (rax_4[1].d == 0)
        r9_1 = &data_142d40450
    else
        r9_1 = *rax_4
    
    sub_140af98a0("Unknown", 0x849, u"Failed to initialize I/O dispatcher: '%s'", r9_1)
    int64_t rcx_12 = var_148
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    sub_140afbb40()

data_143e1a8d8 = *(arg1 + 0x270)
sub_140bc99a0(arg1 + 0x260, *(arg1 + 0x270))
sub_140bc9d70(arg1 + 0x278, *(arg1 + 0x270), arg1 + 0x260)
*(arg1 + 0x1f0) += 1
int64_t result =
    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_178)
__security_check_cookie(rax_1 ^ &var_1a8)
return result
