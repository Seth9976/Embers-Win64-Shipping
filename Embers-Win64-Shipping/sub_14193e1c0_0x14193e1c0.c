// 函数: sub_14193e1c0
// 地址: 0x14193e1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = data_143eff7f0
int64_t rcx
int64_t rbx

if (data_143de5480 == 0)
    rbx = 0
    rcx = 0
else
    rbx = 0
    rcx.b = GetCurrentThreadId().d != data_143de5470

if (*(rdi + (rcx << 2)) == 0 || data_143eff5c6 != 0 || data_143f004d8 == 0)
    return 

int64_t* rax_1
int32_t rdx_1
rax_1, rdx_1 = sub_140b257f0()
bool c_1 = rax_1[1].d != 0
int16_t* var_38 = nullptr
int32_t rdi_1 = rax_1[1].d
int64_t rsi_1 = *rax_1
sub_1405a4c70(&var_38, sbb.d(rdx_1, rdx_1, c_1) + 0x14 + rdi_1, 0)
memcpy(var_38, rsi_1, rdi_1 * 2)
sub_140a2cf70(&var_38, u"ProgramBinaryCache", 0x12)
int16_t* rbp_1 = var_38
int16_t* var_28 = rbp_1
int32_t var_2c
int32_t var_1c_1 = var_2c
int32_t var_20_1 = rdi_1
sub_140af2b60()

if (sub_140b21a10(&data_143dbb3f0, u"ClearOpenGLBinaryProgramCache") != 0)
    int64_t* rax_4 = __crt_deferred_errno_cache::get(&data_143db7b00)
    int16_t* const rdx_6 = &data_142d40450
    
    if (rdi_1 != 0)
        rdx_6 = rbp_1
    
    int64_t r8_3 = *rax_4
    (*(r8_3 + 0x170))(rax_4, rdx_6, r8_3)

int64_t* rax_5 = j_sub_140a82f30(0x1d0)
int64_t* rdi_3

if (rax_5 == 0)
    rdi_3 = nullptr
else
    int64_t* rax_6 = sub_14192a980(rax_5, &var_28)
    rbp_1 = var_28
    rdi_3 = rax_6

data_143eff640 = rdi_3
int64_t* rax_7 = sub_140a84c80(0, 0x30, 0)

if (rax_7 != 0)
    rax_7[1] = rdi_3
    *rax_7 = &data_142ff1360
    rax_7[2] = sub_141941270
    rax_7[4] = sub_140a387b0()
    *rax_7 = &data_142ff13b8

int64_t rdi_4 = 0
void arg_8

if (rax_7 != 0)
    sub_140599630(&data_1439c9558, 1)
    int64_t* rax_10 = (*(*rax_7 + 0x30))(rax_7, &arg_8)
    int64_t r14_1 = sx.q(data_1439c9560)
    rdi_4 = *rax_10
    int32_t rax_11 = (r14_1 + 1).d
    bool cond:3_1 = rax_11 s<= data_1439c9564
    data_1439c9560 = rax_11
    
    if (not(cond:3_1))
        sub_1405a4f90(&data_1439c9558)
    
    void** rax_14 = (r14_1 << 4) + data_1439c9558
    *rax_14 = rax_7
    rax_14[1].d = 3

*(data_143eff640 + 0x70) = rdi_4
int64_t rsi_3 = data_143eff640
void*** rax_16 = sub_140a84c80(0, 0x30, 0)

if (rax_16 != 0)
    rax_16[1] = rsi_3
    *rax_16 = &data_142d3fe58
    rax_16[2] = sub_1419412a0
    rax_16[4] = sub_140a387b0()
    *rax_16 = &data_142d3feb0

if (rax_16 != 0)
    sub_140599630(&data_1439c95a0, 1)
    int64_t* rax_19 = (*rax_16)[6](rax_16, &arg_8)
    int64_t rsi_4 = sx.q(data_1439c95a8)
    rbx = *rax_19
    int32_t rax_20 = (rsi_4 + 1).d
    bool cond:4_1 = rax_20 s<= data_1439c95ac
    data_1439c95a8 = rax_20
    
    if (not(cond:4_1))
        sub_1405a4f90(&data_1439c95a0)
    
    void** rax_23 = (rsi_4 << 4) + data_1439c95a0
    *rax_23 = rax_16
    rax_23[1].d = 3

*(data_143eff640 + 0x78) = rbx

if (rbp_1 != 0)
    sub_140a74f90(rbp_1)
