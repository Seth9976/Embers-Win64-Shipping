// 函数: sub_1408f35d0
// 地址: 0x1408f35d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[4])
void arg_20
int64_t* rax_1 = sub_140fc6160(sub_140b58260(&arg_20, u"WINDOWS", 1))
int64_t var_58 = 0
int32_t var_50 = 0
sub_1405947f0(&var_58, 0x25)
int32_t rcx_4 = var_50 + 0x25
var_50 = rcx_4

if (rcx_4 s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"FBackChannelConnection Client Socket", 0x4a)
void arg_8
int32_t rcx_8 = *sub_140b5e500(&arg_8, 0x119)
int64_t rax_3 = *rax_1
int32_t arg_18 = rcx_8
int32_t arg_1c = 0
int64_t* rax_4
int64_t rdx_2
rax_4, rdx_2 = (*(rax_3 + 0x28))(rax_1, &arg_18, &var_58, 0)
int64_t rcx_10 = var_58
int64_t* rsi = rax_4

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

if (rsi == 0)
    goto label_1408f3825

int64_t r8_1 = *rsi
rdx_2.b = 1
int32_t rdi_1 = data_143e2b8a0
char rax_5
int64_t rdx_3
rax_5, rdx_3 = (*(r8_1 + 0xe8))(rsi, rdx_2, r8_1)
bool rcx_12 = rax_5 == 0

if (rax_5 != 0)
    rdx_3.b = 1
    char rax_7
    rax_7, rdx_3 = (*(*rsi + 0xf8))(rsi, rdx_3)
    rcx_12 = rax_7 == 0

int64_t* rdi
int64_t* var_48
int32_t var_40

if (rcx_12 != 0)
label_1408f37d1:
    int64_t* rax_21 = sub_140fc89f0(sub_140fc6160(sub_140b58260(&arg_8, u"WINDOWS", 1)), 0x38)
    sub_140b19e60()
    sub_140b1f700(&data_1439a8bd0, u"Failed to create the listen socket as configured. %s", rax_21)
    (*(*rax_1 + 0x38))(rax_1, rsi)
    rsi = nullptr
label_1408f3825:
    sub_140fc89f0(sub_140fc6160(sub_140b58260(&arg_8, u"WINDOWS", 1)), 0x38)
    sub_140a2e390(&var_48, u"Failed to start listening on port %d", zx.q(sx.d(arg2)))
    int64_t* rdx_9 = &data_142d40450
    
    if (var_40 != 0)
        rdx_9 = var_48
    
    sub_1408f2f00(arg1, rdx_9, nullptr)
    int64_t* rcx_33 = var_48
    
    if (rcx_33 != 0)
        sub_140a74f90(rcx_33)
else
    rdx_3.b = 1
    
    if ((*(*rsi + 0x98))(rsi, rdx_3) == 0)
        goto label_1408f37d1
    
    int64_t* rcx_15 = data_143e2b898
    (*(*rcx_15 + 0x90))(rcx_15, &var_48)
    int64_t* rcx_16 = var_48
    (*(*rcx_16 + 0x18))(rcx_16, zx.q(rdi_1))
    int64_t* rcx_17 = var_48
    (*(*rcx_17 + 0x28))(rcx_17, zx.q(arg2))
    rdi = var_40.q
    int64_t r15
    r15.b = (*(*rsi + 0x18))(rsi, var_48) == 0
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp1_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi + 8))(rdi, 1)
    
    if (r15.b != 0)
        goto label_1408f37d1
    
    if ((*(*rsi + 0x28))(rsi, 8) == 0)
        goto label_1408f37d1
    
    EnterCriticalSection(&arg1[4])
    arg1[9] = rsi
    
    if (arg1 != -0x20)
        LeaveCriticalSection(&arg1[4])
    
    arg1[0xa].b = 1
rdi.b = rsi != 0

if (arg1 != -0x20)
    LeaveCriticalSection(&arg1[4])

return zx.q(rdi.b)
