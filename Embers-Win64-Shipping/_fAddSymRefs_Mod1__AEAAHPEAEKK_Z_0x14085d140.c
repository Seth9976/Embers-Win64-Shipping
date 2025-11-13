// 函数: ?fAddSymRefs@Mod1@@AEAAHPEAEKK@Z
// 地址: 0x14085d140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* rax_2 = *(arg2 + 0x10)
int32_t rcx = *(arg2 + 0x24)
int64_t rbx = 0
void* rdi = arg2
int32_t rsi = rax_2[1].d
int32_t r12_1 = rsi - rcx
void* const r15

if ((*(arg1 + 0xd68) & 8) == 0 || rsi != 1)
    r15 = nullptr
else
    r15 = **rax_2

arg2.b = 1
sub_1407e7150(*(rdi + 0x18), arg2.b)
sub_1407e68d0(*(rdi + 0x18), rsi, 1)
*(*(*(rdi + 0x18) + 0xa0) + 0xb0) = rsi
uint64_t result

if (sub_14085d8d0(arg1 + 0x450, r15) != 0)
    sub_14084a050(arg1 + 0x450, 0, *(rdi + 0x18), r12_1, 0)
    sub_14084a050(arg1 + 0x450, 1, arg1 + 0x2b0, r12_1, 0)
    int64_t var_90_1 = 0
    int32_t var_88_1 = 0
    int32_t var_84_1 = 0xc
    int64_t var_50_1 = 0
    int32_t var_48_1 = 0
    int32_t var_44_1 = 0xc
    void* rax_11 = ***(rdi + 0x10)
    void var_f0
    sub_14084a2f0(arg1, (((zx.q(*(rax_11 + 0x660)) & 1) + 0x21) << 4) + rax_11, arg1 + 0x450, 
        &var_f0)
    sub_14084f100(arg1 + 0x450, rcx, &var_f0)
    
    if (data_143ce42c4 != 0 || *(*(rdi + 8) + 0x31) != 0)
        int64_t var_108 = 0
        int32_t var_100_1 = 0
        sub_1405947f0(&var_108, 0x1c)
        int32_t rax_13 = var_100_1 + 0x1c
        var_100_1 = rax_13
        
        if (rax_13 s> 0)
            sub_140594770(&var_108)
        
        UnDecorator::getReferenceType(var_108, u"System Dataset - Post Spawn", 0x38)
        sub_1407ebce0(*(*(rdi + 0x18) + 0xa0), 0, rsi)
        int64_t rcx_17 = var_108
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        var_108 = 0
        int32_t var_100_2 = 0
        sub_1405947f0(&var_108, 0x1e)
        int32_t rax_14 = var_100_2 + 0x1e
        var_100_2 = rax_14
        
        if (rax_14 s> 0)
            sub_140594770(&var_108)
        
        UnDecorator::getReferenceType(var_108, u"Spawn Instance Parameter Data", 0x3c)
        sub_1407ebce0(*(arg1 + 0x348), 0, rsi)
        int64_t rcx_22 = var_108
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
    
    result = sub_1407ecfd0(*(rdi + 0x18), 1)
    
    if (var_50_1 != 0)
        result = sub_140a74f90(var_50_1)
    
    if (var_90_1 != 0)
        result = sub_140a74f90(var_90_1)
else
    int64_t* rax_6 = *(rdi + 0x10)
    int64_t* rcx_5 = *rax_6
    uint64_t rdx_3 = sx.q(rax_6[1].d) << 3 u>> 3
    
    if (rcx_5 u> &rcx_5[rax_6[1]])
        rdx_3 = 0
    
    if (rdx_3 != 0)
        do
            void* rax_9 = *rcx_5
            
            if (*(rax_9 + 0x6e8) != 4)
                *(rax_9 + 0x6e8) = 4
            
            rcx_5 = &rcx_5[1]
            rbx += 1
        while (rbx != rdx_3)
    
    rdx_3.b = 1
    result = sub_1407ecfd0(*(rdi + 0x18), rdx_3.b)

__security_check_cookie(rax_1 ^ &var_138)
return result
