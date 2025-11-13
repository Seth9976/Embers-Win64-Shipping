// 函数: sub_1408f3070
// 地址: 0x1408f3070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi
uint64_t var_18 = rdi
EnterCriticalSection(&arg1[4])

if ((*(*arg1 + 0x28))(arg1) != 0)
    (*(*arg1 + 0x10))(arg1)

int32_t rdx_1 = 0
int32_t rcx_3 = 0
arg1[3].d
arg1[3].d = 1
int32_t var_60 = 0
int32_t var_5c = 0
int64_t var_68 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg2[rdi_1] != 0)
    
    rdi = zx.q(rdi_1.d + 1)
    
    if (rdi.d s> 0)
        sub_1405947f0(&var_68, rdi.d)
        rcx_3 = var_5c
        rdx_1 = var_60
    
    int32_t rax_4 = rdx_1 + rdi.d
    int32_t var_60_1 = rax_4
    
    if (rax_4 s> rcx_3)
        sub_140594770(&var_68)
    
    UnDecorator::getReferenceType(var_68, arg2, rdi.d * 2)

int64_t var_78 = 0
int32_t var_70 = 0
sub_1405947f0(&var_78, 0x25)
int32_t rax_5 = var_70 + 0x25
var_70 = rax_5

if (rax_5 s> 0)
    sub_140594770(&var_78)

UnDecorator::getReferenceType(var_78, u"FBackChannelConnection Client Socket", 0x4a)
void arg_8
int32_t arg_10 = *sub_140b5e500(&arg_8, 0x119)
int32_t arg_14 = 0
void arg_20
int64_t* rax_8 = sub_140fc6160(sub_140b58260(&arg_20, u"WINDOWS", 1))
int64_t* rax_9
int64_t rdx_5
rax_9, rdx_5 = (*(*rax_8 + 0x28))(rax_8, &arg_10, &var_78, 0)
int64_t rcx_15 = var_78

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

if (rax_9 != 0)
    int64_t r8_4 = *rax_9
    rdx_5.b = 1
    (*(r8_4 + 0x98))(rax_9, rdx_5, r8_4)
    sub_1408f3a10(arg1.b, rax_9, data_1439866e0, data_1439866e4)
    int32_t arg_18
    char rax_10 = sub_140fcbc40(&var_68, &arg_18)
    char rax_15
    
    if (rax_10 != 0)
        int64_t* rcx_19 = data_143e2b898
        int64_t* var_58
        (*(*rcx_19 + 0x90))(rcx_19, &var_58)
        int64_t* rcx_20 = var_58
        (*(*rcx_20 + 0x18))(rcx_20, zx.q(arg_18))
        int64_t* rcx_21 = var_58
        (*(*rcx_21 + 0x28))(rcx_21, zx.q(arg3))
        rax_15 = (*(*rax_9 + 0x20))(rax_9, var_58)
        uint64_t var_50
        
        if (var_50 != 0)
            int32_t temp1_1 = *(var_50 + 8)
            *(var_50 + 8) -= 1
            
            if (temp1_1 == 1)
                int64_t rdx_12 = *var_50
                (*rdx_12)(var_50, rdx_12)
                int32_t temp2_1 = *(var_50 + 0xc)
                *(var_50 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_50 + 8))(var_50, 1)
    
    int32_t rax_20
    
    if (rax_10 == 0 || rax_15 == 0)
        void var_88
        int64_t* rax_18 = sub_140fc6160(sub_140b58260(&var_88, u"WINDOWS", 1))
        int64_t rdx_13 = *rax_18
        rax_20 = (*(rdx_13 + 0xb8))(rax_18, rdx_13) - 7
    
    if ((rax_10 == 0 || rax_15 == 0) && rax_20 u> 1)
        int16_t* var_48
        sub_140a2e390(&var_48, u"Failed to open connection to %s.", arg2)
        int16_t* const rdx_14 = &data_142d40450
        int32_t var_40
        
        if (var_40 != 0)
            rdx_14 = var_48
        
        sub_1408f2f00(arg1, rdx_14, rax_9)
        int16_t* rcx_32 = var_48
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
        
        void var_80
        int64_t* rax_22 = sub_140fc6160(sub_140b58260(&var_80, u"WINDOWS", 1))
        int64_t r8_8 = *rax_22
        (*(r8_8 + 0x38))(rax_22, rax_9, r8_8)
    else
        EnterCriticalSection(&arg1[4])
        arg1[9] = rax_9
        
        if (arg1 != -0x20)
            LeaveCriticalSection(&arg1[4])

int64_t rcx_36 = var_68
rdi.b = arg1[9] != 0

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

if (arg1 != -0x20)
    LeaveCriticalSection(&arg1[4])

return zx.q(rdi.b)
